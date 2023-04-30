// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+347,"clk", false,-1);
        tracep->declBit(c+348,"rst", false,-1);
        tracep->declBit(c+347,"top clk", false,-1);
        tracep->declBit(c+348,"top rst", false,-1);
        tracep->declQuad(c+1,"top inst_addr", false,-1, 63,0);
        tracep->declQuad(c+1,"top inst_addr_if", false,-1, 63,0);
        tracep->declBus(c+319,"top inst_data_if", false,-1, 31,0);
        tracep->declBus(c+349,"top trap_bus_if", false,-1, 18,0);
        tracep->declQuad(c+3,"top inst_addr_if_id", false,-1, 63,0);
        tracep->declBus(c+5,"top inst_data_if_id", false,-1, 31,0);
        tracep->declBus(c+6,"top trap_bus_if_id", false,-1, 18,0);
        tracep->declBus(c+7,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+8,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBus(c+9,"top rd_idx_id", false,-1, 4,0);
        tracep->declQuad(c+10,"top rs1_data_id", false,-1, 63,0);
        tracep->declQuad(c+12,"top rs2_data_id", false,-1, 63,0);
        tracep->declQuad(c+14,"top imm_data_id", false,-1, 63,0);
        tracep->declQuad(c+16,"top csr_imm_id", false,-1, 63,0);
        tracep->declBit(c+18,"top csr_imm_valid_id", false,-1);
        tracep->declBus(c+19,"top csr_idx_id", false,-1, 11,0);
        tracep->declQuad(c+20,"top csr_readdata_id", false,-1, 63,0);
        tracep->declBus(c+22,"top alu_op_id", false,-1, 5,0);
        tracep->declBus(c+23,"top mem_op_id", false,-1, 3,0);
        tracep->declBus(c+24,"top exc_op_id", false,-1, 4,0);
        tracep->declBus(c+350,"top pc_op_id", false,-1, 3,0);
        tracep->declBus(c+25,"top csr_op_id", false,-1, 2,0);
        tracep->declQuad(c+3,"top inst_addr_id", false,-1, 63,0);
        tracep->declBus(c+5,"top inst_data_id", false,-1, 31,0);
        tracep->declBit(c+26,"top load_use_valid", false,-1);
        tracep->declBus(c+27,"top trap_bus_id", false,-1, 18,0);
        tracep->declBus(c+28,"top rs1_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+29,"top rs2_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+30,"top rd_idx_id_ex", false,-1, 4,0);
        tracep->declQuad(c+31,"top rs1_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+33,"top rs2_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+35,"top imm_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+37,"top csr_imm_id_ex", false,-1, 63,0);
        tracep->declBit(c+39,"top csr_imm_valid_id_ex", false,-1);
        tracep->declBus(c+40,"top csr_idx_id_ex", false,-1, 11,0);
        tracep->declQuad(c+41,"top csr_readdata_id_ex", false,-1, 63,0);
        tracep->declBus(c+43,"top alu_op_id_ex", false,-1, 5,0);
        tracep->declBus(c+44,"top mem_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+45,"top exc_op_id_ex", false,-1, 4,0);
        tracep->declBus(c+46,"top pc_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+47,"top csr_op_id_ex", false,-1, 2,0);
        tracep->declQuad(c+48,"top inst_addr_id_ex", false,-1, 63,0);
        tracep->declBus(c+50,"top inst_data_id_ex", false,-1, 31,0);
        tracep->declBus(c+51,"top trap_bus_id_ex", false,-1, 18,0);
        tracep->declQuad(c+48,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+50,"top inst_data_ex", false,-1, 31,0);
        tracep->declBus(c+30,"top rd_idx_ex", false,-1, 4,0);
        tracep->declQuad(c+31,"top rs1_data_ex", false,-1, 63,0);
        tracep->declQuad(c+33,"top rs2_data_ex", false,-1, 63,0);
        tracep->declQuad(c+35,"top imm_data_ex", false,-1, 63,0);
        tracep->declQuad(c+41,"top csr_data_ex", false,-1, 63,0);
        tracep->declQuad(c+37,"top csr_imm_ex", false,-1, 63,0);
        tracep->declBit(c+39,"top csr_imm_valid_ex", false,-1);
        tracep->declBus(c+44,"top mem_op_ex", false,-1, 3,0);
        tracep->declBus(c+46,"top pc_op_ex", false,-1, 3,0);
        tracep->declQuad(c+52,"top exc_alu_data_ex", false,-1, 63,0);
        tracep->declQuad(c+54,"top exc_csr_data_ex", false,-1, 63,0);
        tracep->declBit(c+56,"top exc_csr_valid_ex", false,-1);
        tracep->declBus(c+40,"top exc_csr_addr_ex", false,-1, 11,0);
        tracep->declBus(c+45,"top exc_op_ex", false,-1, 4,0);
        tracep->declBit(c+57,"top jump_hazard_valid", false,-1);
        tracep->declBus(c+58,"top trap_bus_ex", false,-1, 18,0);
        tracep->declQuad(c+59,"top branch_pc", false,-1, 63,0);
        tracep->declBit(c+57,"top branch_pc_valid", false,-1);
        tracep->declQuad(c+61,"top pc_ex_mem", false,-1, 63,0);
        tracep->declBus(c+63,"top inst_data_ex_mem", false,-1, 31,0);
        tracep->declQuad(c+64,"top imm_data_ex_mem", false,-1, 63,0);
        tracep->declBus(c+66,"top rd_idx_ex_mem", false,-1, 4,0);
        tracep->declQuad(c+67,"top rs1_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+69,"top rs2_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+71,"top alu_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+73,"top csr_writedata_ex_mem", false,-1, 63,0);
        tracep->declBit(c+75,"top csr_writevalid_ex_mem", false,-1);
        tracep->declBus(c+76,"top csr_addr_ex_mem", false,-1, 11,0);
        tracep->declBus(c+77,"top pc_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+78,"top mem_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+79,"top trap_bus_ex_mem", false,-1, 18,0);
        tracep->declQuad(c+61,"top pc_mem", false,-1, 63,0);
        tracep->declBus(c+63,"top inst_data_mem", false,-1, 31,0);
        tracep->declQuad(c+80,"top mem_data_mem", false,-1, 63,0);
        tracep->declBus(c+66,"top rd_idx_mem", false,-1, 4,0);
        tracep->declBus(c+76,"top csr_addr_mem", false,-1, 11,0);
        tracep->declQuad(c+73,"top exc_csr_data_mem", false,-1, 63,0);
        tracep->declBit(c+75,"top exc_csr_valid_mem", false,-1);
        tracep->declBus(c+79,"top trap_bus_mem", false,-1, 18,0);
        tracep->declQuad(c+351,"top csr_mstatus_writedata", false,-1, 63,0);
        tracep->declQuad(c+61,"top csr_mepc_writedata", false,-1, 63,0);
        tracep->declQuad(c+353,"top csr_mcause_writedata", false,-1, 63,0);
        tracep->declQuad(c+82,"top csr_mtval_writedata", false,-1, 63,0);
        tracep->declQuad(c+355,"top csr_mtvec_writedata", false,-1, 63,0);
        tracep->declBit(c+357,"top csr_mstatus_write_valid", false,-1);
        tracep->declBit(c+84,"top csr_mepc_write_valid", false,-1);
        tracep->declBit(c+84,"top csr_mcause_write_valid", false,-1);
        tracep->declBit(c+84,"top csr_mtval_write_valid", false,-1);
        tracep->declBit(c+358,"top csr_mtvec_write_valid", false,-1);
        tracep->declQuad(c+85,"top clint_pc", false,-1, 63,0);
        tracep->declBit(c+87,"top clint_pc_valid", false,-1);
        tracep->declBus(c+320,"top stall_clint", false,-1, 5,0);
        tracep->declBus(c+321,"top flush_clint", false,-1, 5,0);
        tracep->declQuad(c+88,"top csr_mstatus_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+90,"top csr_mepc_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+92,"top csr_mcause_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+94,"top csr_mtval_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+96,"top csr_mtvec_writedata_mem_wb", false,-1, 63,0);
        tracep->declBit(c+98,"top csr_mstatus_write_valid_mem_wb", false,-1);
        tracep->declBit(c+99,"top csr_mepc_write_valid_mem_wb", false,-1);
        tracep->declBit(c+100,"top csr_mcause_write_valid_mem_wb", false,-1);
        tracep->declBit(c+101,"top csr_mtval_write_valid_mem_wb", false,-1);
        tracep->declBit(c+102,"top csr_mtvec_write_valid_mem_wb", false,-1);
        tracep->declQuad(c+103,"top pc_mem_wb", false,-1, 63,0);
        tracep->declBus(c+105,"top inst_data_mem_wb", false,-1, 31,0);
        tracep->declBus(c+106,"top csr_addr_mem_wb", false,-1, 11,0);
        tracep->declQuad(c+107,"top exc_csr_data_mem_wb", false,-1, 63,0);
        tracep->declBit(c+109,"top exc_csr_valid_mem_wb", false,-1);
        tracep->declBus(c+110,"top rd_addr_mem_wb", false,-1, 4,0);
        tracep->declQuad(c+111,"top mem_data_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+113,"top rs1_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+115,"top rs2_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+117,"top csr_mstatus_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+119,"top csr_mepc_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+121,"top csr_mcause_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+123,"top csr_mtval_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+125,"top csr_mtvec_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+20,"top csr_data_csr", false,-1, 63,0);
        tracep->declBit(c+347,"top u_pc_reg clk", false,-1);
        tracep->declBit(c+348,"top u_pc_reg rst", false,-1);
        tracep->declBit(c+322,"top u_pc_reg stall_valid_i", false,-1);
        tracep->declBit(c+323,"top u_pc_reg flush_valid_i", false,-1);
        tracep->declQuad(c+59,"top u_pc_reg branch_pc_i", false,-1, 63,0);
        tracep->declBit(c+57,"top u_pc_reg branch_pc_valid_i", false,-1);
        tracep->declQuad(c+85,"top u_pc_reg clint_pc_i", false,-1, 63,0);
        tracep->declBit(c+87,"top u_pc_reg clint_pc_valid_i", false,-1);
        tracep->declQuad(c+1,"top u_pc_reg pc_o", false,-1, 63,0);
        tracep->declBus(c+359,"top u_pc_reg u_pc_dreg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+360,"top u_pc_reg u_pc_dreg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_pc_reg u_pc_dreg clk", false,-1);
        tracep->declBit(c+348,"top u_pc_reg u_pc_dreg rst", false,-1);
        tracep->declQuad(c+127,"top u_pc_reg u_pc_dreg din", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_pc_reg u_pc_dreg dout", false,-1, 63,0);
        tracep->declBit(c+324,"top u_pc_reg u_pc_dreg wen", false,-1);
        tracep->declBit(c+348,"top u_fetch rst", false,-1);
        tracep->declQuad(c+1,"top u_fetch inst_addr_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_fetch inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+319,"top u_fetch inst_data_o", false,-1, 31,0);
        tracep->declBus(c+349,"top u_fetch trap_bus_o", false,-1, 18,0);
        tracep->declBit(c+347,"top u_if_id clk", false,-1);
        tracep->declBit(c+348,"top u_if_id rst", false,-1);
        tracep->declBit(c+325,"top u_if_id stall_valid_i", false,-1);
        tracep->declBit(c+326,"top u_if_id flush_valid_i", false,-1);
        tracep->declQuad(c+1,"top u_if_id inst_addr_if_i", false,-1, 63,0);
        tracep->declBus(c+319,"top u_if_id inst_data_if_i", false,-1, 31,0);
        tracep->declBus(c+349,"top u_if_id trap_bus_if_i", false,-1, 18,0);
        tracep->declQuad(c+3,"top u_if_id inst_addr_if_id_o", false,-1, 63,0);
        tracep->declBus(c+5,"top u_if_id inst_data_if_id_o", false,-1, 31,0);
        tracep->declBus(c+6,"top u_if_id trap_bus_if_id_o", false,-1, 18,0);
        tracep->declBit(c+327,"top u_if_id reg_wen", false,-1);
        tracep->declBus(c+359,"top u_if_id u_inst_addr_if_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_if_id u_inst_addr_if_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_if_id u_inst_addr_if_id clk", false,-1);
        tracep->declBit(c+348,"top u_if_id u_inst_addr_if_id rst", false,-1);
        tracep->declQuad(c+262,"top u_if_id u_inst_addr_if_id din", false,-1, 63,0);
        tracep->declQuad(c+3,"top u_if_id u_inst_addr_if_id dout", false,-1, 63,0);
        tracep->declBit(c+327,"top u_if_id u_inst_addr_if_id wen", false,-1);
        tracep->declBus(c+364,"top u_if_id u_inst_data_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+365,"top u_if_id u_inst_data_if_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+347,"top u_if_id u_inst_data_if_id clk", false,-1);
        tracep->declBit(c+348,"top u_if_id u_inst_data_if_id rst", false,-1);
        tracep->declBus(c+328,"top u_if_id u_inst_data_if_id din", false,-1, 31,0);
        tracep->declBus(c+5,"top u_if_id u_inst_data_if_id dout", false,-1, 31,0);
        tracep->declBit(c+327,"top u_if_id u_inst_data_if_id wen", false,-1);
        tracep->declBus(c+366,"top u_if_id u_trap_bus_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+367,"top u_if_id u_trap_bus_if_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+347,"top u_if_id u_trap_bus_if_id clk", false,-1);
        tracep->declBit(c+348,"top u_if_id u_trap_bus_if_id rst", false,-1);
        tracep->declBus(c+329,"top u_if_id u_trap_bus_if_id din", false,-1, 18,0);
        tracep->declBus(c+6,"top u_if_id u_trap_bus_if_id dout", false,-1, 18,0);
        tracep->declBit(c+327,"top u_if_id u_trap_bus_if_id wen", false,-1);
        tracep->declQuad(c+3,"top u_dcode inst_addr_i", false,-1, 63,0);
        tracep->declBus(c+5,"top u_dcode inst_data_i", false,-1, 31,0);
        tracep->declBus(c+6,"top u_dcode trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+113,"top u_dcode rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_dcode rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_dcode csr_data_i", false,-1, 63,0);
        tracep->declBus(c+45,"top u_dcode id_ex_exc_op_i", false,-1, 4,0);
        tracep->declQuad(c+52,"top u_dcode ex_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+30,"top u_dcode ex_rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+40,"top u_dcode ex_csr_writeaddr_i", false,-1, 11,0);
        tracep->declQuad(c+54,"top u_dcode ex_csr_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+80,"top u_dcode mem_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+66,"top u_dcode mem_rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+7,"top u_dcode rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+8,"top u_dcode rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+9,"top u_dcode rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+10,"top u_dcode rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+12,"top u_dcode rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top u_dcode imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+16,"top u_dcode csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+18,"top u_dcode csr_imm_valid_o", false,-1);
        tracep->declBus(c+19,"top u_dcode csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+20,"top u_dcode csr_readdata_o", false,-1, 63,0);
        tracep->declBus(c+22,"top u_dcode alu_op_o", false,-1, 5,0);
        tracep->declBus(c+23,"top u_dcode mem_op_o", false,-1, 3,0);
        tracep->declBus(c+24,"top u_dcode exc_op_o", false,-1, 4,0);
        tracep->declBus(c+350,"top u_dcode pc_op_o", false,-1, 3,0);
        tracep->declBus(c+25,"top u_dcode csr_op_o", false,-1, 2,0);
        tracep->declQuad(c+3,"top u_dcode inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+5,"top u_dcode inst_data_o", false,-1, 31,0);
        tracep->declBus(c+27,"top u_dcode trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+368,"top u_dcode i", false,-1, 31,0);
        tracep->declBit(c+347,"top u_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex rst", false,-1);
        tracep->declBit(c+330,"top u_id_ex flush_valid_i", false,-1);
        tracep->declBit(c+331,"top u_id_ex stall_valid_i", false,-1);
        tracep->declQuad(c+3,"top u_id_ex pc_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+5,"top u_id_ex inst_data_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+7,"top u_id_ex rs1_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+8,"top u_id_ex rs2_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+9,"top u_id_ex rd_idx_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+14,"top u_id_ex imm_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top u_id_ex csr_imm_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+18,"top u_id_ex csr_imm_valid_id_ex_i", false,-1);
        tracep->declQuad(c+10,"top u_id_ex rs1_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top u_id_ex rs2_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_id_ex csr_data_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+19,"top u_id_ex csr_idx_id_ex_i", false,-1, 11,0);
        tracep->declBus(c+22,"top u_id_ex alu_op_id_ex_i", false,-1, 5,0);
        tracep->declBus(c+23,"top u_id_ex mem_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+24,"top u_id_ex exc_op_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+350,"top u_id_ex pc_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+25,"top u_id_ex csr_op_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+27,"top u_id_ex trap_bus_id_ex_i", false,-1, 18,0);
        tracep->declQuad(c+48,"top u_id_ex pc_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+50,"top u_id_ex inst_data_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+28,"top u_id_ex rs1_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+29,"top u_id_ex rs2_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+30,"top u_id_ex rd_idx_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+35,"top u_id_ex imm_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_id_ex csr_imm_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+39,"top u_id_ex csr_imm_valid_id_ex_o", false,-1);
        tracep->declQuad(c+31,"top u_id_ex rs1_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_id_ex rs2_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_id_ex csr_data_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+40,"top u_id_ex csr_idx_id_ex_o", false,-1, 11,0);
        tracep->declBus(c+43,"top u_id_ex alu_op_id_ex_o", false,-1, 5,0);
        tracep->declBus(c+44,"top u_id_ex mem_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+45,"top u_id_ex exc_op_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+46,"top u_id_ex pc_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+47,"top u_id_ex csr_op_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+51,"top u_id_ex trap_bus_id_ex_o", false,-1, 18,0);
        tracep->declBit(c+332,"top u_id_ex reg_wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_pc_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_id_ex u_pc_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_id_ex u_pc_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_pc_id_ex rst", false,-1);
        tracep->declQuad(c+264,"top u_id_ex u_pc_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+48,"top u_id_ex u_pc_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+332,"top u_id_ex u_pc_id_ex wen", false,-1);
        tracep->declBus(c+364,"top u_id_ex u_inst_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+365,"top u_id_ex u_inst_data_id_ex RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+347,"top u_id_ex u_inst_data_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_inst_data_id_ex rst", false,-1);
        tracep->declBus(c+266,"top u_id_ex u_inst_data_id_ex din", false,-1, 31,0);
        tracep->declBus(c+50,"top u_id_ex u_inst_data_id_ex dout", false,-1, 31,0);
        tracep->declBit(c+332,"top u_id_ex u_inst_data_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_rs1_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_rs1_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+347,"top u_id_ex u_rs1_idx_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_rs1_idx_id_ex rst", false,-1);
        tracep->declBus(c+267,"top u_id_ex u_rs1_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+28,"top u_id_ex u_rs1_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+332,"top u_id_ex u_rs1_idx_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_rs2_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_rs2_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+347,"top u_id_ex u_rs2_idx_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_rs2_idx_id_ex rst", false,-1);
        tracep->declBus(c+268,"top u_id_ex u_rs2_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+29,"top u_id_ex u_rs2_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+332,"top u_id_ex u_rs2_idx_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_rd_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_rd_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+347,"top u_id_ex u_rd_idx_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_rd_idx_id_ex rst", false,-1);
        tracep->declBus(c+269,"top u_id_ex u_rd_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+30,"top u_id_ex u_rd_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+332,"top u_id_ex u_rd_idx_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_imm_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_id_ex u_imm_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_id_ex u_imm_data_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_imm_data_id_ex rst", false,-1);
        tracep->declQuad(c+270,"top u_id_ex u_imm_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+35,"top u_id_ex u_imm_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+332,"top u_id_ex u_imm_data_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_csr_imm_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_id_ex u_csr_imm_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_id_ex u_csr_imm_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_csr_imm_id_ex rst", false,-1);
        tracep->declQuad(c+272,"top u_id_ex u_csr_imm_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_id_ex u_csr_imm_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+332,"top u_id_ex u_csr_imm_id_ex wen", false,-1);
        tracep->declBus(c+371,"top u_id_ex u_csr_imm_valid_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_id_ex u_csr_imm_valid_id_ex RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_id_ex u_csr_imm_valid_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_csr_imm_valid_id_ex rst", false,-1);
        tracep->declBus(c+274,"top u_id_ex u_csr_imm_valid_id_ex din", false,-1, 0,0);
        tracep->declBus(c+39,"top u_id_ex u_csr_imm_valid_id_ex dout", false,-1, 0,0);
        tracep->declBit(c+332,"top u_id_ex u_csr_imm_valid_id_ex wen", false,-1);
        tracep->declBus(c+373,"top u_id_ex u_csr_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top u_id_ex u_csr_idx_id_ex RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+347,"top u_id_ex u_csr_idx_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_csr_idx_id_ex rst", false,-1);
        tracep->declBus(c+275,"top u_id_ex u_csr_idx_id_ex din", false,-1, 11,0);
        tracep->declBus(c+40,"top u_id_ex u_csr_idx_id_ex dout", false,-1, 11,0);
        tracep->declBit(c+332,"top u_id_ex u_csr_idx_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_rs1_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_id_ex u_rs1_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_id_ex u_rs1_data_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_rs1_data_id_ex rst", false,-1);
        tracep->declQuad(c+276,"top u_id_ex u_rs1_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+31,"top u_id_ex u_rs1_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+332,"top u_id_ex u_rs1_data_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_rs2_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_id_ex u_rs2_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_id_ex u_rs2_data_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_rs2_data_id_ex rst", false,-1);
        tracep->declQuad(c+278,"top u_id_ex u_rs2_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_id_ex u_rs2_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+332,"top u_id_ex u_rs2_data_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_csr_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_id_ex u_csr_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_id_ex u_csr_data_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_csr_data_id_ex rst", false,-1);
        tracep->declQuad(c+280,"top u_id_ex u_csr_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_id_ex u_csr_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+332,"top u_id_ex u_csr_data_id_ex wen", false,-1);
        tracep->declBus(c+375,"top u_id_ex u_alu_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+376,"top u_id_ex u_alu_op_id_ex RESET_VAL", false,-1, 5,0);
        tracep->declBit(c+347,"top u_id_ex u_alu_op_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_alu_op_id_ex rst", false,-1);
        tracep->declBus(c+282,"top u_id_ex u_alu_op_id_ex din", false,-1, 5,0);
        tracep->declBus(c+43,"top u_id_ex u_alu_op_id_ex dout", false,-1, 5,0);
        tracep->declBit(c+332,"top u_id_ex u_alu_op_id_ex wen", false,-1);
        tracep->declBus(c+377,"top u_id_ex u_mem_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_id_ex u_mem_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+347,"top u_id_ex u_mem_op_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_mem_op_id_ex rst", false,-1);
        tracep->declBus(c+283,"top u_id_ex u_mem_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+44,"top u_id_ex u_mem_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+332,"top u_id_ex u_mem_op_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_exc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_exc_op_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+347,"top u_id_ex u_exc_op_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_exc_op_id_ex rst", false,-1);
        tracep->declBus(c+284,"top u_id_ex u_exc_op_id_ex din", false,-1, 4,0);
        tracep->declBus(c+45,"top u_id_ex u_exc_op_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+332,"top u_id_ex u_exc_op_id_ex wen", false,-1);
        tracep->declBus(c+377,"top u_id_ex u_pc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_id_ex u_pc_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+347,"top u_id_ex u_pc_op_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_pc_op_id_ex rst", false,-1);
        tracep->declBus(c+350,"top u_id_ex u_pc_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+46,"top u_id_ex u_pc_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+332,"top u_id_ex u_pc_op_id_ex wen", false,-1);
        tracep->declBus(c+378,"top u_id_ex u_csr_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+379,"top u_id_ex u_csr_op_id_ex RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+347,"top u_id_ex u_csr_op_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_csr_op_id_ex rst", false,-1);
        tracep->declBus(c+285,"top u_id_ex u_csr_op_id_ex din", false,-1, 2,0);
        tracep->declBus(c+47,"top u_id_ex u_csr_op_id_ex dout", false,-1, 2,0);
        tracep->declBit(c+332,"top u_id_ex u_csr_op_id_ex wen", false,-1);
        tracep->declBus(c+366,"top u_id_ex u_trap_bus_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+367,"top u_id_ex u_trap_bus_id_ex RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+347,"top u_id_ex u_trap_bus_id_ex clk", false,-1);
        tracep->declBit(c+348,"top u_id_ex u_trap_bus_id_ex rst", false,-1);
        tracep->declBus(c+286,"top u_id_ex u_trap_bus_id_ex din", false,-1, 18,0);
        tracep->declBus(c+51,"top u_id_ex u_trap_bus_id_ex dout", false,-1, 18,0);
        tracep->declBit(c+332,"top u_id_ex u_trap_bus_id_ex wen", false,-1);
        tracep->declQuad(c+48,"top u_execute_top pc_i", false,-1, 63,0);
        tracep->declBus(c+50,"top u_execute_top inst_data_i", false,-1, 31,0);
        tracep->declBus(c+30,"top u_execute_top rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+31,"top u_execute_top rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_execute_top rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+35,"top u_execute_top imm_data_i", false,-1, 63,0);
        tracep->declBus(c+40,"top u_execute_top csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+41,"top u_execute_top csr_data_i", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_execute_top csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+39,"top u_execute_top csr_imm_valid_i", false,-1);
        tracep->declBus(c+43,"top u_execute_top alu_op_i", false,-1, 5,0);
        tracep->declBus(c+44,"top u_execute_top mem_op_i", false,-1, 3,0);
        tracep->declBus(c+45,"top u_execute_top exc_op_i", false,-1, 4,0);
        tracep->declBus(c+47,"top u_execute_top csr_op_i", false,-1, 2,0);
        tracep->declBus(c+46,"top u_execute_top pc_op_i", false,-1, 3,0);
        tracep->declBus(c+51,"top u_execute_top trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+48,"top u_execute_top pc_o", false,-1, 63,0);
        tracep->declBus(c+50,"top u_execute_top inst_data_o", false,-1, 31,0);
        tracep->declBus(c+30,"top u_execute_top rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+31,"top u_execute_top rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_execute_top rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+35,"top u_execute_top imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_execute_top csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_execute_top csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+39,"top u_execute_top csr_imm_valid_o", false,-1);
        tracep->declBus(c+40,"top u_execute_top exc_csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+44,"top u_execute_top mem_op_o", false,-1, 3,0);
        tracep->declBus(c+46,"top u_execute_top pc_op_o", false,-1, 3,0);
        tracep->declQuad(c+52,"top u_execute_top exc_alu_data_o", false,-1, 63,0);
        tracep->declQuad(c+54,"top u_execute_top exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+56,"top u_execute_top exc_csr_valid_o", false,-1);
        tracep->declBus(c+45,"top u_execute_top exc_op_o", false,-1, 4,0);
        tracep->declQuad(c+59,"top u_execute_top branch_pc_o", false,-1, 63,0);
        tracep->declBit(c+57,"top u_execute_top branch_pc_valid_o", false,-1);
        tracep->declBit(c+57,"top u_execute_top jump_hazard_valid_o", false,-1);
        tracep->declBus(c+58,"top u_execute_top trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+368,"top u_execute_top i", false,-1, 31,0);
        tracep->declQuad(c+129,"top u_execute_top u_alu alu_a_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top u_execute_top u_alu alu_b_i", false,-1, 63,0);
        tracep->declBus(c+43,"top u_execute_top u_alu alu_op_i", false,-1, 5,0);
        tracep->declQuad(c+133,"top u_execute_top u_alu alu_out_o", false,-1, 63,0);
        tracep->declBit(c+135,"top u_execute_top u_alu compare_out_o", false,-1);
        tracep->declBit(c+136,"top u_execute_top u_alu u_alu_shift shift_sra_i", false,-1);
        tracep->declBit(c+137,"top u_execute_top u_alu u_alu_shift shift_srl_i", false,-1);
        tracep->declBit(c+138,"top u_execute_top u_alu u_alu_shift shift_sll_i", false,-1);
        tracep->declBit(c+139,"top u_execute_top u_alu u_alu_shift shift32_valid_i", false,-1);
        tracep->declQuad(c+129,"top u_execute_top u_alu u_alu_shift shift_num_i", false,-1, 63,0);
        tracep->declBus(c+140,"top u_execute_top u_alu u_alu_shift shift_count_i", false,-1, 5,0);
        tracep->declQuad(c+141,"top u_execute_top u_alu u_alu_shift shift_out_o", false,-1, 63,0);
        tracep->declBus(c+359,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+143,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 in", false,-1, 63,0);
        tracep->declQuad(c+145,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 out", false,-1, 63,0);
        tracep->declBus(c+380,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 i", false,-1, 31,0);
        tracep->declBus(c+359,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+147,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 in", false,-1, 63,0);
        tracep->declQuad(c+149,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 out", false,-1, 63,0);
        tracep->declBus(c+380,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 i", false,-1, 31,0);
        tracep->declBit(c+151,"top u_execute_top u_alu u_alu_mul_top rs1_signed_valid_i", false,-1);
        tracep->declBit(c+152,"top u_execute_top u_alu u_alu_mul_top rs2_signed_valid_i", false,-1);
        tracep->declQuad(c+129,"top u_execute_top u_alu u_alu_mul_top rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top u_execute_top u_alu u_alu_mul_top rs2_data_i", false,-1, 63,0);
        tracep->declArray(c+153,"top u_execute_top u_alu u_alu_mul_top mul_out_o", false,-1, 127,0);
        tracep->declBit(c+157,"top u_execute_top u_alu u_alu_div_top signed_valid_i", false,-1);
        tracep->declBit(c+158,"top u_execute_top u_alu u_alu_div_top div32_valid_i", false,-1);
        tracep->declQuad(c+129,"top u_execute_top u_alu u_alu_div_top sr1_data_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top u_execute_top u_alu u_alu_div_top sr2_data_i", false,-1, 63,0);
        tracep->declQuad(c+159,"top u_execute_top u_alu u_alu_div_top div_out_o", false,-1, 63,0);
        tracep->declQuad(c+161,"top u_execute_top u_alu u_alu_div_top rem_out_o", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_execute_top u_alu u_alu_div_top sr1_64_signed", false,-1, 63,0);
        tracep->declQuad(c+131,"top u_execute_top u_alu u_alu_div_top sr2_64_signed", false,-1, 63,0);
        tracep->declQuad(c+163,"top u_execute_top u_alu u_alu_div_top div64_signed", false,-1, 63,0);
        tracep->declQuad(c+165,"top u_execute_top u_alu u_alu_div_top rem64_signed", false,-1, 63,0);
        tracep->declQuad(c+167,"top u_execute_top u_alu u_alu_div_top div64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+169,"top u_execute_top u_alu u_alu_div_top rem64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+171,"top u_execute_top u_alu u_alu_div_top div64_result", false,-1, 63,0);
        tracep->declQuad(c+173,"top u_execute_top u_alu u_alu_div_top rem64_result", false,-1, 63,0);
        tracep->declBus(c+175,"top u_execute_top u_alu u_alu_div_top sr1_32_signed", false,-1, 31,0);
        tracep->declBus(c+176,"top u_execute_top u_alu u_alu_div_top sr2_32_signed", false,-1, 31,0);
        tracep->declBus(c+177,"top u_execute_top u_alu u_alu_div_top div32_signed", false,-1, 31,0);
        tracep->declBus(c+178,"top u_execute_top u_alu u_alu_div_top rem32_signed", false,-1, 31,0);
        tracep->declBus(c+179,"top u_execute_top u_alu u_alu_div_top div32_unsigned", false,-1, 31,0);
        tracep->declBus(c+180,"top u_execute_top u_alu u_alu_div_top rem32_unsigned", false,-1, 31,0);
        tracep->declBus(c+181,"top u_execute_top u_alu u_alu_div_top div32_result", false,-1, 31,0);
        tracep->declBus(c+182,"top u_execute_top u_alu u_alu_div_top rem32_result", false,-1, 31,0);
        tracep->declQuad(c+37,"top u_execute_top u_execute_csr csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+39,"top u_execute_top u_execute_csr csr_imm_valid_i", false,-1);
        tracep->declQuad(c+31,"top u_execute_top u_execute_csr rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_execute_top u_execute_csr csr_data_i", false,-1, 63,0);
        tracep->declBus(c+47,"top u_execute_top u_execute_csr csr_op_i", false,-1, 2,0);
        tracep->declQuad(c+54,"top u_execute_top u_execute_csr csr_exe_data_o", false,-1, 63,0);
        tracep->declBit(c+56,"top u_execute_top u_execute_csr csr_exe_data_valid_o", false,-1);
        tracep->declBit(c+347,"top u_ex_mem clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem rst", false,-1);
        tracep->declBit(c+333,"top u_ex_mem flush_valid_i", false,-1);
        tracep->declBit(c+334,"top u_ex_mem stall_valid_i", false,-1);
        tracep->declQuad(c+48,"top u_ex_mem pc_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+50,"top u_ex_mem inst_data_ex_mem_i", false,-1, 31,0);
        tracep->declQuad(c+35,"top u_ex_mem imm_data_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+30,"top u_ex_mem rd_idx_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+31,"top u_ex_mem rs1_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_ex_mem rs2_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+52,"top u_ex_mem alu_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+54,"top u_ex_mem csr_writedata_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+56,"top u_ex_mem csr_writevalid_ex_mem_i", false,-1);
        tracep->declBus(c+40,"top u_ex_mem csr_addr_ex_mem_i", false,-1, 11,0);
        tracep->declBus(c+46,"top u_ex_mem pc_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+44,"top u_ex_mem mem_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+58,"top u_ex_mem trap_bus_ex_mem_i", false,-1, 18,0);
        tracep->declQuad(c+61,"top u_ex_mem pc_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+63,"top u_ex_mem inst_data_ex_mem_o", false,-1, 31,0);
        tracep->declQuad(c+64,"top u_ex_mem imm_data_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+66,"top u_ex_mem rd_idx_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+67,"top u_ex_mem rs1_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+69,"top u_ex_mem rs2_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+71,"top u_ex_mem alu_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_ex_mem csr_writedata_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+75,"top u_ex_mem csr_writevalid_ex_mem_o", false,-1);
        tracep->declBus(c+76,"top u_ex_mem csr_addr_ex_mem_o", false,-1, 11,0);
        tracep->declBus(c+77,"top u_ex_mem pc_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+78,"top u_ex_mem mem_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+79,"top u_ex_mem trap_bus_ex_mem_o", false,-1, 18,0);
        tracep->declBit(c+335,"top u_ex_mem reg_wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_pc_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_ex_mem u_pc_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_ex_mem u_pc_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_pc_ex_mem_id rst", false,-1);
        tracep->declQuad(c+287,"top u_ex_mem u_pc_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+61,"top u_ex_mem u_pc_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+335,"top u_ex_mem u_pc_ex_mem_id wen", false,-1);
        tracep->declBus(c+364,"top u_ex_mem u_inst_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+365,"top u_ex_mem u_inst_data_ex_mem_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+347,"top u_ex_mem u_inst_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_inst_data_ex_mem_id rst", false,-1);
        tracep->declBus(c+289,"top u_ex_mem u_inst_data_ex_mem_id din", false,-1, 31,0);
        tracep->declBus(c+63,"top u_ex_mem u_inst_data_ex_mem_id dout", false,-1, 31,0);
        tracep->declBit(c+335,"top u_ex_mem u_inst_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+369,"top u_ex_mem u_rd_idx_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_ex_mem u_rd_idx_ex_mem_id RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+347,"top u_ex_mem u_rd_idx_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_rd_idx_ex_mem_id rst", false,-1);
        tracep->declBus(c+290,"top u_ex_mem u_rd_idx_ex_mem_id din", false,-1, 4,0);
        tracep->declBus(c+66,"top u_ex_mem u_rd_idx_ex_mem_id dout", false,-1, 4,0);
        tracep->declBit(c+335,"top u_ex_mem u_rd_idx_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_rs1_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_ex_mem u_rs1_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_ex_mem u_rs1_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_rs1_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+291,"top u_ex_mem u_rs1_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+67,"top u_ex_mem u_rs1_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+335,"top u_ex_mem u_rs1_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_rs2_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_ex_mem u_rs2_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_ex_mem u_rs2_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_rs2_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+293,"top u_ex_mem u_rs2_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+69,"top u_ex_mem u_rs2_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+335,"top u_ex_mem u_rs2_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_imm_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_ex_mem u_imm_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_ex_mem u_imm_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_imm_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+295,"top u_ex_mem u_imm_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+64,"top u_ex_mem u_imm_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+335,"top u_ex_mem u_imm_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_alu_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_ex_mem u_alu_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_ex_mem u_alu_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_alu_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+297,"top u_ex_mem u_alu_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+71,"top u_ex_mem u_alu_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+335,"top u_ex_mem u_alu_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_csr_writedata_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_ex_mem u_csr_writedata_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_ex_mem u_csr_writedata_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_csr_writedata_ex_mem_id rst", false,-1);
        tracep->declQuad(c+299,"top u_ex_mem u_csr_writedata_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_ex_mem u_csr_writedata_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+335,"top u_ex_mem u_csr_writedata_ex_mem_id wen", false,-1);
        tracep->declBus(c+371,"top u_ex_mem u_csr_writevalid_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_ex_mem u_csr_writevalid_ex_mem_id RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_ex_mem u_csr_writevalid_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_csr_writevalid_ex_mem_id rst", false,-1);
        tracep->declBus(c+301,"top u_ex_mem u_csr_writevalid_ex_mem_id din", false,-1, 0,0);
        tracep->declBus(c+75,"top u_ex_mem u_csr_writevalid_ex_mem_id dout", false,-1, 0,0);
        tracep->declBit(c+335,"top u_ex_mem u_csr_writevalid_ex_mem_id wen", false,-1);
        tracep->declBus(c+373,"top u_ex_mem u_csr_addr_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top u_ex_mem u_csr_addr_ex_mem_id RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+347,"top u_ex_mem u_csr_addr_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_csr_addr_ex_mem_id rst", false,-1);
        tracep->declBus(c+302,"top u_ex_mem u_csr_addr_ex_mem_id din", false,-1, 11,0);
        tracep->declBus(c+76,"top u_ex_mem u_csr_addr_ex_mem_id dout", false,-1, 11,0);
        tracep->declBit(c+335,"top u_ex_mem u_csr_addr_ex_mem_id wen", false,-1);
        tracep->declBus(c+377,"top u_ex_mem u_pc_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_ex_mem u_pc_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+347,"top u_ex_mem u_pc_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_pc_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+303,"top u_ex_mem u_pc_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+77,"top u_ex_mem u_pc_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+335,"top u_ex_mem u_pc_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+377,"top u_ex_mem u_mem_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_ex_mem u_mem_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+347,"top u_ex_mem u_mem_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_mem_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+304,"top u_ex_mem u_mem_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+78,"top u_ex_mem u_mem_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+335,"top u_ex_mem u_mem_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+366,"top u_ex_mem u_trap_bus_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+367,"top u_ex_mem u_trap_bus_ex_mem_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+347,"top u_ex_mem u_trap_bus_ex_mem_id clk", false,-1);
        tracep->declBit(c+348,"top u_ex_mem u_trap_bus_ex_mem_id rst", false,-1);
        tracep->declBus(c+305,"top u_ex_mem u_trap_bus_ex_mem_id din", false,-1, 18,0);
        tracep->declBus(c+79,"top u_ex_mem u_trap_bus_ex_mem_id dout", false,-1, 18,0);
        tracep->declBit(c+335,"top u_ex_mem u_trap_bus_ex_mem_id wen", false,-1);
        tracep->declBit(c+347,"top u_memory clk", false,-1);
        tracep->declBit(c+348,"top u_memory rst", false,-1);
        tracep->declQuad(c+61,"top u_memory pc_i", false,-1, 63,0);
        tracep->declBus(c+63,"top u_memory inst_data_i", false,-1, 31,0);
        tracep->declBus(c+66,"top u_memory rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+69,"top u_memory rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+78,"top u_memory mem_op_i", false,-1, 3,0);
        tracep->declQuad(c+71,"top u_memory exc_alu_data_i", false,-1, 63,0);
        tracep->declBus(c+76,"top u_memory csr_addr_i", false,-1, 11,0);
        tracep->declQuad(c+73,"top u_memory exc_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+75,"top u_memory exc_csr_valid_i", false,-1);
        tracep->declBus(c+79,"top u_memory trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+61,"top u_memory pc_o", false,-1, 63,0);
        tracep->declBus(c+63,"top u_memory inst_data_o", false,-1, 31,0);
        tracep->declQuad(c+80,"top u_memory mem_data_o", false,-1, 63,0);
        tracep->declBus(c+66,"top u_memory rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+76,"top u_memory csr_addr_o", false,-1, 11,0);
        tracep->declQuad(c+73,"top u_memory exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+75,"top u_memory exc_csr_valid_o", false,-1);
        tracep->declBus(c+79,"top u_memory trap_bus_o", false,-1, 18,0);
        tracep->declBit(c+348,"top u_clint rst", false,-1);
        tracep->declQuad(c+61,"top u_clint pc_i", false,-1, 63,0);
        tracep->declBus(c+63,"top u_clint inst_data_i", false,-1, 31,0);
        tracep->declBus(c+79,"top u_clint trap_bus_i", false,-1, 18,0);
        tracep->declBit(c+26,"top u_clint load_use_valid_id_i", false,-1);
        tracep->declBit(c+57,"top u_clint jump_valid_ex_i", false,-1);
        tracep->declQuad(c+117,"top u_clint csr_mstatus_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+119,"top u_clint csr_mepc_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+121,"top u_clint csr_mcause_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+123,"top u_clint csr_mtval_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_clint csr_mtvec_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+351,"top u_clint csr_mstatus_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+61,"top u_clint csr_mepc_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+353,"top u_clint csr_mcause_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+82,"top u_clint csr_mtval_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+355,"top u_clint csr_mtvec_writedata_o", false,-1, 63,0);
        tracep->declBit(c+357,"top u_clint csr_mstatus_write_valid_o", false,-1);
        tracep->declBit(c+84,"top u_clint csr_mepc_write_valid_o", false,-1);
        tracep->declBit(c+84,"top u_clint csr_mcause_write_valid_o", false,-1);
        tracep->declBit(c+84,"top u_clint csr_mtval_write_valid_o", false,-1);
        tracep->declBit(c+358,"top u_clint csr_mtvec_write_valid_o", false,-1);
        tracep->declQuad(c+85,"top u_clint clint_pc_o", false,-1, 63,0);
        tracep->declBit(c+87,"top u_clint clint_pc_valid_o", false,-1);
        tracep->declBus(c+320,"top u_clint stall_o", false,-1, 5,0);
        tracep->declBus(c+321,"top u_clint flush_o", false,-1, 5,0);
        tracep->declBus(c+381,"top u_clint load_use_flush", false,-1, 5,0);
        tracep->declBus(c+382,"top u_clint load_use_stall", false,-1, 5,0);
        tracep->declBus(c+383,"top u_clint jump_flush", false,-1, 5,0);
        tracep->declBus(c+376,"top u_clint jump_stall", false,-1, 5,0);
        tracep->declBus(c+384,"top u_clint trap_flush", false,-1, 5,0);
        tracep->declBus(c+376,"top u_clint trap_stall", false,-1, 5,0);
        tracep->declBit(c+347,"top u_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb rst", false,-1);
        tracep->declBit(c+336,"top u_mem_wb flush_valid_i", false,-1);
        tracep->declBit(c+337,"top u_mem_wb stall_valid_i", false,-1);
        tracep->declQuad(c+351,"top u_mem_wb csr_mstatus_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+61,"top u_mem_wb csr_mepc_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+353,"top u_mem_wb csr_mcause_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+82,"top u_mem_wb csr_mtval_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+355,"top u_mem_wb csr_mtvec_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+357,"top u_mem_wb csr_mstatus_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+84,"top u_mem_wb csr_mepc_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+84,"top u_mem_wb csr_mcause_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+84,"top u_mem_wb csr_mtval_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+358,"top u_mem_wb csr_mtvec_write_valid_mem_wb_i", false,-1);
        tracep->declQuad(c+61,"top u_mem_wb pc_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+63,"top u_mem_wb inst_data_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+76,"top u_mem_wb csr_addr_mem_wb_i", false,-1, 11,0);
        tracep->declQuad(c+73,"top u_mem_wb exc_csr_data_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+75,"top u_mem_wb exc_csr_valid_mem_wb_i", false,-1);
        tracep->declBus(c+66,"top u_mem_wb rd_addr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+80,"top u_mem_wb mem_data_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+88,"top u_mem_wb csr_mstatus_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+90,"top u_mem_wb csr_mepc_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+92,"top u_mem_wb csr_mcause_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_mem_wb csr_mtval_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_mem_wb csr_mtvec_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+98,"top u_mem_wb csr_mstatus_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+99,"top u_mem_wb csr_mepc_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+100,"top u_mem_wb csr_mcause_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+101,"top u_mem_wb csr_mtval_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+102,"top u_mem_wb csr_mtvec_write_valid_mem_wb_o", false,-1);
        tracep->declQuad(c+103,"top u_mem_wb pc_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+105,"top u_mem_wb inst_data_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+106,"top u_mem_wb csr_addr_mem_wb_o", false,-1, 11,0);
        tracep->declQuad(c+107,"top u_mem_wb exc_csr_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+109,"top u_mem_wb exc_csr_valid_mem_wb_o", false,-1);
        tracep->declBus(c+110,"top u_mem_wb rd_addr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+111,"top u_mem_wb mem_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb reg_wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+339,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+102,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mtval_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mtval_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mtval_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtval_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+306,"top u_mem_wb u_csr_mtval_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+101,"top u_mem_wb u_csr_mtval_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mtval_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mcause_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mcause_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mcause_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mcause_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+306,"top u_mem_wb u_csr_mcause_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+100,"top u_mem_wb u_csr_mcause_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mcause_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mepc_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mepc_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mepc_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mepc_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+306,"top u_mem_wb u_csr_mepc_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+99,"top u_mem_wb u_csr_mepc_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mepc_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+340,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+98,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mtvec_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_csr_mtvec_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mtvec_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtvec_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+341,"top u_mem_wb u_csr_mtvec_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_mem_wb u_csr_mtvec_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mtvec_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mtval_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_csr_mtval_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mtval_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtval_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+307,"top u_mem_wb u_csr_mtval_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_mem_wb u_csr_mtval_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mtval_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mcause_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_csr_mcause_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mcause_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mcause_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+343,"top u_mem_wb u_csr_mcause_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+92,"top u_mem_wb u_csr_mcause_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mcause_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mepc_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_csr_mepc_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mepc_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mepc_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+309,"top u_mem_wb u_csr_mepc_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+90,"top u_mem_wb u_csr_mepc_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mepc_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mstatus_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_csr_mstatus_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_mstatus_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mstatus_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+345,"top u_mem_wb u_csr_mstatus_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+88,"top u_mem_wb u_csr_mstatus_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_mstatus_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_pc_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_pc_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_pc_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_pc_mem_wb rst", false,-1);
        tracep->declQuad(c+309,"top u_mem_wb u_pc_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_mem_wb u_pc_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_pc_mem_wb wen", false,-1);
        tracep->declBus(c+364,"top u_mem_wb u_inst_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+365,"top u_mem_wb u_inst_data_mem_wb RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+347,"top u_mem_wb u_inst_data_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_inst_data_mem_wb rst", false,-1);
        tracep->declBus(c+311,"top u_mem_wb u_inst_data_mem_wb din", false,-1, 31,0);
        tracep->declBus(c+105,"top u_mem_wb u_inst_data_mem_wb dout", false,-1, 31,0);
        tracep->declBit(c+338,"top u_mem_wb u_inst_data_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_mem_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_mem_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_mem_data_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_mem_data_mem_wb rst", false,-1);
        tracep->declQuad(c+312,"top u_mem_wb u_mem_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_mem_wb u_mem_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_mem_data_mem_wb wen", false,-1);
        tracep->declBus(c+373,"top u_mem_wb u_csr_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top u_mem_wb u_csr_addr_mem_wb RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+347,"top u_mem_wb u_csr_addr_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_csr_addr_mem_wb rst", false,-1);
        tracep->declBus(c+314,"top u_mem_wb u_csr_addr_mem_wb din", false,-1, 11,0);
        tracep->declBus(c+106,"top u_mem_wb u_csr_addr_mem_wb dout", false,-1, 11,0);
        tracep->declBit(c+338,"top u_mem_wb u_csr_addr_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_exc_csr_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_mem_wb u_exc_csr_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_mem_wb u_exc_csr_data_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_exc_csr_data_mem_wb rst", false,-1);
        tracep->declQuad(c+315,"top u_mem_wb u_exc_csr_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+107,"top u_mem_wb u_exc_csr_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+338,"top u_mem_wb u_exc_csr_data_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_exc_csr_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_exc_csr_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+347,"top u_mem_wb u_exc_csr_valid_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_exc_csr_valid_mem_wb rst", false,-1);
        tracep->declBus(c+317,"top u_mem_wb u_exc_csr_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+109,"top u_mem_wb u_exc_csr_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+338,"top u_mem_wb u_exc_csr_valid_mem_wb wen", false,-1);
        tracep->declBus(c+369,"top u_mem_wb u_rd_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_mem_wb u_rd_addr_mem_wb RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+347,"top u_mem_wb u_rd_addr_mem_wb clk", false,-1);
        tracep->declBit(c+348,"top u_mem_wb u_rd_addr_mem_wb rst", false,-1);
        tracep->declBus(c+318,"top u_mem_wb u_rd_addr_mem_wb din", false,-1, 4,0);
        tracep->declBus(c+110,"top u_mem_wb u_rd_addr_mem_wb dout", false,-1, 4,0);
        tracep->declBit(c+338,"top u_mem_wb u_rd_addr_mem_wb wen", false,-1);
        tracep->declBit(c+347,"top u_writeback clk", false,-1);
        tracep->declBit(c+348,"top u_writeback rst", false,-1);
        tracep->declQuad(c+103,"top u_writeback pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+105,"top u_writeback inst_data_wb_i", false,-1, 31,0);
        tracep->declBit(c+347,"top u_rv64_gpr_regfile clk", false,-1);
        tracep->declBit(c+348,"top u_rv64_gpr_regfile rst", false,-1);
        tracep->declBus(c+7,"top u_rv64_gpr_regfile rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+8,"top u_rv64_gpr_regfile rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+113,"top u_rv64_gpr_regfile rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_rv64_gpr_regfile rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+110,"top u_rv64_gpr_regfile write_idx_i", false,-1, 4,0);
        tracep->declQuad(c+111,"top u_rv64_gpr_regfile write_data_i", false,-1, 63,0);
        tracep->declBit(c+385,"top u_rv64_gpr_regfile write_data_valid_i", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+183+i*2,"top u_rv64_gpr_regfile rf", true,(i+0), 63,0);}}
        tracep->declBit(c+347,"top u_rv64_csr_regfile clk", false,-1);
        tracep->declBit(c+348,"top u_rv64_csr_regfile rst", false,-1);
        tracep->declQuad(c+88,"top u_rv64_csr_regfile csr_mstatus_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+90,"top u_rv64_csr_regfile csr_mepc_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+92,"top u_rv64_csr_regfile csr_mcause_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_rv64_csr_regfile csr_mtval_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_rv64_csr_regfile csr_mtvec_writedata_i", false,-1, 63,0);
        tracep->declBit(c+98,"top u_rv64_csr_regfile csr_mstatus_write_valid_i", false,-1);
        tracep->declBit(c+99,"top u_rv64_csr_regfile csr_mepc_write_valid_i", false,-1);
        tracep->declBit(c+100,"top u_rv64_csr_regfile csr_mcause_write_valid_i", false,-1);
        tracep->declBit(c+101,"top u_rv64_csr_regfile csr_mtval_write_valid_i", false,-1);
        tracep->declBit(c+102,"top u_rv64_csr_regfile csr_mtvec_write_valid_i", false,-1);
        tracep->declQuad(c+117,"top u_rv64_csr_regfile csr_mstatus_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+119,"top u_rv64_csr_regfile csr_mepc_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+121,"top u_rv64_csr_regfile csr_mcause_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+123,"top u_rv64_csr_regfile csr_mtval_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_rv64_csr_regfile csr_mtvec_readdata_o", false,-1, 63,0);
        tracep->declBus(c+19,"top u_rv64_csr_regfile csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+20,"top u_rv64_csr_regfile csr_readdata_o", false,-1, 63,0);
        tracep->declBus(c+106,"top u_rv64_csr_regfile csr_writeaddr_i", false,-1, 11,0);
        tracep->declBit(c+109,"top u_rv64_csr_regfile csr_write_valid_i", false,-1);
        tracep->declQuad(c+107,"top u_rv64_csr_regfile csr_writedata_i", false,-1, 63,0);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mstatus WIDTH", false,-1, 31,0);
        tracep->declQuad(c+386,"top u_rv64_csr_regfile u_csr_mstatus RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_rv64_csr_regfile u_csr_mstatus clk", false,-1);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mstatus rst", false,-1);
        tracep->declQuad(c+247,"top u_rv64_csr_regfile u_csr_mstatus din", false,-1, 63,0);
        tracep->declQuad(c+117,"top u_rv64_csr_regfile u_csr_mstatus dout", false,-1, 63,0);
        tracep->declBit(c+249,"top u_rv64_csr_regfile u_csr_mstatus wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mepc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_rv64_csr_regfile u_csr_mepc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_rv64_csr_regfile u_csr_mepc clk", false,-1);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mepc rst", false,-1);
        tracep->declQuad(c+250,"top u_rv64_csr_regfile u_csr_mepc din", false,-1, 63,0);
        tracep->declQuad(c+119,"top u_rv64_csr_regfile u_csr_mepc dout", false,-1, 63,0);
        tracep->declBit(c+252,"top u_rv64_csr_regfile u_csr_mepc wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mcause WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_rv64_csr_regfile u_csr_mcause RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_rv64_csr_regfile u_csr_mcause clk", false,-1);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mcause rst", false,-1);
        tracep->declQuad(c+253,"top u_rv64_csr_regfile u_csr_mcause din", false,-1, 63,0);
        tracep->declQuad(c+121,"top u_rv64_csr_regfile u_csr_mcause dout", false,-1, 63,0);
        tracep->declBit(c+255,"top u_rv64_csr_regfile u_csr_mcause wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mtval WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_rv64_csr_regfile u_csr_mtval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_rv64_csr_regfile u_csr_mtval clk", false,-1);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mtval rst", false,-1);
        tracep->declQuad(c+256,"top u_rv64_csr_regfile u_csr_mtval din", false,-1, 63,0);
        tracep->declQuad(c+123,"top u_rv64_csr_regfile u_csr_mtval dout", false,-1, 63,0);
        tracep->declBit(c+258,"top u_rv64_csr_regfile u_csr_mtval wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mtvec WIDTH", false,-1, 31,0);
        tracep->declQuad(c+362,"top u_rv64_csr_regfile u_csr_mtvec RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+347,"top u_rv64_csr_regfile u_csr_mtvec clk", false,-1);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mtvec rst", false,-1);
        tracep->declQuad(c+259,"top u_rv64_csr_regfile u_csr_mtvec din", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_rv64_csr_regfile u_csr_mtvec dout", false,-1, 63,0);
        tracep->declBit(c+261,"top u_rv64_csr_regfile u_csr_mtvec wen", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q),64);
        tracep->fullIData(oldp+5,(vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q),32);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q),19);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__u_dcode__DOT___rs1_idx),5);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__u_dcode__DOT___rs2_idx),5);
        tracep->fullCData(oldp+9,((((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                      | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                     | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                    ? (0x1fU & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 7U))
                                    : 0U)),5);
        tracep->fullQData(oldp+10,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid)
                                     ? vlSelf->top__DOT__exc_alu_data_ex
                                     : ((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                          == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                         & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx)))
                                         ? vlSelf->top__DOT__mem_data_mem
                                         : (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                             == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                             ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                             : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                            [vlSelf->top__DOT__u_dcode__DOT___rs1_idx])))),64);
        tracep->fullQData(oldp+12,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)
                                     ? vlSelf->top__DOT__exc_alu_data_ex
                                     : ((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                          == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                         & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx)))
                                         ? vlSelf->top__DOT__mem_data_mem
                                         : (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                             == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                             ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                             : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                            [vlSelf->top__DOT__u_dcode__DOT___rs2_idx])))),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__u_dcode__DOT___imm_data),64);
        tracep->fullQData(oldp+16,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                       >> 0xfU))))),64);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid));
        tracep->fullSData(oldp+19,(vlSelf->top__DOT__u_dcode__DOT___csr_idx),12);
        tracep->fullQData(oldp+20,(((0x300U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                     ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q
                                     : ((0x341U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                         ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q
                                         : ((0x342U 
                                             == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                             ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q
                                             : ((0x343U 
                                                 == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                 ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q
                                                 : 
                                                ((0x305U 
                                                  == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                  ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q
                                                  : 0ULL)))))),64);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__u_dcode__DOT___alu_op),6);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__u_dcode__DOT___mem_op),4);
        tracep->fullCData(oldp+24,((((((((((((((1U 
                                                & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_auipc)))) 
                                               | (2U 
                                                  & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_lui))))) 
                                              | (3U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))))) 
                                             | (4U 
                                                & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jalr))))) 
                                            | (5U & 
                                               (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load))))) 
                                           | (6U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store))))) 
                                          | (7U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))))) 
                                         | (8U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm))))) 
                                        | (9U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32))))) 
                                       | (0xaU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op))))) 
                                      | (0xbU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32))))) 
                                     | (0xcU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr))))) 
                                    | (0xdU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_ebreak)))))),5);
        tracep->fullCData(oldp+25,(((((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set) 
                                      | (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)) 
                                     & (0U == (0x1fU 
                                               & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                  >> 0xfU))))
                                     ? 1U : (((2U & 
                                               (- (IData)(
                                                          ((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrw) 
                                                           | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi))))) 
                                              | (3U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set))))) 
                                             | (4U 
                                                & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear))))))),3);
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__u_dcode__DOT___load_use_data_hazard_valid));
        tracep->fullIData(oldp+27,(vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus),19);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q),5);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q),5);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q),5);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q),64);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q));
        tracep->fullSData(oldp+40,(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q),12);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q),64);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q),6);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q),4);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q),5);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q),4);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q),3);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q),64);
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q),32);
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q),19);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__exc_alu_data_ex),64);
        tracep->fullQData(oldp+54,((((((- (QData)((IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                       & vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2) 
                                      | ((- (QData)((IData)(
                                                            (3U 
                                                             == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                         & (vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
                                            | vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2))) 
                                     | ((- (QData)((IData)(
                                                           (4U 
                                                            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                        & (vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
                                           & (~ vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2)))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                       & vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q))),64);
        tracep->fullBit(oldp+56,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                           | (1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)))))));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid));
        tracep->fullIData(oldp+58,(vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus),19);
        tracep->fullQData(oldp+59,((((- (QData)((IData)(
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
                                          + vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)))),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q),64);
        tracep->fullIData(oldp+63,(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q),32);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q),64);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q),5);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q),64);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q));
        tracep->fullSData(oldp+76,(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q),12);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q),4);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q),4);
        tracep->fullIData(oldp+79,(vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q),19);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__mem_data_mem),64);
        tracep->fullQData(oldp+82,((QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q))),64);
        tracep->fullBit(oldp+84,((1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                        >> 0x12U))));
        tracep->fullQData(oldp+85,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                            >> 0x10U))))) 
                                     & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                              >> 0x12U))))) 
                                       & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))),64);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__u_clint__DOT___trap_valid));
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q),64);
        tracep->fullIData(oldp+105,(vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q),32);
        tracep->fullSData(oldp+106,(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q),12);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q));
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q),5);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q),64);
        tracep->fullQData(oldp+113,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                      == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                      : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                     [vlSelf->top__DOT__u_dcode__DOT___rs1_idx])),64);
        tracep->fullQData(oldp+115,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                      == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                      : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                     [vlSelf->top__DOT__u_dcode__DOT___rs2_idx])),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q),64);
        tracep->fullQData(oldp+127,(((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid)
                                      ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                                 >> 0x10U))))) 
                                          & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                                   >> 0x12U))))) 
                                            & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))
                                      : ((IData)(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid)
                                          ? (((- (QData)((IData)(
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
                                          : (4ULL + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)))),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__u_execute_top__DOT___alu_in1),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__u_execute_top__DOT___alu_in2),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__u_execute_top__DOT___alu_out),64);
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll));
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32));
        tracep->fullCData(oldp+140,((0x3fU & (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),6);
        tracep->fullQData(oldp+141,(((((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))) 
                                       & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra))) 
                                         & ((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                             & (0xffffffffffffffffULL 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                                                     ? 
                                                    ((IData)(0x20U) 
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
                                               & (~ 
                                                  (0xffffffffffffffffULL 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                                                        ? 
                                                       ((IData)(0x20U) 
                                                        + (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                                        : (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))))))) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll))) 
                                        & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res))),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
        tracep->fullBit(oldp+151,(((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                     | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                    | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullBit(oldp+152,((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                    | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullWData(oldp+153,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed));
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32));
        tracep->fullQData(oldp+159,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                          : 
                                                         VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                          : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+161,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                          : 
                                                         VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                          : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+163,(VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+165,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+167,(VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+169,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+171,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                      : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
        tracep->fullQData(oldp+173,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                      : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
        tracep->fullIData(oldp+175,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1)),32);
        tracep->fullIData(oldp+176,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),32);
        tracep->fullIData(oldp+177,(VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+178,(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+179,(VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+180,(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+181,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
        tracep->fullIData(oldp+182,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+247,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en));
        tracep->fullQData(oldp+250,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en));
        tracep->fullQData(oldp+253,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en));
        tracep->fullQData(oldp+256,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en));
        tracep->fullQData(oldp+259,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en));
        tracep->fullQData(oldp+262,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),64);
        tracep->fullQData(oldp+264,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q)),64);
        tracep->fullIData(oldp+266,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)),32);
        tracep->fullCData(oldp+267,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx))),5);
        tracep->fullCData(oldp+268,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx))),5);
        tracep->fullCData(oldp+269,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->fullQData(oldp+270,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_dcode__DOT___imm_data)),64);
        tracep->fullQData(oldp+272,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xfU)))))),64);
        tracep->fullBit(oldp+274,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 2U)) & (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid))));
        tracep->fullSData(oldp+275,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))),12);
        tracep->fullQData(oldp+276,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : ((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid)
                                                 ? vlSelf->top__DOT__exc_alu_data_ex
                                                 : 
                                                ((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                                   == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                                  & (0U 
                                                     != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx)))
                                                  ? vlSelf->top__DOT__mem_data_mem
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                                   == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                                   ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                                   : 
                                                  vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                                  [vlSelf->top__DOT__u_dcode__DOT___rs1_idx]))))),64);
        tracep->fullQData(oldp+278,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : ((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)
                                                 ? vlSelf->top__DOT__exc_alu_data_ex
                                                 : 
                                                ((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                                   == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                                  & (0U 
                                                     != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx)))
                                                  ? vlSelf->top__DOT__mem_data_mem
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                                   == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                                   ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                                   : 
                                                  vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                                  [vlSelf->top__DOT__u_dcode__DOT___rs2_idx]))))),64);
        tracep->fullQData(oldp+280,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : ((0x300U 
                                                 == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                 ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q
                                                 : 
                                                ((0x341U 
                                                  == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                  ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q
                                                  : 
                                                 ((0x342U 
                                                   == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                   ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q
                                                   : 
                                                  ((0x343U 
                                                    == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                    ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                     ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q
                                                     : 0ULL))))))),64);
        tracep->fullCData(oldp+282,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___alu_op))),6);
        tracep->fullCData(oldp+283,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___mem_op))),4);
        tracep->fullCData(oldp+284,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : ((((((
                                                   (((((((1U 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_auipc)))) 
                                                         | (2U 
                                                            & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_lui))))) 
                                                        | (3U 
                                                           & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))))) 
                                                       | (4U 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jalr))))) 
                                                      | (5U 
                                                         & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load))))) 
                                                     | (6U 
                                                        & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store))))) 
                                                    | (7U 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))))) 
                                                   | (8U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm))))) 
                                                  | (9U 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32))))) 
                                                 | (0xaU 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op))))) 
                                                | (0xbU 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32))))) 
                                               | (0xcU 
                                                  & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr))))) 
                                              | (0xdU 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_ebreak))))))),5);
        tracep->fullCData(oldp+285,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : ((((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set) 
                                                | (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)) 
                                               & (0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                      >> 0xfU))))
                                               ? 1U
                                               : ((
                                                   (2U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrw) 
                                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi))))) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set))))) 
                                                  | (4U 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)))))))),3);
        tracep->fullIData(oldp+286,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus)),19);
        tracep->fullQData(oldp+287,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q)),64);
        tracep->fullIData(oldp+289,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q)),32);
        tracep->fullCData(oldp+290,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q))),5);
        tracep->fullQData(oldp+291,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q)),64);
        tracep->fullQData(oldp+293,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q)),64);
        tracep->fullQData(oldp+295,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)),64);
        tracep->fullQData(oldp+297,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__exc_alu_data_ex)),64);
        tracep->fullQData(oldp+299,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : ((((
                                                   (- (QData)((IData)(
                                                                      (2U 
                                                                       == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                                   & vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2) 
                                                  | ((- (QData)((IData)(
                                                                        (3U 
                                                                         == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                                     & (vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
                                                        | vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2))) 
                                                 | ((- (QData)((IData)(
                                                                       (4U 
                                                                        == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                                    & (vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
                                                       & (~ vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2)))) 
                                                | ((- (QData)((IData)(
                                                                      (1U 
                                                                       == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                                                   & vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q)))),64);
        tracep->fullBit(oldp+301,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                             >> 3U)) 
                                         & (~ ((0U 
                                                == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                               | (1U 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))))));
        tracep->fullSData(oldp+302,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q))),12);
        tracep->fullCData(oldp+303,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q))),4);
        tracep->fullCData(oldp+304,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q))),4);
        tracep->fullIData(oldp+305,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus)),19);
        tracep->fullBit(oldp+306,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                             >> 4U)) 
                                         & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                            >> 0x12U)))));
        tracep->fullQData(oldp+307,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)))),64);
        tracep->fullQData(oldp+309,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q)),64);
        tracep->fullIData(oldp+311,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)),32);
        tracep->fullQData(oldp+312,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__mem_data_mem)),64);
        tracep->fullSData(oldp+314,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q))),12);
        tracep->fullQData(oldp+315,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
        tracep->fullBit(oldp+317,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q))));
        tracep->fullCData(oldp+318,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q))),5);
        tracep->fullIData(oldp+319,((IData)(vlSelf->top__DOT__u_fetch__DOT___mem_data)),32);
        tracep->fullCData(oldp+320,(vlSelf->top__DOT__stall_clint),6);
        tracep->fullCData(oldp+321,(vlSelf->top__DOT__flush_clint),6);
        tracep->fullBit(oldp+322,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
        tracep->fullBit(oldp+323,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
        tracep->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
        tracep->fullBit(oldp+325,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 1U))));
        tracep->fullBit(oldp+326,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 1U))));
        tracep->fullBit(oldp+327,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 1U)))));
        tracep->fullIData(oldp+328,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : (IData)(vlSelf->top__DOT__u_fetch__DOT___mem_data))),32);
        tracep->fullIData(oldp+329,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__trap_bus_if)),19);
        tracep->fullBit(oldp+330,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 2U))));
        tracep->fullBit(oldp+331,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 2U))));
        tracep->fullBit(oldp+332,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 2U)))));
        tracep->fullBit(oldp+333,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 3U))));
        tracep->fullBit(oldp+334,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 3U))));
        tracep->fullBit(oldp+335,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 3U)))));
        tracep->fullBit(oldp+336,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 4U))));
        tracep->fullBit(oldp+337,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 4U))));
        tracep->fullBit(oldp+338,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 4U)))));
        tracep->fullBit(oldp+339,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__csr_mtvec_write_valid))));
        tracep->fullBit(oldp+340,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__csr_mstatus_write_valid))));
        tracep->fullQData(oldp+341,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__csr_mtvec_writedata)),64);
        tracep->fullQData(oldp+343,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : 0xbULL)),64);
        tracep->fullQData(oldp+345,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__csr_mstatus_writedata)),64);
        tracep->fullBit(oldp+347,(vlSelf->clk));
        tracep->fullBit(oldp+348,(vlSelf->rst));
        tracep->fullIData(oldp+349,(vlSelf->top__DOT__trap_bus_if),19);
        tracep->fullCData(oldp+350,(0U),4);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__csr_mstatus_writedata),64);
        tracep->fullQData(oldp+353,(0xbULL),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__csr_mtvec_writedata),64);
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__csr_mstatus_write_valid));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__csr_mtvec_write_valid));
        tracep->fullIData(oldp+359,(0x40U),32);
        tracep->fullQData(oldp+360,(0x80000000ULL),64);
        tracep->fullQData(oldp+362,(0ULL),64);
        tracep->fullIData(oldp+364,(0x20U),32);
        tracep->fullIData(oldp+365,(0x13U),32);
        tracep->fullIData(oldp+366,(0x13U),32);
        tracep->fullIData(oldp+367,(0U),19);
        tracep->fullIData(oldp+368,(0x13U),32);
        tracep->fullIData(oldp+369,(5U),32);
        tracep->fullCData(oldp+370,(0U),5);
        tracep->fullIData(oldp+371,(1U),32);
        tracep->fullBit(oldp+372,(0U));
        tracep->fullIData(oldp+373,(0xcU),32);
        tracep->fullSData(oldp+374,(0U),12);
        tracep->fullIData(oldp+375,(6U),32);
        tracep->fullCData(oldp+376,(0U),6);
        tracep->fullIData(oldp+377,(4U),32);
        tracep->fullIData(oldp+378,(3U),32);
        tracep->fullCData(oldp+379,(0U),3);
        tracep->fullIData(oldp+380,(0x40U),32);
        tracep->fullCData(oldp+381,(4U),6);
        tracep->fullCData(oldp+382,(3U),6);
        tracep->fullCData(oldp+383,(6U),6);
        tracep->fullCData(oldp+384,(0xeU),6);
        tracep->fullBit(oldp+385,(1U));
        tracep->fullQData(oldp+386,(0xa00001800ULL),64);
    }
}
