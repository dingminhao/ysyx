// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22051145_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22051145_TOP___024ROOT_H_
#define VERILATED_VYSYX_22051145_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_22051145_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_22051145_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*4:0*/ ysyx_22051145_top__DOT__rs1_idx_id;
        CData/*4:0*/ ysyx_22051145_top__DOT__rs2_idx_id;
        CData/*0:0*/ ysyx_22051145_top__DOT__csr_imm_valid_id;
        CData/*5:0*/ ysyx_22051145_top__DOT__alu_op_id;
        CData/*0:0*/ ysyx_22051145_top__DOT__branch_pc_valid_ex;
        CData/*0:0*/ ysyx_22051145_top__DOT__mem_addr_valid_mem;
        CData/*7:0*/ ysyx_22051145_top__DOT__mem_mask_mem;
        CData/*0:0*/ ysyx_22051145_top__DOT__mem_write_valid_mem;
        CData/*0:0*/ ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint;
        CData/*0:0*/ ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint;
        CData/*0:0*/ ysyx_22051145_top__DOT__pc_valid_clint;
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
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_system;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrs;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrsi;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrci;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__1;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__2;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__3;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____Vlvbound_h5ef3d2fe__4;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0143d8e0__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h508df530__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hc2adbad0__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hee46d4cd__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h9544ad33__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h484ad146__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h94800a04__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a47a976__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a438939__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a0e4e0c__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c33f7e4__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460b92c8__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h460970ce__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0a21b2bf__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h0c7787b0__0;
    };
    struct {
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h33ce3db6__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h06d92975__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h7f89d5de__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h5222d4b7__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h25bafa9b__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_h646f00cc__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_ha2d02da5__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_idx_id_ex_q;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_idx_id_ex_q;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q;
        CData/*5:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q;
        CData/*2:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_rs2;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___rs1_imm;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___pc_4;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT____Vlvbound_h0e717000__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCMP;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSUBop;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isCF;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isSLT;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_h0abc0979__0;
        CData/*5:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2;
        CData/*5:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_op_ex_mem_q;
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___unsigned;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___signed;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____Vlvbound_h48565a95__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h7035a01d__0;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c81849f__0;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_d;
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
    };
    struct {
        CData/*3:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_idx_reg;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_tag_wen;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o;
        CData/*7:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_rmask_icache_o;
        CData/*0:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen;
        CData/*4:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx;
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
        CData/*2:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3;
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
        CData/*5:0*/ __Vtableidx1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_22051145_top__DOT__csr_idx_id;
        SData/*11:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q;
        SData/*11:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q;
        SData/*15:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6f46f780__0;
        SData/*11:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q;
        IData/*31:0*/ ysyx_22051145_top__DOT__mem_addr_mem;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus;
        VlWide<3>/*64:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_b;
        VlWide<3>/*64:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___add_out;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q;
        IData/*18:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT____VdfgTmp_h6c9de06a__0;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___inst_data_mem_wb_q;
        IData/*22:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_tag_reg;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_icache_o;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__cache_line_temp;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__i;
        IData/*22:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag;
        IData/*22:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_tag_reg;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_dcache_o;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_dcache_o;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_temp;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp;
    };
    struct {
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask;
        VlWide<4>/*127:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__i;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_waddr;
        IData/*31:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_raddr;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_22051145_top__DOT__pc_next;
        QData/*63:0*/ ysyx_22051145_top__DOT__exc_alu_data_ex;
        QData/*63:0*/ ysyx_22051145_top__DOT__mem_wdata_mem;
        QData/*63:0*/ ysyx_22051145_top__DOT__mem_data_mem;
        QData/*63:0*/ ysyx_22051145_top__DOT__csr_mstatus_writedata_clint;
        QData/*63:0*/ ysyx_22051145_top__DOT__csr_mtvec_writedata_clint;
        QData/*63:0*/ ysyx_22051145_top__DOT__mem_rdata_dcache;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___alu_out;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs1_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___imm_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_read;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_d;
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
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_rdata;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o;
        QData/*63:0*/ ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o;
        QData/*63:0*/ __Vtask_ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT__pmem_read__5__rdata;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf;
    };
    struct {
        VlUnpacked<IData/*22:0*/, 32> ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram;
        VlUnpacked<IData/*22:0*/, 32> ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_data__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_22051145_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_22051145_top___024root(Vysyx_22051145_top__Syms* symsp, const char* v__name);
    ~Vysyx_22051145_top___024root();
    VL_UNCOPYABLE(Vysyx_22051145_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
