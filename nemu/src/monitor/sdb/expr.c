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

uint32_t eval(uint32_t p, uint32_t q);
bool check_parentheses(uint32_t a, uint32_t b);
uint32_t c_main(uint32_t a, uint32_t b);
uint32_t Opr_pri(char a);

enum {
  TK_NOTYPE = 256, TK_EQ, TK_Plus,      //定义类型
  TK_Sub, TK_Mul, TK_Div, TK_Num, TK_LK,
  TK_RK, TK_Neg, TK_Point
};

static struct rule {
  const char *regex;  // 正则表达式
  int token_type;    // 类型
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +", TK_NOTYPE},    // spaces  
  {"\\+", TK_Plus},     // plus
  {"==", TK_EQ},        // equal
  {"-", TK_Sub},        // subtract
  {"\\*", TK_Mul},      // Multiply
  {"/", TK_Div},        // Divide
  {"\\b[0-9]+\\b", TK_Num},       // Number   这个是字符串匹配所以！！！！！！！！！！
  {"\\(", TK_LK},
  {"\\)", TK_RK}

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
        //Assert(substr_len > 0 && substr_len < 32, "Input Range Error");
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



uint32_t eval(uint32_t p, uint32_t q) {
  if(p > q) Assert(0, "Bad expression");
  else if(p == q) {
    if(isdigit(Tokens[p].str[0])) return atoi(Tokens[p].str);
    else Assert(0, "This char is not Number!");} 
  else if(check_parentheses(p, q) == true) return eval(p + 1, q - 1);
  else {
  uint32_t op =  c_main(p, q);
  uint32_t val1 = eval(p, op - 1);
  uint32_t val2 = eval(op + 1, q);
  switch (Tokens[op].str[0]) {
    case '+' : return val1 + val2; break;
    case '-' : return val1 - val2; break;
    case '*' : return val1 * val2; break;
    case '/' : Assert(val2 != 0, "The dividend cannot be 0!"); return val1 / val2; break;
    default: Assert(0, "eval(p ,q) Operation is Error!");
    }
  } 
}


bool check_parentheses(uint32_t a, uint32_t b) {
  if(strcmp(Tokens[a].str, "(") != 0 || strcmp(Tokens[b].str, ")") != 0) return false;
  int flag = 0;
  uint32_t i;
  for(i = a; i <= b; i++){  // 
    if(strcmp(Tokens[i].str, "(") == 0) ++flag;
    if(strcmp(Tokens[i].str, ")") == 0) --flag;
    if(flag<0) return false;
    if(flag == 0 && i != b) return false;
  }
  if(flag != 0) return false;
  return true;
}

uint32_t c_main(uint32_t a, uint32_t b) {
  int flag = 0;
  uint32_t c_place = b + 1;
  char ch = '\0';
  uint32_t i;
  for(i = b; i >= a; i--) {
    if(strcmp(Tokens[i].str, "(") == 0) --flag;
    if(strcmp(Tokens[i].str, ")") == 0) ++flag;
    if(flag == 0 && (strcmp(Tokens[i].str, "+") == 0 || strcmp(Tokens[i].str, "-") == 0 || strcmp(Tokens[i].str, "*") == 0 || strcmp(Tokens[i].str, "/") == 0)) {
        if(ch == '\0') {ch = Tokens[i].str[0]; c_place= i;}
        if(Opr_pri(Tokens[i].str[0]) < Opr_pri(ch)) {ch = Tokens[i].str[0]; c_place = i;}//比较优先级大小进行赋值
      }
    if(i == 0) break; //特殊判断
  }
  Assert(flag != b,"c_main is Wrong");
  Assert(c_place <= b, "c_main is Wrong");
  return c_place;
}
uint32_t Opr_pri(char a){
    uint32_t pri = 0;
    switch (a) {
      case '+' : pri = 0; break;
      case '-' : pri = 0; break;
      case '/' : pri = 1; break;
      case '*' : pri = 1; break;
    default: Log("This char is not an Operation");
    }
    return pri;
  }

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  uint32_t p = 0;
  uint32_t q = nr_token;
  Assert(p>=0 && q>=0,"expr Error");
  return eval(p, q - 1);
}


