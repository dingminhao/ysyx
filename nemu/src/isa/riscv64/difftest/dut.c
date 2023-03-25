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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool ret = true;
  for(int i = 0; i < 32; i++) {
    if(ref_r->gpr[i] != cpu.gpr[i]){
      printf( "isa_difftest_checkregs\n");
      ret = false;
    }
  }
  if (ref_r->pc != cpu.pc) {
    printf("PC Error\n");
    ret = false;
  }
  if (ref_r->pc == 0 || cpu.pc == 0) printf("ref_r->pc = 0\n");
  if(ret == false) {
    printf("---------------------------dut------------------------------\n");
    for (size_t i = 0; i < 16; i++) {
      printf("%s:%016lx\t\t%s:%016lx\n", reg_name(i, 64), cpu.gpr[i], reg_name(i + 16, 64), cpu.gpr[i + 16]);
    }
    printf("---------------------------ref------------------------------\n");
    printf("\tpc:%016lx\n", cpu.pc);
    for (size_t i = 0; i < 16; i++) {
      printf("%s:%016lx\t\t%s:%016lx\n", reg_name(i, 64), ref_r->gpr[i], reg_name(i + 16, 64), ref_r->gpr[i + 16]);
    }
    printf("\tpc:%016lx\n", ref_r->pc);
  }
  return ret;
}

void isa_difftest_attach() {
}
