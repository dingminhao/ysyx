// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/writeback.v:30:32
    extern void inst_commit(long long pc, int inst, svBit commit_valid);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/ram_arb.v:35:32
    extern void pmem_read(int raddr, long long* rdata, char rmask);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/ram_arb.v:41:32
    extern void pmem_write(int waddr, long long wdata, char wmask);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/rv64_gpr_regfile.v:38:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/memory.v:171:32
    extern void set_mem_pc(long long mem_pc);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/memory.v:163:32
    extern void set_nextpc(long long nextpc);

#ifdef __cplusplus
}
#endif
