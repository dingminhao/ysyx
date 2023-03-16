/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <string.h>
#include <ctype.h>
#include <memory/paddr.h>
uint64_t eval(uint64_t p, uint64_t q);
bool check_parentheses(uint64_t a, uint64_t b);
uint64_t c_main(uint64_t a, uint64_t b);
uint64_t Opr_pri(uint64_t a);

enum {
  TK_NOTYPE = 256, TK_Plus, TK_Sub,
  TK_Mul, TK_Div,TK_EQ, TK_NEQ,
  TK_Num, TK_HNum, TK_RNum, TK_LK, TK_RK, TK_Neg, 
  TK_Point, TK_AND
};

static struct rule {
  const char *regex;  // 正则表达式
  int token_type;    // 类型
} rules[] = {
  {" +", TK_NOTYPE},    // spaces  
  {"\\+", TK_Plus},     // plus      
  {"-", TK_Sub},        // subtract
  {"\\*", TK_Mul},      // Multiply
  {"\\/", TK_Div},        // Divide
  {"==", TK_EQ},     
  {"!=", TK_NEQ},
  {"(0x[0-9a-fA-F]+)", TK_HNum},
  {"(\\$[0-9]+)", TK_RNum},
  {"([0-9]+)", TK_Num},
  {"\\(", TK_LK},
  {"\\)", TK_RK},
  {"&&", TK_AND}
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32]; // 记录子串得到数字
} Token;


static Token Tokens[32] __attribute__((used)) = {}; // 按顺序存放已经被识别的token信息
static int nr_token __attribute__((used))  = 0;


static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;   // 结构体 包含 rm_so 匹配字符串的初始位置 rm_eo 匹配字符串的末尾位置

  nr_token = 0;

  while (e[position] != '\0') { // 字符读完为跳出表达式的条件
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) { // 表示匹配成功
        char *substr_start = e + position; // 创建字符指针
        uint32_t substr_len = pmatch.rm_eo;  
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len; // 将初始位置往后移动 从而实现 regexec 又可以等于0
        if(rules[i].token_type == TK_NOTYPE) break;
        // 提取对应的值
        Assert(substr_len > 0 && substr_len < 32, "Input Range Error");
        strncpy(Tokens[nr_token].str, substr_start, substr_len);
        Tokens[nr_token].str[substr_len] = '\0';
        Tokens[nr_token].type = rules[i].token_type;
        nr_token += 1;
        break;
      }
    }
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
      return true;
}



uint64_t eval(uint64_t p, uint64_t q) {
  if(p > q) Assert(0, "Bad expression");
  else if(p == q) {
    if(Tokens[p].type == TK_Num || Tokens[p].type == TK_RNum || Tokens[p].type == TK_HNum) return strtoul(Tokens[p].str, NULL, 10);
    else Assert(0, "This char is not Number!");} 
  else if(check_parentheses(p, q) == true) return eval(p + 1, q - 1);
  else {
  uint64_t op =  c_main(p, q);
  if(Tokens[op].type == TK_Neg) return -1*eval(op+1,q);
  else if(Tokens[op].type == TK_Point) {uint64_t num = paddr_read(eval(op + 1,q), sizeof(uint32_t)); return num;}
  uint64_t val1 = eval(p, op - 1);
  uint64_t val2 = eval(op + 1, q);
  switch (Tokens[op].type) {
    case TK_Plus : return val1 + val2; break;
    case TK_Sub : return val1 - val2; break;
    case TK_Mul : return val1 * val2; break;
    case TK_Div : Assert(val2 != 0, "The dividend cannot be 0!"); return val1 / val2; break;
    case TK_EQ : return val1 == val2; break;
    case TK_NEQ : return val1 != val2; break;
    case TK_AND : return val1 && val2; break;
    default: Assert(0, "eval(p ,q) Operation is Error!"); break;
    }
  } 
}


bool check_parentheses(uint64_t a, uint64_t b) {
  if(strcmp(Tokens[a].str, "(") != 0 || strcmp(Tokens[b].str, ")") != 0) return false;
  int flag = 0;
  uint64_t i;
  for(i = a; i <= b; i++){  // 
    if(strcmp(Tokens[i].str, "(") == 0) ++flag;
    if(strcmp(Tokens[i].str, ")") == 0) --flag;
    if(flag<0) return false;
    if(flag == 0 && i != b) return false;
  }
  if(flag != 0) return false;
  return true;
}


uint64_t c_main(uint64_t a, uint64_t b) {
  int flag = 0;
  uint64_t c_place = b + 1;
  uint64_t ch = 0;
  uint64_t i;
  for(i = b; i >= a; i--) {
    if(strcmp(Tokens[i].str, "(") == 0) --flag;
    if(strcmp(Tokens[i].str, ")") == 0) ++flag;
    if(flag == 0 && (Tokens[i].type == TK_Plus || Tokens[i].type == TK_Mul || Tokens[i].type == TK_Div || Tokens[i].type == TK_Sub || Tokens[i].type == TK_Neg || Tokens[i].type == TK_Point || Tokens[i].type == TK_EQ || Tokens[i].type == TK_NEQ || Tokens[i].type == TK_AND)) {
        if(ch == 0) {ch = Tokens[i].type; c_place= i;} //赋初值用于比较
        if(Opr_pri(Tokens[i].type) > Opr_pri(ch)) {ch = Tokens[i].type; c_place = i;}//比较优先级大小进行赋值
      }
    if(i == 0) break; //特殊判断
  }
  Assert(flag != b,"c_main is Wrong");
  Assert(c_place <= b, "c_main is Wrong");
  return c_place;
}


uint64_t Opr_pri(uint64_t a){
    uint64_t pri = 0;
    switch (a) {
      case TK_Plus : pri = 4; break;
      case TK_Sub : pri = 4; break;
      case TK_Div : pri = 3; break;
      case TK_Mul : pri = 3; break;
      case TK_Neg : pri = 2; break;
      case TK_Point : pri = 2; break;
      case TK_EQ : pri = 7; break;
      case TK_NEQ : pri = 7; break;
      default: Log("This char is not an Operation"); break;
    }
    return pri;
  }


bool Is_Leg(int p, int q) {
  int flag = 0;
  for(int i = p; i < q; i++){
    if(Tokens[i].type == TK_LK) flag++;
    else if (Tokens[i].type == TK_RK) flag--;
    if(flag < 0) return false;
  }
  if(flag != 0) return false;
  return true;
}


void Str_dtox(char *d) { //十进制转化为十六进制
  Assert(d != NULL, "Str_dtox is empty!");
  char str[32] = {};
  uint32_t num = strtoul(d, NULL, 10);
  sprintf(str, "0x%08x", num);
  strcpy(d, str);
}

void Str_xtod(char *x) {   //例如0x80000000
  Assert(x != NULL, "Str_xtod is empty");
  char str[32] = {};
  uint32_t num = strtoul(x, NULL, 16);
  sprintf(str, "%d", num);
  strcpy(x, str);
}



word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
// 判断是否是减号以及指针
  for(int i = 0; i < nr_token; i++) {
    if(Tokens[i].type == TK_Mul && (i == 0 || (Tokens[i - 1].type != TK_Num  && Tokens[i - 1].type != TK_RK))) {
      Tokens[i].type = TK_Point;
    }
    if(Tokens[i].type == TK_Sub && (i == 0 || (Tokens[i - 1].type != TK_Num && Tokens[i - 1].type != TK_RK))) {
      Tokens[i].type = TK_Neg;
    }
  }
  
  //对十六进制以及寄存器进行特殊处理，先将他们转化为10进制
   for(int i = 0; i < nr_token; i++) {
    if(Tokens[i].type == TK_HNum) Str_xtod(Tokens[i].str);
    if(Tokens[i].type == TK_RNum) { // 将寄存器类型转化为10进制
      bool success = true;
      char Str[32];
      uint32_t reg = isa_reg_str2val(Tokens[i].str, &success);
      sprintf(Str, "%d", reg);
      strcpy(Tokens[i].str, Str);
    }
    if(!success) Assert(0, "RNum convert is Wrong!");
  }

  uint64_t p = 0;
  uint64_t q = nr_token;
  if(Is_Leg(p, q - 1) != true) {printf("Input expr is Wrong!"); return -1;}
  Assert(p>=0 && q>=0,"expr Error");
  return eval(p, q - 1);
}






