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
        tracep->declBit(c+348,"clk", false,-1);
        tracep->declBit(c+349,"rst", false,-1);
        tracep->declBit(c+348,"top clk", false,-1);
        tracep->declBit(c+349,"top rst", false,-1);
        tracep->declQuad(c+2,"top inst_addr", false,-1, 63,0);
        tracep->declQuad(c+2,"top inst_addr_if", false,-1, 63,0);
        tracep->declBus(c+320,"top inst_data_if", false,-1, 31,0);
        tracep->declBus(c+1,"top trap_bus_if", false,-1, 18,0);
        tracep->declQuad(c+4,"top inst_addr_if_id", false,-1, 63,0);
        tracep->declBus(c+6,"top inst_data_if_id", false,-1, 31,0);
        tracep->declBus(c+7,"top trap_bus_if_id", false,-1, 18,0);
        tracep->declBus(c+8,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+9,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBus(c+10,"top rd_idx_id", false,-1, 4,0);
        tracep->declQuad(c+11,"top rs1_data_id", false,-1, 63,0);
        tracep->declQuad(c+13,"top rs2_data_id", false,-1, 63,0);
        tracep->declQuad(c+15,"top imm_data_id", false,-1, 63,0);
        tracep->declQuad(c+17,"top csr_imm_id", false,-1, 63,0);
        tracep->declBit(c+19,"top csr_imm_valid_id", false,-1);
        tracep->declBus(c+20,"top csr_idx_id", false,-1, 11,0);
        tracep->declQuad(c+21,"top csr_readdata_id", false,-1, 63,0);
        tracep->declBus(c+23,"top alu_op_id", false,-1, 5,0);
        tracep->declBus(c+24,"top mem_op_id", false,-1, 3,0);
        tracep->declBus(c+25,"top exc_op_id", false,-1, 4,0);
        tracep->declBus(c+350,"top pc_op_id", false,-1, 3,0);
        tracep->declBus(c+26,"top csr_op_id", false,-1, 2,0);
        tracep->declQuad(c+4,"top inst_addr_id", false,-1, 63,0);
        tracep->declBus(c+6,"top inst_data_id", false,-1, 31,0);
        tracep->declBit(c+27,"top load_use_valid", false,-1);
        tracep->declBus(c+28,"top trap_bus_id", false,-1, 18,0);
        tracep->declBus(c+29,"top rs1_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+30,"top rs2_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+31,"top rd_idx_id_ex", false,-1, 4,0);
        tracep->declQuad(c+32,"top rs1_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+34,"top rs2_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+36,"top imm_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+38,"top csr_imm_id_ex", false,-1, 63,0);
        tracep->declBit(c+40,"top csr_imm_valid_id_ex", false,-1);
        tracep->declBus(c+41,"top csr_idx_id_ex", false,-1, 11,0);
        tracep->declQuad(c+42,"top csr_readdata_id_ex", false,-1, 63,0);
        tracep->declBus(c+44,"top alu_op_id_ex", false,-1, 5,0);
        tracep->declBus(c+45,"top mem_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+46,"top exc_op_id_ex", false,-1, 4,0);
        tracep->declBus(c+47,"top pc_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+48,"top csr_op_id_ex", false,-1, 2,0);
        tracep->declQuad(c+49,"top inst_addr_id_ex", false,-1, 63,0);
        tracep->declBus(c+51,"top inst_data_id_ex", false,-1, 31,0);
        tracep->declBus(c+52,"top trap_bus_id_ex", false,-1, 18,0);
        tracep->declQuad(c+49,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+51,"top inst_data_ex", false,-1, 31,0);
        tracep->declBus(c+31,"top rd_idx_ex", false,-1, 4,0);
        tracep->declQuad(c+32,"top rs1_data_ex", false,-1, 63,0);
        tracep->declQuad(c+34,"top rs2_data_ex", false,-1, 63,0);
        tracep->declQuad(c+36,"top imm_data_ex", false,-1, 63,0);
        tracep->declQuad(c+42,"top csr_data_ex", false,-1, 63,0);
        tracep->declQuad(c+38,"top csr_imm_ex", false,-1, 63,0);
        tracep->declBit(c+40,"top csr_imm_valid_ex", false,-1);
        tracep->declBus(c+45,"top mem_op_ex", false,-1, 3,0);
        tracep->declBus(c+47,"top pc_op_ex", false,-1, 3,0);
        tracep->declQuad(c+53,"top exc_alu_data_ex", false,-1, 63,0);
        tracep->declQuad(c+55,"top exc_csr_data_ex", false,-1, 63,0);
        tracep->declBit(c+57,"top exc_csr_valid_ex", false,-1);
        tracep->declBus(c+41,"top exc_csr_addr_ex", false,-1, 11,0);
        tracep->declBus(c+46,"top exc_op_ex", false,-1, 4,0);
        tracep->declBit(c+58,"top jump_hazard_valid", false,-1);
        tracep->declBus(c+59,"top trap_bus_ex", false,-1, 18,0);
        tracep->declQuad(c+60,"top branch_pc", false,-1, 63,0);
        tracep->declBit(c+58,"top branch_pc_valid", false,-1);
        tracep->declQuad(c+62,"top pc_ex_mem", false,-1, 63,0);
        tracep->declBus(c+64,"top inst_data_ex_mem", false,-1, 31,0);
        tracep->declQuad(c+65,"top imm_data_ex_mem", false,-1, 63,0);
        tracep->declBus(c+67,"top rd_idx_ex_mem", false,-1, 4,0);
        tracep->declQuad(c+68,"top rs1_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+70,"top rs2_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+72,"top alu_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+74,"top csr_writedata_ex_mem", false,-1, 63,0);
        tracep->declBit(c+76,"top csr_writevalid_ex_mem", false,-1);
        tracep->declBus(c+77,"top csr_addr_ex_mem", false,-1, 11,0);
        tracep->declBus(c+78,"top pc_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+79,"top mem_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+80,"top trap_bus_ex_mem", false,-1, 18,0);
        tracep->declQuad(c+62,"top pc_mem", false,-1, 63,0);
        tracep->declBus(c+64,"top inst_data_mem", false,-1, 31,0);
        tracep->declQuad(c+81,"top mem_data_mem", false,-1, 63,0);
        tracep->declBus(c+67,"top rd_idx_mem", false,-1, 4,0);
        tracep->declBus(c+77,"top csr_addr_mem", false,-1, 11,0);
        tracep->declQuad(c+74,"top exc_csr_data_mem", false,-1, 63,0);
        tracep->declBit(c+76,"top exc_csr_valid_mem", false,-1);
        tracep->declBus(c+80,"top trap_bus_mem", false,-1, 18,0);
        tracep->declQuad(c+351,"top csr_mstatus_writedata", false,-1, 63,0);
        tracep->declQuad(c+62,"top csr_mepc_writedata", false,-1, 63,0);
        tracep->declQuad(c+353,"top csr_mcause_writedata", false,-1, 63,0);
        tracep->declQuad(c+83,"top csr_mtval_writedata", false,-1, 63,0);
        tracep->declQuad(c+355,"top csr_mtvec_writedata", false,-1, 63,0);
        tracep->declBit(c+357,"top csr_mstatus_write_valid", false,-1);
        tracep->declBit(c+85,"top csr_mepc_write_valid", false,-1);
        tracep->declBit(c+85,"top csr_mcause_write_valid", false,-1);
        tracep->declBit(c+85,"top csr_mtval_write_valid", false,-1);
        tracep->declBit(c+358,"top csr_mtvec_write_valid", false,-1);
        tracep->declQuad(c+86,"top clint_pc", false,-1, 63,0);
        tracep->declBit(c+88,"top clint_pc_valid", false,-1);
        tracep->declBus(c+321,"top stall_clint", false,-1, 5,0);
        tracep->declBus(c+322,"top flush_clint", false,-1, 5,0);
        tracep->declQuad(c+89,"top csr_mstatus_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+91,"top csr_mepc_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+93,"top csr_mcause_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+95,"top csr_mtval_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+97,"top csr_mtvec_writedata_mem_wb", false,-1, 63,0);
        tracep->declBit(c+99,"top csr_mstatus_write_valid_mem_wb", false,-1);
        tracep->declBit(c+100,"top csr_mepc_write_valid_mem_wb", false,-1);
        tracep->declBit(c+101,"top csr_mcause_write_valid_mem_wb", false,-1);
        tracep->declBit(c+102,"top csr_mtval_write_valid_mem_wb", false,-1);
        tracep->declBit(c+103,"top csr_mtvec_write_valid_mem_wb", false,-1);
        tracep->declQuad(c+104,"top pc_mem_wb", false,-1, 63,0);
        tracep->declBus(c+106,"top inst_data_mem_wb", false,-1, 31,0);
        tracep->declBus(c+107,"top csr_addr_mem_wb", false,-1, 11,0);
        tracep->declQuad(c+108,"top exc_csr_data_mem_wb", false,-1, 63,0);
        tracep->declBit(c+110,"top exc_csr_valid_mem_wb", false,-1);
        tracep->declBus(c+111,"top rd_addr_mem_wb", false,-1, 4,0);
        tracep->declQuad(c+112,"top mem_data_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+114,"top rs1_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+116,"top rs2_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+118,"top csr_mstatus_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+120,"top csr_mepc_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+122,"top csr_mcause_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+124,"top csr_mtval_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+126,"top csr_mtvec_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+21,"top csr_data_csr", false,-1, 63,0);
        tracep->declBit(c+348,"top u_pc_reg clk", false,-1);
        tracep->declBit(c+349,"top u_pc_reg rst", false,-1);
        tracep->declBit(c+323,"top u_pc_reg stall_valid_i", false,-1);
        tracep->declBit(c+324,"top u_pc_reg flush_valid_i", false,-1);
        tracep->declQuad(c+60,"top u_pc_reg branch_pc_i", false,-1, 63,0);
        tracep->declBit(c+58,"top u_pc_reg branch_pc_valid_i", false,-1);
        tracep->declQuad(c+86,"top u_pc_reg clint_pc_i", false,-1, 63,0);
        tracep->declBit(c+88,"top u_pc_reg clint_pc_valid_i", false,-1);
        tracep->declQuad(c+2,"top u_pc_reg pc_o", false,-1, 63,0);
        tracep->declBus(c+359,"top u_pc_reg u_pc_dreg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+360,"top u_pc_reg u_pc_dreg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_pc_reg u_pc_dreg clk", false,-1);
        tracep->declBit(c+349,"top u_pc_reg u_pc_dreg rst", false,-1);
        tracep->declQuad(c+128,"top u_pc_reg u_pc_dreg din", false,-1, 63,0);
        tracep->declQuad(c+2,"top u_pc_reg u_pc_dreg dout", false,-1, 63,0);
        tracep->declBit(c+325,"top u_pc_reg u_pc_dreg wen", false,-1);
        tracep->declBit(c+349,"top u_fetch rst", false,-1);
        tracep->declQuad(c+2,"top u_fetch inst_addr_i", false,-1, 63,0);
        tracep->declQuad(c+2,"top u_fetch inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+320,"top u_fetch inst_data_o", false,-1, 31,0);
        tracep->declBus(c+1,"top u_fetch trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+362,"top u_fetch i", false,-1, 31,0);
        tracep->declBit(c+348,"top u_if_id clk", false,-1);
        tracep->declBit(c+349,"top u_if_id rst", false,-1);
        tracep->declBit(c+326,"top u_if_id stall_valid_i", false,-1);
        tracep->declBit(c+327,"top u_if_id flush_valid_i", false,-1);
        tracep->declQuad(c+2,"top u_if_id inst_addr_if_i", false,-1, 63,0);
        tracep->declBus(c+320,"top u_if_id inst_data_if_i", false,-1, 31,0);
        tracep->declBus(c+1,"top u_if_id trap_bus_if_i", false,-1, 18,0);
        tracep->declQuad(c+4,"top u_if_id inst_addr_if_id_o", false,-1, 63,0);
        tracep->declBus(c+6,"top u_if_id inst_data_if_id_o", false,-1, 31,0);
        tracep->declBus(c+7,"top u_if_id trap_bus_if_id_o", false,-1, 18,0);
        tracep->declBit(c+328,"top u_if_id reg_wen", false,-1);
        tracep->declBus(c+359,"top u_if_id u_inst_addr_if_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_if_id u_inst_addr_if_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_if_id u_inst_addr_if_id clk", false,-1);
        tracep->declBit(c+349,"top u_if_id u_inst_addr_if_id rst", false,-1);
        tracep->declQuad(c+263,"top u_if_id u_inst_addr_if_id din", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_if_id u_inst_addr_if_id dout", false,-1, 63,0);
        tracep->declBit(c+328,"top u_if_id u_inst_addr_if_id wen", false,-1);
        tracep->declBus(c+365,"top u_if_id u_inst_data_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+366,"top u_if_id u_inst_data_if_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top u_if_id u_inst_data_if_id clk", false,-1);
        tracep->declBit(c+349,"top u_if_id u_inst_data_if_id rst", false,-1);
        tracep->declBus(c+329,"top u_if_id u_inst_data_if_id din", false,-1, 31,0);
        tracep->declBus(c+6,"top u_if_id u_inst_data_if_id dout", false,-1, 31,0);
        tracep->declBit(c+328,"top u_if_id u_inst_data_if_id wen", false,-1);
        tracep->declBus(c+367,"top u_if_id u_trap_bus_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+368,"top u_if_id u_trap_bus_if_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+348,"top u_if_id u_trap_bus_if_id clk", false,-1);
        tracep->declBit(c+349,"top u_if_id u_trap_bus_if_id rst", false,-1);
        tracep->declBus(c+330,"top u_if_id u_trap_bus_if_id din", false,-1, 18,0);
        tracep->declBus(c+7,"top u_if_id u_trap_bus_if_id dout", false,-1, 18,0);
        tracep->declBit(c+328,"top u_if_id u_trap_bus_if_id wen", false,-1);
        tracep->declQuad(c+4,"top u_dcode inst_addr_i", false,-1, 63,0);
        tracep->declBus(c+6,"top u_dcode inst_data_i", false,-1, 31,0);
        tracep->declBus(c+7,"top u_dcode trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+114,"top u_dcode rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+116,"top u_dcode rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top u_dcode csr_data_i", false,-1, 63,0);
        tracep->declBus(c+46,"top u_dcode id_ex_exc_op_i", false,-1, 4,0);
        tracep->declQuad(c+53,"top u_dcode ex_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+31,"top u_dcode ex_rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+41,"top u_dcode ex_csr_writeaddr_i", false,-1, 11,0);
        tracep->declQuad(c+55,"top u_dcode ex_csr_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+81,"top u_dcode mem_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+67,"top u_dcode mem_rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+8,"top u_dcode rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+9,"top u_dcode rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+10,"top u_dcode rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+11,"top u_dcode rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+13,"top u_dcode rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_dcode imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+17,"top u_dcode csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+19,"top u_dcode csr_imm_valid_o", false,-1);
        tracep->declBus(c+20,"top u_dcode csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+21,"top u_dcode csr_readdata_o", false,-1, 63,0);
        tracep->declBus(c+23,"top u_dcode alu_op_o", false,-1, 5,0);
        tracep->declBus(c+24,"top u_dcode mem_op_o", false,-1, 3,0);
        tracep->declBus(c+25,"top u_dcode exc_op_o", false,-1, 4,0);
        tracep->declBus(c+350,"top u_dcode pc_op_o", false,-1, 3,0);
        tracep->declBus(c+26,"top u_dcode csr_op_o", false,-1, 2,0);
        tracep->declQuad(c+4,"top u_dcode inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+6,"top u_dcode inst_data_o", false,-1, 31,0);
        tracep->declBus(c+28,"top u_dcode trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+362,"top u_dcode i", false,-1, 31,0);
        tracep->declBit(c+348,"top u_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex rst", false,-1);
        tracep->declBit(c+331,"top u_id_ex flush_valid_i", false,-1);
        tracep->declBit(c+332,"top u_id_ex stall_valid_i", false,-1);
        tracep->declQuad(c+4,"top u_id_ex pc_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+6,"top u_id_ex inst_data_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+8,"top u_id_ex rs1_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+9,"top u_id_ex rs2_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+10,"top u_id_ex rd_idx_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_id_ex imm_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+17,"top u_id_ex csr_imm_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+19,"top u_id_ex csr_imm_valid_id_ex_i", false,-1);
        tracep->declQuad(c+11,"top u_id_ex rs1_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+13,"top u_id_ex rs2_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top u_id_ex csr_data_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+20,"top u_id_ex csr_idx_id_ex_i", false,-1, 11,0);
        tracep->declBus(c+23,"top u_id_ex alu_op_id_ex_i", false,-1, 5,0);
        tracep->declBus(c+24,"top u_id_ex mem_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+25,"top u_id_ex exc_op_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+350,"top u_id_ex pc_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+26,"top u_id_ex csr_op_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+28,"top u_id_ex trap_bus_id_ex_i", false,-1, 18,0);
        tracep->declQuad(c+49,"top u_id_ex pc_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+51,"top u_id_ex inst_data_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+29,"top u_id_ex rs1_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+30,"top u_id_ex rs2_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+31,"top u_id_ex rd_idx_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+36,"top u_id_ex imm_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+38,"top u_id_ex csr_imm_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+40,"top u_id_ex csr_imm_valid_id_ex_o", false,-1);
        tracep->declQuad(c+32,"top u_id_ex rs1_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_id_ex rs2_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_id_ex csr_data_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+41,"top u_id_ex csr_idx_id_ex_o", false,-1, 11,0);
        tracep->declBus(c+44,"top u_id_ex alu_op_id_ex_o", false,-1, 5,0);
        tracep->declBus(c+45,"top u_id_ex mem_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+46,"top u_id_ex exc_op_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+47,"top u_id_ex pc_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+48,"top u_id_ex csr_op_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+52,"top u_id_ex trap_bus_id_ex_o", false,-1, 18,0);
        tracep->declBit(c+333,"top u_id_ex reg_wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_pc_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_id_ex u_pc_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_id_ex u_pc_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_pc_id_ex rst", false,-1);
        tracep->declQuad(c+265,"top u_id_ex u_pc_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+49,"top u_id_ex u_pc_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+333,"top u_id_ex u_pc_id_ex wen", false,-1);
        tracep->declBus(c+365,"top u_id_ex u_inst_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+366,"top u_id_ex u_inst_data_id_ex RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top u_id_ex u_inst_data_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_inst_data_id_ex rst", false,-1);
        tracep->declBus(c+267,"top u_id_ex u_inst_data_id_ex din", false,-1, 31,0);
        tracep->declBus(c+51,"top u_id_ex u_inst_data_id_ex dout", false,-1, 31,0);
        tracep->declBit(c+333,"top u_id_ex u_inst_data_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_rs1_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_rs1_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+348,"top u_id_ex u_rs1_idx_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_rs1_idx_id_ex rst", false,-1);
        tracep->declBus(c+268,"top u_id_ex u_rs1_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+29,"top u_id_ex u_rs1_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+333,"top u_id_ex u_rs1_idx_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_rs2_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_rs2_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+348,"top u_id_ex u_rs2_idx_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_rs2_idx_id_ex rst", false,-1);
        tracep->declBus(c+269,"top u_id_ex u_rs2_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+30,"top u_id_ex u_rs2_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+333,"top u_id_ex u_rs2_idx_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_rd_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_rd_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+348,"top u_id_ex u_rd_idx_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_rd_idx_id_ex rst", false,-1);
        tracep->declBus(c+270,"top u_id_ex u_rd_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+31,"top u_id_ex u_rd_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+333,"top u_id_ex u_rd_idx_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_imm_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_id_ex u_imm_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_id_ex u_imm_data_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_imm_data_id_ex rst", false,-1);
        tracep->declQuad(c+271,"top u_id_ex u_imm_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+36,"top u_id_ex u_imm_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+333,"top u_id_ex u_imm_data_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_csr_imm_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_id_ex u_csr_imm_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_id_ex u_csr_imm_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_csr_imm_id_ex rst", false,-1);
        tracep->declQuad(c+273,"top u_id_ex u_csr_imm_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+38,"top u_id_ex u_csr_imm_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+333,"top u_id_ex u_csr_imm_id_ex wen", false,-1);
        tracep->declBus(c+371,"top u_id_ex u_csr_imm_valid_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_id_ex u_csr_imm_valid_id_ex RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_id_ex u_csr_imm_valid_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_csr_imm_valid_id_ex rst", false,-1);
        tracep->declBus(c+275,"top u_id_ex u_csr_imm_valid_id_ex din", false,-1, 0,0);
        tracep->declBus(c+40,"top u_id_ex u_csr_imm_valid_id_ex dout", false,-1, 0,0);
        tracep->declBit(c+333,"top u_id_ex u_csr_imm_valid_id_ex wen", false,-1);
        tracep->declBus(c+373,"top u_id_ex u_csr_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top u_id_ex u_csr_idx_id_ex RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+348,"top u_id_ex u_csr_idx_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_csr_idx_id_ex rst", false,-1);
        tracep->declBus(c+276,"top u_id_ex u_csr_idx_id_ex din", false,-1, 11,0);
        tracep->declBus(c+41,"top u_id_ex u_csr_idx_id_ex dout", false,-1, 11,0);
        tracep->declBit(c+333,"top u_id_ex u_csr_idx_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_rs1_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_id_ex u_rs1_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_id_ex u_rs1_data_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_rs1_data_id_ex rst", false,-1);
        tracep->declQuad(c+277,"top u_id_ex u_rs1_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+32,"top u_id_ex u_rs1_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+333,"top u_id_ex u_rs1_data_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_rs2_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_id_ex u_rs2_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_id_ex u_rs2_data_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_rs2_data_id_ex rst", false,-1);
        tracep->declQuad(c+279,"top u_id_ex u_rs2_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_id_ex u_rs2_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+333,"top u_id_ex u_rs2_data_id_ex wen", false,-1);
        tracep->declBus(c+359,"top u_id_ex u_csr_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_id_ex u_csr_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_id_ex u_csr_data_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_csr_data_id_ex rst", false,-1);
        tracep->declQuad(c+281,"top u_id_ex u_csr_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_id_ex u_csr_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+333,"top u_id_ex u_csr_data_id_ex wen", false,-1);
        tracep->declBus(c+375,"top u_id_ex u_alu_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+376,"top u_id_ex u_alu_op_id_ex RESET_VAL", false,-1, 5,0);
        tracep->declBit(c+348,"top u_id_ex u_alu_op_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_alu_op_id_ex rst", false,-1);
        tracep->declBus(c+283,"top u_id_ex u_alu_op_id_ex din", false,-1, 5,0);
        tracep->declBus(c+44,"top u_id_ex u_alu_op_id_ex dout", false,-1, 5,0);
        tracep->declBit(c+333,"top u_id_ex u_alu_op_id_ex wen", false,-1);
        tracep->declBus(c+377,"top u_id_ex u_mem_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_id_ex u_mem_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+348,"top u_id_ex u_mem_op_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_mem_op_id_ex rst", false,-1);
        tracep->declBus(c+284,"top u_id_ex u_mem_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+45,"top u_id_ex u_mem_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+333,"top u_id_ex u_mem_op_id_ex wen", false,-1);
        tracep->declBus(c+369,"top u_id_ex u_exc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_id_ex u_exc_op_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+348,"top u_id_ex u_exc_op_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_exc_op_id_ex rst", false,-1);
        tracep->declBus(c+285,"top u_id_ex u_exc_op_id_ex din", false,-1, 4,0);
        tracep->declBus(c+46,"top u_id_ex u_exc_op_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+333,"top u_id_ex u_exc_op_id_ex wen", false,-1);
        tracep->declBus(c+377,"top u_id_ex u_pc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_id_ex u_pc_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+348,"top u_id_ex u_pc_op_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_pc_op_id_ex rst", false,-1);
        tracep->declBus(c+350,"top u_id_ex u_pc_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+47,"top u_id_ex u_pc_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+333,"top u_id_ex u_pc_op_id_ex wen", false,-1);
        tracep->declBus(c+378,"top u_id_ex u_csr_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+379,"top u_id_ex u_csr_op_id_ex RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+348,"top u_id_ex u_csr_op_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_csr_op_id_ex rst", false,-1);
        tracep->declBus(c+286,"top u_id_ex u_csr_op_id_ex din", false,-1, 2,0);
        tracep->declBus(c+48,"top u_id_ex u_csr_op_id_ex dout", false,-1, 2,0);
        tracep->declBit(c+333,"top u_id_ex u_csr_op_id_ex wen", false,-1);
        tracep->declBus(c+367,"top u_id_ex u_trap_bus_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+368,"top u_id_ex u_trap_bus_id_ex RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+348,"top u_id_ex u_trap_bus_id_ex clk", false,-1);
        tracep->declBit(c+349,"top u_id_ex u_trap_bus_id_ex rst", false,-1);
        tracep->declBus(c+287,"top u_id_ex u_trap_bus_id_ex din", false,-1, 18,0);
        tracep->declBus(c+52,"top u_id_ex u_trap_bus_id_ex dout", false,-1, 18,0);
        tracep->declBit(c+333,"top u_id_ex u_trap_bus_id_ex wen", false,-1);
        tracep->declQuad(c+49,"top u_execute_top pc_i", false,-1, 63,0);
        tracep->declBus(c+51,"top u_execute_top inst_data_i", false,-1, 31,0);
        tracep->declBus(c+31,"top u_execute_top rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+32,"top u_execute_top rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_execute_top rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+36,"top u_execute_top imm_data_i", false,-1, 63,0);
        tracep->declBus(c+41,"top u_execute_top csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+42,"top u_execute_top csr_data_i", false,-1, 63,0);
        tracep->declQuad(c+38,"top u_execute_top csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+40,"top u_execute_top csr_imm_valid_i", false,-1);
        tracep->declBus(c+44,"top u_execute_top alu_op_i", false,-1, 5,0);
        tracep->declBus(c+45,"top u_execute_top mem_op_i", false,-1, 3,0);
        tracep->declBus(c+46,"top u_execute_top exc_op_i", false,-1, 4,0);
        tracep->declBus(c+48,"top u_execute_top csr_op_i", false,-1, 2,0);
        tracep->declBus(c+47,"top u_execute_top pc_op_i", false,-1, 3,0);
        tracep->declBus(c+52,"top u_execute_top trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+49,"top u_execute_top pc_o", false,-1, 63,0);
        tracep->declBus(c+51,"top u_execute_top inst_data_o", false,-1, 31,0);
        tracep->declBus(c+31,"top u_execute_top rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+32,"top u_execute_top rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_execute_top rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+36,"top u_execute_top imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_execute_top csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+38,"top u_execute_top csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+40,"top u_execute_top csr_imm_valid_o", false,-1);
        tracep->declBus(c+41,"top u_execute_top exc_csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+45,"top u_execute_top mem_op_o", false,-1, 3,0);
        tracep->declBus(c+47,"top u_execute_top pc_op_o", false,-1, 3,0);
        tracep->declQuad(c+53,"top u_execute_top exc_alu_data_o", false,-1, 63,0);
        tracep->declQuad(c+55,"top u_execute_top exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+57,"top u_execute_top exc_csr_valid_o", false,-1);
        tracep->declBus(c+46,"top u_execute_top exc_op_o", false,-1, 4,0);
        tracep->declQuad(c+60,"top u_execute_top branch_pc_o", false,-1, 63,0);
        tracep->declBit(c+58,"top u_execute_top branch_pc_valid_o", false,-1);
        tracep->declBit(c+58,"top u_execute_top jump_hazard_valid_o", false,-1);
        tracep->declBus(c+59,"top u_execute_top trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+362,"top u_execute_top i", false,-1, 31,0);
        tracep->declQuad(c+130,"top u_execute_top u_alu alu_a_i", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_execute_top u_alu alu_b_i", false,-1, 63,0);
        tracep->declBus(c+44,"top u_execute_top u_alu alu_op_i", false,-1, 5,0);
        tracep->declQuad(c+134,"top u_execute_top u_alu alu_out_o", false,-1, 63,0);
        tracep->declBit(c+136,"top u_execute_top u_alu compare_out_o", false,-1);
        tracep->declBit(c+137,"top u_execute_top u_alu u_alu_shift shift_sra_i", false,-1);
        tracep->declBit(c+138,"top u_execute_top u_alu u_alu_shift shift_srl_i", false,-1);
        tracep->declBit(c+139,"top u_execute_top u_alu u_alu_shift shift_sll_i", false,-1);
        tracep->declBit(c+140,"top u_execute_top u_alu u_alu_shift shift32_valid_i", false,-1);
        tracep->declQuad(c+130,"top u_execute_top u_alu u_alu_shift shift_num_i", false,-1, 63,0);
        tracep->declBus(c+141,"top u_execute_top u_alu u_alu_shift shift_count_i", false,-1, 5,0);
        tracep->declQuad(c+142,"top u_execute_top u_alu u_alu_shift shift_out_o", false,-1, 63,0);
        tracep->declBus(c+359,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+144,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 in", false,-1, 63,0);
        tracep->declQuad(c+146,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 out", false,-1, 63,0);
        tracep->declBus(c+380,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 i", false,-1, 31,0);
        tracep->declBus(c+359,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+148,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 in", false,-1, 63,0);
        tracep->declQuad(c+150,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 out", false,-1, 63,0);
        tracep->declBus(c+380,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 i", false,-1, 31,0);
        tracep->declBit(c+152,"top u_execute_top u_alu u_alu_mul_top rs1_signed_valid_i", false,-1);
        tracep->declBit(c+153,"top u_execute_top u_alu u_alu_mul_top rs2_signed_valid_i", false,-1);
        tracep->declQuad(c+130,"top u_execute_top u_alu u_alu_mul_top rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_execute_top u_alu u_alu_mul_top rs2_data_i", false,-1, 63,0);
        tracep->declArray(c+154,"top u_execute_top u_alu u_alu_mul_top mul_out_o", false,-1, 127,0);
        tracep->declBit(c+158,"top u_execute_top u_alu u_alu_div_top signed_valid_i", false,-1);
        tracep->declBit(c+159,"top u_execute_top u_alu u_alu_div_top div32_valid_i", false,-1);
        tracep->declQuad(c+130,"top u_execute_top u_alu u_alu_div_top sr1_data_i", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_execute_top u_alu u_alu_div_top sr2_data_i", false,-1, 63,0);
        tracep->declQuad(c+160,"top u_execute_top u_alu u_alu_div_top div_out_o", false,-1, 63,0);
        tracep->declQuad(c+162,"top u_execute_top u_alu u_alu_div_top rem_out_o", false,-1, 63,0);
        tracep->declQuad(c+130,"top u_execute_top u_alu u_alu_div_top sr1_64_signed", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_execute_top u_alu u_alu_div_top sr2_64_signed", false,-1, 63,0);
        tracep->declQuad(c+164,"top u_execute_top u_alu u_alu_div_top div64_signed", false,-1, 63,0);
        tracep->declQuad(c+166,"top u_execute_top u_alu u_alu_div_top rem64_signed", false,-1, 63,0);
        tracep->declQuad(c+168,"top u_execute_top u_alu u_alu_div_top div64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+170,"top u_execute_top u_alu u_alu_div_top rem64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+172,"top u_execute_top u_alu u_alu_div_top div64_result", false,-1, 63,0);
        tracep->declQuad(c+174,"top u_execute_top u_alu u_alu_div_top rem64_result", false,-1, 63,0);
        tracep->declBus(c+176,"top u_execute_top u_alu u_alu_div_top sr1_32_signed", false,-1, 31,0);
        tracep->declBus(c+177,"top u_execute_top u_alu u_alu_div_top sr2_32_signed", false,-1, 31,0);
        tracep->declBus(c+178,"top u_execute_top u_alu u_alu_div_top div32_signed", false,-1, 31,0);
        tracep->declBus(c+179,"top u_execute_top u_alu u_alu_div_top rem32_signed", false,-1, 31,0);
        tracep->declBus(c+180,"top u_execute_top u_alu u_alu_div_top div32_unsigned", false,-1, 31,0);
        tracep->declBus(c+181,"top u_execute_top u_alu u_alu_div_top rem32_unsigned", false,-1, 31,0);
        tracep->declBus(c+182,"top u_execute_top u_alu u_alu_div_top div32_result", false,-1, 31,0);
        tracep->declBus(c+183,"top u_execute_top u_alu u_alu_div_top rem32_result", false,-1, 31,0);
        tracep->declQuad(c+38,"top u_execute_top u_execute_csr csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+40,"top u_execute_top u_execute_csr csr_imm_valid_i", false,-1);
        tracep->declQuad(c+32,"top u_execute_top u_execute_csr rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_execute_top u_execute_csr csr_data_i", false,-1, 63,0);
        tracep->declBus(c+48,"top u_execute_top u_execute_csr csr_op_i", false,-1, 2,0);
        tracep->declQuad(c+55,"top u_execute_top u_execute_csr csr_exe_data_o", false,-1, 63,0);
        tracep->declBit(c+57,"top u_execute_top u_execute_csr csr_exe_data_valid_o", false,-1);
        tracep->declBit(c+348,"top u_ex_mem clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem rst", false,-1);
        tracep->declBit(c+334,"top u_ex_mem flush_valid_i", false,-1);
        tracep->declBit(c+335,"top u_ex_mem stall_valid_i", false,-1);
        tracep->declQuad(c+49,"top u_ex_mem pc_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+51,"top u_ex_mem inst_data_ex_mem_i", false,-1, 31,0);
        tracep->declQuad(c+36,"top u_ex_mem imm_data_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+31,"top u_ex_mem rd_idx_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+32,"top u_ex_mem rs1_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_ex_mem rs2_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+53,"top u_ex_mem alu_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+55,"top u_ex_mem csr_writedata_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+57,"top u_ex_mem csr_writevalid_ex_mem_i", false,-1);
        tracep->declBus(c+41,"top u_ex_mem csr_addr_ex_mem_i", false,-1, 11,0);
        tracep->declBus(c+47,"top u_ex_mem pc_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+45,"top u_ex_mem mem_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+59,"top u_ex_mem trap_bus_ex_mem_i", false,-1, 18,0);
        tracep->declQuad(c+62,"top u_ex_mem pc_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+64,"top u_ex_mem inst_data_ex_mem_o", false,-1, 31,0);
        tracep->declQuad(c+65,"top u_ex_mem imm_data_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+67,"top u_ex_mem rd_idx_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+68,"top u_ex_mem rs1_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+70,"top u_ex_mem rs2_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+72,"top u_ex_mem alu_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+74,"top u_ex_mem csr_writedata_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+76,"top u_ex_mem csr_writevalid_ex_mem_o", false,-1);
        tracep->declBus(c+77,"top u_ex_mem csr_addr_ex_mem_o", false,-1, 11,0);
        tracep->declBus(c+78,"top u_ex_mem pc_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+79,"top u_ex_mem mem_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+80,"top u_ex_mem trap_bus_ex_mem_o", false,-1, 18,0);
        tracep->declBit(c+336,"top u_ex_mem reg_wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_pc_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_ex_mem u_pc_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_ex_mem u_pc_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_pc_ex_mem_id rst", false,-1);
        tracep->declQuad(c+288,"top u_ex_mem u_pc_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+62,"top u_ex_mem u_pc_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+336,"top u_ex_mem u_pc_ex_mem_id wen", false,-1);
        tracep->declBus(c+365,"top u_ex_mem u_inst_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+366,"top u_ex_mem u_inst_data_ex_mem_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top u_ex_mem u_inst_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_inst_data_ex_mem_id rst", false,-1);
        tracep->declBus(c+290,"top u_ex_mem u_inst_data_ex_mem_id din", false,-1, 31,0);
        tracep->declBus(c+64,"top u_ex_mem u_inst_data_ex_mem_id dout", false,-1, 31,0);
        tracep->declBit(c+336,"top u_ex_mem u_inst_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+369,"top u_ex_mem u_rd_idx_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_ex_mem u_rd_idx_ex_mem_id RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+348,"top u_ex_mem u_rd_idx_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_rd_idx_ex_mem_id rst", false,-1);
        tracep->declBus(c+291,"top u_ex_mem u_rd_idx_ex_mem_id din", false,-1, 4,0);
        tracep->declBus(c+67,"top u_ex_mem u_rd_idx_ex_mem_id dout", false,-1, 4,0);
        tracep->declBit(c+336,"top u_ex_mem u_rd_idx_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_rs1_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_ex_mem u_rs1_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_ex_mem u_rs1_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_rs1_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+292,"top u_ex_mem u_rs1_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+68,"top u_ex_mem u_rs1_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+336,"top u_ex_mem u_rs1_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_rs2_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_ex_mem u_rs2_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_ex_mem u_rs2_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_rs2_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+294,"top u_ex_mem u_rs2_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+70,"top u_ex_mem u_rs2_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+336,"top u_ex_mem u_rs2_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_imm_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_ex_mem u_imm_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_ex_mem u_imm_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_imm_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+296,"top u_ex_mem u_imm_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+65,"top u_ex_mem u_imm_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+336,"top u_ex_mem u_imm_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_alu_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_ex_mem u_alu_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_ex_mem u_alu_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_alu_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+298,"top u_ex_mem u_alu_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+72,"top u_ex_mem u_alu_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+336,"top u_ex_mem u_alu_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+359,"top u_ex_mem u_csr_writedata_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_ex_mem u_csr_writedata_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_ex_mem u_csr_writedata_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_csr_writedata_ex_mem_id rst", false,-1);
        tracep->declQuad(c+300,"top u_ex_mem u_csr_writedata_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+74,"top u_ex_mem u_csr_writedata_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+336,"top u_ex_mem u_csr_writedata_ex_mem_id wen", false,-1);
        tracep->declBus(c+371,"top u_ex_mem u_csr_writevalid_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_ex_mem u_csr_writevalid_ex_mem_id RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_ex_mem u_csr_writevalid_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_csr_writevalid_ex_mem_id rst", false,-1);
        tracep->declBus(c+302,"top u_ex_mem u_csr_writevalid_ex_mem_id din", false,-1, 0,0);
        tracep->declBus(c+76,"top u_ex_mem u_csr_writevalid_ex_mem_id dout", false,-1, 0,0);
        tracep->declBit(c+336,"top u_ex_mem u_csr_writevalid_ex_mem_id wen", false,-1);
        tracep->declBus(c+373,"top u_ex_mem u_csr_addr_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top u_ex_mem u_csr_addr_ex_mem_id RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+348,"top u_ex_mem u_csr_addr_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_csr_addr_ex_mem_id rst", false,-1);
        tracep->declBus(c+303,"top u_ex_mem u_csr_addr_ex_mem_id din", false,-1, 11,0);
        tracep->declBus(c+77,"top u_ex_mem u_csr_addr_ex_mem_id dout", false,-1, 11,0);
        tracep->declBit(c+336,"top u_ex_mem u_csr_addr_ex_mem_id wen", false,-1);
        tracep->declBus(c+377,"top u_ex_mem u_pc_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_ex_mem u_pc_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+348,"top u_ex_mem u_pc_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_pc_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+304,"top u_ex_mem u_pc_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+78,"top u_ex_mem u_pc_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+336,"top u_ex_mem u_pc_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+377,"top u_ex_mem u_mem_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_ex_mem u_mem_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+348,"top u_ex_mem u_mem_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_mem_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+305,"top u_ex_mem u_mem_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+79,"top u_ex_mem u_mem_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+336,"top u_ex_mem u_mem_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+367,"top u_ex_mem u_trap_bus_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+368,"top u_ex_mem u_trap_bus_ex_mem_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+348,"top u_ex_mem u_trap_bus_ex_mem_id clk", false,-1);
        tracep->declBit(c+349,"top u_ex_mem u_trap_bus_ex_mem_id rst", false,-1);
        tracep->declBus(c+306,"top u_ex_mem u_trap_bus_ex_mem_id din", false,-1, 18,0);
        tracep->declBus(c+80,"top u_ex_mem u_trap_bus_ex_mem_id dout", false,-1, 18,0);
        tracep->declBit(c+336,"top u_ex_mem u_trap_bus_ex_mem_id wen", false,-1);
        tracep->declBit(c+348,"top u_memory clk", false,-1);
        tracep->declBit(c+349,"top u_memory rst", false,-1);
        tracep->declQuad(c+62,"top u_memory pc_i", false,-1, 63,0);
        tracep->declBus(c+64,"top u_memory inst_data_i", false,-1, 31,0);
        tracep->declBus(c+67,"top u_memory rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+70,"top u_memory rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+79,"top u_memory mem_op_i", false,-1, 3,0);
        tracep->declQuad(c+72,"top u_memory exc_alu_data_i", false,-1, 63,0);
        tracep->declBus(c+77,"top u_memory csr_addr_i", false,-1, 11,0);
        tracep->declQuad(c+74,"top u_memory exc_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+76,"top u_memory exc_csr_valid_i", false,-1);
        tracep->declBus(c+80,"top u_memory trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+62,"top u_memory pc_o", false,-1, 63,0);
        tracep->declBus(c+64,"top u_memory inst_data_o", false,-1, 31,0);
        tracep->declQuad(c+81,"top u_memory mem_data_o", false,-1, 63,0);
        tracep->declBus(c+67,"top u_memory rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+77,"top u_memory csr_addr_o", false,-1, 11,0);
        tracep->declQuad(c+74,"top u_memory exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+76,"top u_memory exc_csr_valid_o", false,-1);
        tracep->declBus(c+80,"top u_memory trap_bus_o", false,-1, 18,0);
        tracep->declBit(c+349,"top u_clint rst", false,-1);
        tracep->declQuad(c+62,"top u_clint pc_i", false,-1, 63,0);
        tracep->declBus(c+64,"top u_clint inst_data_i", false,-1, 31,0);
        tracep->declBus(c+80,"top u_clint trap_bus_i", false,-1, 18,0);
        tracep->declBit(c+27,"top u_clint load_use_valid_id_i", false,-1);
        tracep->declBit(c+58,"top u_clint jump_valid_ex_i", false,-1);
        tracep->declQuad(c+118,"top u_clint csr_mstatus_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_clint csr_mepc_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+122,"top u_clint csr_mcause_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_clint csr_mtval_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_clint csr_mtvec_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+351,"top u_clint csr_mstatus_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+62,"top u_clint csr_mepc_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+353,"top u_clint csr_mcause_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+83,"top u_clint csr_mtval_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+355,"top u_clint csr_mtvec_writedata_o", false,-1, 63,0);
        tracep->declBit(c+357,"top u_clint csr_mstatus_write_valid_o", false,-1);
        tracep->declBit(c+85,"top u_clint csr_mepc_write_valid_o", false,-1);
        tracep->declBit(c+85,"top u_clint csr_mcause_write_valid_o", false,-1);
        tracep->declBit(c+85,"top u_clint csr_mtval_write_valid_o", false,-1);
        tracep->declBit(c+358,"top u_clint csr_mtvec_write_valid_o", false,-1);
        tracep->declQuad(c+86,"top u_clint clint_pc_o", false,-1, 63,0);
        tracep->declBit(c+88,"top u_clint clint_pc_valid_o", false,-1);
        tracep->declBus(c+321,"top u_clint stall_o", false,-1, 5,0);
        tracep->declBus(c+322,"top u_clint flush_o", false,-1, 5,0);
        tracep->declBus(c+381,"top u_clint load_use_flush", false,-1, 5,0);
        tracep->declBus(c+382,"top u_clint load_use_stall", false,-1, 5,0);
        tracep->declBus(c+383,"top u_clint jump_flush", false,-1, 5,0);
        tracep->declBus(c+376,"top u_clint jump_stall", false,-1, 5,0);
        tracep->declBus(c+384,"top u_clint trap_flush", false,-1, 5,0);
        tracep->declBus(c+376,"top u_clint trap_stall", false,-1, 5,0);
        tracep->declBit(c+348,"top u_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb rst", false,-1);
        tracep->declBit(c+337,"top u_mem_wb flush_valid_i", false,-1);
        tracep->declBit(c+338,"top u_mem_wb stall_valid_i", false,-1);
        tracep->declQuad(c+351,"top u_mem_wb csr_mstatus_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+62,"top u_mem_wb csr_mepc_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+353,"top u_mem_wb csr_mcause_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+83,"top u_mem_wb csr_mtval_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+355,"top u_mem_wb csr_mtvec_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+357,"top u_mem_wb csr_mstatus_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+85,"top u_mem_wb csr_mepc_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+85,"top u_mem_wb csr_mcause_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+85,"top u_mem_wb csr_mtval_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+358,"top u_mem_wb csr_mtvec_write_valid_mem_wb_i", false,-1);
        tracep->declQuad(c+62,"top u_mem_wb pc_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+64,"top u_mem_wb inst_data_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+77,"top u_mem_wb csr_addr_mem_wb_i", false,-1, 11,0);
        tracep->declQuad(c+74,"top u_mem_wb exc_csr_data_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+76,"top u_mem_wb exc_csr_valid_mem_wb_i", false,-1);
        tracep->declBus(c+67,"top u_mem_wb rd_addr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+81,"top u_mem_wb mem_data_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+89,"top u_mem_wb csr_mstatus_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+91,"top u_mem_wb csr_mepc_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_mem_wb csr_mcause_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+95,"top u_mem_wb csr_mtval_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+97,"top u_mem_wb csr_mtvec_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+99,"top u_mem_wb csr_mstatus_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+100,"top u_mem_wb csr_mepc_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+101,"top u_mem_wb csr_mcause_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+102,"top u_mem_wb csr_mtval_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+103,"top u_mem_wb csr_mtvec_write_valid_mem_wb_o", false,-1);
        tracep->declQuad(c+104,"top u_mem_wb pc_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+106,"top u_mem_wb inst_data_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+107,"top u_mem_wb csr_addr_mem_wb_o", false,-1, 11,0);
        tracep->declQuad(c+108,"top u_mem_wb exc_csr_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+110,"top u_mem_wb exc_csr_valid_mem_wb_o", false,-1);
        tracep->declBus(c+111,"top u_mem_wb rd_addr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+112,"top u_mem_wb mem_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb reg_wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+340,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+103,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mtval_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mtval_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtval_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mtval_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+307,"top u_mem_wb u_csr_mtval_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+102,"top u_mem_wb u_csr_mtval_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mtval_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mcause_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mcause_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mcause_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mcause_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+307,"top u_mem_wb u_csr_mcause_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+101,"top u_mem_wb u_csr_mcause_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mcause_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mepc_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mepc_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mepc_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mepc_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+307,"top u_mem_wb u_csr_mepc_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+100,"top u_mem_wb u_csr_mepc_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mepc_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+341,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+99,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mtvec_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_csr_mtvec_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtvec_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mtvec_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+342,"top u_mem_wb u_csr_mtvec_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+97,"top u_mem_wb u_csr_mtvec_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mtvec_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mtval_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_csr_mtval_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mtval_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mtval_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+308,"top u_mem_wb u_csr_mtval_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+95,"top u_mem_wb u_csr_mtval_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mtval_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mcause_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_csr_mcause_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mcause_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mcause_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+344,"top u_mem_wb u_csr_mcause_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_mem_wb u_csr_mcause_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mcause_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mepc_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_csr_mepc_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mepc_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mepc_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+310,"top u_mem_wb u_csr_mepc_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+91,"top u_mem_wb u_csr_mepc_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mepc_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_csr_mstatus_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_csr_mstatus_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_mstatus_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_mstatus_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+346,"top u_mem_wb u_csr_mstatus_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+89,"top u_mem_wb u_csr_mstatus_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_mstatus_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_pc_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_pc_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_pc_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_pc_mem_wb rst", false,-1);
        tracep->declQuad(c+310,"top u_mem_wb u_pc_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+104,"top u_mem_wb u_pc_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_pc_mem_wb wen", false,-1);
        tracep->declBus(c+365,"top u_mem_wb u_inst_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+366,"top u_mem_wb u_inst_data_mem_wb RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top u_mem_wb u_inst_data_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_inst_data_mem_wb rst", false,-1);
        tracep->declBus(c+312,"top u_mem_wb u_inst_data_mem_wb din", false,-1, 31,0);
        tracep->declBus(c+106,"top u_mem_wb u_inst_data_mem_wb dout", false,-1, 31,0);
        tracep->declBit(c+339,"top u_mem_wb u_inst_data_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_mem_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_mem_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_mem_data_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_mem_data_mem_wb rst", false,-1);
        tracep->declQuad(c+313,"top u_mem_wb u_mem_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+112,"top u_mem_wb u_mem_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_mem_data_mem_wb wen", false,-1);
        tracep->declBus(c+373,"top u_mem_wb u_csr_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top u_mem_wb u_csr_addr_mem_wb RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+348,"top u_mem_wb u_csr_addr_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_csr_addr_mem_wb rst", false,-1);
        tracep->declBus(c+315,"top u_mem_wb u_csr_addr_mem_wb din", false,-1, 11,0);
        tracep->declBus(c+107,"top u_mem_wb u_csr_addr_mem_wb dout", false,-1, 11,0);
        tracep->declBit(c+339,"top u_mem_wb u_csr_addr_mem_wb wen", false,-1);
        tracep->declBus(c+359,"top u_mem_wb u_exc_csr_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_mem_wb u_exc_csr_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_mem_wb u_exc_csr_data_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_exc_csr_data_mem_wb rst", false,-1);
        tracep->declQuad(c+316,"top u_mem_wb u_exc_csr_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+108,"top u_mem_wb u_exc_csr_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+339,"top u_mem_wb u_exc_csr_data_mem_wb wen", false,-1);
        tracep->declBus(c+371,"top u_mem_wb u_exc_csr_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top u_mem_wb u_exc_csr_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+348,"top u_mem_wb u_exc_csr_valid_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_exc_csr_valid_mem_wb rst", false,-1);
        tracep->declBus(c+318,"top u_mem_wb u_exc_csr_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+110,"top u_mem_wb u_exc_csr_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+339,"top u_mem_wb u_exc_csr_valid_mem_wb wen", false,-1);
        tracep->declBus(c+369,"top u_mem_wb u_rd_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_mem_wb u_rd_addr_mem_wb RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+348,"top u_mem_wb u_rd_addr_mem_wb clk", false,-1);
        tracep->declBit(c+349,"top u_mem_wb u_rd_addr_mem_wb rst", false,-1);
        tracep->declBus(c+319,"top u_mem_wb u_rd_addr_mem_wb din", false,-1, 4,0);
        tracep->declBus(c+111,"top u_mem_wb u_rd_addr_mem_wb dout", false,-1, 4,0);
        tracep->declBit(c+339,"top u_mem_wb u_rd_addr_mem_wb wen", false,-1);
        tracep->declBit(c+348,"top u_writeback clk", false,-1);
        tracep->declBit(c+349,"top u_writeback rst", false,-1);
        tracep->declQuad(c+104,"top u_writeback pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+106,"top u_writeback inst_data_wb_i", false,-1, 31,0);
        tracep->declBit(c+348,"top u_rv64_gpr_regfile clk", false,-1);
        tracep->declBit(c+349,"top u_rv64_gpr_regfile rst", false,-1);
        tracep->declBus(c+8,"top u_rv64_gpr_regfile rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+9,"top u_rv64_gpr_regfile rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+114,"top u_rv64_gpr_regfile rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+116,"top u_rv64_gpr_regfile rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+111,"top u_rv64_gpr_regfile write_idx_i", false,-1, 4,0);
        tracep->declQuad(c+112,"top u_rv64_gpr_regfile write_data_i", false,-1, 63,0);
        tracep->declBit(c+385,"top u_rv64_gpr_regfile write_data_valid_i", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+184+i*2,"top u_rv64_gpr_regfile rf", true,(i+0), 63,0);}}
        tracep->declBit(c+348,"top u_rv64_csr_regfile clk", false,-1);
        tracep->declBit(c+349,"top u_rv64_csr_regfile rst", false,-1);
        tracep->declQuad(c+89,"top u_rv64_csr_regfile csr_mstatus_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+91,"top u_rv64_csr_regfile csr_mepc_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_rv64_csr_regfile csr_mcause_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+95,"top u_rv64_csr_regfile csr_mtval_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+97,"top u_rv64_csr_regfile csr_mtvec_writedata_i", false,-1, 63,0);
        tracep->declBit(c+99,"top u_rv64_csr_regfile csr_mstatus_write_valid_i", false,-1);
        tracep->declBit(c+100,"top u_rv64_csr_regfile csr_mepc_write_valid_i", false,-1);
        tracep->declBit(c+101,"top u_rv64_csr_regfile csr_mcause_write_valid_i", false,-1);
        tracep->declBit(c+102,"top u_rv64_csr_regfile csr_mtval_write_valid_i", false,-1);
        tracep->declBit(c+103,"top u_rv64_csr_regfile csr_mtvec_write_valid_i", false,-1);
        tracep->declQuad(c+118,"top u_rv64_csr_regfile csr_mstatus_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_rv64_csr_regfile csr_mepc_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+122,"top u_rv64_csr_regfile csr_mcause_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_rv64_csr_regfile csr_mtval_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_rv64_csr_regfile csr_mtvec_readdata_o", false,-1, 63,0);
        tracep->declBus(c+20,"top u_rv64_csr_regfile csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+21,"top u_rv64_csr_regfile csr_readdata_o", false,-1, 63,0);
        tracep->declBus(c+107,"top u_rv64_csr_regfile csr_writeaddr_i", false,-1, 11,0);
        tracep->declBit(c+110,"top u_rv64_csr_regfile csr_write_valid_i", false,-1);
        tracep->declQuad(c+108,"top u_rv64_csr_regfile csr_writedata_i", false,-1, 63,0);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mstatus WIDTH", false,-1, 31,0);
        tracep->declQuad(c+386,"top u_rv64_csr_regfile u_csr_mstatus RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mstatus clk", false,-1);
        tracep->declBit(c+349,"top u_rv64_csr_regfile u_csr_mstatus rst", false,-1);
        tracep->declQuad(c+248,"top u_rv64_csr_regfile u_csr_mstatus din", false,-1, 63,0);
        tracep->declQuad(c+118,"top u_rv64_csr_regfile u_csr_mstatus dout", false,-1, 63,0);
        tracep->declBit(c+250,"top u_rv64_csr_regfile u_csr_mstatus wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mepc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_rv64_csr_regfile u_csr_mepc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mepc clk", false,-1);
        tracep->declBit(c+349,"top u_rv64_csr_regfile u_csr_mepc rst", false,-1);
        tracep->declQuad(c+251,"top u_rv64_csr_regfile u_csr_mepc din", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_rv64_csr_regfile u_csr_mepc dout", false,-1, 63,0);
        tracep->declBit(c+253,"top u_rv64_csr_regfile u_csr_mepc wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mcause WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_rv64_csr_regfile u_csr_mcause RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mcause clk", false,-1);
        tracep->declBit(c+349,"top u_rv64_csr_regfile u_csr_mcause rst", false,-1);
        tracep->declQuad(c+254,"top u_rv64_csr_regfile u_csr_mcause din", false,-1, 63,0);
        tracep->declQuad(c+122,"top u_rv64_csr_regfile u_csr_mcause dout", false,-1, 63,0);
        tracep->declBit(c+256,"top u_rv64_csr_regfile u_csr_mcause wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mtval WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_rv64_csr_regfile u_csr_mtval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mtval clk", false,-1);
        tracep->declBit(c+349,"top u_rv64_csr_regfile u_csr_mtval rst", false,-1);
        tracep->declQuad(c+257,"top u_rv64_csr_regfile u_csr_mtval din", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_rv64_csr_regfile u_csr_mtval dout", false,-1, 63,0);
        tracep->declBit(c+259,"top u_rv64_csr_regfile u_csr_mtval wen", false,-1);
        tracep->declBus(c+359,"top u_rv64_csr_regfile u_csr_mtvec WIDTH", false,-1, 31,0);
        tracep->declQuad(c+363,"top u_rv64_csr_regfile u_csr_mtvec RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+348,"top u_rv64_csr_regfile u_csr_mtvec clk", false,-1);
        tracep->declBit(c+349,"top u_rv64_csr_regfile u_csr_mtvec rst", false,-1);
        tracep->declQuad(c+260,"top u_rv64_csr_regfile u_csr_mtvec din", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_rv64_csr_regfile u_csr_mtvec dout", false,-1, 63,0);
        tracep->declBit(c+262,"top u_rv64_csr_regfile u_csr_mtvec wen", false,-1);
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
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__u_fetch__DOT___if_trap_bus),19);
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),64);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q),64);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q),32);
        tracep->fullIData(oldp+7,(vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q),19);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__u_dcode__DOT___rs1_idx),5);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__u_dcode__DOT___rs2_idx),5);
        tracep->fullCData(oldp+10,((((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                       | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                      | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                     | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                     ? (0x1fU & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->fullQData(oldp+11,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid)
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
        tracep->fullQData(oldp+13,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)
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
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__u_dcode__DOT___imm_data),64);
        tracep->fullQData(oldp+17,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                       >> 0xfU))))),64);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid));
        tracep->fullSData(oldp+20,(vlSelf->top__DOT__u_dcode__DOT___csr_idx),12);
        tracep->fullQData(oldp+21,(((0x300U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
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
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__u_dcode__DOT___alu_op),6);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__u_dcode__DOT___mem_op),4);
        tracep->fullCData(oldp+25,((((((((((((((1U 
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
        tracep->fullCData(oldp+26,(((((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set) 
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
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__u_dcode__DOT___load_use_data_hazard_valid));
        tracep->fullIData(oldp+28,(vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus),19);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q),5);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q),5);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q),5);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q),64);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q));
        tracep->fullSData(oldp+41,(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q),12);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q),64);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q),6);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q),4);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q),5);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q),4);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q),3);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q),64);
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q),32);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q),19);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__exc_alu_data_ex),64);
        tracep->fullQData(oldp+55,((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+57,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                           | (1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)))))));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid));
        tracep->fullIData(oldp+59,(vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus),19);
        tracep->fullQData(oldp+60,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q),64);
        tracep->fullIData(oldp+64,(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q),32);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q),64);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q),5);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q),64);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q));
        tracep->fullSData(oldp+77,(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q),12);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q),4);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q),4);
        tracep->fullIData(oldp+80,(vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q),19);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__mem_data_mem),64);
        tracep->fullQData(oldp+83,((QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q))),64);
        tracep->fullBit(oldp+85,((1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                        >> 0x12U))));
        tracep->fullQData(oldp+86,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                            >> 0x10U))))) 
                                     & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                              >> 0x12U))))) 
                                       & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))),64);
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__u_clint__DOT___trap_valid));
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q),64);
        tracep->fullIData(oldp+106,(vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q),32);
        tracep->fullSData(oldp+107,(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q),12);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q));
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q),5);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q),64);
        tracep->fullQData(oldp+114,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                      == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                      : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                     [vlSelf->top__DOT__u_dcode__DOT___rs1_idx])),64);
        tracep->fullQData(oldp+116,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                      == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                      : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                     [vlSelf->top__DOT__u_dcode__DOT___rs2_idx])),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q),64);
        tracep->fullQData(oldp+128,(((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid)
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
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__u_execute_top__DOT___alu_in1),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__u_execute_top__DOT___alu_in2),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__u_execute_top__DOT___alu_out),64);
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl));
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32));
        tracep->fullCData(oldp+141,((0x3fU & (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),6);
        tracep->fullQData(oldp+142,(((((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))) 
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
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
        tracep->fullBit(oldp+152,(((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                     | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                    | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullBit(oldp+153,((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                    | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullWData(oldp+154,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed));
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32));
        tracep->fullQData(oldp+160,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                          : 
                                                         VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                          : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+162,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                          : 
                                                         VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                          : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+164,(VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+166,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+168,(VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+170,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+172,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                      : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
        tracep->fullQData(oldp+174,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                      : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
        tracep->fullIData(oldp+176,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1)),32);
        tracep->fullIData(oldp+177,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),32);
        tracep->fullIData(oldp+178,(VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+179,(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+180,(VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+181,(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+182,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
        tracep->fullIData(oldp+183,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+248,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en));
        tracep->fullQData(oldp+251,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en));
        tracep->fullQData(oldp+254,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en));
        tracep->fullQData(oldp+257,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en));
        tracep->fullQData(oldp+260,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en));
        tracep->fullQData(oldp+263,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),64);
        tracep->fullQData(oldp+265,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q)),64);
        tracep->fullIData(oldp+267,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)),32);
        tracep->fullCData(oldp+268,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx))),5);
        tracep->fullCData(oldp+269,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx))),5);
        tracep->fullCData(oldp+270,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->fullQData(oldp+271,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_dcode__DOT___imm_data)),64);
        tracep->fullQData(oldp+273,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xfU)))))),64);
        tracep->fullBit(oldp+275,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 2U)) & (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid))));
        tracep->fullSData(oldp+276,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))),12);
        tracep->fullQData(oldp+277,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullQData(oldp+279,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullQData(oldp+281,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullCData(oldp+283,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___alu_op))),6);
        tracep->fullCData(oldp+284,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___mem_op))),4);
        tracep->fullCData(oldp+285,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullCData(oldp+286,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullIData(oldp+287,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus)),19);
        tracep->fullQData(oldp+288,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q)),64);
        tracep->fullIData(oldp+290,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q)),32);
        tracep->fullCData(oldp+291,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q))),5);
        tracep->fullQData(oldp+292,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q)),64);
        tracep->fullQData(oldp+294,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q)),64);
        tracep->fullQData(oldp+296,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)),64);
        tracep->fullQData(oldp+298,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__exc_alu_data_ex)),64);
        tracep->fullQData(oldp+300,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullBit(oldp+302,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                             >> 3U)) 
                                         & (~ ((0U 
                                                == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                               | (1U 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))))));
        tracep->fullSData(oldp+303,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q))),12);
        tracep->fullCData(oldp+304,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q))),4);
        tracep->fullCData(oldp+305,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q))),4);
        tracep->fullIData(oldp+306,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus)),19);
        tracep->fullBit(oldp+307,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                             >> 4U)) 
                                         & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                            >> 0x12U)))));
        tracep->fullQData(oldp+308,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)))),64);
        tracep->fullQData(oldp+310,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q)),64);
        tracep->fullIData(oldp+312,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)),32);
        tracep->fullQData(oldp+313,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__mem_data_mem)),64);
        tracep->fullSData(oldp+315,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q))),12);
        tracep->fullQData(oldp+316,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
        tracep->fullBit(oldp+318,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q))));
        tracep->fullCData(oldp+319,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q))),5);
        tracep->fullIData(oldp+320,((IData)(vlSelf->top__DOT__u_fetch__DOT___mem_data)),32);
        tracep->fullCData(oldp+321,(vlSelf->top__DOT__stall_clint),6);
        tracep->fullCData(oldp+322,(vlSelf->top__DOT__flush_clint),6);
        tracep->fullBit(oldp+323,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
        tracep->fullBit(oldp+324,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
        tracep->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
        tracep->fullBit(oldp+326,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 1U))));
        tracep->fullBit(oldp+327,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 1U))));
        tracep->fullBit(oldp+328,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 1U)))));
        tracep->fullIData(oldp+329,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : (IData)(vlSelf->top__DOT__u_fetch__DOT___mem_data))),32);
        tracep->fullIData(oldp+330,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__u_fetch__DOT___if_trap_bus)),19);
        tracep->fullBit(oldp+331,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 2U))));
        tracep->fullBit(oldp+332,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 2U))));
        tracep->fullBit(oldp+333,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 2U)))));
        tracep->fullBit(oldp+334,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 3U))));
        tracep->fullBit(oldp+335,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 3U))));
        tracep->fullBit(oldp+336,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 3U)))));
        tracep->fullBit(oldp+337,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                         >> 4U))));
        tracep->fullBit(oldp+338,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                         >> 4U))));
        tracep->fullBit(oldp+339,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 4U)))));
        tracep->fullBit(oldp+340,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__csr_mtvec_write_valid))));
        tracep->fullBit(oldp+341,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__csr_mstatus_write_valid))));
        tracep->fullQData(oldp+342,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__csr_mtvec_writedata)),64);
        tracep->fullQData(oldp+344,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : 0xbULL)),64);
        tracep->fullQData(oldp+346,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__csr_mstatus_writedata)),64);
        tracep->fullBit(oldp+348,(vlSelf->clk));
        tracep->fullBit(oldp+349,(vlSelf->rst));
        tracep->fullCData(oldp+350,(0U),4);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__csr_mstatus_writedata),64);
        tracep->fullQData(oldp+353,(0xbULL),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__csr_mtvec_writedata),64);
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__csr_mstatus_write_valid));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__csr_mtvec_write_valid));
        tracep->fullIData(oldp+359,(0x40U),32);
        tracep->fullQData(oldp+360,(0x80000000ULL),64);
        tracep->fullIData(oldp+362,(0x13U),32);
        tracep->fullQData(oldp+363,(0ULL),64);
        tracep->fullIData(oldp+365,(0x20U),32);
        tracep->fullIData(oldp+366,(0x13U),32);
        tracep->fullIData(oldp+367,(0x13U),32);
        tracep->fullIData(oldp+368,(0U),19);
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
