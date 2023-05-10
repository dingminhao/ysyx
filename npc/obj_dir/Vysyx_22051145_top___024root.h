// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22051145_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22051145_TOP___024ROOT_H_
#define VERILATED_VYSYX_22051145_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22051145_top__Syms;
class Vysyx_22051145_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22051145_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22051145_top__DOT__mem_addr_valid_mem;
        CData/*0:0*/ ysyx_22051145_top__DOT__mem_write_valid_mem;
        CData/*0:0*/ ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint;
        CData/*0:0*/ ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint;
        CData/*5:0*/ ysyx_22051145_top__DOT__stall_clint;
        CData/*5:0*/ ysyx_22051145_top__DOT__flush_clint;
        CData/*0:0*/ ysyx_22051145_top__DOT__if_rdata_valid_icache;
        CData/*0:0*/ ysyx_22051145_top__DOT__mem_data_ready_dcache;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrw;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_imm_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear;
        CData/*5:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___alu_op;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___mem_op;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_idx_id_ex_q;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_idx_id_ex_q;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q;
        CData/*5:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q;
        CData/*2:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___branch_pc_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32;
        CData/*5:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_op_ex_mem_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isload;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask;
    };
    struct {
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_clint__DOT___trap_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_state;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_idx_reg;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_tag_wen;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_rmask_icache_o;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_state;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_idx_reg;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_tag_wen;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_rdata_ok;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_rmask_dcache_o;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_valid_dcache_o;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wmask_dcache_o;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_wmask;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_ready;
        CData/*2:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_state;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rmask;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_read_valid;
        CData/*2:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_read_state;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_if;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_mem;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o;
        SData/*11:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx;
        SData/*11:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q;
        SData/*11:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q;
        SData/*11:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___inst_data_mem_wb_q;
        IData/*22:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_tag_reg;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_icache_o;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__cache_line_temp;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__i;
        IData/*22:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_tag_reg;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_dcache_o;
    };
    struct {
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_dcache_o;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_temp;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__i;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_waddr;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_raddr;
        QData/*63:0*/ ysyx_22051145_top__DOT__pc_next;
        QData/*63:0*/ ysyx_22051145_top__DOT__exc_alu_data_ex;
        QData/*63:0*/ ysyx_22051145_top__DOT__mem_data_mem;
        QData/*63:0*/ ysyx_22051145_top__DOT__csr_mstatus_writedata_clint;
        QData/*63:0*/ ysyx_22051145_top__DOT__csr_mtvec_writedata_clint;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___imm_data;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs1_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___imm_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___pc_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___mem_data_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wdata_dcache_o;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_wdata;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf;
        VlUnpacked<IData/*22:0*/, 32> ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram;
        VlUnpacked<IData/*22:0*/, 32> ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read__5__rdata;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22051145_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22051145_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22051145_top___024root(const char* name);
    ~Vysyx_22051145_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22051145_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
