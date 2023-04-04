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
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/fetch.v:15:32
    extern void get_pc(long long pc);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/fetch.v:11:32
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at /home/dmh/ysyx-workbench/npc/vsrc/Regfile.v:39:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
