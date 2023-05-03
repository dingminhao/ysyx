// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_ram_arb__DOT__pmem_read_TOP(IData/*31:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_ram_arb__DOT__pmem_write_TOP(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__set_mem_pc_TOP(QData/*63:0*/ mem_pc);
extern const VlUnpacked<CData/*5:0*/, 64> Vtop__ConstPool__TABLE_b978122f_0;
extern const VlUnpacked<CData/*5:0*/, 64> Vtop__ConstPool__TABLE_5600ae13_0;

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ top__DOT__u_dcode__DOT___type_system;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrs;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrc;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrsi;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrci;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound2;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound3;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound4;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound5;
    CData/*0:0*/ top__DOT__u_execute_top__DOT___rs1_rs2;
    CData/*0:0*/ top__DOT__u_execute_top__DOT___rs1_imm;
    CData/*0:0*/ top__DOT__u_execute_top__DOT___pc_4;
    CData/*0:0*/ top__DOT__u_execute_top__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isCF;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT;
    CData/*0:0*/ top__DOT__u_memory__DOT___unsigned;
    CData/*0:0*/ top__DOT__u_memory__DOT___signed;
    CData/*0:0*/ top__DOT__u_memory__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__u_clint__DOT___trap_ebreak;
    CData/*5:0*/ __Vtableidx1;
    VlWide<3>/*64:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a;
    VlWide<3>/*64:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b;
    VlWide<3>/*64:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___add_out;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp48;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<4>/*127:0*/ __Vtemp57;
    CData/*31:0*/ __Vdeeptemp69;
    QData/*63:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_out;
    QData/*63:0*/ top__DOT__u_memory__DOT___mem_read;
    QData/*63:0*/ top__DOT__u_ram_arb__DOT___ram_rdata;
    // Body
    vlSelf->top__DOT__u_fetch__DOT___if_trap_bus = 0U;
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q);
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fffeU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | (IData)(top__DOT__u_execute_top__DOT____Vlvbound1));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 1U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fffdU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 1U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 2U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fffbU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 2U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 3U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fff7U & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 3U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 4U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ffefU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 4U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 5U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ffdfU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 5U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 6U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ffbfU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 6U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 7U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ff7fU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 7U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 8U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7feffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 8U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 9U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fdffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 9U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xaU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fbffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xaU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xbU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7f7ffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xbU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xcU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7efffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xcU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xdU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7dfffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xdU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xeU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7bfffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xeU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xfU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x77fffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xfU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0x10U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x6ffffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0x10U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0x11U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x5ffffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0x11U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0x12U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x3ffffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0x12U));
    top__DOT__u_ram_arb__DOT___ram_rdata = 0ULL;
    if (vlSelf->top__DOT__u_ram_arb__DOT___ram_read_valid) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_ram_arb__DOT__pmem_read_TOP(vlSelf->top__DOT__u_ram_arb__DOT___ram_raddr, vlSelf->__Vtask_top__DOT__u_ram_arb__DOT__pmem_read__5__rdata, (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_rmask));
        top__DOT__u_ram_arb__DOT___ram_rdata = vlSelf->__Vtask_top__DOT__u_ram_arb__DOT__pmem_read__5__rdata;
    }
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed 
        = ((((0x19U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
             | (0x1dU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
            | (0x1bU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0x1fU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32 
        = ((((0x1dU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
             | (0x1eU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
            | (0x1fU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0x20U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra 
        = ((8U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (0xbU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl 
        = ((7U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (0xaU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll 
        = ((6U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (9U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32 
        = (((9U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
            | (0xbU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0xaU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP 
        = ((((((((0xcU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                 | (0x13U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                | (0xdU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
               | (0xeU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
              | (0xfU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
             | (0x10U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
            | (0x11U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0x12U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    top__DOT__u_execute_top__DOT___rs1_rs2 = (((0xbU 
                                                == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                               | (0xaU 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    top__DOT__u_execute_top__DOT___rs1_imm = ((((8U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                                | (9U 
                                                   == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
                                               | (5U 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
                                              | (6U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    top__DOT__u_execute_top__DOT___pc_4 = ((3U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                           | (4U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    top__DOT__u_memory__DOT___unsigned = (((5U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                           | (4U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                          | (7U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    top__DOT__u_memory__DOT___signed = ((((2U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                          | (1U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                         | (3U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                        | (6U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__u_memory__DOT___addr = ((0U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))
                                               ? 0x80000000ULL
                                               : vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q);
    vlSelf->top__DOT__u_memory__DOT___isload = ((((
                                                   (((1U 
                                                      == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                                     | (4U 
                                                        == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                    | (6U 
                                                       == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                   | (2U 
                                                      == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                  | (5U 
                                                     == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__u_memory__DOT___ls8byte = (((1U 
                                                   == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                                  | (4U 
                                                     == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                 | (8U 
                                                    == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__u_memory__DOT___ls16byte = ((
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                  | (9U 
                                                     == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__u_memory__DOT___ls32byte = ((
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                                   | (0xaU 
                                                      == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                  | (7U 
                                                     == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__u_memory__DOT___isstore = (((
                                                   (8U 
                                                    == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                                   | (0xbU 
                                                      == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                  | (9U 
                                                     == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                                 | (0xaU 
                                                    == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    if (vlSelf->top__DOT__u_ram_arb__DOT___ram_write_ready) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_ram_arb__DOT__pmem_write_TOP(vlSelf->top__DOT__u_ram_arb__DOT___ram_waddr, vlSelf->top__DOT__u_ram_arb__DOT___ram_wdata, (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_wmask));
    }
    vlSelf->top__DOT__mem_data_ready = ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcahce_rdata_ok) 
                                        & (1U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcahce_state)));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q);
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fffeU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | (IData)(top__DOT__u_memory__DOT____Vlvbound1));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 1U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fffdU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 1U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 2U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fffbU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 2U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 3U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fff7U & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 3U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 4U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ffefU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 4U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 5U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ffdfU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 5U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 6U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ffbfU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 6U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 7U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ff7fU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 7U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 8U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7feffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 8U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 9U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fdffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 9U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xaU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fbffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xaU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xbU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7f7ffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xbU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xcU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7efffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xcU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xdU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7dfffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xdU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xeU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7bfffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xeU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xfU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x77fffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xfU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0x10U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x6ffffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0x10U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0x11U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x5ffffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0x11U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0x12U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x3ffffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0x12U));
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q;
    if ((0x300U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en 
            = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en 
                = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
        }
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            if ((0x342U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en 
                    = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
            }
        }
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            if ((0x342U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                if ((0x343U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en 
                        = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
                }
            }
        }
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            if ((0x342U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                if ((0x343U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                    if ((0x305U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en 
                            = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2 
        = ((IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q)
            ? vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q
            : vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q);
    vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
            ? 0ULL : vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q);
    vlSelf->top__DOT__u_dcode__DOT___type_jal = (IData)(
                                                        (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_auipc = (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_lui = (IData)(
                                                        (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_branch = (IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_store = (IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_jalr = (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op_imm = (IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32 
        = (IData)((0x1bU == (0x7fU & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_load = (IData)(
                                                         (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op = (IData)(
                                                       (0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op_32 = (IData)(
                                                          (0x3bU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    top__DOT__u_dcode__DOT___type_system = (IData)(
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_valid_o = 0U;
    if (((IData)(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) 
         & (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_if))) {
        vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_valid_o 
            = vlSelf->top__DOT__u_ram_arb__DOT___ram_read_valid;
    }
    vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_valid_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) 
                  & (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_if))))) {
        if (((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) 
             & (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_mem))) {
            vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_valid_o 
                = vlSelf->top__DOT__u_ram_arb__DOT___ram_read_valid;
        }
    }
    vlSelf->top__DOT__if_rdata_valid = ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icahce_rdata_ok) 
                                        & (1U == (IData)(vlSelf->top__DOT__u_icache_top__DOT__icahce_state)));
    vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_o = 0ULL;
    if (((IData)(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) 
         & (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_if))) {
        vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_o 
            = top__DOT__u_ram_arb__DOT___ram_rdata;
    }
    vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_o = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) 
                  & (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_if))))) {
        if (((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) 
             & (IData)(vlSelf->top__DOT__u_ram_arb__DOT___ram_mem))) {
            vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_o 
                = top__DOT__u_ram_arb__DOT___ram_rdata;
        }
    }
    top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP));
    vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
        = ((((((- (QData)((IData)(top__DOT__u_execute_top__DOT___rs1_rs2))) 
               & vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q) 
              | ((- (QData)((IData)(top__DOT__u_execute_top__DOT___rs1_imm))) 
                 & vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)) 
             | ((- (QData)((IData)((0xcU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))))) 
                & vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q)) 
            | (4ULL & (- (QData)((IData)(top__DOT__u_execute_top__DOT___pc_4))))) 
           | (0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                          ((1U 
                                                            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                                           | (2U 
                                                              == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)))))) 
                                       & vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
        = (((- (QData)((IData)(((IData)(top__DOT__u_execute_top__DOT___rs1_rs2) 
                                | (IData)(top__DOT__u_execute_top__DOT___rs1_imm))))) 
            & vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q) 
           | ((- (QData)((IData)(((IData)(top__DOT__u_execute_top__DOT___pc_4) 
                                  | (1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)))))) 
              & vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q));
    vlSelf->top__DOT__u_memory__DOT___mask = (0xffU 
                                              & ((((1U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__u_memory__DOT___ls8byte)))) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__u_memory__DOT___ls16byte))))) 
                                                  | (0xfU 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__u_memory__DOT___ls32byte))))) 
                                                 | (- (IData)(
                                                              ((6U 
                                                                == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                                               | (0xbU 
                                                                  == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)))))));
    if (((IData)(vlSelf->top__DOT__u_memory__DOT___isstore) 
         | (IData)(vlSelf->top__DOT__u_memory__DOT___isload))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__set_mem_pc_TOP(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q);
    }
    vlSelf->top__DOT__mem_addr_valid = (((IData)(vlSelf->top__DOT__u_memory__DOT___isload) 
                                         | (IData)(vlSelf->top__DOT__u_memory__DOT___isstore)) 
                                        & (~ (IData)(vlSelf->top__DOT__mem_data_ready)));
    vlSelf->top__DOT__mem_write_valid = ((IData)(vlSelf->top__DOT__u_memory__DOT___isstore) 
                                         & (~ (IData)(vlSelf->top__DOT__mem_data_ready)));
    top__DOT__u_clint__DOT___trap_ebreak = (1U & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                  >> 0x11U));
    vlSelf->top__DOT__u_dcode__DOT___U_type = ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_auipc) 
                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_lui));
    vlSelf->top__DOT__u_dcode__DOT___mem_op = (((((
                                                   ((((((1U 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                       & (0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU))))))) 
                                                        | (4U 
                                                           & (- (IData)(
                                                                        ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                         & (4U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0xcU)))))))) 
                                                       | (2U 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                        & (1U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU)))))))) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                       & (2U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU)))))))) 
                                                     | (5U 
                                                        & (- (IData)(
                                                                     ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                      & (5U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0xcU)))))))) 
                                                    | (8U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                     & (0U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                            >> 0xcU)))))))) 
                                                   | (9U 
                                                      & (- (IData)(
                                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                    & (1U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0xcU)))))))) 
                                                  | (0xaU 
                                                     & (- (IData)(
                                                                  ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                   & (2U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0xcU)))))))) 
                                                 | (7U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                  & (6U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                         >> 0xcU)))))))) 
                                                | (6U 
                                                   & (- (IData)(
                                                                ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                 & (3U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0xcU)))))))) 
                                               | (0xbU 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                & (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0xcU))))))));
    vlSelf->top__DOT__u_dcode__DOT___R_type = ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32));
    vlSelf->top__DOT__u_dcode__DOT___inst_ebreak = 
        (((IData)(top__DOT__u_dcode__DOT___type_system) 
          & (0U == (7U & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                          >> 0xcU)))) & (1U == (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0x14U)));
    vlSelf->top__DOT__u_dcode__DOT___inst_csrrw = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                          >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrs = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                           & (2U == 
                                              (7U & 
                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrc = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                           & (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0xcU))));
    vlSelf->top__DOT__u_dcode__DOT___I_type = (((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm)) 
                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32)) 
                                                | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jalr)) 
                                               | (IData)(top__DOT__u_dcode__DOT___type_system));
    vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi = 
        ((IData)(top__DOT__u_dcode__DOT___type_system) 
         & (5U == (7U & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                         >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrsi = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (6U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrci = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (7U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU))));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2 
        = (0x3fU & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                     ? (0x1fU & (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                     : (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[0U] 
        = ((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2) 
           ^ (- (IData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[1U] 
        = ((IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                    >> 0x20U)) ^ (- (IData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U] 
        = (1U & ((1U & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                                >> 0x3fU))) ^ (- (IData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop)))));
    __Vtemp45[0U] = (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1);
    __Vtemp45[1U] = (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                             >> 0x20U));
    __Vtemp45[2U] = (((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                        | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                       | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                      | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                     & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                                >> 0x3fU)));
    VL_EXTEND_WW(128,65, __Vtemp46, __Vtemp45);
    __Vtemp47[0U] = (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2);
    __Vtemp47[1U] = (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                             >> 0x20U));
    __Vtemp47[2U] = ((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                       | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                      | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                     & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                                >> 0x3fU)));
    VL_EXTEND_WW(128,65, __Vtemp48, __Vtemp47);
    VL_MUL_W(4, __Vtemp49, __Vtemp46, __Vtemp48);
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U] 
        = __Vtemp49[0U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[1U] 
        = __Vtemp49[1U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[2U] 
        = __Vtemp49[2U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[3U] 
        = __Vtemp49[3U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
        = ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
            ? (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1))
            : vlSelf->top__DOT__u_execute_top__DOT___alu_in1);
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[0U] 
        = (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1);
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[1U] 
        = (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                   >> 0x20U));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U] 
        = (1U & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                         >> 0x3fU)));
    vlSelf->top__DOT__u_dcache_top__DOT__wmask_bit 
        = ((1U == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
            ? ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                              >> 2U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__u_memory__DOT___addr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                                               ? 0xff00000000000000ULL
                                               : 0xff000000000000ULL)
                                           : ((1U & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                                               ? 0xff0000000000ULL
                                               : 0xff00000000ULL))
                : ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                                  >> 1U))) ? ((1U & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                                               ? 0xff000000ULL
                                               : 0xff0000ULL)
                    : ((1U & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                        ? 0xff00ULL : 0xffULL))) : 
           ((3U == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
             ? ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                               >> 2U))) ? ((1U & (IData)(
                                                         (vlSelf->top__DOT__u_memory__DOT___addr 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                                                ? 0ULL
                                                : 0xffff000000000000ULL)
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                                                ? 0ULL
                                                : 0xffff00000000ULL))
                 : ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                                   >> 1U))) ? ((1U 
                                                & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                                                ? 0ULL
                                                : 0xffff0000ULL)
                     : ((1U & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))
                         ? 0ULL : 0xffffULL))) : ((0xfU 
                                                   == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__u_memory__DOT___addr)))
                                                    ? 0xffffffffULL
                                                    : 0xffffffff00000000ULL)
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__u_memory__DOT___addr)))
                                                     ? 0xffffffffffffffffULL
                                                     : 0ULL)
                                                    : 0ULL))));
    top__DOT__u_memory__DOT___mem_read = ((IData)(vlSelf->top__DOT__mem_data_ready)
                                           ? ((0xa0000000U 
                                               == (0xa0000000U 
                                                   & (IData)(vlSelf->top__DOT__u_memory__DOT___addr)))
                                               ? vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (((0U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                               << 3U)))
                                                                           ? 0U
                                                                           : 
                                                                          (vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                           (((IData)(7U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U))) 
                                                                            >> 5U)] 
                                                                           << 
                                                                           ((IData)(0x20U) 
                                                                            - 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U))))) 
                                                                         | (vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                            (3U 
                                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                >> 2U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U)))))))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U)))
                                                                            ? 0U
                                                                            : 
                                                                           (vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                            (((IData)(0xfU) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U))) 
                                                                             >> 5U)] 
                                                                            << 
                                                                            ((IData)(0x20U) 
                                                                             - 
                                                                             (0x1fU 
                                                                              & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U))))) 
                                                                          | (vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                             (3U 
                                                                              & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                >> 2U))] 
                                                                             >> 
                                                                             (0x1fU 
                                                                              & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U)))))))
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
                                                     ? (QData)((IData)(
                                                                       (((0U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                              << 3U)))
                                                                          ? 0U
                                                                          : 
                                                                         (vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0x7fU 
                                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U))) 
                                                                           >> 5U)] 
                                                                          << 
                                                                          ((IData)(0x20U) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                               << 3U))))) 
                                                                        | (vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                           (3U 
                                                                            & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                               >> 2U))] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                               << 3U))))))
                                                     : 
                                                    ((0xffU 
                                                      == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                       (((IData)(0x3fU) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                             << 3U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                             << 3U)))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                             << 3U))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                               << 3U)))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                           (((IData)(0x1fU) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                << 3U))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                << 3U))))) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata[
                                                                            (3U 
                                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                                >> 2U))])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg) 
                                                                << 3U)))))
                                                      : 0ULL)))))
                                           : 0ULL);
    if (VL_UNLIKELY(top__DOT__u_clint__DOT___trap_ebreak)) {
        VL_FINISH_MT("/home/dmh/ysyx-workbench/npc/vsrc/core/clint.v", 133, "");
    }
    vlSelf->top__DOT__u_clint__DOT___trap_valid = (1U 
                                                   & (((vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                        >> 0x12U) 
                                                       | (IData)(top__DOT__u_clint__DOT___trap_ebreak)) 
                                                      | (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                         >> 0x10U)));
    vlSelf->top__DOT__u_dcode__DOT___rs2_idx = ((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0x14U))
                                                 : 0U);
    vlSelf->top__DOT__u_dcode__DOT___imm_data = (((
                                                   (((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___I_type))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x1fU)))) 
                                                         << 0xbU) 
                                                        | (QData)((IData)(
                                                                          (0x7ffU 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0x14U)))))) 
                                                    | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store))) 
                                                       & (((- (QData)((IData)(
                                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0x1fU)))) 
                                                           << 0xbU) 
                                                          | (QData)((IData)(
                                                                            ((0x7e0U 
                                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)) 
                                                                             | (0x1fU 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 7U)))))))) 
                                                   | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))) 
                                                      & (((- (QData)((IData)(
                                                                             (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 7U))))))))) 
                                                  | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___U_type))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x1fU)))) 
                                                         << 0x1fU) 
                                                        | (QData)((IData)(
                                                                          (0x7ffff000U 
                                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)))))) 
                                                 | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))) 
                                                    & (((- (QData)((IData)(
                                                                           (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                            >> 0x1fU)))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         ((0xff000U 
                                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 9U)) 
                                                                             | ((0x7e0U 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U))))))))));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q);
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fffeU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | (IData)(top__DOT__u_dcode__DOT____Vlvbound5));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 1U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fffdU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 1U));
    top__DOT__u_dcode__DOT____Vlvbound4 = (1U & (~ 
                                                 ((((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                      | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                     | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal)) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fffbU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound4) 
              << 2U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 3U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fff7U & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 3U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 4U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ffefU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 4U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 5U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ffdfU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 5U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 6U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ffbfU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 6U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 7U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ff7fU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 7U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 8U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7feffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 8U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 9U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fdffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 9U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xaU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fbffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xaU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xbU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7f7ffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xbU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xcU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7efffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xcU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xdU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7dfffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xdU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xeU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7bfffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xeU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xfU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x77fffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xfU));
    top__DOT__u_dcode__DOT____Vlvbound1 = (((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (0U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU)))) 
                                           & (0x302U 
                                              == (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                  >> 0x14U)));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x6ffffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound1) 
              << 0x10U));
    top__DOT__u_dcode__DOT____Vlvbound2 = vlSelf->top__DOT__u_dcode__DOT___inst_ebreak;
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x5ffffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound2) 
              << 0x11U));
    top__DOT__u_dcode__DOT____Vlvbound3 = (((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (0U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU)))) 
                                           & (0U == 
                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                               >> 0x14U)));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x3ffffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound3) 
              << 0x12U));
    vlSelf->top__DOT__u_dcode__DOT___csr_set = ((IData)(top__DOT__u_dcode__DOT___inst_csrrs) 
                                                | (IData)(top__DOT__u_dcode__DOT___inst_csrrsi));
    vlSelf->top__DOT__u_dcode__DOT___csr_clear = ((IData)(top__DOT__u_dcode__DOT___inst_csrrc) 
                                                  | (IData)(top__DOT__u_dcode__DOT___inst_csrrci));
    vlSelf->top__DOT__u_dcode__DOT___isNeed_csr = (
                                                   (((((IData)(top__DOT__u_dcode__DOT___inst_csrrc) 
                                                       | (IData)(top__DOT__u_dcode__DOT___inst_csrrci)) 
                                                      | (IData)(top__DOT__u_dcode__DOT___inst_csrrs)) 
                                                     | (IData)(top__DOT__u_dcode__DOT___inst_csrrsi)) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrw)) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi));
    vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid 
        = (((IData)(top__DOT__u_dcode__DOT___inst_csrrci) 
            | (IData)(top__DOT__u_dcode__DOT___inst_csrrsi)) 
           | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffffff8ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x3fU))))))));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffffffc7ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffffe3fULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffff1ffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffff8fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffc7fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffe3ffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffff1fffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffff8ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffc7ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffe3fffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffff1ffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffff8fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffc7fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffe3ffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffff1fffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfff8ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffc7ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfe3fffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xf1ffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0x8fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num)))) 
              << 0x3fU));
    VL_ADD_W(3, __Vtemp52, top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a, top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b);
    VL_EXTEND_WI(65,1, __Vtemp53, (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop));
    VL_ADD_W(3, __Vtemp54, __Vtemp52, __Vtemp53);
    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U] 
        = __Vtemp54[0U];
    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U] 
        = __Vtemp54[1U];
    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U] 
        = (1U & __Vtemp54[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp57, vlSelf->top__DOT__u_dcache_top__DOT__wmask_bit);
    if (vlSelf->top__DOT__mem_write_valid) {
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[0U] 
            = ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                              >> 3U))) ? 0U : __Vtemp57[0U]);
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[1U] 
            = ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                              >> 3U))) ? 0U : __Vtemp57[1U]);
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[2U] 
            = ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                              >> 3U))) ? (IData)(vlSelf->top__DOT__u_dcache_top__DOT__wmask_bit)
                : __Vtemp57[2U]);
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[3U] 
            = ((1U & (IData)((vlSelf->top__DOT__u_memory__DOT___addr 
                              >> 3U))) ? (IData)((vlSelf->top__DOT__u_dcache_top__DOT__wmask_bit 
                                                  >> 0x20U))
                : __Vtemp57[3U]);
    } else {
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[0U] = 0xffffffffU;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[1U] = 0xffffffffU;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[2U] = 0xffffffffU;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp[3U] = 0xffffffffU;
    }
    vlSelf->top__DOT__mem_data_mem = (((IData)(top__DOT__u_memory__DOT___unsigned) 
                                       | (IData)(top__DOT__u_memory__DOT___signed))
                                       ? ((IData)(top__DOT__u_memory__DOT___signed)
                                           ? ((IData)(vlSelf->top__DOT__u_memory__DOT___ls8byte)
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (top__DOT__u_memory__DOT___mem_read 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(top__DOT__u_memory__DOT___mem_read)))))
                                               : ((IData)(vlSelf->top__DOT__u_memory__DOT___ls16byte)
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(top__DOT__u_memory__DOT___mem_read)))))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__u_memory__DOT___ls32byte)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(top__DOT__u_memory__DOT___mem_read)))
                                                    : top__DOT__u_memory__DOT___mem_read)))
                                           : ((IData)(top__DOT__u_memory__DOT___unsigned)
                                               ? ((IData)(vlSelf->top__DOT__u_memory__DOT___ls8byte)
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(top__DOT__u_memory__DOT___mem_read))))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__u_memory__DOT___ls16byte)
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(top__DOT__u_memory__DOT___mem_read))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_memory__DOT___ls32byte)
                                                     ? (QData)((IData)(top__DOT__u_memory__DOT___mem_read))
                                                     : top__DOT__u_memory__DOT___mem_read)))
                                               : 0ULL))
                                       : vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q);
    vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx)));
    vlSelf->top__DOT__u_dcode__DOT___csr_idx = ((IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr)
                                                 ? 
                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                 >> 0x14U)
                                                 : 0U);
    __Vdeeptemp69 = ((((((((((((((((((((((((1U & (- (IData)(
                                                            (((((((((((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU)))) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0x19U))) 
                                                                      | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                          & (0U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0xcU)))) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x19U)))) 
                                                                     | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU))))) 
                                                                    | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                                       & (0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU))))) 
                                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_load)) 
                                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal)) 
                                                                | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jalr) 
                                                                   & (0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0xcU))))) 
                                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_auipc)) 
                                                              | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_lui)) 
                                                             | (IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr))))) 
                                           | (2U & 
                                              (- (IData)(
                                                         ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                            & (0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0x20U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U))) 
                                                          | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0xcU)))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x19U)))))))) 
                                          | (3U & (- (IData)(
                                                             ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                & (4U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0xcU)))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0x19U))) 
                                                              | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0xcU))))))))) 
                                         | (4U & (- (IData)(
                                                            ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                               & (6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xcU)))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0x19U))) 
                                                             | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                                & (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0xcU))))))))) 
                                        | (5U & (- (IData)(
                                                           ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                              & (7U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0xcU)))) 
                                                             & (0U 
                                                                == 
                                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x19U))) 
                                                            | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                               & (7U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xcU))))))))) 
                                       | (6U & (- (IData)(
                                                          ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                             & (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0xcU)))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0x19U))) 
                                                           | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                               & (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xcU)))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0x1aU)))))))) 
                                      | (7U & (- (IData)(
                                                         ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                            & (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U))) 
                                                          | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                              & (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0xcU)))) 
                                                             & (0U 
                                                                == 
                                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x1aU)))))))) 
                                     | (8U & (- (IData)(
                                                        ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                           & (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0xcU)))) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                              >> 0x19U))) 
                                                         | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                             & (5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0xcU)))) 
                                                            & (0x10U 
                                                               == 
                                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0x1aU)))))))) 
                                    | (9U & (- (IData)(
                                                       ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                          & (1U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0xcU)))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                             >> 0x19U))) 
                                                        | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                            & (1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U)))))))) 
                                   | (0xaU & (- (IData)(
                                                        ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                           & (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0xcU)))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                              >> 0x19U))) 
                                                         | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                             & (5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0xcU)))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0x19U)))))))) 
                                  | (0xbU & (- (IData)(
                                                       ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                          & (5U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0xcU)))) 
                                                         & (0x20U 
                                                            == 
                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                             >> 0x19U))) 
                                                        | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                            & (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0x20U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U)))))))) 
                                 | (0xcU & (- (IData)(
                                                      ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                         & (2U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0xcU)))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                            >> 0x19U))) 
                                                       | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                          & (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0xcU))))))))) 
                                | (0xdU & (- (IData)(
                                                     ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                        & (3U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0xcU)))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                           >> 0x19U))) 
                                                      | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                         & (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0xcU))))))))) 
                               | (0xeU & (- (IData)(
                                                    ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                     & (0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                            >> 0xcU)))))))) 
                              | (0xfU & (- (IData)(
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                           >> 0xcU)))))))) 
                             | (0x10U & (- (IData)(
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                           >> 0xcU)))))))) 
                            | (0x11U & (- (IData)(((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                          >> 0xcU)))))))) 
                           | (0x12U & (- (IData)(((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                         >> 0xcU)))))))) 
                          | (0x13U & (- (IData)(((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                 & (7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                        >> 0xcU)))))))) 
                         | (0x14U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                 & (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                        >> 0xcU)))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0x19U))))))) 
                        | (0x15U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                & (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                       >> 0xcU)))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0x19U))))))) 
                       | (0x16U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                               & (2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                      >> 0xcU)))) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                  >> 0x19U))))))) 
                      | (0x17U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                              & (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                     >> 0xcU)))) 
                                             & (1U 
                                                == 
                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                 >> 0x19U))))))) 
                     | (0x18U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0xcU)))) 
                                            & (1U == 
                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0x19U)))))));
    vlSelf->top__DOT__u_dcode__DOT___alu_op = (((((
                                                   (((__Vdeeptemp69 
                                                      | (0x19U 
                                                         & (- (IData)(
                                                                      (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                        & (4U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU)))) 
                                                                       & (1U 
                                                                          == 
                                                                          (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0x19U))))))) 
                                                     | (0x1aU 
                                                        & (- (IData)(
                                                                     (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                       & (5U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU)))) 
                                                                      & (1U 
                                                                         == 
                                                                         (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0x19U))))))) 
                                                    | (0x1bU 
                                                       & (- (IData)(
                                                                    (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                      & (6U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0xcU)))) 
                                                                     & (1U 
                                                                        == 
                                                                        (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                         >> 0x19U))))))) 
                                                   | (0x1cU 
                                                      & (- (IData)(
                                                                   (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                            >> 0xcU)))) 
                                                                    & (1U 
                                                                       == 
                                                                       (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0x19U))))))) 
                                                  | (0x1dU 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                    & (4U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0xcU)))) 
                                                                   & (1U 
                                                                      == 
                                                                      (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0x19U))))))) 
                                                 | (0x1eU 
                                                    & (- (IData)(
                                                                 (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                   & (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0xcU)))) 
                                                                  & (1U 
                                                                     == 
                                                                     (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0x19U))))))) 
                                                | (0x1fU 
                                                   & (- (IData)(
                                                                (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                  & (6U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                         >> 0xcU)))) 
                                                                 & (1U 
                                                                    == 
                                                                    (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0x19U))))))) 
                                               | (0x20U 
                                                  & (- (IData)(
                                                               (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                 & (7U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0xcU)))) 
                                                                & (1U 
                                                                   == 
                                                                   (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0x19U)))))));
    vlSelf->top__DOT__u_dcode__DOT___rs1_idx = ((((
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch)) 
                                                 & (~ (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid)))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0xfU))
                                                 : 0U);
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
        = (((- (QData)((IData)((((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra) 
                                 | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl)) 
                                | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll))))) 
            & (((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra) 
                | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))
                ? vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv
                : vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num)) 
           << (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2));
    top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT 
        = (1U & ((top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U] 
                  >> 0x1fU) ^ (top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U] 
                               ^ (top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U] 
                                  >> 0x1fU))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___isCF 
        = (1U & ((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop) 
                 ^ (((((top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U] 
                        | top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U]) 
                       | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]) 
                      & ((top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U] 
                          | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U])) 
                         | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]))) 
                     & (((~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U]) 
                         | top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U]) 
                        | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]))) 
                    & (((~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U]) 
                        | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U])) 
                       | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]))));
    vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffffff8ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x3fU))))))));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffffffc7ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffffe3fULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffff1ffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffff8fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffc7fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffe3ffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffff1fffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffff8ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffc7ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffe3fffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffff1ffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffff8fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffc7fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffe3ffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffff1fffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfff8ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffc7ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfe3fffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xf1ffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x8fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))) 
              << 0x3fU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out 
        = ((((((((0xcU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                 | (0x10U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                & (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT)) 
               | (((0xdU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                   | (0x12U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                  & (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCF))) 
              | ((0xeU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                 & (0U == ((top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U] 
                            | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U]) 
                           | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U])))) 
             | ((0xfU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                & (0U != ((top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U] 
                           | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U]) 
                          | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U])))) 
            | ((0x11U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
               & (~ (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT)))) 
           | ((0x13U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
              & (~ (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCF))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_out 
        = (((((((((((- (QData)((IData)(((1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                        | (2U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
                    & (((QData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U])))) 
                   | ((- (QData)((IData)((5U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                      & (vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                         & vlSelf->top__DOT__u_execute_top__DOT___alu_in2))) 
                  | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                     & (vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                        | vlSelf->top__DOT__u_execute_top__DOT___alu_in2))) 
                 | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                    & (vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                       ^ vlSelf->top__DOT__u_execute_top__DOT___alu_in2))) 
                | ((- (QData)((IData)((((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra) 
                                        | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl)) 
                                       | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll))))) 
                   & ((((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))) 
                        & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                       | ((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra))) 
                          & ((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                              & (0xffffffffffffffffULL 
                                 >> (0x3fU & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                                               ? ((IData)(0x20U) 
                                                  + (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                               : (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))) 
                             | ((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                                                        ? (IData)(
                                                                  (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                   >> 0x1fU))
                                                        : (IData)(
                                                                  (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                   >> 0x3fU))))))) 
                                & (~ (0xffffffffffffffffULL 
                                      >> (0x3fU & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                                                    ? 
                                                   ((IData)(0x20U) 
                                                    + (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                                    : (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))))))) 
                      | ((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll))) 
                         & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))) 
               | ((- (QData)((IData)((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U]))))) 
              | ((- (QData)((IData)((((0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                      | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                     | (0x17U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
                 & (((QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[2U]))))) 
             | ((- (QData)((IData)((0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                & (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U])))) 
            | ((- (QData)((IData)(((((0x19U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                     | (0x1aU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                    | (0x1dU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x1eU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
               & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                   ? (QData)((IData)(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                       ? VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                       : VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                   : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                       ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                       : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))))) 
           | ((- (QData)((IData)(((((0x1bU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                    | (0x1cU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x1fU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                  | (0x20U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
              & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                  ? (QData)((IData)(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                  : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                      ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                      : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))));
    vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid 
        = ((((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out) 
             & (7U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
            | (3U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
           | (4U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT___alu_out 
        = ((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP)
            ? (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out))
            : top__DOT__u_execute_top__DOT__u_alu__DOT___alu_out);
    __Vtableidx1 = ((((5U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                      & ((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid) 
                         | (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid))) 
                     << 5U) | (((IData)(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid) 
                                << 4U) | (((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid) 
                                           << 3U) | 
                                          ((4U & ((~ (IData)(vlSelf->top__DOT__if_rdata_valid)) 
                                                  << 2U)) 
                                           | (((((IData)(vlSelf->top__DOT__u_memory__DOT___isload) 
                                                 | (IData)(vlSelf->top__DOT__u_memory__DOT___isstore)) 
                                                & (~ (IData)(vlSelf->top__DOT__mem_data_ready))) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    vlSelf->top__DOT__stall_clint = Vtop__ConstPool__TABLE_b978122f_0
        [__Vtableidx1];
    vlSelf->top__DOT__flush_clint = Vtop__ConstPool__TABLE_5600ae13_0
        [__Vtableidx1];
    vlSelf->top__DOT__exc_alu_data_ex = (((9U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                          | (0xbU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_execute_top__DOT___alu_out 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_out)))
                                          : vlSelf->top__DOT__u_execute_top__DOT___alu_out);
    vlSelf->top__DOT__u_if_id__DOT___flush_valid = 
        (1U & (((IData)(vlSelf->top__DOT__flush_clint) 
                >> 1U) | (0x7ffffffcULL == vlSelf->top__DOT__u_pc_reg__DOT___pc_current)));
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__flush_clint))
                                                    ? 0x80000000ULL
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                                             >> 0x10U))))) 
                                                      & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                                               >> 0x12U))))) 
                                                        & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          ((3U 
                                                                            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                                                           | (7U 
                                                                              == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)))))) 
                                                       & (vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q 
                                                          + vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)) 
                                                      | ((- (QData)((IData)(
                                                                            (4U 
                                                                             == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))))) 
                                                         & (vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q 
                                                            + vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)))
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__u_pc_reg__DOT___pc_current))));
    vlSelf->top__DOT__pc_next = ((1U & (IData)(vlSelf->top__DOT__stall_clint))
                                  ? vlSelf->top__DOT__u_pc_reg__DOT___pc_current
                                  : vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d);
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_rv64_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u_rv64_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__3(vlSelf);
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->top__DOT__pc_next = 0;
    vlSelf->top__DOT__if_rdata_valid = 0;
    vlSelf->top__DOT__exc_alu_data_ex = 0;
    vlSelf->top__DOT__mem_data_mem = 0;
    vlSelf->top__DOT__mem_addr_valid = 0;
    vlSelf->top__DOT__mem_write_valid = 0;
    vlSelf->top__DOT__mem_data_ready = 0;
    vlSelf->top__DOT__csr_mstatus_writedata = 0;
    vlSelf->top__DOT__csr_mtvec_writedata = 0;
    vlSelf->top__DOT__csr_mstatus_write_valid = 0;
    vlSelf->top__DOT__csr_mtvec_write_valid = 0;
    vlSelf->top__DOT__stall_clint = 0;
    vlSelf->top__DOT__flush_clint = 0;
    vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0;
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d = 0;
    vlSelf->top__DOT__u_fetch__DOT___if_trap_bus = 0;
    vlSelf->top__DOT__u_if_id__DOT___flush_valid = 0;
    vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q = 0;
    vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q = 0;
    vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_load = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_store = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_branch = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_jalr = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_jal = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_op_imm = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_op = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_auipc = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_lui = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32 = 0;
    vlSelf->top__DOT__u_dcode__DOT___type_op_32 = 0;
    vlSelf->top__DOT__u_dcode__DOT___inst_ebreak = 0;
    vlSelf->top__DOT__u_dcode__DOT___inst_csrrw = 0;
    vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi = 0;
    vlSelf->top__DOT__u_dcode__DOT___R_type = 0;
    vlSelf->top__DOT__u_dcode__DOT___I_type = 0;
    vlSelf->top__DOT__u_dcode__DOT___U_type = 0;
    vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid = 0;
    vlSelf->top__DOT__u_dcode__DOT___isNeed_csr = 0;
    vlSelf->top__DOT__u_dcode__DOT___rs1_idx = 0;
    vlSelf->top__DOT__u_dcode__DOT___rs2_idx = 0;
    vlSelf->top__DOT__u_dcode__DOT___csr_idx = 0;
    vlSelf->top__DOT__u_dcode__DOT___imm_data = 0;
    vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid = 0;
    vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid = 0;
    vlSelf->top__DOT__u_dcode__DOT___csr_set = 0;
    vlSelf->top__DOT__u_dcode__DOT___csr_clear = 0;
    vlSelf->top__DOT__u_dcode__DOT___alu_op = 0;
    vlSelf->top__DOT__u_dcode__DOT___mem_op = 0;
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus = 0;
    vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q = 0;
    vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q = 0;
    vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid = 0;
    vlSelf->top__DOT__u_execute_top__DOT___alu_in1 = 0;
    vlSelf->top__DOT__u_execute_top__DOT___alu_in2 = 0;
    vlSelf->top__DOT__u_execute_top__DOT___alu_out = 0;
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32 = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32 = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2 = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res = 0;
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result);
    vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2 = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q = 0;
    vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q = 0;
    vlSelf->top__DOT__u_memory__DOT___isload = 0;
    vlSelf->top__DOT__u_memory__DOT___isstore = 0;
    vlSelf->top__DOT__u_memory__DOT___ls8byte = 0;
    vlSelf->top__DOT__u_memory__DOT___ls16byte = 0;
    vlSelf->top__DOT__u_memory__DOT___ls32byte = 0;
    vlSelf->top__DOT__u_memory__DOT___mask = 0;
    vlSelf->top__DOT__u_memory__DOT___addr = 0;
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus = 0;
    vlSelf->top__DOT__u_clint__DOT___trap_valid = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q = 0;
    vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q = 0;
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icahce_state = 0;
    vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_tag_wen = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icahce_rdata_ok = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_icache_top__DOT__cache_line_temp);
    vlSelf->top__DOT__u_icache_top__DOT__icache_data_wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__u_dcache_top__DOT__dcahce_state = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__line_idx_reg = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__line_tag_reg = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcahce_rdata_ok = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__cache_line_temp);
    vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask);
    vlSelf->top__DOT__u_dcache_top__DOT__wmask_bit = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__u_ram_arb__DOT___ram_wdata = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_waddr = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_wmask = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_write_ready = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_write_state = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_raddr = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_rmask = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_read_valid = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_read_state = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_if = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___ram_mem = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_o = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_o = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_valid_o = 0;
    vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_valid_o = 0;
    vlSelf->__Vtask_top__DOT__u_ram_arb__DOT__pmem_read__5__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
