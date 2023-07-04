// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051145_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22051145_top__Syms.h"
#include "Vysyx_22051145_top___024root.h"

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_static(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_initial__TOP(Vysyx_22051145_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_initial(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22051145_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_initial__TOP(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus = 0U;
    Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf);
}

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_final(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_triggers__stl(Vysyx_22051145_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___dump_triggers__stl(Vysyx_22051145_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_stl(Vysyx_22051145_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_settle(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_22051145_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_22051145_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/dmh/ysyx-workbench/npc/vsrc/top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_22051145_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___dump_triggers__stl(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read_TOP(IData/*31:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rmask);
void Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT__set_mem_pc_TOP(QData/*63:0*/ mem_pc);
extern const VlUnpacked<CData/*5:0*/, 64> Vysyx_22051145_top__ConstPool__TABLE_heb3b7188_0;
extern const VlUnpacked<CData/*5:0*/, 64> Vysyx_22051145_top__ConstPool__TABLE_h48ea8931_0;

VL_ATTR_COLD void Vysyx_22051145_top___024root___stl_sequent__TOP__0(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h41d5d026__0;
    VlWide<4>/*127:0*/ __Vtemp_h44dcaf61__0;
    VlWide<4>/*127:0*/ __Vtemp_h23c729f6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2ccb40a__0;
    VlWide<3>/*95:0*/ __Vtemp_hf219cbaf__0;
    VlWide<3>/*95:0*/ __Vtemp_h65bb365b__0;
    VlWide<3>/*95:0*/ __Vtemp_h1abda450__0;
    // Body
    if (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_ready) {
        Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_write_TOP(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_waddr, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_wdata, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_wmask));
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data 
        = ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
            ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___mem_data_mem_wb_q);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7fffeU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 1U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7fffdU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 1U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 2U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7fffbU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 2U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7fff7U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 4U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7ffefU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 4U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 5U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7ffdfU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 5U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7ffbfU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 7U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7ff7fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 7U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 8U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7feffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 8U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7fdffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0xaU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7fbffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0xaU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0xbU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7f7ffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0xbU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7efffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0xdU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7dfffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0xdU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0xeU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x7bfffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0xeU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x77fffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0x10U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x6ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0x10U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0x11U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x5ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0x11U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q 
                 >> 0x12U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus 
        = ((0x3ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0) 
              << 0x12U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en 
        = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q;
    if ((0x300U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en 
            = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q;
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en 
        = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en 
        = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en 
        = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en 
        = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en 
                = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q;
        }
        if ((0x341U != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
            if ((0x342U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
                vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en 
                    = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q;
            }
            if ((0x342U != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
                if ((0x343U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
                    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en 
                        = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q;
                }
                if ((0x343U != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
                    if ((0x305U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q))) {
                        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en 
                            = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o = 0U;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q)
            ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q
            : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o = 0U;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___unsigned 
        = ((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
           | ((4U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
              | (7U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___signed 
        = ((2U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
           | ((1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
              | ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                 | (6U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rdata = 0ULL;
    if ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx = 0U;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag = 0x400000U;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3 = 0U;
    } else {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx 
            = (0x1fU & (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q 
                                >> 4U)));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q 
                                    >> 9U)));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3 
            = (7U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q));
    }
    if (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o) 
         & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_if))) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o 
            = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_read_valid;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o) 
                  & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_if))))) {
        if (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o) 
             & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_mem))) {
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o 
                = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_read_valid;
        }
    }
    if (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_read_valid) {
        Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read_TOP(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_raddr, vlSelf->__Vtask_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read__5__rdata, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rmask));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rdata 
            = vlSelf->__Vtask_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read__5__rdata;
    }
    vlSelf->ysyx_22051145_top__DOT__mem_addr_mem = 
        ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))
          ? 0x80000000U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h06d92975__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed 
        = ((0x19U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | ((0x1dU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
              | ((0x1bU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                 | (0x1fU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0 
        = ((0x14U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | (0x15U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok) 
           & (1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_state)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hc2adbad0__0 
        = (IData)((0xfU == (0x1fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_h0abc0979__0 
        = ((0x1fU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | (0x20U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore 
        = ((8U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
           | ((0xbU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
              | ((9U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                 | (0xaU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll 
        = ((6U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | (9U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra 
        = ((8U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | (0xbU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl 
        = ((7U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | (0xaU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7fffeU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 1U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7fffdU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 1U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 2U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7fffbU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 2U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7fff7U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 4U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7ffefU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 4U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 5U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7ffdfU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 5U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7ffbfU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 7U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7ff7fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 7U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 8U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7feffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 8U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7fdffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0xaU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7fbffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0xaU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0xbU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7f7ffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0xbU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7efffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0xdU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7dfffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0xdU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0xeU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x7bfffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0xeU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x77fffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0x10U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x6ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0x10U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0x11U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x5ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0x11U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q 
                 >> 0x12U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
        = ((0x3ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0) 
              << 0x12U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h9544ad33__0 
        = (IData)((0x17U == (0x1fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h508df530__0 
        = (IData)((7U == (0x1fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte 
        = ((2U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
           | ((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
              | (9U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte 
        = ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
           | ((0xaU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
              | (7U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))));
    vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_rdata_ok) 
           & (1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_state)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h7035a01d__0 
        = ((1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
           | (4U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32 
        = ((9U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | ((0xbU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
              | (0xaU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h484ad146__0 
        = (IData)((0x1bU == (0x1fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0143d8e0__0 
        = (IData)((3U == (0x1fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCMP 
        = ((0xcU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | ((0x13U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
              | ((0xdU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                 | ((0xeU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                    | ((0xfU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                       | ((0x10U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                          | ((0x11U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                             | (0x12U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hee46d4cd__0 
        = (IData)((0x13U == (0x1fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_rs2 
        = ((0xbU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
           | ((0xaU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
              | (7U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_imm 
        = ((8U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
           | ((9U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
              | ((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                 | (6U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___pc_4 
        = ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
           | (4U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o = 0ULL;
    if (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o) 
         & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_if))) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o 
            = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rdata;
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o) 
                  & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_if))))) {
        if (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o) 
             & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_mem))) {
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o 
                = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rdata;
        }
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hc2adbad0__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32 
        = ((0x1dU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | ((0x1eU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
              | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_h0abc0979__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl));
    if (VL_UNLIKELY((0x20000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus))) {
        VL_FINISH_MT("/home/dmh/ysyx-workbench/npc/vsrc/core/clint.v", 132, "");
    }
    vlSelf->ysyx_22051145_top__DOT__pc_valid_clint 
        = (IData)((0U != (0x70000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc 
        = (IData)(((0U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h9544ad33__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui 
        = (IData)(((0x20U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h9544ad33__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h508df530__0)));
    vlSelf->ysyx_22051145_top__DOT__mem_write_valid_mem 
        = ((~ (IData)(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache)) 
           & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore));
    if (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore) 
         | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h7035a01d__0) 
            | ((6U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
               | ((2U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                  | ((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                     | ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                        | (7U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))))))))) {
        Vysyx_22051145_top___024root____Vdpiimwrap_ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT__set_mem_pc_TOP(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q);
    }
    vlSelf->ysyx_22051145_top__DOT__mem_addr_valid_mem 
        = ((~ (IData)(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache)) 
           & (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h7035a01d__0) 
               | ((6U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                  | ((2U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                     | ((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                        | ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                           | (7U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))))))) 
              | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h7035a01d__0) 
           | (8U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32 
        = (IData)(((0U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h484ad146__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32 
        = (IData)(((0x20U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h484ad146__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load 
        = (IData)(((0U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0143d8e0__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0143d8e0__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store 
        = (IData)(((0x20U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0143d8e0__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCMP));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm 
        = (IData)(((0U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hee46d4cd__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op 
        = (IData)(((0x20U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hee46d4cd__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hee46d4cd__0)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed 
        = (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_rs2))) 
            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q) 
           | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_imm))) 
               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q) 
              | (((- (QData)((IData)((0xcU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q))))) 
                  & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q) 
                 | ((4ULL & (- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___pc_4)))) 
                    | (0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                                   ((1U 
                                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                                                    | (2U 
                                                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))))) 
                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
        = (((- (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_rs2) 
                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_imm))))) 
            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q) 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___pc_4) 
                                  | (1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))))) 
              & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui));
    vlSelf->ysyx_22051145_top__DOT__mem_wdata_mem = 
        ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte)
          ? (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q))))
          : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte)
              ? (QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q))))
              : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte)
                  ? (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q))
                  : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q)));
    vlSelf->ysyx_22051145_top__DOT__mem_mask_mem = 
        (0xffU & ((1U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte)))) 
                  | ((3U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte)))) 
                     | ((0xfU & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte)))) 
                        | (- (IData)(((6U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
                                      | (0xbU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)))))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h5222d4b7__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h33ce3db6__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32) 
           & (0U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h7f89d5de__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h94800a04__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a47a976__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a438939__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0x1000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a0e4e0c__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0x2000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c33f7e4__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0x3000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460b92c8__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0x4000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460970ce__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a21b2bf__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0x6000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c7787b0__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           & (0x7000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrs 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system) 
           & (0x2000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h25bafa9b__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system) 
           & (0U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
              | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32) 
                 | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr) 
                    | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system)))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrsi 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system) 
           & (0x6000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrci 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system) 
           & (0x7000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)));
    if (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2 
            = (0x3fU & (0x1fU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
            = (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count 
            = (0x3fU & ((IData)(0x20U) + (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2)));
    } else {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2 
            = (0x3fU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
            = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count 
            = (0x3fU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2));
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b[0U] 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed) 
           ^ (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b[1U] 
        = ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed 
                    >> 0x20U)) ^ (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b[2U] 
        = (1U & ((1U & (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed 
                                >> 0x3fU))) ^ (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop)))));
    __Vtemp_h41d5d026__0[0U] = (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed);
    __Vtemp_h41d5d026__0[1U] = (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                                        >> 0x20U));
    __Vtemp_h41d5d026__0[2U] = (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0) 
                                 | ((0x16U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                    | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))) 
                                & (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                                           >> 0x3fU)));
    __Vtemp_h41d5d026__0[3U] = 0U;
    __Vtemp_h44dcaf61__0[0U] = (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed);
    __Vtemp_h44dcaf61__0[1U] = (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed 
                                        >> 0x20U));
    __Vtemp_h44dcaf61__0[2U] = (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0) 
                                 | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                                & (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed 
                                           >> 0x3fU)));
    __Vtemp_h44dcaf61__0[3U] = 0U;
    VL_MUL_W(4, __Vtemp_h23c729f6__0, __Vtemp_h41d5d026__0, __Vtemp_h44dcaf61__0);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U] 
        = __Vtemp_h23c729f6__0[0U];
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[1U] 
        = __Vtemp_h23c729f6__0[1U];
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[2U] 
        = __Vtemp_h23c729f6__0[2U];
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[3U] 
        = __Vtemp_h23c729f6__0[3U];
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_ha2d02da5__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit 
        = ((1U == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
            ? ((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                ? ((2U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                    ? ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                        ? 0xff00000000000000ULL : 0xff000000000000ULL)
                    : ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                        ? 0xff0000000000ULL : 0xff00000000ULL))
                : ((2U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                    ? ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                        ? 0xff000000ULL : 0xff0000ULL)
                    : ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                        ? 0xff00ULL : 0xffULL))) : 
           ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
             ? ((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                 ? ((2U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                     ? ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                         ? 0ULL : 0xffff000000000000ULL)
                     : ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                         ? 0ULL : 0xffff00000000ULL))
                 : ((2U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                     ? ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                         ? 0ULL : 0xffff0000ULL) : 
                    ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                      ? 0ULL : 0xffffULL))) : ((0xfU 
                                                == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22051145_top__DOT__mem_addr_mem))
                                                    ? 0xffffffffULL
                                                    : 0xffffffff00000000ULL)
                                                : (
                                                   (0xffU 
                                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3))
                                                     ? 0xffffffffffffffffULL
                                                     : 0ULL)
                                                    : 0ULL))));
    vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache 
        = ((0xa0000000U == (0xa0000000U & vlSelf->ysyx_22051145_top__DOT__mem_addr_mem))
            ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata
            : ((1U == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
                ? (QData)((IData)((0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                  << 3U)))
                                              ? 0U : 
                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                              (((IData)(7U) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                      << 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                      << 3U))))) 
                                            | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                               (3U 
                                                & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                   >> 2U))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                      << 3U)))))))
                : ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
                    ? (QData)((IData)((0xffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                    (((IData)(0xfU) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                          << 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                         << 3U))))) 
                                                  | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                     (3U 
                                                      & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                         >> 2U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                         << 3U)))))))
                    : ((0xfU == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
                        ? (QData)((IData)((((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                 << 3U)))
                                             ? 0U : 
                                            (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                     << 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                     << 3U))))) 
                                           | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                              (3U & 
                                               ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                >> 2U))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                     << 3U))))))
                        : ((0xffU == (IData)(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem))
                            ? (((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                      << 3U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                             << 3U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                      << 3U))))) 
                               | (((0U == (0x1fU & 
                                           ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                            << 3U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                    << 3U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                      << 3U))))) 
                                  | ((QData)((IData)(
                                                     vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                     (3U 
                                                      & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                         >> 2U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                  << 3U)))))
                            : 0ULL)))));
    vlSelf->ysyx_22051145_top__DOT__rs2_idx_id = (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type) 
                                                   | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                      | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                      >> 0x14U))
                                                   : 0U);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h25bafa9b__0) 
           & (1U == (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                     >> 0x14U)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrs) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrsi));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear 
        = (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system) 
            & (0x3000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrci));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write 
        = (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system) 
            & (0x1000U == (0x7000U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi));
    vlSelf->ysyx_22051145_top__DOT__csr_imm_valid_id 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrci) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrsi) 
              | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi)));
    __Vtemp_hb2ccb40a__0[0U] = (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed);
    __Vtemp_hb2ccb40a__0[1U] = (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                                        >> 0x20U));
    __Vtemp_hb2ccb40a__0[2U] = (1U & (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                                              >> 0x3fU)));
    __Vtemp_hf219cbaf__0[0U] = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop;
    __Vtemp_hf219cbaf__0[1U] = 0U;
    __Vtemp_hf219cbaf__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h65bb365b__0, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b, __Vtemp_hf219cbaf__0);
    VL_ADD_W(3, __Vtemp_h1abda450__0, __Vtemp_hb2ccb40a__0, __Vtemp_h65bb365b__0);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[0U] 
        = __Vtemp_h1abda450__0[0U];
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[1U] 
        = __Vtemp_h1abda450__0[1U];
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U] 
        = (1U & __Vtemp_h1abda450__0[2U]);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x3fU))))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num)))) 
              << 0x3fU));
    if (vlSelf->ysyx_22051145_top__DOT__mem_write_valid_mem) {
        if (((0U != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q)) 
             & (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q 
                        >> 3U)))) {
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[0U] = 0U;
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[1U] = 0U;
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[2U] 
                = (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit);
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[3U] 
                = (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit 
                           >> 0x20U));
        } else {
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[0U] 
                = (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit);
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[1U] 
                = (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit 
                           >> 0x20U));
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[2U] = 0U;
            vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[3U] = 0U;
        }
    } else {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[0U] = 0xffffffffU;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[1U] = 0xffffffffU;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[2U] = 0xffffffffU;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp[3U] = 0xffffffffU;
    }
    if (vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_read 
            = vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c81849f__0 
            = (0xffU & (IData)(vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6f46f780__0 
            = (0xffffU & (IData)(vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache));
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c9de06a__0 
            = (IData)(vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache);
    } else {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_read = 0ULL;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c81849f__0 = 0U;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6f46f780__0 = 0U;
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c9de06a__0 = 0U;
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
            == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h646f00cc__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrs) 
              | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrsi) 
                 | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSLT 
        = (1U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U]);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCF 
        = (1U & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop) 
                 ^ (((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                              >> 0x3fU)) | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b[2U] 
                                            | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U])) 
                    & (((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                                 >> 0x3fU)) | ((~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b[2U]) 
                                               | (~ 
                                                  vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U]))) 
                       & ((~ (IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                                      >> 0x3fU))) | 
                          (((~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U]) 
                            | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b[2U]) 
                           & ((~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b[2U]) 
                              | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U])))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
        = (((- (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0) 
                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll))))) 
            & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0)
                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv
                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num)) 
           << (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2));
    vlSelf->ysyx_22051145_top__DOT__mem_data_mem = 
        (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___unsigned) 
          | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___signed))
          ? ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___signed)
              ? ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte)
                  ? (((- (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache) 
                                          & (IData)(
                                                    (vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache 
                                                     >> 7U)))))) 
                      << 8U) | (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c81849f__0)))
                  : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte)
                      ? (((- (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache) 
                                              & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache 
                                                         >> 0xfU)))))) 
                          << 0x10U) | (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6f46f780__0)))
                      : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte)
                          ? (((QData)((IData)((- (IData)(
                                                         ((IData)(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache) 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c9de06a__0)))
                          : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_read)))
              : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___unsigned)
                  ? ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte)
                      ? (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c81849f__0))
                      : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte)
                          ? (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6f46f780__0))
                          : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte)
                              ? (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c9de06a__0))
                              : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_read)))
                  : 0ULL)) : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7fffeU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 1U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7fffdU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 1U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__3 
        = (1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h646f00cc__0) 
                    | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type) 
                       | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal) 
                          | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7fffbU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__3) 
              << 2U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7fff7U & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 4U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7ffefU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 4U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 5U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7ffdfU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 5U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7ffbfU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 7U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7ff7fU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 7U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 8U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7feffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 8U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7fdffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 0xaU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7fbffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 0xaU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 0xbU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7f7ffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 0xbU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7efffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 0xdU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7dfffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 0xdU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 0xeU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x7bfffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 0xeU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 
        = (1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q 
                 >> 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x77fffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4) 
              << 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__0 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h25bafa9b__0) 
           & (0x302U == (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                         >> 0x14U)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x6ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__0) 
              << 0x10U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__1 
        = vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x5ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__1) 
              << 0x11U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__2 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h25bafa9b__0) 
           & (0U == (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                     >> 0x14U)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus 
        = ((0x3ffffU & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus) 
           | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__2) 
              << 0x12U));
    vlSelf->ysyx_22051145_top__DOT__rs1_idx_id = ((
                                                   (~ (IData)(vlSelf->ysyx_22051145_top__DOT__csr_imm_valid_id)) 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h646f00cc__0) 
                                                      | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                      >> 0xfU))
                                                   : 0U);
    vlSelf->ysyx_22051145_top__DOT__csr_idx_id = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr)
                                                   ? 
                                                  (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                   >> 0x14U)
                                                   : 0U);
    vlSelf->ysyx_22051145_top__DOT__alu_op_id = ((1U 
                                                  & (- (IData)(
                                                               (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a47a976__0) 
                                                                 & (0U 
                                                                    == 
                                                                    (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0x19U))) 
                                                                | (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h33ce3db6__0) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0x19U))) 
                                                                   | (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
                                                                       & (0U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))) 
                                                                      | (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32) 
                                                                          & (0U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))) 
                                                                         | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                            | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                               | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal) 
                                                                                | (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui) 
                                                                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr)))))))))))))) 
                                                 | ((2U 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a47a976__0) 
                                                                    & (0x20U 
                                                                       == 
                                                                       (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0x19U))) 
                                                                   | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h33ce3db6__0) 
                                                                      & (0x20U 
                                                                         == 
                                                                         (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0x19U))))))) 
                                                    | ((3U 
                                                        & (- (IData)(
                                                                     (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460b92c8__0) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0x19U))) 
                                                                      | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
                                                                         & (0x4000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))) 
                                                       | ((4U 
                                                           & (- (IData)(
                                                                        (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a21b2bf__0) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0x19U))) 
                                                                         | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
                                                                            & (0x6000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))) 
                                                          | ((5U 
                                                              & (- (IData)(
                                                                           (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c7787b0__0) 
                                                                             & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                            | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
                                                                               & (0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))) 
                                                             | ((6U 
                                                                 & (- (IData)(
                                                                              (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a438939__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                               | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0xfc007000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))))) 
                                                                | ((7U 
                                                                    & (- (IData)(
                                                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460970ce__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h94800a04__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x1aU))))))) 
                                                                   | ((8U 
                                                                       & (- (IData)(
                                                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460970ce__0) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h94800a04__0) 
                                                                                & (0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x1aU))))))) 
                                                                      | ((9U 
                                                                          & (- (IData)(
                                                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32) 
                                                                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32)) 
                                                                                & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h06d92975__0))))) 
                                                                         | ((0xaU 
                                                                             & (- (IData)(
                                                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h5222d4b7__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h7f89d5de__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))))))) 
                                                                            | ((0xbU 
                                                                                & (- (IData)(
                                                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h5222d4b7__0) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h7f89d5de__0) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))))))) 
                                                                               | ((0xcU 
                                                                                & (- (IData)(
                                                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a0e4e0c__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
                                                                                & (0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))) 
                                                                                | ((0xdU 
                                                                                & (- (IData)(
                                                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c33f7e4__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))) 
                                                                                | ((0xeU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                                | ((0xfU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch) 
                                                                                & (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                                | ((0x10U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                                | ((0x11U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch) 
                                                                                & (0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                                | ((0x12U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch) 
                                                                                & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                                | ((0x13U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch) 
                                                                                & (0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                                | ((0x14U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a47a976__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x15U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a438939__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x16U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a0e4e0c__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x17U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c33f7e4__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x18U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h33ce3db6__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x19U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460b92c8__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x1aU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460970ce__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x1bU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a21b2bf__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x1cU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c7787b0__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x1dU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32) 
                                                                                & (IData)(
                                                                                (0x2004000U 
                                                                                == 
                                                                                (0xfe007000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))) 
                                                                                | ((0x1eU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h7f89d5de__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x19U)))))) 
                                                                                | ((0x1fU 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32) 
                                                                                & (IData)(
                                                                                (0x2006000U 
                                                                                == 
                                                                                (0xfe007000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))) 
                                                                                | (0x20U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32) 
                                                                                & (IData)(
                                                                                (0x2007000U 
                                                                                == 
                                                                                (0xfe007000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out 
        = ((((0xcU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
             | (0x10U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
            & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSLT)) 
           | ((((0xdU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                | (0x12U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
               & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCF)) 
              | (((0xeU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                  & (0U == ((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[0U] 
                             | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[1U]) 
                            | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U]))) 
                 | (((0U != ((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[0U] 
                              | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[1U]) 
                             | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[2U])) 
                     & (0xfU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                    | (((~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSLT)) 
                        & (0x11U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                       | ((~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCF)) 
                          & (0x13U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x3fU))))))));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))) 
              << 0x3fU));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
            == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id)));
    vlSelf->ysyx_22051145_top__DOT__branch_pc_valid_ex 
        = (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out) 
            & (7U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q))) 
           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___pc_4));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_out 
        = (((- (QData)((IData)(((1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                | (2U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))))) 
            & (((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out[0U])))) 
           | (((- (QData)((IData)((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))) 
               & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                  & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)) 
              | (((- (QData)((IData)((4U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))) 
                  & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                     | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)) 
                 | (((- (QData)((IData)((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))) 
                     & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed 
                        ^ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)) 
                    | (((- (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra) 
                                            | ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl) 
                                               | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll)))))) 
                        & (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl))) 
                            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                           | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra))) 
                               & ((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                   & (0xffffffffffffffffULL 
                                      >> (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count))) 
                                  | ((~ (0xffffffffffffffffULL 
                                         >> (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count))) 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32)
                                                               ? (IData)(
                                                                         (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                          >> 0x1fU))
                                                               : (IData)(
                                                                         (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                          >> 0x3fU)))))))))) 
                              | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll))) 
                                 & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))) 
                       | (((- (QData)((IData)((0x14U 
                                               == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))) 
                           & (((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U])))) 
                          | (((- (QData)((IData)(((0x15U 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                                  | ((0x16U 
                                                      == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                                     | (0x17U 
                                                        == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))))) 
                              & (((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[2U])))) 
                             | (((- (QData)((IData)(
                                                    (0x18U 
                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))) 
                                 & (QData)((IData)(
                                                   vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U]))) 
                                | (((- (QData)((IData)(
                                                       ((0x19U 
                                                         == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                                        | ((0x1aU 
                                                            == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                                           | ((0x1dU 
                                                               == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                                              | (0x1eU 
                                                                 == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))))))) 
                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                        ? (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                            ? 
                                                           VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                                            : 
                                                           VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))))
                                        : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                            ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                            : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))) 
                                   | ((- (QData)((IData)(
                                                         ((0x1bU 
                                                           == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                                          | ((0x1cU 
                                                              == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                                             | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_h0abc0979__0)))))) 
                                      & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                          ? (QData)((IData)(
                                                            ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                              ? 
                                                             VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                                              : 
                                                             VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))))
                                          : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                              ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                              : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))))))))))));
    vlSelf->__Vtableidx1 = ((((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                              & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid) 
                                 | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid))) 
                             << 5U) | (((IData)(vlSelf->ysyx_22051145_top__DOT__branch_pc_valid_ex) 
                                        << 4U) | (((IData)(vlSelf->ysyx_22051145_top__DOT__pc_valid_clint) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & ((~ (IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelf->ysyx_22051145_top__DOT__mem_addr_valid_mem) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->rst))))));
    vlSelf->ysyx_22051145_top__DOT__stall_clint = Vysyx_22051145_top__ConstPool__TABLE_heb3b7188_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_22051145_top__DOT__flush_clint = Vysyx_22051145_top__ConstPool__TABLE_h48ea8931_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out 
        = ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCMP)
            ? (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out))
            : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_out);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid 
        = (1U & (((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                  >> 1U) | (0x7ffffffcULL == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_d 
        = (IData)(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                       >> 4U)) & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                  >> 0x12U)));
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_d 
        = ((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
            ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d 
        = ((1U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
            ? 0x80000000ULL : ((IData)(vlSelf->ysyx_22051145_top__DOT__pc_valid_clint)
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                           >> 0x10U))))) 
                                    & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                             >> 0x12U))))) 
                                      & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q))
                                : ((IData)(vlSelf->ysyx_22051145_top__DOT__branch_pc_valid_ex)
                                    ? (((- (QData)((IData)(
                                                           ((3U 
                                                             == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))))) 
                                        & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q 
                                           + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q)) 
                                       | ((- (QData)((IData)(
                                                             (4U 
                                                              == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q))))) 
                                          & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q 
                                             + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q)))
                                    : (4ULL + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current))));
    vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex 
        = (((9U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
            | (0xbU == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out)))
            : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out);
    vlSelf->ysyx_22051145_top__DOT__pc_next = ((1U 
                                                & (IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint))
                                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current
                                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d);
}

VL_ATTR_COLD void Vysyx_22051145_top___024root___eval_stl(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vysyx_22051145_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___dump_triggers__ico(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___dump_triggers__act(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22051145_top___024root___dump_triggers__nba(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_22051145_top___024root___ctor_var_reset(Vysyx_22051145_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ysyx_22051145_top__DOT__pc_next = 0;
    vlSelf->ysyx_22051145_top__DOT__rs1_idx_id = 0;
    vlSelf->ysyx_22051145_top__DOT__rs2_idx_id = 0;
    vlSelf->ysyx_22051145_top__DOT__csr_idx_id = 0;
    vlSelf->ysyx_22051145_top__DOT__csr_imm_valid_id = 0;
    vlSelf->ysyx_22051145_top__DOT__alu_op_id = 0;
    vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex = 0;
    vlSelf->ysyx_22051145_top__DOT__branch_pc_valid_ex = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_addr_mem = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_addr_valid_mem = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_mask_mem = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_write_valid_mem = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_wdata_mem = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_data_mem = 0;
    vlSelf->ysyx_22051145_top__DOT__csr_mstatus_writedata_clint = 0;
    vlSelf->ysyx_22051145_top__DOT__csr_mtvec_writedata_clint = 0;
    vlSelf->ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint = 0;
    vlSelf->ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint = 0;
    vlSelf->ysyx_22051145_top__DOT__pc_valid_clint = 0;
    vlSelf->ysyx_22051145_top__DOT__stall_clint = 0;
    vlSelf->ysyx_22051145_top__DOT__flush_clint = 0;
    vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache = 0;
    vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrs = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrsi = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrci = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__1 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__2 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__3 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0143d8e0__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h508df530__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hc2adbad0__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hee46d4cd__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h9544ad33__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h484ad146__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h94800a04__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a47a976__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a438939__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a0e4e0c__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c33f7e4__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460b92c8__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460970ce__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a21b2bf__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c7787b0__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h33ce3db6__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h06d92975__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h7f89d5de__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h5222d4b7__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h25bafa9b__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h646f00cc__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_ha2d02da5__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_idx_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_idx_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_rs2 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_imm = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___pc_4 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCMP = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop = 0;
    VL_ZERO_RESET_W(65, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b);
    VL_ZERO_RESET_W(65, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCF = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSLT = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_out = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_h0abc0979__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs1_data_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___imm_data_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_op_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___unsigned = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___signed = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_read = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h7035a01d__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c81849f__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6f46f780__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c9de06a__0 = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_d = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_d = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___pc_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___inst_data_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___mem_data_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_state = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_idx_reg = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_tag_reg = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_tag_wen = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_icache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_rmask_icache_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__cache_line_temp);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[__Vi0] = 0;
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_state = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_idx_reg = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_tag_reg = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_tag_wen = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_rdata_ok = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_dcache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_rmask_dcache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_dcache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_valid_dcache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wmask_dcache_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wdata_dcache_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_temp);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask);
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3 = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[__Vi0] = 0;
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_wdata = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_waddr = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_wmask = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_ready = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_state = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rdata = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_raddr = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rmask = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_read_valid = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_read_state = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_if = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_mem = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o = 0;
    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o = 0;
    vlSelf->__Vtask_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read__5__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
