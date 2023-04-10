#include <common.h>
#include "syscall.h"
#include <sys/time.h>
#include "fs.h"
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

    case SYS_open :
    #ifdef strace
    printf("SYS_open a1:%d,\ta2:%d,\ta3:%d\n", a[1], a[2], a[3]);
    #endif
    c->GPRx = fs_open((const char *)a[1], a[2], a[3]);
    break;

    // write调用
    case SYS_write :
    #ifdef strace
    printf("SYS_write a1:%d,\ta2:%p,\ta3:%d\n", a[1], (void *)a[2], a[3]);
    #endif
    c->GPRx = fs_write(a[1], (void *)a[2], a[3]);
    break;

    case SYS_read :
    #ifdef strace
    printf("SYS_read a1:%d,\ta2:%p,\ta3:%d\n", a[1], (void *)a[2], a[3]);
    #endif
    c->GPRx = fs_read(a[1], (void *)a[2], a[3]);
    break;

    case SYS_close :
    #ifdef strace
    printf("SYS_close a1:%d,\ta2:%d,\ta3:%d\n", a[1], a[2], a[3]);
    #endif
    c->GPRx = fs_close(a[1]);
    break;

    case SYS_lseek :
    #ifdef strace
    printf("SYS_lseek a1:%d,\ta2:%d,\ta3:%d\n", a[1], a[2], a[3]);
    #endif
    c->GPRx = fs_lseek(a[1], a[2], a[3]);
    break;

    case SYS_gettimeofday :
    #ifdef strace
    printf("SYS_gettimeofday a1:%d,\ta2:%d,\ta3:%d\n", a[1], a[2], a[3]);
    #endif
    struct timeval* tv = (struct timeval*)a[1];
    uint64_t us = io_read(AM_TIMER_UPTIME).us;
    tv->tv_sec = us / 1000000;
    tv->tv_usec = us % 1000000;
    c->GPRx = 0;
    break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
