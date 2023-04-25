// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__csr_mstatus_write_valid;
        CData/*0:0*/ top__DOT__csr_mtvec_write_valid;
        CData/*5:0*/ top__DOT__stall_clint;
        CData/*5:0*/ top__DOT__flush_clint;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_load;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_store;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_branch;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_jalr;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_jal;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_op_imm;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_op;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_auipc;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_lui;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_op_imm_32;
        CData/*0:0*/ top__DOT__u_dcode__DOT___type_op_32;
        CData/*0:0*/ top__DOT__u_dcode__DOT___inst_ebreak;
        CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrw;
        CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrwi;
        CData/*0:0*/ top__DOT__u_dcode__DOT___R_type;
        CData/*0:0*/ top__DOT__u_dcode__DOT___I_type;
        CData/*0:0*/ top__DOT__u_dcode__DOT___U_type;
        CData/*0:0*/ top__DOT__u_dcode__DOT___csr_imm_valid;
        CData/*0:0*/ top__DOT__u_dcode__DOT___isNeed_csr;
        CData/*4:0*/ top__DOT__u_dcode__DOT___rs1_idx;
        CData/*4:0*/ top__DOT__u_dcode__DOT___rs2_idx;
        CData/*0:0*/ top__DOT__u_dcode__DOT___rs1_exc_bypass_valid;
        CData/*0:0*/ top__DOT__u_dcode__DOT___rs2_exc_bypass_valid;
        CData/*0:0*/ top__DOT__u_dcode__DOT___load_use_data_hazard_valid;
        CData/*0:0*/ top__DOT__u_dcode__DOT___csr_set;
        CData/*0:0*/ top__DOT__u_dcode__DOT___csr_clear;
        CData/*5:0*/ top__DOT__u_dcode__DOT___alu_op;
        CData/*3:0*/ top__DOT__u_dcode__DOT___mem_op;
        CData/*4:0*/ top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q;
        CData/*4:0*/ top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q;
        CData/*4:0*/ top__DOT__u_id_ex__DOT___rd_idx_id_ex_q;
        CData/*0:0*/ top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q;
        CData/*5:0*/ top__DOT__u_id_ex__DOT___alu_op_id_ex_q;
        CData/*3:0*/ top__DOT__u_id_ex__DOT___mem_op_id_ex_q;
        CData/*4:0*/ top__DOT__u_id_ex__DOT___exc_op_id_ex_q;
        CData/*3:0*/ top__DOT__u_id_ex__DOT___pc_op_id_ex_q;
        CData/*2:0*/ top__DOT__u_id_ex__DOT___csr_op_id_ex_q;
        CData/*0:0*/ top__DOT__u_execute_top__DOT___branch_pc_valid;
        CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out;
        CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra;
        CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl;
        CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll;
        CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32;
        CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed;
        CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32;
        CData/*5:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2;
        CData/*4:0*/ top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q;
        CData/*0:0*/ top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q;
        CData/*3:0*/ top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q;
        CData/*3:0*/ top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q;
        CData/*0:0*/ top__DOT__u_clint__DOT___trap_valid;
        CData/*0:0*/ top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q;
        CData/*0:0*/ top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q;
        CData/*0:0*/ top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q;
        CData/*0:0*/ top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q;
        CData/*0:0*/ top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q;
        CData/*0:0*/ top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
        CData/*4:0*/ top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q;
        CData/*0:0*/ top__DOT__u_rv64_csr_regfile__DOT___mstatus_en;
        CData/*0:0*/ top__DOT__u_rv64_csr_regfile__DOT___mepc_en;
    };
    struct {
        CData/*0:0*/ top__DOT__u_rv64_csr_regfile__DOT___mcause_en;
        CData/*0:0*/ top__DOT__u_rv64_csr_regfile__DOT___mtval_en;
        CData/*0:0*/ top__DOT__u_rv64_csr_regfile__DOT___mtvec_en;
        SData/*11:0*/ top__DOT__u_dcode__DOT___csr_idx;
        SData/*11:0*/ top__DOT__u_id_ex__DOT___csr_idx_id_ex_q;
        SData/*11:0*/ top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q;
        SData/*11:0*/ top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q;
        IData/*18:0*/ top__DOT__u_fetch__DOT___if_trap_bus;
        IData/*31:0*/ top__DOT__u_if_id__DOT___inst_data_if_id_q;
        IData/*18:0*/ top__DOT__u_if_id__DOT___trap_bus_if_id_q;
        IData/*18:0*/ top__DOT__u_dcode__DOT___decode_trap_bus;
        IData/*31:0*/ top__DOT__u_id_ex__DOT___inst_data_id_ex_q;
        IData/*18:0*/ top__DOT__u_id_ex__DOT___trap_bus_id_ex_q;
        IData/*18:0*/ top__DOT__u_execute_top__DOT___exc_trap_bus;
        VlWide<4>/*127:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result;
        IData/*31:0*/ top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q;
        IData/*18:0*/ top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q;
        IData/*18:0*/ top__DOT__u_memory__DOT___mem_trap_bus;
        IData/*31:0*/ top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q;
        QData/*63:0*/ top__DOT__exc_alu_data_ex;
        QData/*63:0*/ top__DOT__mem_data_mem;
        QData/*63:0*/ top__DOT__csr_mstatus_writedata;
        QData/*63:0*/ top__DOT__csr_mtvec_writedata;
        QData/*63:0*/ top__DOT__u_pc_reg__DOT___pc_next;
        QData/*63:0*/ top__DOT__u_pc_reg__DOT___pc_current;
        QData/*63:0*/ top__DOT__u_fetch__DOT___mem_data;
        QData/*63:0*/ top__DOT__u_if_id__DOT___inst_addr_if_id_q;
        QData/*63:0*/ top__DOT__u_dcode__DOT___imm_data;
        QData/*63:0*/ top__DOT__u_id_ex__DOT___pc_id_ex_q;
        QData/*63:0*/ top__DOT__u_id_ex__DOT___imm_data_id_ex_q;
        QData/*63:0*/ top__DOT__u_id_ex__DOT___csr_imm_id_ex_q;
        QData/*63:0*/ top__DOT__u_id_ex__DOT___rs1_data_id_ex_q;
        QData/*63:0*/ top__DOT__u_id_ex__DOT___rs2_data_id_ex_q;
        QData/*63:0*/ top__DOT__u_id_ex__DOT___csr_data_id_ex_q;
        QData/*63:0*/ top__DOT__u_execute_top__DOT___alu_in1;
        QData/*63:0*/ top__DOT__u_execute_top__DOT___alu_in2;
        QData/*63:0*/ top__DOT__u_execute_top__DOT___alu_out;
        QData/*63:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num;
        QData/*63:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv;
        QData/*63:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res;
        QData/*63:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res;
        QData/*63:0*/ top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2;
        QData/*63:0*/ top__DOT__u_ex_mem__DOT___pc_ex_mem_q;
        QData/*63:0*/ top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q;
        QData/*63:0*/ top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q;
        QData/*63:0*/ top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q;
        QData/*63:0*/ top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q;
        QData/*63:0*/ top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___pc_mem_wb_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q;
        QData/*63:0*/ top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q;
        QData/*63:0*/ top__DOT__u_rv64_gpr_regfile__DOT___write_data;
        QData/*63:0*/ top__DOT__u_rv64_csr_regfile__DOT___mstatus_q;
        QData/*63:0*/ top__DOT__u_rv64_csr_regfile__DOT___mepc_q;
        QData/*63:0*/ top__DOT__u_rv64_csr_regfile__DOT___mcause_q;
        QData/*63:0*/ top__DOT__u_rv64_csr_regfile__DOT___mtval_q;
        QData/*63:0*/ top__DOT__u_rv64_csr_regfile__DOT___mtvec_q;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__u_rv64_gpr_regfile__DOT__rf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_top__DOT__u_fetch__DOT__pmem_inst_read__0__rdata;
    QData/*63:0*/ __Vtask_top__DOT__u_fetch__DOT__pmem_inst_read__1__rdata;
    QData/*63:0*/ __Vtask_top__DOT__u_memory__DOT__pmem_read__2__rdata;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
