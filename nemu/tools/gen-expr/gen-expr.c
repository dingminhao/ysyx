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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
#define Buf_size 65535
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf
static int buf_end_pos = 0;
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

void gen(char c) {
  if (buf_end_pos <  Buf_size - 1) {
    buf[buf_end_pos] = c;
    ++buf_end_pos;
    buf[buf_end_pos] = '\0';
  } else {
    printf("gen Error");
  }
}


uint32_t choose(int range) {
  assert(range > 1);
  return rand()%(++range);
}

void gen_num() {
  if(rand() % 2) gen(' ');
  uint32_t random_number = rand()%10;
  char num_char[32];
  int i = 0;
  if(random_number == 0) {
    if(buf[buf_end_pos - 1] == '/') gen('1');
    else gen('0');
  } else {
    while (random_number) {
      num_char[i++] = random_number%10 + 48;  // 为了变成符号类型
      random_number /= 10;
    }
  }
  if(i < 32) {
    num_char[i] = '\0';
  }
  i--;

  while(i >= 0) {
  gen(num_char[i]);
  i--;
  }
}

void gen_rand_op() {
  if(rand() % 2) gen(' ');
  switch (choose(3)) {
      case 0: gen('+'); break;
      case 1: gen('-'); break;
      case 2: gen('*'); break;
      case 3: gen('/'); break;
    }
}

static void gen_rand_expr() {
  switch (choose(2)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0); //生成随机种子
  srand(seed);
  int loop = 1;  // 生成表达式数量
  if (argc > 1) { // 输入形式
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf_end_pos = 0;
    gen_rand_expr();
    sprintf(code_buf, code_format, buf); //

    FILE *fp = fopen("/tmp/.code.c", "w"); //写文件
    assert(fp != NULL);
    fputs(code_buf, fp); // 文件写入
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr"); // 生成结果
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int a = fscanf(fp, "%d", &result);
    pclose(fp);
    if(a == 0) assert(0);
    printf("%u %s\n", result, buf);
  }
  return 0;
}
