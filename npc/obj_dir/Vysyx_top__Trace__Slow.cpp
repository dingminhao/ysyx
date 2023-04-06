// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_top__Syms.h"


void Vysyx_top___024root__traceInitSub0(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_top___024root__traceInitTop(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_top___024root__traceInitSub0(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+186,"clk", false,-1);
        tracep->declBit(c+187,"rst", false,-1);
        tracep->declBit(c+186,"ysyx_top clk", false,-1);
        tracep->declBit(c+187,"ysyx_top rst", false,-1);
        tracep->declQuad(c+1,"ysyx_top pc", false,-1, 63,0);
        tracep->declBus(c+3,"ysyx_top inst_data", false,-1, 31,0);
        tracep->declBus(c+4,"ysyx_top rs1_idx", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_top rs2_idx", false,-1, 4,0);
        tracep->declBus(c+6,"ysyx_top rd_idx", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_top csr_idx", false,-1, 11,0);
        tracep->declQuad(c+8,"ysyx_top imm_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_top imm_csr", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_top isNeedimmCSR", false,-1);
        tracep->declBus(c+13,"ysyx_top alu_op", false,-1, 5,0);
        tracep->declBus(c+14,"ysyx_top mem_op", false,-1, 3,0);
        tracep->declBus(c+15,"ysyx_top exc_op", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_top pc_op", false,-1, 3,0);
        tracep->declBus(c+17,"ysyx_top csr_op", false,-1, 2,0);
        tracep->declBus(c+18,"ysyx_top trap_bus", false,-1, 2,0);
        tracep->declQuad(c+19,"ysyx_top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_top w_data", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_top w_idx", false,-1, 4,0);
        tracep->declQuad(c+1,"ysyx_top csr_mepc_i", false,-1, 63,0);
        tracep->declQuad(c+188,"ysyx_top csr_mcause_i", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_top csr_mtval_i", false,-1, 63,0);
        tracep->declQuad(c+190,"ysyx_top csr_mtvec_i", false,-1, 63,0);
        tracep->declQuad(c+192,"ysyx_top csr_mstatus_i", false,-1, 63,0);
        tracep->declBit(c+27,"ysyx_top csr_mepc_i_en", false,-1);
        tracep->declBit(c+27,"ysyx_top csr_mcause_i_en", false,-1);
        tracep->declBit(c+27,"ysyx_top csr_mtval_i_en", false,-1);
        tracep->declBit(c+194,"ysyx_top csr_mtvec_i_en", false,-1);
        tracep->declBit(c+195,"ysyx_top csr_mstatus_i_en", false,-1);
        tracep->declQuad(c+28,"ysyx_top csr_mepc_o", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_top csr_mcause_o", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_top csr_mtval_o", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_top csr_mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_top csr_mstatus_o", false,-1, 63,0);
        tracep->declBus(c+7,"ysyx_top csr_readaddr", false,-1, 11,0);
        tracep->declQuad(c+38,"ysyx_top csr_readdata", false,-1, 63,0);
        tracep->declBus(c+7,"ysyx_top csr_writeaddr", false,-1, 11,0);
        tracep->declBit(c+40,"ysyx_top write_enable", false,-1);
        tracep->declQuad(c+41,"ysyx_top csr_writedata", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_top exc_out", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_top exc_csr_out", false,-1, 63,0);
        tracep->declBit(c+40,"ysyx_top exc_csr_valid", false,-1);
        tracep->declQuad(c+45,"ysyx_top mem_out", false,-1, 63,0);
        tracep->declBit(c+47,"ysyx_top isloadEnable", false,-1);
        tracep->declQuad(c+23,"ysyx_top wb_data", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_top clint_pc", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_top clint_pc_valid", false,-1);
        tracep->declBit(c+186,"ysyx_top u_pc clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_pc rst", false,-1);
        tracep->declBus(c+16,"ysyx_top u_pc pc_op", false,-1, 3,0);
        tracep->declQuad(c+19,"ysyx_top u_pc rs1_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_top u_pc imm_data", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_top u_pc execute_data", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_top u_pc clint_pc_i", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_top u_pc clint_pc_valid_i", false,-1);
        tracep->declQuad(c+1,"ysyx_top u_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+196,"ysyx_top u_pc u_regpc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+197,"ysyx_top u_pc u_regpc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+186,"ysyx_top u_pc u_regpc clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_pc u_regpc rst", false,-1);
        tracep->declQuad(c+51,"ysyx_top u_pc u_regpc din", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_top u_pc u_regpc dout", false,-1, 63,0);
        tracep->declBit(c+199,"ysyx_top u_pc u_regpc wen", false,-1);
        tracep->declQuad(c+1,"ysyx_top u_fetch inst_addr", false,-1, 63,0);
        tracep->declBus(c+3,"ysyx_top u_fetch inst_data", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_top u_dcode inst_data", false,-1, 31,0);
        tracep->declBus(c+4,"ysyx_top u_dcode rs1_idx", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_top u_dcode rs2_idx", false,-1, 4,0);
        tracep->declBus(c+6,"ysyx_top u_dcode rd_idx", false,-1, 4,0);
        tracep->declQuad(c+8,"ysyx_top u_dcode imm_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_top u_dcode immCSR", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_top u_dcode isNeedimmCSR", false,-1);
        tracep->declBus(c+7,"ysyx_top u_dcode csr_idx", false,-1, 11,0);
        tracep->declBus(c+13,"ysyx_top u_dcode alu_op", false,-1, 5,0);
        tracep->declBus(c+14,"ysyx_top u_dcode mem_op", false,-1, 3,0);
        tracep->declBus(c+15,"ysyx_top u_dcode exc_op", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_top u_dcode pc_op", false,-1, 3,0);
        tracep->declBus(c+17,"ysyx_top u_dcode csr_op", false,-1, 2,0);
        tracep->declBus(c+18,"ysyx_top u_dcode trap_bus_o", false,-1, 2,0);
        tracep->declBit(c+186,"ysyx_top u_rv64reg clk", false,-1);
        tracep->declBus(c+4,"ysyx_top u_rv64reg rs1_idx", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_top u_rv64reg rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+19,"ysyx_top u_rv64reg rs1_data", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_top u_rv64reg rs2_data", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_top u_rv64reg write_idx", false,-1, 4,0);
        tracep->declQuad(c+23,"ysyx_top u_rv64reg write_data", false,-1, 63,0);
        tracep->declBit(c+199,"ysyx_top u_rv64reg wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+53+i*2,"ysyx_top u_rv64reg rf", true,(i+0), 63,0);}}
        tracep->declBit(c+186,"ysyx_top u_rv64_csr_regfile clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_rv64_csr_regfile rst", false,-1);
        tracep->declQuad(c+192,"ysyx_top u_rv64_csr_regfile csr_mstatus_i", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_top u_rv64_csr_regfile csr_mepc_i", false,-1, 63,0);
        tracep->declQuad(c+188,"ysyx_top u_rv64_csr_regfile csr_mcause_i", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_top u_rv64_csr_regfile csr_mtval_i", false,-1, 63,0);
        tracep->declQuad(c+190,"ysyx_top u_rv64_csr_regfile csr_mtvec_i", false,-1, 63,0);
        tracep->declBit(c+195,"ysyx_top u_rv64_csr_regfile csr_mstatus_i_en", false,-1);
        tracep->declBit(c+27,"ysyx_top u_rv64_csr_regfile csr_mepc_i_en", false,-1);
        tracep->declBit(c+27,"ysyx_top u_rv64_csr_regfile csr_mcause_i_en", false,-1);
        tracep->declBit(c+27,"ysyx_top u_rv64_csr_regfile csr_mtval_i_en", false,-1);
        tracep->declBit(c+194,"ysyx_top u_rv64_csr_regfile csr_mtvec_i_en", false,-1);
        tracep->declQuad(c+36,"ysyx_top u_rv64_csr_regfile csr_mstatus_o", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_top u_rv64_csr_regfile csr_mepc_o", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_top u_rv64_csr_regfile csr_mcause_o", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_top u_rv64_csr_regfile csr_mtval_o", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_top u_rv64_csr_regfile csr_mtvec_o", false,-1, 63,0);
        tracep->declBus(c+7,"ysyx_top u_rv64_csr_regfile csr_readaddr", false,-1, 11,0);
        tracep->declQuad(c+38,"ysyx_top u_rv64_csr_regfile csr_readdata", false,-1, 63,0);
        tracep->declBus(c+7,"ysyx_top u_rv64_csr_regfile csr_writeaddr", false,-1, 11,0);
        tracep->declBit(c+40,"ysyx_top u_rv64_csr_regfile write_enable", false,-1);
        tracep->declQuad(c+41,"ysyx_top u_rv64_csr_regfile csr_writedata", false,-1, 63,0);
        tracep->declBus(c+196,"ysyx_top u_rv64_csr_regfile u_csr_mstatus WIDTH", false,-1, 31,0);
        tracep->declQuad(c+200,"ysyx_top u_rv64_csr_regfile u_csr_mstatus RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+186,"ysyx_top u_rv64_csr_regfile u_csr_mstatus clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_rv64_csr_regfile u_csr_mstatus rst", false,-1);
        tracep->declQuad(c+117,"ysyx_top u_rv64_csr_regfile u_csr_mstatus din", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_top u_rv64_csr_regfile u_csr_mstatus dout", false,-1, 63,0);
        tracep->declBit(c+119,"ysyx_top u_rv64_csr_regfile u_csr_mstatus wen", false,-1);
        tracep->declBus(c+196,"ysyx_top u_rv64_csr_regfile u_csr_mepc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_top u_rv64_csr_regfile u_csr_mepc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+186,"ysyx_top u_rv64_csr_regfile u_csr_mepc clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_rv64_csr_regfile u_csr_mepc rst", false,-1);
        tracep->declQuad(c+120,"ysyx_top u_rv64_csr_regfile u_csr_mepc din", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_top u_rv64_csr_regfile u_csr_mepc dout", false,-1, 63,0);
        tracep->declBit(c+122,"ysyx_top u_rv64_csr_regfile u_csr_mepc wen", false,-1);
        tracep->declBus(c+196,"ysyx_top u_rv64_csr_regfile u_csr_mcause WIDTH", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_top u_rv64_csr_regfile u_csr_mcause RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+186,"ysyx_top u_rv64_csr_regfile u_csr_mcause clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_rv64_csr_regfile u_csr_mcause rst", false,-1);
        tracep->declQuad(c+123,"ysyx_top u_rv64_csr_regfile u_csr_mcause din", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_top u_rv64_csr_regfile u_csr_mcause dout", false,-1, 63,0);
        tracep->declBit(c+125,"ysyx_top u_rv64_csr_regfile u_csr_mcause wen", false,-1);
        tracep->declBus(c+196,"ysyx_top u_rv64_csr_regfile u_csr_mtval WIDTH", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_top u_rv64_csr_regfile u_csr_mtval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+186,"ysyx_top u_rv64_csr_regfile u_csr_mtval clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_rv64_csr_regfile u_csr_mtval rst", false,-1);
        tracep->declQuad(c+126,"ysyx_top u_rv64_csr_regfile u_csr_mtval din", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_top u_rv64_csr_regfile u_csr_mtval dout", false,-1, 63,0);
        tracep->declBit(c+128,"ysyx_top u_rv64_csr_regfile u_csr_mtval wen", false,-1);
        tracep->declBus(c+196,"ysyx_top u_rv64_csr_regfile u_csr_mtvec WIDTH", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_top u_rv64_csr_regfile u_csr_mtvec RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+186,"ysyx_top u_rv64_csr_regfile u_csr_mtvec clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_rv64_csr_regfile u_csr_mtvec rst", false,-1);
        tracep->declQuad(c+129,"ysyx_top u_rv64_csr_regfile u_csr_mtvec din", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_top u_rv64_csr_regfile u_csr_mtvec dout", false,-1, 63,0);
        tracep->declBit(c+131,"ysyx_top u_rv64_csr_regfile u_csr_mtvec wen", false,-1);
        tracep->declQuad(c+1,"ysyx_top u_execute pc", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_top u_execute rd_idx", false,-1, 4,0);
        tracep->declQuad(c+19,"ysyx_top u_execute rs1_data", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_top u_execute rs2_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_top u_execute imm_data", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_top u_execute csr_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_top u_execute imm_CSR", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_top u_execute isNeedimmCSR", false,-1);
        tracep->declBus(c+13,"ysyx_top u_execute alu_op", false,-1, 5,0);
        tracep->declBus(c+14,"ysyx_top u_execute mem_op", false,-1, 3,0);
        tracep->declBus(c+15,"ysyx_top u_execute exc_op", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_top u_execute csr_op", false,-1, 2,0);
        tracep->declQuad(c+43,"ysyx_top u_execute exc_alu_out", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_top u_execute exc_csr_out", false,-1, 63,0);
        tracep->declBit(c+40,"ysyx_top u_execute exc_csr_valid", false,-1);
        tracep->declQuad(c+132,"ysyx_top u_execute u_alu alu_a_i", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_top u_execute u_alu alu_b_i", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_top u_execute u_alu alu_op_i", false,-1, 5,0);
        tracep->declQuad(c+136,"ysyx_top u_execute u_alu alu_out", false,-1, 63,0);
        tracep->declBit(c+138,"ysyx_top u_execute u_alu compare_out", false,-1);
        tracep->declBit(c+139,"ysyx_top u_execute u_alu u_alu_shift shift_sra", false,-1);
        tracep->declBit(c+140,"ysyx_top u_execute u_alu u_alu_shift shift_srl", false,-1);
        tracep->declBit(c+141,"ysyx_top u_execute u_alu u_alu_shift shift_sll", false,-1);
        tracep->declBit(c+142,"ysyx_top u_execute u_alu u_alu_shift isshift32", false,-1);
        tracep->declQuad(c+132,"ysyx_top u_execute u_alu u_alu_shift shift_num", false,-1, 63,0);
        tracep->declBus(c+143,"ysyx_top u_execute u_alu u_alu_shift shift_count", false,-1, 5,0);
        tracep->declQuad(c+144,"ysyx_top u_execute u_alu u_alu_shift shift_out", false,-1, 63,0);
        tracep->declBus(c+196,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+146,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert1 in", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert1 out", false,-1, 63,0);
        tracep->declBus(c+204,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert1 i", false,-1, 31,0);
        tracep->declBus(c+196,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+150,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert2 in", false,-1, 63,0);
        tracep->declQuad(c+152,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert2 out", false,-1, 63,0);
        tracep->declBus(c+204,"ysyx_top u_execute u_alu u_alu_shift u_Vectorinvert2 i", false,-1, 31,0);
        tracep->declBit(c+154,"ysyx_top u_execute u_alu u_alu_mul_top is_sr1_signed", false,-1);
        tracep->declBit(c+155,"ysyx_top u_execute u_alu u_alu_mul_top is_sr2_signed", false,-1);
        tracep->declQuad(c+132,"ysyx_top u_execute u_alu u_alu_mul_top sr1_data", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_top u_execute u_alu u_alu_mul_top sr2_data", false,-1, 63,0);
        tracep->declArray(c+156,"ysyx_top u_execute u_alu u_alu_mul_top mul_result", false,-1, 127,0);
        tracep->declBit(c+160,"ysyx_top u_execute u_alu u_alu_div_top issigned", false,-1);
        tracep->declBit(c+161,"ysyx_top u_execute u_alu u_alu_div_top isdivw", false,-1);
        tracep->declQuad(c+132,"ysyx_top u_execute u_alu u_alu_div_top sr1_data", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_top u_execute u_alu u_alu_div_top sr2_data", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_top u_execute u_alu u_alu_div_top div_result", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_top u_execute u_alu u_alu_div_top rem_result", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_top u_execute u_alu u_alu_div_top sr1_64_signed", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_top u_execute u_alu u_alu_div_top sr2_64_signed", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_top u_execute u_alu u_alu_div_top div64_signed", false,-1, 63,0);
        tracep->declQuad(c+168,"ysyx_top u_execute u_alu u_alu_div_top rem64_signed", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_top u_execute u_alu u_alu_div_top div64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_top u_execute u_alu u_alu_div_top rem64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_top u_execute u_alu u_alu_div_top div64_result", false,-1, 63,0);
        tracep->declQuad(c+176,"ysyx_top u_execute u_alu u_alu_div_top rem64_result", false,-1, 63,0);
        tracep->declBus(c+178,"ysyx_top u_execute u_alu u_alu_div_top sr1_32_signed", false,-1, 31,0);
        tracep->declBus(c+179,"ysyx_top u_execute u_alu u_alu_div_top sr2_32_signed", false,-1, 31,0);
        tracep->declBus(c+180,"ysyx_top u_execute u_alu u_alu_div_top div32_signed", false,-1, 31,0);
        tracep->declBus(c+181,"ysyx_top u_execute u_alu u_alu_div_top rem32_signed", false,-1, 31,0);
        tracep->declBus(c+182,"ysyx_top u_execute u_alu u_alu_div_top div32_unsigned", false,-1, 31,0);
        tracep->declBus(c+183,"ysyx_top u_execute u_alu u_alu_div_top rem32_unsigned", false,-1, 31,0);
        tracep->declBus(c+184,"ysyx_top u_execute u_alu u_alu_div_top div32_result", false,-1, 31,0);
        tracep->declBus(c+185,"ysyx_top u_execute u_alu u_alu_div_top rem32_result", false,-1, 31,0);
        tracep->declQuad(c+10,"ysyx_top u_execute u_execute_csr imm_CSR_i", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_top u_execute u_execute_csr isNeedimmCSR_i", false,-1);
        tracep->declQuad(c+19,"ysyx_top u_execute u_execute_csr rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_top u_execute u_execute_csr csr_data_i", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_top u_execute u_execute_csr csr_op_i", false,-1, 2,0);
        tracep->declQuad(c+41,"ysyx_top u_execute u_execute_csr csr_exe_result", false,-1, 63,0);
        tracep->declBit(c+40,"ysyx_top u_execute u_execute_csr csr_exe_valid", false,-1);
        tracep->declBit(c+186,"ysyx_top u_memory clk", false,-1);
        tracep->declBit(c+187,"ysyx_top u_memory rst", false,-1);
        tracep->declQuad(c+1,"ysyx_top u_memory pc", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_top u_memory rd_idx", false,-1, 4,0);
        tracep->declQuad(c+19,"ysyx_top u_memory rs1_data", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_top u_memory rs2_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_top u_memory imm_data", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_top u_memory mem_op", false,-1, 3,0);
        tracep->declQuad(c+43,"ysyx_top u_memory exc_in", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_top u_memory mem_out", false,-1, 63,0);
        tracep->declBit(c+47,"ysyx_top u_memory isloadEnable", false,-1);
        tracep->declQuad(c+43,"ysyx_top u_writeback exc_data_in", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_top u_writeback mem_data_in", false,-1, 63,0);
        tracep->declBit(c+47,"ysyx_top u_writeback isloadEnable", false,-1);
        tracep->declQuad(c+23,"ysyx_top u_writeback wb_data", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_top u_clint pc_i", false,-1, 63,0);
        tracep->declBus(c+3,"ysyx_top u_clint inst_data_i", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_top u_clint trap_bus_i", false,-1, 2,0);
        tracep->declQuad(c+36,"ysyx_top u_clint csr_mstatus_clint_i", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_top u_clint csr_mepc_clint_i", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_top u_clint csr_mcause_clint_i", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_top u_clint csr_mtval_clint_i", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_top u_clint csr_mtvec_clint_i", false,-1, 63,0);
        tracep->declQuad(c+192,"ysyx_top u_clint csr_mstatus_clint_o", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_top u_clint csr_mepc_clint_o", false,-1, 63,0);
        tracep->declQuad(c+188,"ysyx_top u_clint csr_mcause_clint_o", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_top u_clint csr_mtval_clint_o", false,-1, 63,0);
        tracep->declQuad(c+190,"ysyx_top u_clint csr_mtvec_clint_o", false,-1, 63,0);
        tracep->declBit(c+195,"ysyx_top u_clint csr_mstatus_clint_o_valid", false,-1);
        tracep->declBit(c+27,"ysyx_top u_clint csr_mepc_clint_o_valid", false,-1);
        tracep->declBit(c+27,"ysyx_top u_clint csr_mcause_clint_o_valid", false,-1);
        tracep->declBit(c+27,"ysyx_top u_clint csr_mtval_clint_o_valid", false,-1);
        tracep->declBit(c+194,"ysyx_top u_clint csr_mtvec_clint_o_valid", false,-1);
        tracep->declQuad(c+48,"ysyx_top u_clint clint_pc_o", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_top u_clint clint_pc_valid_o", false,-1);
    }
}

void Vysyx_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_top___024root__traceRegister(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_top___024root__traceFullSub0(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_top___024root* const __restrict vlSelf = static_cast<Vysyx_top___024root*>(voidSelf);
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_top___024root__traceFullSub0(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_top__DOT__u_pc__DOT___pc_current),64);
        tracep->fullIData(oldp+3,((IData)(vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data)),32);
        tracep->fullCData(oldp+4,(((((((IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___R_type) 
                                       | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___I_type)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_store)) 
                                     | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_branch)) 
                                    & (~ (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___isNeed_immCSR)))
                                    ? (0x1fU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data 
                                                        >> 0xfU)))
                                    : 0U)),5);
        tracep->fullCData(oldp+5,(((((IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___R_type) 
                                     | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_store)) 
                                    | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_branch))
                                    ? (0x1fU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data 
                                                        >> 0x14U)))
                                    : 0U)),5);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_top__DOT__u_dcode__DOT___rd_idx),5);
        tracep->fullSData(oldp+7,(vlSelf->ysyx_top__DOT__u_dcode__DOT___csr_idx),12);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_top__DOT__u_dcode__DOT___imm_data),64);
        tracep->fullQData(oldp+10,((QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data 
                                                               >> 0xfU)))))),64);
        tracep->fullBit(oldp+12,(vlSelf->ysyx_top__DOT__u_dcode__DOT___isNeed_immCSR));
        tracep->fullCData(oldp+13,(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op),6);
        tracep->fullCData(oldp+14,(vlSelf->ysyx_top__DOT__u_dcode__DOT___mem_op),4);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_top__DOT__u_dcode__DOT___exc_op),5);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op),4);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_top__DOT__u_dcode__DOT___csr_op),3);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus),3);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_top__DOT__rs1_data),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_top__DOT__rs2_data),64);
        tracep->fullQData(oldp+23,((((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned) 
                                     | (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed))
                                     ? ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed)
                                         ? ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte)
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 7U)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))
                                             : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte)
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))
                                                 : 
                                                ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))
                                                  : vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))
                                         : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned)
                                             ? ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))
                                                 : 
                                                ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte)
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte)
                                                   ? (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))
                                                   : vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))
                                             : 0ULL))
                                     : vlSelf->ysyx_top__DOT__exc_out)),64);
        tracep->fullQData(oldp+25,((QData)((IData)(vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data))),64);
        tracep->fullBit(oldp+27,((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))));
        tracep->fullQData(oldp+28,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_q),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mcause_q),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtval_q),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_q),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mstatus_q),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___csr_readdata),64);
        tracep->fullBit(oldp+40,(vlSelf->ysyx_top__DOT__u_execute__DOT___csr_exe_valid));
        tracep->fullQData(oldp+41,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_top__DOT__exc_out),64);
        tracep->fullQData(oldp+45,(((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed)
                                     ? ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte)
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                            >> 7U)))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))
                                         : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte)
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0xfU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))
                                             : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte)
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))
                                                 : vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))
                                     : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned)
                                         ? ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte)
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))
                                             : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))
                                                 : 
                                                ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte)
                                                  ? (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))
                                                  : vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))
                                         : 0ULL))),64);
        tracep->fullBit(oldp+47,(((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned) 
                                  | (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed))));
        tracep->fullQData(oldp+48,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus) 
                                                            >> 2U))))) 
                                     & vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))))) 
                                       & vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))),64);
        tracep->fullBit(oldp+50,((IData)((0U != (7U 
                                                 & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))))));
        tracep->fullQData(oldp+51,((((((- (QData)((IData)(
                                                          ((((IData)(vlSelf->ysyx_top__DOT__u_pc__DOT___isready_branch) 
                                                             | (2U 
                                                                == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op))) 
                                                            | (IData)(vlSelf->ysyx_top__DOT__u_pc__DOT___isready_inc4)) 
                                                           | (0U 
                                                              == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op)))))) 
                                       & vlSelf->ysyx_top__DOT__u_pc__DOT___pc_current) 
                                      | ((- (QData)((IData)(
                                                            (3U 
                                                             == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op))))) 
                                         & vlSelf->ysyx_top__DOT__rs1_data)) 
                                     | ((- (QData)((IData)(
                                                           (5U 
                                                            == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op))))) 
                                        & (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus) 
                                                                   >> 2U))))) 
                                            & vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))))) 
                                              & vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_q)))) 
                                    + (((- (QData)((IData)(
                                                           (((IData)(vlSelf->ysyx_top__DOT__u_pc__DOT___isready_branch) 
                                                             | (2U 
                                                                == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op))) 
                                                            | (3U 
                                                               == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op)))))) 
                                        & vlSelf->ysyx_top__DOT__u_dcode__DOT___imm_data) 
                                       | (4ULL & (- (QData)((IData)(vlSelf->ysyx_top__DOT__u_pc__DOT___isready_inc4))))))),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[0]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[1]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[2]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[3]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[4]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[5]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[6]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[7]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[8]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[9]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[10]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[11]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[12]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[13]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[14]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[15]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[16]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[17]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[18]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[19]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[20]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[21]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[22]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[23]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[24]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[25]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[26]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[27]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[28]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[29]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[30]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[31]),64);
        tracep->fullQData(oldp+117,(((IData)(vlSelf->ysyx_top__DOT__csr_mstatus_i_en)
                                      ? vlSelf->ysyx_top__DOT__csr_mstatus_i
                                      : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
        tracep->fullBit(oldp+119,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mstatus_en));
        tracep->fullQData(oldp+120,(((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))
                                      ? vlSelf->ysyx_top__DOT__u_pc__DOT___pc_current
                                      : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
        tracep->fullBit(oldp+122,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_en));
        tracep->fullQData(oldp+123,(((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))
                                      ? 0xbULL : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
        tracep->fullBit(oldp+125,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mcause_en));
        tracep->fullQData(oldp+126,(((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))
                                      ? (QData)((IData)(vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data))
                                      : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
        tracep->fullBit(oldp+128,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtval_en));
        tracep->fullQData(oldp+129,(((IData)(vlSelf->ysyx_top__DOT__csr_mtvec_i_en)
                                      ? vlSelf->ysyx_top__DOT__csr_mtvec_i
                                      : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
        tracep->fullBit(oldp+131,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_en));
        tracep->fullQData(oldp+132,(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_out),64);
        tracep->fullBit(oldp+138,(((((((((0xcU == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                         | (0x10U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                        & (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isSLT)) 
                                       | (((0xdU == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                          & (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isCF))) 
                                      | ((0xeU == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                         & (0U == (
                                                   (vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[0U] 
                                                    | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[1U]) 
                                                   | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[2U])))) 
                                     | ((0xfU == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                        & (0U != ((
                                                   vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[0U] 
                                                   | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[1U]) 
                                                  | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[2U])))) 
                                    | ((0x11U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                       & (~ (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isSLT)))) 
                                   | ((0x13U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                      & (~ (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isCF))))));
        tracep->fullBit(oldp+139,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sra));
        tracep->fullBit(oldp+140,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_srl));
        tracep->fullBit(oldp+141,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sll));
        tracep->fullBit(oldp+142,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isshift32));
        tracep->fullCData(oldp+143,((0x3fU & (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),6);
        tracep->fullQData(oldp+144,(((((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_srl))) 
                                       & vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                      | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sra))) 
                                         & ((vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                             & (0xffffffffffffffffULL 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isshift32)
                                                     ? 
                                                    ((IData)(0x20U) 
                                                     + (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                                     : (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))) 
                                            | ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isshift32)
                                                                       ? (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                                >> 0x1fU))
                                                                       : (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                                >> 0x3fU))))))) 
                                               & (~ 
                                                  (0xffffffffffffffffULL 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isshift32)
                                                        ? 
                                                       ((IData)(0x20U) 
                                                        + (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                                        : (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))))))) 
                                     | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sll))) 
                                        & vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res))),64);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
        tracep->fullBit(oldp+154,(((((0x14U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                     | (0x15U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                    | (0x16U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                   | (0x18U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)))));
        tracep->fullBit(oldp+155,((((0x14U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                    | (0x15U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                   | (0x18U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)))));
        tracep->fullWData(oldp+156,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
        tracep->fullBit(oldp+160,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed));
        tracep->fullBit(oldp+161,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div32));
        tracep->fullQData(oldp+162,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_DIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                                          : 
                                                         VL_DIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_DIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                          : VL_DIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+164,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                                          : 
                                                         VL_MODDIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                          : VL_MODDIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+166,(VL_DIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+168,(VL_MODDIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+170,(VL_DIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+172,(VL_MODDIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+174,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                      : VL_DIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),64);
        tracep->fullQData(oldp+176,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                      : VL_MODDIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),64);
        tracep->fullIData(oldp+178,((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1)),32);
        tracep->fullIData(oldp+179,((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),32);
        tracep->fullIData(oldp+180,(VL_DIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+181,(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+182,(VL_DIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+183,(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+184,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                      : VL_DIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),32);
        tracep->fullIData(oldp+185,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                      : VL_MODDIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),32);
        tracep->fullBit(oldp+186,(vlSelf->clk));
        tracep->fullBit(oldp+187,(vlSelf->rst));
        tracep->fullQData(oldp+188,(0xbULL),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_top__DOT__csr_mtvec_i),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_top__DOT__csr_mstatus_i),64);
        tracep->fullBit(oldp+194,(vlSelf->ysyx_top__DOT__csr_mtvec_i_en));
        tracep->fullBit(oldp+195,(vlSelf->ysyx_top__DOT__csr_mstatus_i_en));
        tracep->fullIData(oldp+196,(0x40U),32);
        tracep->fullQData(oldp+197,(0x80000000ULL),64);
        tracep->fullBit(oldp+199,(1U));
        tracep->fullQData(oldp+200,(0xa00001800ULL),64);
        tracep->fullQData(oldp+202,(0ULL),64);
        tracep->fullIData(oldp+204,(0x40U),32);
    }
}
