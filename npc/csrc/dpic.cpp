#include <iostream>
#include <verilated_vcd_c.h>
#include <verilated.h>
#include "Vysyx_top.h"
#include <Vysyx_top__Dpi.h>
#include "verilated_dpi.h"
#include "./include/sim_top.h"
#include "./include/simMem.h"

uint64_t* cpu_gpr;  //存储寄存器的值
uint64_t cpu_pc;    //当前的pc值
extern Sim_top* St;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {  //得到寄存器的值
    cpu_gpr = (uint64_t*)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void get_pc(long long pc) {
    cpu_pc = pc;
}

extern "C" void pmem_read(long long raddr, long long* rdata ) {
    if(raddr == 0) {
        return ;
    }
    *rdata = St->mem->paddr_read(raddr, 8);
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
    // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
    // `wmask`中每比特表示`wdata`中1个字节的掩码,
    // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    /* 隐式格式转换很坑 */
    uint32_t temp = (uint8_t)wmask;
    switch (temp) {
    case 1:   St->mem->paddr_write(waddr, 1, wdata); break; // 0000_0001, 1byte.
    case 3:   St->mem->paddr_write(waddr, 2, wdata); break; // 0000_0011, 2byte.
    case 15:  St->mem->paddr_write(waddr, 4, wdata); break; // 0000_1111, 4byte.
    case 255: St->mem->paddr_write(waddr, 8, wdata);  break; // 1111_1111, 8byte.
    default:  break;
    }
}