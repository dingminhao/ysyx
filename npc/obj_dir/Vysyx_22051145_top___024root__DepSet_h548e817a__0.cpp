// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051145_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22051145_top__Syms.h"
#include "Vysyx_22051145_top__Syms.h"
#include "Vysyx_22051145_top___024root.h"

extern "C" void set_nextpc(long long nextpc);

VL_INLINE_OPT void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT__set_nextpc_TOP(QData/*63:0*/ nextpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT__set_nextpc_TOP\n"); );
    // Body
    long long nextpc__Vcvt;
    for (size_t nextpc__Vidx = 0; nextpc__Vidx < 1; ++nextpc__Vidx) nextpc__Vcvt = nextpc;
    set_nextpc(nextpc__Vcvt);
}

extern "C" void set_mem_pc(long long mem_pc);

VL_INLINE_OPT void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT__set_mem_pc_TOP(QData/*63:0*/ mem_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT__set_mem_pc_TOP\n"); );
    // Body
    long long mem_pc__Vcvt;
    for (size_t mem_pc__Vidx = 0; mem_pc__Vidx < 1; ++mem_pc__Vidx) mem_pc__Vcvt = mem_pc;
    set_mem_pc(mem_pc__Vcvt);
}

extern "C" void inst_commit(long long pc, int inst, svBit commit_valid);

VL_INLINE_OPT void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_wb__DOT__inst_commit_TOP(QData/*63:0*/ pc, IData/*31:0*/ inst, CData/*0:0*/ commit_valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_wb__DOT__inst_commit_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    svBit commit_valid__Vcvt;
    for (size_t commit_valid__Vidx = 0; commit_valid__Vidx < 1; ++commit_valid__Vidx) commit_valid__Vcvt = commit_valid;
    inst_commit(pc__Vcvt, inst__Vcvt, commit_valid__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void pmem_read(int raddr, long long* rdata, char rmask);

VL_INLINE_OPT void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rmask__Vcvt;
    for (size_t rmask__Vidx = 0; rmask__Vidx < 1; ++rmask__Vidx) rmask__Vcvt = rmask;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, rmask__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(int waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___dump_triggers__ico(Vysyx_22051145_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_22051145_top___024root___eval_triggers__ico(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_22051145_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___dump_triggers__act(Vysyx_22051145_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_22051145_top___024root___eval_triggers__act(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_22051145_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
