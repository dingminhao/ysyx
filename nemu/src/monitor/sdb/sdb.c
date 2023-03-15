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
#include <memory/paddr.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);        //將命令督導歷史記錄中
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

// 添加指令 step info

static int step(char *args);
// 打印info
static int info(char *args);
// 掃描內存
static int scan(char *args);
// 表达式计算
static int Calcu(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);   //創建函數指針 返回值爲int 輸入爲char*
} cmd_table [] = {  //命令
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Step [nums]", step},
  { "info", "Reg Display", info},
  { "x", "Scan Memory", scan},
  { "p", "Calculate EXPR", Calcu}
  /* TODO: Add more commands */

};

static int Calcu(char *args) {
  char * arg = args;
  bool success = true; //判断是否匹配成功
  if(arg == NULL){ 
    printf("arg Input Error");
    return 0;
  }
  int Cal_val = expr(arg, &success);
  printf("%s=%d \n", arg, Cal_val);

  if(!success) printf("Match Error");
  return 0;
}

static int step(char *args) {
	char *arg = strtok(NULL, " ");	
	if(args == NULL) cpu_exec(1); 
	else if(atoi(arg) > 0 && atoi(arg) < 100)cpu_exec(atoi(arg));   //显示用BUG?
  else printf("Unknow command '%s'", arg);
  return 0;
}

static int info(char *args) {
  char *arg = strtok(NULL, " "); 
  if(strcmp(arg, "r") == 0) isa_reg_display();
  else printf("Unknown command '%s'", arg);
  return 0;
}

static int scan(char *args) {
	char *arg = strtok(NULL, " ");
	if(arg == NULL) {
    printf("Parameter is few, Please print again!");
    return 0;
  }
	uint32_t number = atoi(arg); // 掃描的個數
	arg = strtok(NULL, " ");
	if(arg == NULL) {
    printf("Parameter is few, Please print again!");
    return 0;
  }
  paddr_t init_address = strtoul(arg, NULL, 16); //将字符串转化为16进制的数
	for(int i = 0; i < number; i++){
    uint32_t data = paddr_read(init_address + i * sizeof(uint32_t), sizeof(uint32_t));
	  printf("0x%08x\t", init_address + i * 4);                  
      for(int j = 0; j < 4; j++) {
        printf("0x%02x ", data & 0xff);
        data = data >> 8;
    }
    printf("\n");
	}
	return 0;
}

#define NR_CMD ARRLEN(cmd_table)   // 命令的總長度

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");     //將arg分割
  int i;
  printf("%s", arg);
  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) { // 打印所有存在的命令
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) { // 打印目標命令
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() { 
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {//讀取命令
    char *str_end = str + strlen(str);// 尾指針

    /* extract the first token as the command */
    char *cmd = strtok(str, " "); // 例如help
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;// 得到命令空格後的指令 例如： help a 輸出 a
    if (args >= str_end) {
      args = NULL;
    }
#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {// 找到與輸入匹配的命令
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }// 當爲q命令是退出
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
