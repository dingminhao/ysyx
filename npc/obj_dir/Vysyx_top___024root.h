// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_top.h for the primary calling header

#ifndef VERILATED_VYSYX_TOP___024ROOT_H_
#define VERILATED_VYSYX_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_top__Syms;
class Vysyx_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_top__DOT__access_rs2;
    CData/*0:0*/ ysyx_top__DOT__access_rd;
    CData/*7:0*/ ysyx_top__DOT__inst_type;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_jalr;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_addi;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_slti;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_sltiu;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_xori;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_ori;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_andi;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_slli;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_srli;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_srai;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_fence;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_fence_i;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_csrrw;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_csrrs;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_csrrc;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_csrrwi;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_csrrsi;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_csrrci;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_mul;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_mulh;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_mulhsu;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_mulhu;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_div;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_divu;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_rem;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_remu;
    CData/*7:0*/ ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus;
    CData/*0:0*/ ysyx_top__DOT__Idstage__DOT__inst_type_muldiv;
    SData/*10:0*/ ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus;
    SData/*10:0*/ ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus;
    SData/*10:0*/ ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus;
    IData/*18:0*/ ysyx_top__DOT__dec_info_bus;
    IData/*16:0*/ ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus;
    IData/*18:0*/ ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus;
    IData/*31:0*/ ysyx_top__DOT__Regfile__DOT__i;
    QData/*63:0*/ ysyx_top__DOT__rs1;
    QData/*63:0*/ ysyx_top__DOT__dec_imm;
    QData/*63:0*/ ysyx_top__DOT__IFU__DOT__pc;
    QData/*63:0*/ ysyx_top__DOT__IFU__DOT__next_pc;
    QData/*63:0*/ ysyx_top__DOT__Fetch__DOT___mem_data;
    QData/*63:0*/ ysyx_top__DOT__Exestage__DOT__alu_op2;
    QData/*63:0*/ ysyx_top__DOT__Exestage__DOT__alu_wbck_dat;
    VlUnpacked<QData/*63:0*/, 32> ysyx_top__DOT__Regfile__DOT__gpr;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_ysyx_top__DOT__Fetch__DOT__pmem_read__0__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_top___024root);  ///< Copying not allowed
  public:
    Vysyx_top___024root(const char* name);
    ~Vysyx_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
