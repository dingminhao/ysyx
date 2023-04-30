#include <iostream>
#include <verilated_vcd_c.h>
#include <verilated.h>
#include <Vtop.h>
#include "verilated_dpi.h"
#include "simtop.h"
#include "simconf.h"

extern Simtop* mysim_p;
/* 为什么第一条指令要特殊处理，不特殊处理会怎么样？

*/
extern "C" void set_nextpc(long long nextpc) {
    static bool isfirst_inst = true;
    if (nextpc == 0) {
        return;
    }
    // 第一条指令特殊处理
    else if (isfirst_inst) {
        printf("isfirst_inst\n");
        isfirst_inst = false;
        return;
    }
    mysim_p->commited_list.nextpc.push_back(nextpc);
}
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
    mysim_p->setGPRregs((uint64_t*)(((VerilatedDpiOpenVar*)r)->datap()));
}

extern "C" void inst_commit(long long pc, int inst, svBit commit_valid) {
    if (commit_valid == 0) {
        return;
    }
    mysim_p->addCommitedInst(pc, inst);
#ifdef MTRACH
    printf("commit:%p\n", (void*)pc);
#endif
    //printf("pc:%p,commit:%d\n", (void*)pc, commit_valid);
}

extern "C" void pmem_inst_read(long long raddr, long long* rdata, char rmask) {
    // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    if (rmask == 0) {
        return;
    }
#ifdef MTRACH
    printf("pmem_inst_read:%llx,", raddr);
#endif
    * rdata = mysim_p->mem->paddr_read(raddr, 8);
#ifdef MTRACH
    printf("data:%llx\n", *rdata);
#endif
};


extern "C" void pmem_read(long long pc, long long raddr, long long* rdata, char rmask) {
    // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    if (raddr < 20 || rmask == 0) {
        return;
    }
    mysim_p->mem_pc = pc; // 记录访存指令的 PC
#ifdef MTRACH
    printf("pmem_read:%llx,", raddr);
#endif
    * rdata = mysim_p->mem->paddr_read(raddr, 8);
#ifdef MTRACH
    printf("data:%llx\n", *rdata);
#endif
};
extern "C" void pmem_write(long long pc, long long waddr, long long wdata, char wmask) {
    // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
    // `wmask`中每比特表示`wdata`中1个字节的掩码,
    // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    /* 隐式格式转换很坑 */
    uint32_t temp = (uint8_t)wmask;
    if (wmask == 0) {
        return;
    }
    //printf("pmem_write:%llx,data:%llx\n", waddr, wdata);
#ifdef MTRACH
    printf("pmem_write:%llx,data:%llx\n", waddr, wdata);
#endif
    mysim_p->mem_pc = pc; // 记录访存指令的 PC
    switch (temp) {
    case 1:   mysim_p->mem->paddr_write(waddr, 1, wdata); break; // 0000_0001, 1byte.
    case 3:   mysim_p->mem->paddr_write(waddr, 2, wdata); break; // 0000_0011, 2byte.
    case 15:  mysim_p->mem->paddr_write(waddr, 4, wdata); break; // 0000_1111, 4byte.
    case 255: mysim_p->mem->paddr_write(waddr, 8, wdata);  break; // 1111_1111, 8byte.
    default:  break;
    }
}


