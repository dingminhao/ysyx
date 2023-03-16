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

#include "sdb.h"
#include <watchpoint.h>

static WP wp_pool[NR_WP] = {}; // 一个监视点池子  定义为static变量的作用是为了只在本文件中使用，不会出现重名的问题
static WP *head = NULL, *free_ = NULL; //head用于组织使用中的结构  free用于组织空闲时的结构


void init_wp_pool() { //初始化池子
  for (int i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i; //池子观察点的序号
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]); //将进程池连起来了 最后一个指向空
  }
  head = NULL; // 头为空
  free_ = wp_pool; // 空闲为池子
}


WP* new_wp() { 
  if(free_ == NULL) {
    Assert(0,"No_free_wp");
  }
  //取出空闲节点
  WP* new = free_;
  free_ = free_-> next;
  //将节点放在head上去
  new -> next = head;
  head = new;
  return new;
}


void free_up(WP *wp) {
  //现在head上面找是否存在这样一个节点
  Assert(wp != NULL, "This is not a wp!\n");
  WP *f = (WP *)malloc(sizeof(WP));
  WP *a = f;
  f -> next = head; 
  while (f -> next != wp) { 
    if(f == NULL) {
      printf("cant find this node\n");
      break;
    }
    f = f -> next;
  }
  // 将使用de节点扣下来
  f -> next = wp -> next;
  // 将节点放在free上面
  wp -> next = free_;
  free_ = wp;
  f = a;
  free(f);
}

bool update_wp() {
  bool change = false;
  WP *f = head;
  while(f != NULL) {
    bool Success = true;
    uint64_t ans = expr(f->EXPR, &Success);
    Assert(Success == true,"update_wp is wrong!\n");
    if(f->value != ans) {
      change = true;
      printf("%s:The old value %ld\n",f->EXPR, ans);
      printf("%s:The new value %ld\n", f->EXPR, ans);
      f->value = ans;
    }
  }
  return change;
}

void watch_points() {
  WP *f = head;
  while(f != NULL) {
    printf("NO:%d\tEXPR:%s\tvalue:%ld\n", f->NO, f->EXPR, f->value);
    f = f -> next;
  }
}

void delete_wp(int number) {
  WP *f = head;
  while(f != NULL) {
    if(f -> NO == number) {
      strcpy(f -> EXPR , "");
      f -> value = 0;
      free_up(f);
      printf("Success delete!\n");
      break;
    }
    f = f -> next;
  }
  if(f == NULL) printf("This ID is not existing!");
}
