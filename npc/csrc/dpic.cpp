#include <iostream>
#include <verilated_vcd_c.h>
#include <verilated.h>
#include "Vysyx_top.h"
#include <Vysyx_top__Dpi.h>
#include "verilated_dpi.h"


uint64_t* cpu_gpr;  //存储寄存器的值
uint64_t cpu_pc;    //当前的pc值

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {  //得到寄存器的值
    cpu_gpr = (uint64_t*)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void get_pc(long long pc) {
    cpu_pc = pc;
}

