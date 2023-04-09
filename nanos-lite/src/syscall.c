#include <common.h>
#include "syscall.h"

//#define strace
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;  //?????????
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //printf("GPR1:%d, GPR2:%d, GPR3:%d, GPR4:%d\n", a[0], a[1], a[2], a[3]);
  switch (a[0]) {
    // yield 生成指令
    case SYS_yield :
    #ifdef strace
      printf("SYS_yield\n");
    #endif
    yield(); c->GPRx = 0; 
    break;


    // 退出系统调用
    case SYS_exit :
    #ifdef strace
      printf("SYS_exit!\n");
    #endif
    halt(c->GPRx);
    break;

    case SYS_brk :
    #ifdef strace
      printf("SYS_brk!\n");
    #endif
    c->GPRx = 0; 
    break;

    // write调用
    case SYS_write :
    #ifdef strace
      printf("SYS_write!\n");
    #endif
    if(a[1] == 1 || a[1] == 2) { //如果fd是1或2(分别代表stdout和stderr), 则将buf为首地址的len字节输出到串口(使用putch()即可). 
      int len = a[3];
      while(len--) {
        putch(*(char *)a[2]++);
      }
    }
    c->GPRx = a[3];
    break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
