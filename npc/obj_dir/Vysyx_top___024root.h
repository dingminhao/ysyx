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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_top__DOT__csr_mtvec_i_en;
        CData/*0:0*/ ysyx_top__DOT__csr_mstatus_i_en;
        CData/*0:0*/ ysyx_top__DOT__u_pc__DOT___isready_branch;
        CData/*0:0*/ ysyx_top__DOT__u_pc__DOT___isready_inc4;
        CData/*0:0*/ ysyx_top__DOT__u_dcode__DOT___type_store;
        CData/*0:0*/ ysyx_top__DOT__u_dcode__DOT___type_branch;
        CData/*0:0*/ ysyx_top__DOT__u_dcode__DOT___R_type;
        CData/*0:0*/ ysyx_top__DOT__u_dcode__DOT___I_type;
        CData/*0:0*/ ysyx_top__DOT__u_dcode__DOT___isNeed_immCSR;
        CData/*4:0*/ ysyx_top__DOT__u_dcode__DOT___rd_idx;
        CData/*2:0*/ ysyx_top__DOT__u_dcode__DOT___csr_op;
        CData/*5:0*/ ysyx_top__DOT__u_dcode__DOT___alu_op;
        CData/*4:0*/ ysyx_top__DOT__u_dcode__DOT___exc_op;
        CData/*3:0*/ ysyx_top__DOT__u_dcode__DOT___mem_op;
        CData/*3:0*/ ysyx_top__DOT__u_dcode__DOT___pc_op;
        CData/*2:0*/ ysyx_top__DOT__u_dcode__DOT___decode_trap_bus;
        CData/*0:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mstatus_en;
        CData/*0:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_en;
        CData/*0:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mcause_en;
        CData/*0:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtval_en;
        CData/*0:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_en;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT___csr_exe_valid;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isCF;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isSLT;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sra;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_srl;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sll;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isshift32;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed;
        CData/*0:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div32;
        CData/*5:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2;
        CData/*0:0*/ ysyx_top__DOT__u_memory__DOT___ls8byte;
        CData/*0:0*/ ysyx_top__DOT__u_memory__DOT___ls16byte;
        CData/*0:0*/ ysyx_top__DOT__u_memory__DOT___ls32byte;
        CData/*0:0*/ ysyx_top__DOT__u_memory__DOT___ls64byte;
        CData/*0:0*/ ysyx_top__DOT__u_memory__DOT___unsigned;
        CData/*0:0*/ ysyx_top__DOT__u_memory__DOT___signed;
        SData/*11:0*/ ysyx_top__DOT__u_dcode__DOT___csr_idx;
        VlWide<3>/*64:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out;
        VlWide<4>/*127:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result;
        QData/*63:0*/ ysyx_top__DOT__rs1_data;
        QData/*63:0*/ ysyx_top__DOT__rs2_data;
        QData/*63:0*/ ysyx_top__DOT__csr_mtvec_i;
        QData/*63:0*/ ysyx_top__DOT__csr_mstatus_i;
        QData/*63:0*/ ysyx_top__DOT__exc_out;
        QData/*63:0*/ ysyx_top__DOT__u_pc__DOT___pc_next;
        QData/*63:0*/ ysyx_top__DOT__u_pc__DOT___pc_current;
        QData/*63:0*/ ysyx_top__DOT__u_fetch__DOT___mem_data;
        QData/*63:0*/ ysyx_top__DOT__u_dcode__DOT___imm_data;
        QData/*63:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mstatus_q;
        QData/*63:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_q;
        QData/*63:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mcause_q;
        QData/*63:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtval_q;
        QData/*63:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_q;
        QData/*63:0*/ ysyx_top__DOT__u_rv64_csr_regfile__DOT___csr_readdata;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT___alu_in1;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT___alu_in2;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT___alu_out;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res;
        QData/*63:0*/ ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result;
        QData/*63:0*/ ysyx_top__DOT__u_memory__DOT___mem_read;
    };
    struct {
        QData/*63:0*/ ysyx_top__DOT__u_memory__DOT___addr;
        VlUnpacked<QData/*63:0*/, 32> ysyx_top__DOT__u_rv64reg__DOT__rf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_ysyx_top__DOT__u_fetch__DOT__pmem_read__0__rdata;
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
