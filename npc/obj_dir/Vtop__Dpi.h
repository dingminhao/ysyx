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
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/fetch.v:23:32
    extern void pmem_inst_read(long long raddr, long long* rdata, char rmask);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/memory.v:121:32
    extern void pmem_read(long long pc, long long raddr, long long* rdata, char rmask);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/memory.v:127:32
    extern void pmem_write(long long pc, long long waddr, long long wdata, char wmask);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/rv64_gpr_regfile.v:38:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/core/memory.v:148:32
    extern void set_nextpc(long long nextpc);

#ifdef __cplusplus
}
#endif
