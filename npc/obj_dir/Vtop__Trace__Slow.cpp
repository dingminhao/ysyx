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
        tracep->declBit(c+499,"clk", false,-1);
        tracep->declBit(c+500,"rst", false,-1);
        tracep->declBit(c+499,"top clk", false,-1);
        tracep->declBit(c+500,"top rst", false,-1);
        tracep->declQuad(c+2,"top inst_addr", false,-1, 63,0);
        tracep->declQuad(c+475,"top pc_next", false,-1, 63,0);
        tracep->declBit(c+501,"top read_req", false,-1);
        tracep->declQuad(c+2,"top inst_addr_if", false,-1, 63,0);
        tracep->declBus(c+4,"top inst_data_if", false,-1, 31,0);
        tracep->declBus(c+1,"top trap_bus_if", false,-1, 18,0);
        tracep->declBit(c+5,"top if_rdata_valid", false,-1);
        tracep->declQuad(c+6,"top if_rdata", false,-1, 63,0);
        tracep->declBit(c+8,"top ram_stall_valid_if", false,-1);
        tracep->declQuad(c+9,"top inst_addr_if_id", false,-1, 63,0);
        tracep->declBus(c+11,"top inst_data_if_id", false,-1, 31,0);
        tracep->declBus(c+12,"top trap_bus_if_id", false,-1, 18,0);
        tracep->declBus(c+13,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+14,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBus(c+15,"top rd_idx_id", false,-1, 4,0);
        tracep->declQuad(c+16,"top rs1_data_id", false,-1, 63,0);
        tracep->declQuad(c+18,"top rs2_data_id", false,-1, 63,0);
        tracep->declQuad(c+20,"top imm_data_id", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_imm_id", false,-1, 63,0);
        tracep->declBit(c+24,"top csr_imm_valid_id", false,-1);
        tracep->declBus(c+25,"top csr_idx_id", false,-1, 11,0);
        tracep->declQuad(c+26,"top csr_readdata_id", false,-1, 63,0);
        tracep->declBus(c+28,"top alu_op_id", false,-1, 5,0);
        tracep->declBus(c+29,"top mem_op_id", false,-1, 3,0);
        tracep->declBus(c+30,"top exc_op_id", false,-1, 4,0);
        tracep->declBus(c+503,"top pc_op_id", false,-1, 3,0);
        tracep->declBus(c+31,"top csr_op_id", false,-1, 2,0);
        tracep->declQuad(c+9,"top inst_addr_id", false,-1, 63,0);
        tracep->declBus(c+11,"top inst_data_id", false,-1, 31,0);
        tracep->declBit(c+32,"top load_use_valid", false,-1);
        tracep->declBus(c+33,"top trap_bus_id", false,-1, 18,0);
        tracep->declBus(c+34,"top rs1_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+35,"top rs2_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+36,"top rd_idx_id_ex", false,-1, 4,0);
        tracep->declQuad(c+37,"top rs1_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+39,"top rs2_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+41,"top imm_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+43,"top csr_imm_id_ex", false,-1, 63,0);
        tracep->declBit(c+45,"top csr_imm_valid_id_ex", false,-1);
        tracep->declBus(c+46,"top csr_idx_id_ex", false,-1, 11,0);
        tracep->declQuad(c+47,"top csr_readdata_id_ex", false,-1, 63,0);
        tracep->declBus(c+49,"top alu_op_id_ex", false,-1, 5,0);
        tracep->declBus(c+50,"top mem_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+51,"top exc_op_id_ex", false,-1, 4,0);
        tracep->declBus(c+52,"top pc_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+53,"top csr_op_id_ex", false,-1, 2,0);
        tracep->declQuad(c+54,"top inst_addr_id_ex", false,-1, 63,0);
        tracep->declBus(c+56,"top inst_data_id_ex", false,-1, 31,0);
        tracep->declBus(c+57,"top trap_bus_id_ex", false,-1, 18,0);
        tracep->declQuad(c+54,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+56,"top inst_data_ex", false,-1, 31,0);
        tracep->declBus(c+36,"top rd_idx_ex", false,-1, 4,0);
        tracep->declQuad(c+37,"top rs1_data_ex", false,-1, 63,0);
        tracep->declQuad(c+39,"top rs2_data_ex", false,-1, 63,0);
        tracep->declQuad(c+41,"top imm_data_ex", false,-1, 63,0);
        tracep->declQuad(c+47,"top csr_data_ex", false,-1, 63,0);
        tracep->declQuad(c+43,"top csr_imm_ex", false,-1, 63,0);
        tracep->declBit(c+45,"top csr_imm_valid_ex", false,-1);
        tracep->declBus(c+50,"top mem_op_ex", false,-1, 3,0);
        tracep->declBus(c+52,"top pc_op_ex", false,-1, 3,0);
        tracep->declQuad(c+58,"top exc_alu_data_ex", false,-1, 63,0);
        tracep->declQuad(c+60,"top exc_csr_data_ex", false,-1, 63,0);
        tracep->declBit(c+62,"top exc_csr_valid_ex", false,-1);
        tracep->declBus(c+46,"top exc_csr_addr_ex", false,-1, 11,0);
        tracep->declBus(c+51,"top exc_op_ex", false,-1, 4,0);
        tracep->declBit(c+63,"top jump_hazard_valid", false,-1);
        tracep->declBus(c+64,"top trap_bus_ex", false,-1, 18,0);
        tracep->declQuad(c+65,"top branch_pc", false,-1, 63,0);
        tracep->declBit(c+63,"top branch_pc_valid", false,-1);
        tracep->declQuad(c+67,"top pc_ex_mem", false,-1, 63,0);
        tracep->declBus(c+69,"top inst_data_ex_mem", false,-1, 31,0);
        tracep->declQuad(c+70,"top imm_data_ex_mem", false,-1, 63,0);
        tracep->declBus(c+72,"top rd_idx_ex_mem", false,-1, 4,0);
        tracep->declQuad(c+73,"top rs1_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+75,"top rs2_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+77,"top alu_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+79,"top csr_writedata_ex_mem", false,-1, 63,0);
        tracep->declBit(c+81,"top csr_writevalid_ex_mem", false,-1);
        tracep->declBus(c+82,"top csr_addr_ex_mem", false,-1, 11,0);
        tracep->declBus(c+83,"top pc_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+84,"top mem_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+85,"top trap_bus_ex_mem", false,-1, 18,0);
        tracep->declQuad(c+67,"top pc_mem", false,-1, 63,0);
        tracep->declBus(c+69,"top inst_data_mem", false,-1, 31,0);
        tracep->declQuad(c+86,"top mem_data_mem", false,-1, 63,0);
        tracep->declBus(c+72,"top rd_idx_mem", false,-1, 4,0);
        tracep->declBus(c+82,"top csr_addr_mem", false,-1, 11,0);
        tracep->declQuad(c+79,"top exc_csr_data_mem", false,-1, 63,0);
        tracep->declBit(c+81,"top exc_csr_valid_mem", false,-1);
        tracep->declBus(c+88,"top mem_addr", false,-1, 31,0);
        tracep->declBit(c+89,"top mem_addr_valid", false,-1);
        tracep->declBus(c+90,"top mem_mask", false,-1, 7,0);
        tracep->declBit(c+91,"top mem_write_valid", false,-1);
        tracep->declBit(c+92,"top mem_data_ready", false,-1);
        tracep->declQuad(c+93,"top mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+95,"top mem_wdata", false,-1, 63,0);
        tracep->declBus(c+97,"top trap_bus_mem", false,-1, 18,0);
        tracep->declBit(c+98,"top ram_stall_valid_mem", false,-1);
        tracep->declQuad(c+504,"top csr_mstatus_writedata", false,-1, 63,0);
        tracep->declQuad(c+67,"top csr_mepc_writedata", false,-1, 63,0);
        tracep->declQuad(c+506,"top csr_mcause_writedata", false,-1, 63,0);
        tracep->declQuad(c+99,"top csr_mtval_writedata", false,-1, 63,0);
        tracep->declQuad(c+508,"top csr_mtvec_writedata", false,-1, 63,0);
        tracep->declBit(c+510,"top csr_mstatus_write_valid", false,-1);
        tracep->declBit(c+101,"top csr_mepc_write_valid", false,-1);
        tracep->declBit(c+101,"top csr_mcause_write_valid", false,-1);
        tracep->declBit(c+101,"top csr_mtval_write_valid", false,-1);
        tracep->declBit(c+511,"top csr_mtvec_write_valid", false,-1);
        tracep->declQuad(c+102,"top clint_pc", false,-1, 63,0);
        tracep->declBit(c+104,"top clint_pc_valid", false,-1);
        tracep->declBus(c+477,"top stall_clint", false,-1, 5,0);
        tracep->declBus(c+478,"top flush_clint", false,-1, 5,0);
        tracep->declQuad(c+105,"top csr_mstatus_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+107,"top csr_mepc_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+109,"top csr_mcause_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+111,"top csr_mtval_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+113,"top csr_mtvec_writedata_mem_wb", false,-1, 63,0);
        tracep->declBit(c+115,"top csr_mstatus_write_valid_mem_wb", false,-1);
        tracep->declBit(c+116,"top csr_mepc_write_valid_mem_wb", false,-1);
        tracep->declBit(c+117,"top csr_mcause_write_valid_mem_wb", false,-1);
        tracep->declBit(c+118,"top csr_mtval_write_valid_mem_wb", false,-1);
        tracep->declBit(c+119,"top csr_mtvec_write_valid_mem_wb", false,-1);
        tracep->declQuad(c+120,"top pc_mem_wb", false,-1, 63,0);
        tracep->declBus(c+122,"top inst_data_mem_wb", false,-1, 31,0);
        tracep->declBus(c+123,"top csr_addr_mem_wb", false,-1, 11,0);
        tracep->declQuad(c+124,"top exc_csr_data_mem_wb", false,-1, 63,0);
        tracep->declBit(c+126,"top exc_csr_valid_mem_wb", false,-1);
        tracep->declBus(c+127,"top rd_addr_mem_wb", false,-1, 4,0);
        tracep->declQuad(c+128,"top mem_data_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+130,"top rs1_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+132,"top rs2_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+134,"top csr_mstatus_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+136,"top csr_mepc_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+138,"top csr_mcause_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+140,"top csr_mtval_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+142,"top csr_mtvec_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+26,"top csr_data_csr", false,-1, 63,0);
        tracep->declBus(c+144,"top ram_raddr_icache", false,-1, 31,0);
        tracep->declBit(c+145,"top ram_raddr_valid_icache", false,-1);
        tracep->declBus(c+146,"top ram_rmask_icache", false,-1, 7,0);
        tracep->declBit(c+147,"top ram_rdata_ready_icache", false,-1);
        tracep->declQuad(c+148,"top ram_rdata_icache", false,-1, 63,0);
        tracep->declBus(c+150,"top ram_raddr_dcache", false,-1, 31,0);
        tracep->declBit(c+151,"top ram_raddr_valid_dcache", false,-1);
        tracep->declBus(c+152,"top ram_rmask_dcache", false,-1, 7,0);
        tracep->declBit(c+153,"top ram_rdata_ready_dcache", false,-1);
        tracep->declQuad(c+154,"top ram_rdata_dcache", false,-1, 63,0);
        tracep->declBus(c+156,"top ram_waddr_dcache", false,-1, 31,0);
        tracep->declBit(c+157,"top ram_waddr_valid_dcache", false,-1);
        tracep->declBus(c+158,"top ram_wmask_dcache", false,-1, 7,0);
        tracep->declBit(c+159,"top ram_wdata_ready_dcache", false,-1);
        tracep->declQuad(c+160,"top ram_wdata_dcache", false,-1, 63,0);
        tracep->declBit(c+499,"top u_pc_reg clk", false,-1);
        tracep->declBit(c+500,"top u_pc_reg rst", false,-1);
        tracep->declBus(c+477,"top u_pc_reg stall_valid_i", false,-1, 5,0);
        tracep->declBus(c+478,"top u_pc_reg flush_valid_i", false,-1, 5,0);
        tracep->declQuad(c+65,"top u_pc_reg branch_pc_i", false,-1, 63,0);
        tracep->declBit(c+63,"top u_pc_reg branch_pc_valid_i", false,-1);
        tracep->declQuad(c+102,"top u_pc_reg clint_pc_i", false,-1, 63,0);
        tracep->declBit(c+104,"top u_pc_reg clint_pc_valid_i", false,-1);
        tracep->declBit(c+5,"top u_pc_reg if_rdata_valid_i", false,-1);
        tracep->declBit(c+501,"top u_pc_reg read_req_o", false,-1);
        tracep->declQuad(c+475,"top u_pc_reg pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+2,"top u_pc_reg pc_o", false,-1, 63,0);
        tracep->declBus(c+512,"top u_pc_reg u_pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+513,"top u_pc_reg u_pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_pc_reg u_pc_reg clk", false,-1);
        tracep->declBit(c+500,"top u_pc_reg u_pc_reg rst", false,-1);
        tracep->declQuad(c+479,"top u_pc_reg u_pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+2,"top u_pc_reg u_pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+502,"top u_pc_reg u_pc_reg wen", false,-1);
        tracep->declBit(c+500,"top u_fetch rst", false,-1);
        tracep->declQuad(c+2,"top u_fetch inst_addr_i", false,-1, 63,0);
        tracep->declBit(c+5,"top u_fetch if_rdata_valid_i", false,-1);
        tracep->declQuad(c+6,"top u_fetch if_rdata_i", false,-1, 63,0);
        tracep->declBit(c+8,"top u_fetch ram_stall_valid_if_o", false,-1);
        tracep->declQuad(c+2,"top u_fetch inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+4,"top u_fetch inst_data_o", false,-1, 31,0);
        tracep->declBus(c+1,"top u_fetch trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"top u_fetch i", false,-1, 31,0);
        tracep->declBit(c+499,"top u_if_id clk", false,-1);
        tracep->declBit(c+500,"top u_if_id rst", false,-1);
        tracep->declBus(c+477,"top u_if_id stall_valid_i", false,-1, 5,0);
        tracep->declBus(c+478,"top u_if_id flush_valid_i", false,-1, 5,0);
        tracep->declQuad(c+2,"top u_if_id inst_addr_if_i", false,-1, 63,0);
        tracep->declBus(c+4,"top u_if_id inst_data_if_i", false,-1, 31,0);
        tracep->declBus(c+1,"top u_if_id trap_bus_if_i", false,-1, 18,0);
        tracep->declQuad(c+9,"top u_if_id inst_addr_if_id_o", false,-1, 63,0);
        tracep->declBus(c+11,"top u_if_id inst_data_if_id_o", false,-1, 31,0);
        tracep->declBus(c+12,"top u_if_id trap_bus_if_id_o", false,-1, 18,0);
        tracep->declBit(c+481,"top u_if_id reg_wen", false,-1);
        tracep->declBus(c+512,"top u_if_id u_inst_addr_if_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_if_id u_inst_addr_if_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_if_id u_inst_addr_if_id clk", false,-1);
        tracep->declBit(c+500,"top u_if_id u_inst_addr_if_id rst", false,-1);
        tracep->declQuad(c+416,"top u_if_id u_inst_addr_if_id din", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_if_id u_inst_addr_if_id dout", false,-1, 63,0);
        tracep->declBit(c+481,"top u_if_id u_inst_addr_if_id wen", false,-1);
        tracep->declBus(c+518,"top u_if_id u_inst_data_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"top u_if_id u_inst_data_if_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"top u_if_id u_inst_data_if_id clk", false,-1);
        tracep->declBit(c+500,"top u_if_id u_inst_data_if_id rst", false,-1);
        tracep->declBus(c+418,"top u_if_id u_inst_data_if_id din", false,-1, 31,0);
        tracep->declBus(c+11,"top u_if_id u_inst_data_if_id dout", false,-1, 31,0);
        tracep->declBit(c+481,"top u_if_id u_inst_data_if_id wen", false,-1);
        tracep->declBus(c+520,"top u_if_id u_trap_bus_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+521,"top u_if_id u_trap_bus_if_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+499,"top u_if_id u_trap_bus_if_id clk", false,-1);
        tracep->declBit(c+500,"top u_if_id u_trap_bus_if_id rst", false,-1);
        tracep->declBus(c+482,"top u_if_id u_trap_bus_if_id din", false,-1, 18,0);
        tracep->declBus(c+12,"top u_if_id u_trap_bus_if_id dout", false,-1, 18,0);
        tracep->declBit(c+481,"top u_if_id u_trap_bus_if_id wen", false,-1);
        tracep->declQuad(c+9,"top u_dcode inst_addr_i", false,-1, 63,0);
        tracep->declBus(c+11,"top u_dcode inst_data_i", false,-1, 31,0);
        tracep->declBus(c+12,"top u_dcode trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+130,"top u_dcode rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_dcode rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+26,"top u_dcode csr_data_i", false,-1, 63,0);
        tracep->declBus(c+51,"top u_dcode id_ex_exc_op_i", false,-1, 4,0);
        tracep->declQuad(c+58,"top u_dcode ex_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+36,"top u_dcode ex_rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+46,"top u_dcode ex_csr_writeaddr_i", false,-1, 11,0);
        tracep->declQuad(c+60,"top u_dcode ex_csr_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+86,"top u_dcode mem_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+72,"top u_dcode mem_rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+13,"top u_dcode rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+14,"top u_dcode rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+15,"top u_dcode rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+16,"top u_dcode rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_dcode rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_dcode imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top u_dcode csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+24,"top u_dcode csr_imm_valid_o", false,-1);
        tracep->declBus(c+25,"top u_dcode csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+26,"top u_dcode csr_readdata_o", false,-1, 63,0);
        tracep->declBus(c+28,"top u_dcode alu_op_o", false,-1, 5,0);
        tracep->declBus(c+29,"top u_dcode mem_op_o", false,-1, 3,0);
        tracep->declBus(c+30,"top u_dcode exc_op_o", false,-1, 4,0);
        tracep->declBus(c+503,"top u_dcode pc_op_o", false,-1, 3,0);
        tracep->declBus(c+31,"top u_dcode csr_op_o", false,-1, 2,0);
        tracep->declQuad(c+9,"top u_dcode inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+11,"top u_dcode inst_data_o", false,-1, 31,0);
        tracep->declBus(c+33,"top u_dcode trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"top u_dcode i", false,-1, 31,0);
        tracep->declBit(c+499,"top u_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex rst", false,-1);
        tracep->declBus(c+478,"top u_id_ex flush_valid_i", false,-1, 5,0);
        tracep->declBus(c+477,"top u_id_ex stall_valid_i", false,-1, 5,0);
        tracep->declQuad(c+9,"top u_id_ex pc_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+11,"top u_id_ex inst_data_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+13,"top u_id_ex rs1_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+14,"top u_id_ex rs2_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+15,"top u_id_ex rd_idx_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+20,"top u_id_ex imm_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top u_id_ex csr_imm_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+24,"top u_id_ex csr_imm_valid_id_ex_i", false,-1);
        tracep->declQuad(c+16,"top u_id_ex rs1_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_id_ex rs2_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+26,"top u_id_ex csr_data_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+25,"top u_id_ex csr_idx_id_ex_i", false,-1, 11,0);
        tracep->declBus(c+28,"top u_id_ex alu_op_id_ex_i", false,-1, 5,0);
        tracep->declBus(c+29,"top u_id_ex mem_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+30,"top u_id_ex exc_op_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+503,"top u_id_ex pc_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+31,"top u_id_ex csr_op_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+33,"top u_id_ex trap_bus_id_ex_i", false,-1, 18,0);
        tracep->declQuad(c+54,"top u_id_ex pc_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+56,"top u_id_ex inst_data_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+34,"top u_id_ex rs1_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+35,"top u_id_ex rs2_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+36,"top u_id_ex rd_idx_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+41,"top u_id_ex imm_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_id_ex csr_imm_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+45,"top u_id_ex csr_imm_valid_id_ex_o", false,-1);
        tracep->declQuad(c+37,"top u_id_ex rs1_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_id_ex rs2_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_id_ex csr_data_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+46,"top u_id_ex csr_idx_id_ex_o", false,-1, 11,0);
        tracep->declBus(c+49,"top u_id_ex alu_op_id_ex_o", false,-1, 5,0);
        tracep->declBus(c+50,"top u_id_ex mem_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+51,"top u_id_ex exc_op_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+52,"top u_id_ex pc_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+53,"top u_id_ex csr_op_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+57,"top u_id_ex trap_bus_id_ex_o", false,-1, 18,0);
        tracep->declBit(c+483,"top u_id_ex reg_wen", false,-1);
        tracep->declBus(c+512,"top u_id_ex u_pc_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_id_ex u_pc_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_id_ex u_pc_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_pc_id_ex rst", false,-1);
        tracep->declQuad(c+419,"top u_id_ex u_pc_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+54,"top u_id_ex u_pc_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"top u_id_ex u_pc_id_ex wen", false,-1);
        tracep->declBus(c+518,"top u_id_ex u_inst_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"top u_id_ex u_inst_data_id_ex RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"top u_id_ex u_inst_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_inst_data_id_ex rst", false,-1);
        tracep->declBus(c+421,"top u_id_ex u_inst_data_id_ex din", false,-1, 31,0);
        tracep->declBus(c+56,"top u_id_ex u_inst_data_id_ex dout", false,-1, 31,0);
        tracep->declBit(c+483,"top u_id_ex u_inst_data_id_ex wen", false,-1);
        tracep->declBus(c+522,"top u_id_ex u_rs1_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"top u_id_ex u_rs1_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"top u_id_ex u_rs1_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_rs1_idx_id_ex rst", false,-1);
        tracep->declBus(c+422,"top u_id_ex u_rs1_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+34,"top u_id_ex u_rs1_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"top u_id_ex u_rs1_idx_id_ex wen", false,-1);
        tracep->declBus(c+522,"top u_id_ex u_rs2_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"top u_id_ex u_rs2_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"top u_id_ex u_rs2_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_rs2_idx_id_ex rst", false,-1);
        tracep->declBus(c+423,"top u_id_ex u_rs2_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+35,"top u_id_ex u_rs2_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"top u_id_ex u_rs2_idx_id_ex wen", false,-1);
        tracep->declBus(c+522,"top u_id_ex u_rd_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"top u_id_ex u_rd_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"top u_id_ex u_rd_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_rd_idx_id_ex rst", false,-1);
        tracep->declBus(c+424,"top u_id_ex u_rd_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+36,"top u_id_ex u_rd_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"top u_id_ex u_rd_idx_id_ex wen", false,-1);
        tracep->declBus(c+512,"top u_id_ex u_imm_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_id_ex u_imm_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_id_ex u_imm_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_imm_data_id_ex rst", false,-1);
        tracep->declQuad(c+425,"top u_id_ex u_imm_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_id_ex u_imm_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"top u_id_ex u_imm_data_id_ex wen", false,-1);
        tracep->declBus(c+512,"top u_id_ex u_csr_imm_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_id_ex u_csr_imm_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_id_ex u_csr_imm_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_csr_imm_id_ex rst", false,-1);
        tracep->declQuad(c+427,"top u_id_ex u_csr_imm_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_id_ex u_csr_imm_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"top u_id_ex u_csr_imm_id_ex wen", false,-1);
        tracep->declBus(c+524,"top u_id_ex u_csr_imm_valid_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_id_ex u_csr_imm_valid_id_ex RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_id_ex u_csr_imm_valid_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_csr_imm_valid_id_ex rst", false,-1);
        tracep->declBus(c+429,"top u_id_ex u_csr_imm_valid_id_ex din", false,-1, 0,0);
        tracep->declBus(c+45,"top u_id_ex u_csr_imm_valid_id_ex dout", false,-1, 0,0);
        tracep->declBit(c+483,"top u_id_ex u_csr_imm_valid_id_ex wen", false,-1);
        tracep->declBus(c+526,"top u_id_ex u_csr_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top u_id_ex u_csr_idx_id_ex RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+499,"top u_id_ex u_csr_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_csr_idx_id_ex rst", false,-1);
        tracep->declBus(c+430,"top u_id_ex u_csr_idx_id_ex din", false,-1, 11,0);
        tracep->declBus(c+46,"top u_id_ex u_csr_idx_id_ex dout", false,-1, 11,0);
        tracep->declBit(c+483,"top u_id_ex u_csr_idx_id_ex wen", false,-1);
        tracep->declBus(c+512,"top u_id_ex u_rs1_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_id_ex u_rs1_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_id_ex u_rs1_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_rs1_data_id_ex rst", false,-1);
        tracep->declQuad(c+431,"top u_id_ex u_rs1_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_id_ex u_rs1_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"top u_id_ex u_rs1_data_id_ex wen", false,-1);
        tracep->declBus(c+512,"top u_id_ex u_rs2_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_id_ex u_rs2_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_id_ex u_rs2_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_rs2_data_id_ex rst", false,-1);
        tracep->declQuad(c+433,"top u_id_ex u_rs2_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_id_ex u_rs2_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"top u_id_ex u_rs2_data_id_ex wen", false,-1);
        tracep->declBus(c+512,"top u_id_ex u_csr_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_id_ex u_csr_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_id_ex u_csr_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_csr_data_id_ex rst", false,-1);
        tracep->declQuad(c+435,"top u_id_ex u_csr_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_id_ex u_csr_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"top u_id_ex u_csr_data_id_ex wen", false,-1);
        tracep->declBus(c+528,"top u_id_ex u_alu_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+529,"top u_id_ex u_alu_op_id_ex RESET_VAL", false,-1, 5,0);
        tracep->declBit(c+499,"top u_id_ex u_alu_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_alu_op_id_ex rst", false,-1);
        tracep->declBus(c+437,"top u_id_ex u_alu_op_id_ex din", false,-1, 5,0);
        tracep->declBus(c+49,"top u_id_ex u_alu_op_id_ex dout", false,-1, 5,0);
        tracep->declBit(c+483,"top u_id_ex u_alu_op_id_ex wen", false,-1);
        tracep->declBus(c+530,"top u_id_ex u_mem_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"top u_id_ex u_mem_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"top u_id_ex u_mem_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_mem_op_id_ex rst", false,-1);
        tracep->declBus(c+438,"top u_id_ex u_mem_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+50,"top u_id_ex u_mem_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+483,"top u_id_ex u_mem_op_id_ex wen", false,-1);
        tracep->declBus(c+522,"top u_id_ex u_exc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"top u_id_ex u_exc_op_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"top u_id_ex u_exc_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_exc_op_id_ex rst", false,-1);
        tracep->declBus(c+439,"top u_id_ex u_exc_op_id_ex din", false,-1, 4,0);
        tracep->declBus(c+51,"top u_id_ex u_exc_op_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"top u_id_ex u_exc_op_id_ex wen", false,-1);
        tracep->declBus(c+530,"top u_id_ex u_pc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"top u_id_ex u_pc_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"top u_id_ex u_pc_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_pc_op_id_ex rst", false,-1);
        tracep->declBus(c+503,"top u_id_ex u_pc_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+52,"top u_id_ex u_pc_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+483,"top u_id_ex u_pc_op_id_ex wen", false,-1);
        tracep->declBus(c+531,"top u_id_ex u_csr_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+532,"top u_id_ex u_csr_op_id_ex RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+499,"top u_id_ex u_csr_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_csr_op_id_ex rst", false,-1);
        tracep->declBus(c+440,"top u_id_ex u_csr_op_id_ex din", false,-1, 2,0);
        tracep->declBus(c+53,"top u_id_ex u_csr_op_id_ex dout", false,-1, 2,0);
        tracep->declBit(c+483,"top u_id_ex u_csr_op_id_ex wen", false,-1);
        tracep->declBus(c+520,"top u_id_ex u_trap_bus_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+521,"top u_id_ex u_trap_bus_id_ex RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+499,"top u_id_ex u_trap_bus_id_ex clk", false,-1);
        tracep->declBit(c+500,"top u_id_ex u_trap_bus_id_ex rst", false,-1);
        tracep->declBus(c+441,"top u_id_ex u_trap_bus_id_ex din", false,-1, 18,0);
        tracep->declBus(c+57,"top u_id_ex u_trap_bus_id_ex dout", false,-1, 18,0);
        tracep->declBit(c+483,"top u_id_ex u_trap_bus_id_ex wen", false,-1);
        tracep->declQuad(c+54,"top u_execute_top pc_i", false,-1, 63,0);
        tracep->declBus(c+56,"top u_execute_top inst_data_i", false,-1, 31,0);
        tracep->declBus(c+36,"top u_execute_top rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+37,"top u_execute_top rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_execute_top rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_execute_top imm_data_i", false,-1, 63,0);
        tracep->declBus(c+46,"top u_execute_top csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+47,"top u_execute_top csr_data_i", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_execute_top csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+45,"top u_execute_top csr_imm_valid_i", false,-1);
        tracep->declBus(c+49,"top u_execute_top alu_op_i", false,-1, 5,0);
        tracep->declBus(c+50,"top u_execute_top mem_op_i", false,-1, 3,0);
        tracep->declBus(c+51,"top u_execute_top exc_op_i", false,-1, 4,0);
        tracep->declBus(c+53,"top u_execute_top csr_op_i", false,-1, 2,0);
        tracep->declBus(c+52,"top u_execute_top pc_op_i", false,-1, 3,0);
        tracep->declBus(c+57,"top u_execute_top trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+54,"top u_execute_top pc_o", false,-1, 63,0);
        tracep->declBus(c+56,"top u_execute_top inst_data_o", false,-1, 31,0);
        tracep->declBus(c+36,"top u_execute_top rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+37,"top u_execute_top rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_execute_top rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_execute_top imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_execute_top csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_execute_top csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+45,"top u_execute_top csr_imm_valid_o", false,-1);
        tracep->declBus(c+46,"top u_execute_top exc_csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+50,"top u_execute_top mem_op_o", false,-1, 3,0);
        tracep->declBus(c+52,"top u_execute_top pc_op_o", false,-1, 3,0);
        tracep->declQuad(c+58,"top u_execute_top exc_alu_data_o", false,-1, 63,0);
        tracep->declQuad(c+60,"top u_execute_top exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+62,"top u_execute_top exc_csr_valid_o", false,-1);
        tracep->declBus(c+51,"top u_execute_top exc_op_o", false,-1, 4,0);
        tracep->declQuad(c+65,"top u_execute_top branch_pc_o", false,-1, 63,0);
        tracep->declBit(c+63,"top u_execute_top branch_pc_valid_o", false,-1);
        tracep->declBit(c+63,"top u_execute_top jump_hazard_valid_o", false,-1);
        tracep->declBus(c+64,"top u_execute_top trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"top u_execute_top i", false,-1, 31,0);
        tracep->declQuad(c+162,"top u_execute_top u_alu alu_a_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top u_execute_top u_alu alu_b_i", false,-1, 63,0);
        tracep->declBus(c+49,"top u_execute_top u_alu alu_op_i", false,-1, 5,0);
        tracep->declQuad(c+166,"top u_execute_top u_alu alu_out_o", false,-1, 63,0);
        tracep->declBit(c+168,"top u_execute_top u_alu compare_out_o", false,-1);
        tracep->declBit(c+169,"top u_execute_top u_alu u_alu_shift shift_sra_i", false,-1);
        tracep->declBit(c+170,"top u_execute_top u_alu u_alu_shift shift_srl_i", false,-1);
        tracep->declBit(c+171,"top u_execute_top u_alu u_alu_shift shift_sll_i", false,-1);
        tracep->declBit(c+172,"top u_execute_top u_alu u_alu_shift shift32_valid_i", false,-1);
        tracep->declQuad(c+162,"top u_execute_top u_alu u_alu_shift shift_num_i", false,-1, 63,0);
        tracep->declBus(c+173,"top u_execute_top u_alu u_alu_shift shift_count_i", false,-1, 5,0);
        tracep->declQuad(c+174,"top u_execute_top u_alu u_alu_shift shift_out_o", false,-1, 63,0);
        tracep->declBus(c+512,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+176,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 in", false,-1, 63,0);
        tracep->declQuad(c+178,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 out", false,-1, 63,0);
        tracep->declBus(c+533,"top u_execute_top u_alu u_alu_shift u_Vectorinvert1 i", false,-1, 31,0);
        tracep->declBus(c+512,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+180,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 in", false,-1, 63,0);
        tracep->declQuad(c+182,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 out", false,-1, 63,0);
        tracep->declBus(c+533,"top u_execute_top u_alu u_alu_shift u_Vectorinvert2 i", false,-1, 31,0);
        tracep->declBit(c+184,"top u_execute_top u_alu u_alu_mul_top rs1_signed_valid_i", false,-1);
        tracep->declBit(c+185,"top u_execute_top u_alu u_alu_mul_top rs2_signed_valid_i", false,-1);
        tracep->declQuad(c+162,"top u_execute_top u_alu u_alu_mul_top rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top u_execute_top u_alu u_alu_mul_top rs2_data_i", false,-1, 63,0);
        tracep->declArray(c+186,"top u_execute_top u_alu u_alu_mul_top mul_out_o", false,-1, 127,0);
        tracep->declBit(c+190,"top u_execute_top u_alu u_alu_div_top signed_valid_i", false,-1);
        tracep->declBit(c+191,"top u_execute_top u_alu u_alu_div_top div32_valid_i", false,-1);
        tracep->declQuad(c+162,"top u_execute_top u_alu u_alu_div_top sr1_data_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top u_execute_top u_alu u_alu_div_top sr2_data_i", false,-1, 63,0);
        tracep->declQuad(c+192,"top u_execute_top u_alu u_alu_div_top div_out_o", false,-1, 63,0);
        tracep->declQuad(c+194,"top u_execute_top u_alu u_alu_div_top rem_out_o", false,-1, 63,0);
        tracep->declQuad(c+162,"top u_execute_top u_alu u_alu_div_top sr1_64_signed", false,-1, 63,0);
        tracep->declQuad(c+164,"top u_execute_top u_alu u_alu_div_top sr2_64_signed", false,-1, 63,0);
        tracep->declQuad(c+196,"top u_execute_top u_alu u_alu_div_top div64_signed", false,-1, 63,0);
        tracep->declQuad(c+198,"top u_execute_top u_alu u_alu_div_top rem64_signed", false,-1, 63,0);
        tracep->declQuad(c+200,"top u_execute_top u_alu u_alu_div_top div64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+202,"top u_execute_top u_alu u_alu_div_top rem64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+204,"top u_execute_top u_alu u_alu_div_top div64_result", false,-1, 63,0);
        tracep->declQuad(c+206,"top u_execute_top u_alu u_alu_div_top rem64_result", false,-1, 63,0);
        tracep->declBus(c+208,"top u_execute_top u_alu u_alu_div_top sr1_32_signed", false,-1, 31,0);
        tracep->declBus(c+209,"top u_execute_top u_alu u_alu_div_top sr2_32_signed", false,-1, 31,0);
        tracep->declBus(c+210,"top u_execute_top u_alu u_alu_div_top div32_signed", false,-1, 31,0);
        tracep->declBus(c+211,"top u_execute_top u_alu u_alu_div_top rem32_signed", false,-1, 31,0);
        tracep->declBus(c+212,"top u_execute_top u_alu u_alu_div_top div32_unsigned", false,-1, 31,0);
        tracep->declBus(c+213,"top u_execute_top u_alu u_alu_div_top rem32_unsigned", false,-1, 31,0);
        tracep->declBus(c+214,"top u_execute_top u_alu u_alu_div_top div32_result", false,-1, 31,0);
        tracep->declBus(c+215,"top u_execute_top u_alu u_alu_div_top rem32_result", false,-1, 31,0);
        tracep->declQuad(c+43,"top u_execute_top u_execute_csr csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+45,"top u_execute_top u_execute_csr csr_imm_valid_i", false,-1);
        tracep->declQuad(c+37,"top u_execute_top u_execute_csr rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_execute_top u_execute_csr csr_data_i", false,-1, 63,0);
        tracep->declBus(c+53,"top u_execute_top u_execute_csr csr_op_i", false,-1, 2,0);
        tracep->declQuad(c+60,"top u_execute_top u_execute_csr csr_exe_data_o", false,-1, 63,0);
        tracep->declBit(c+62,"top u_execute_top u_execute_csr csr_exe_data_valid_o", false,-1);
        tracep->declBit(c+499,"top u_ex_mem clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem rst", false,-1);
        tracep->declBus(c+478,"top u_ex_mem flush_valid_i", false,-1, 5,0);
        tracep->declBus(c+477,"top u_ex_mem stall_valid_i", false,-1, 5,0);
        tracep->declQuad(c+54,"top u_ex_mem pc_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+56,"top u_ex_mem inst_data_ex_mem_i", false,-1, 31,0);
        tracep->declQuad(c+41,"top u_ex_mem imm_data_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+36,"top u_ex_mem rd_idx_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+37,"top u_ex_mem rs1_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_ex_mem rs2_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+58,"top u_ex_mem alu_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+60,"top u_ex_mem csr_writedata_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+62,"top u_ex_mem csr_writevalid_ex_mem_i", false,-1);
        tracep->declBus(c+46,"top u_ex_mem csr_addr_ex_mem_i", false,-1, 11,0);
        tracep->declBus(c+52,"top u_ex_mem pc_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+50,"top u_ex_mem mem_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+64,"top u_ex_mem trap_bus_ex_mem_i", false,-1, 18,0);
        tracep->declQuad(c+67,"top u_ex_mem pc_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+69,"top u_ex_mem inst_data_ex_mem_o", false,-1, 31,0);
        tracep->declQuad(c+70,"top u_ex_mem imm_data_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+72,"top u_ex_mem rd_idx_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+73,"top u_ex_mem rs1_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+75,"top u_ex_mem rs2_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+77,"top u_ex_mem alu_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+79,"top u_ex_mem csr_writedata_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+81,"top u_ex_mem csr_writevalid_ex_mem_o", false,-1);
        tracep->declBus(c+82,"top u_ex_mem csr_addr_ex_mem_o", false,-1, 11,0);
        tracep->declBus(c+83,"top u_ex_mem pc_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+84,"top u_ex_mem mem_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+85,"top u_ex_mem trap_bus_ex_mem_o", false,-1, 18,0);
        tracep->declBit(c+484,"top u_ex_mem reg_wen", false,-1);
        tracep->declBus(c+512,"top u_ex_mem u_pc_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_ex_mem u_pc_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_ex_mem u_pc_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_pc_ex_mem_id rst", false,-1);
        tracep->declQuad(c+442,"top u_ex_mem u_pc_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+67,"top u_ex_mem u_pc_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"top u_ex_mem u_pc_ex_mem_id wen", false,-1);
        tracep->declBus(c+518,"top u_ex_mem u_inst_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"top u_ex_mem u_inst_data_ex_mem_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"top u_ex_mem u_inst_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_inst_data_ex_mem_id rst", false,-1);
        tracep->declBus(c+444,"top u_ex_mem u_inst_data_ex_mem_id din", false,-1, 31,0);
        tracep->declBus(c+69,"top u_ex_mem u_inst_data_ex_mem_id dout", false,-1, 31,0);
        tracep->declBit(c+484,"top u_ex_mem u_inst_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+522,"top u_ex_mem u_rd_idx_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"top u_ex_mem u_rd_idx_ex_mem_id RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"top u_ex_mem u_rd_idx_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_rd_idx_ex_mem_id rst", false,-1);
        tracep->declBus(c+445,"top u_ex_mem u_rd_idx_ex_mem_id din", false,-1, 4,0);
        tracep->declBus(c+72,"top u_ex_mem u_rd_idx_ex_mem_id dout", false,-1, 4,0);
        tracep->declBit(c+484,"top u_ex_mem u_rd_idx_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"top u_ex_mem u_rs1_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_ex_mem u_rs1_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_ex_mem u_rs1_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_rs1_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+446,"top u_ex_mem u_rs1_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_ex_mem u_rs1_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"top u_ex_mem u_rs1_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"top u_ex_mem u_rs2_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_ex_mem u_rs2_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_ex_mem u_rs2_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_rs2_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+448,"top u_ex_mem u_rs2_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+75,"top u_ex_mem u_rs2_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"top u_ex_mem u_rs2_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"top u_ex_mem u_imm_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_ex_mem u_imm_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_ex_mem u_imm_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_imm_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+450,"top u_ex_mem u_imm_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+70,"top u_ex_mem u_imm_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"top u_ex_mem u_imm_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"top u_ex_mem u_alu_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_ex_mem u_alu_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_ex_mem u_alu_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_alu_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+452,"top u_ex_mem u_alu_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+77,"top u_ex_mem u_alu_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"top u_ex_mem u_alu_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"top u_ex_mem u_csr_writedata_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_ex_mem u_csr_writedata_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_ex_mem u_csr_writedata_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_csr_writedata_ex_mem_id rst", false,-1);
        tracep->declQuad(c+454,"top u_ex_mem u_csr_writedata_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+79,"top u_ex_mem u_csr_writedata_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"top u_ex_mem u_csr_writedata_ex_mem_id wen", false,-1);
        tracep->declBus(c+524,"top u_ex_mem u_csr_writevalid_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_ex_mem u_csr_writevalid_ex_mem_id RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_ex_mem u_csr_writevalid_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_csr_writevalid_ex_mem_id rst", false,-1);
        tracep->declBus(c+456,"top u_ex_mem u_csr_writevalid_ex_mem_id din", false,-1, 0,0);
        tracep->declBus(c+81,"top u_ex_mem u_csr_writevalid_ex_mem_id dout", false,-1, 0,0);
        tracep->declBit(c+484,"top u_ex_mem u_csr_writevalid_ex_mem_id wen", false,-1);
        tracep->declBus(c+526,"top u_ex_mem u_csr_addr_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top u_ex_mem u_csr_addr_ex_mem_id RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+499,"top u_ex_mem u_csr_addr_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_csr_addr_ex_mem_id rst", false,-1);
        tracep->declBus(c+457,"top u_ex_mem u_csr_addr_ex_mem_id din", false,-1, 11,0);
        tracep->declBus(c+82,"top u_ex_mem u_csr_addr_ex_mem_id dout", false,-1, 11,0);
        tracep->declBit(c+484,"top u_ex_mem u_csr_addr_ex_mem_id wen", false,-1);
        tracep->declBus(c+530,"top u_ex_mem u_pc_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"top u_ex_mem u_pc_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"top u_ex_mem u_pc_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_pc_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+458,"top u_ex_mem u_pc_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+83,"top u_ex_mem u_pc_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+484,"top u_ex_mem u_pc_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+530,"top u_ex_mem u_mem_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"top u_ex_mem u_mem_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"top u_ex_mem u_mem_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_mem_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+459,"top u_ex_mem u_mem_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+84,"top u_ex_mem u_mem_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+484,"top u_ex_mem u_mem_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+520,"top u_ex_mem u_trap_bus_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+521,"top u_ex_mem u_trap_bus_ex_mem_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+499,"top u_ex_mem u_trap_bus_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"top u_ex_mem u_trap_bus_ex_mem_id rst", false,-1);
        tracep->declBus(c+460,"top u_ex_mem u_trap_bus_ex_mem_id din", false,-1, 18,0);
        tracep->declBus(c+85,"top u_ex_mem u_trap_bus_ex_mem_id dout", false,-1, 18,0);
        tracep->declBit(c+484,"top u_ex_mem u_trap_bus_ex_mem_id wen", false,-1);
        tracep->declBit(c+499,"top u_memory clk", false,-1);
        tracep->declBit(c+500,"top u_memory rst", false,-1);
        tracep->declQuad(c+67,"top u_memory pc_i", false,-1, 63,0);
        tracep->declBus(c+69,"top u_memory inst_data_i", false,-1, 31,0);
        tracep->declBus(c+72,"top u_memory rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+75,"top u_memory rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+84,"top u_memory mem_op_i", false,-1, 3,0);
        tracep->declQuad(c+77,"top u_memory exc_alu_data_i", false,-1, 63,0);
        tracep->declBus(c+82,"top u_memory csr_addr_i", false,-1, 11,0);
        tracep->declQuad(c+79,"top u_memory exc_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+81,"top u_memory exc_csr_valid_i", false,-1);
        tracep->declBus(c+88,"top u_memory mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+89,"top u_memory mem_addr_valid_o", false,-1);
        tracep->declBus(c+90,"top u_memory mem_mask_o", false,-1, 7,0);
        tracep->declBit(c+91,"top u_memory mem_write_valid_o", false,-1);
        tracep->declBit(c+92,"top u_memory mem_data_ready_i", false,-1);
        tracep->declQuad(c+93,"top u_memory mem_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+95,"top u_memory mem_wdata_o", false,-1, 63,0);
        tracep->declBit(c+98,"top u_memory ram_stall_valid_mem_o", false,-1);
        tracep->declBus(c+85,"top u_memory trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+67,"top u_memory pc_o", false,-1, 63,0);
        tracep->declBus(c+69,"top u_memory inst_data_o", false,-1, 31,0);
        tracep->declQuad(c+86,"top u_memory mem_data_o", false,-1, 63,0);
        tracep->declBus(c+72,"top u_memory rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+82,"top u_memory csr_addr_o", false,-1, 11,0);
        tracep->declQuad(c+79,"top u_memory exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+81,"top u_memory exc_csr_valid_o", false,-1);
        tracep->declBus(c+97,"top u_memory trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"top u_memory i", false,-1, 31,0);
        tracep->declBit(c+500,"top u_clint rst", false,-1);
        tracep->declQuad(c+67,"top u_clint pc_i", false,-1, 63,0);
        tracep->declBus(c+69,"top u_clint inst_data_i", false,-1, 31,0);
        tracep->declBus(c+97,"top u_clint trap_bus_i", false,-1, 18,0);
        tracep->declBit(c+8,"top u_clint ram_stall_valid_if_i", false,-1);
        tracep->declBit(c+98,"top u_clint ram_stall_valid_mem_i", false,-1);
        tracep->declBit(c+32,"top u_clint load_use_valid_id_i", false,-1);
        tracep->declBit(c+63,"top u_clint jump_valid_ex_i", false,-1);
        tracep->declQuad(c+134,"top u_clint csr_mstatus_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+136,"top u_clint csr_mepc_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+138,"top u_clint csr_mcause_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top u_clint csr_mtval_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+142,"top u_clint csr_mtvec_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+504,"top u_clint csr_mstatus_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+67,"top u_clint csr_mepc_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+506,"top u_clint csr_mcause_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_clint csr_mtval_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+508,"top u_clint csr_mtvec_writedata_o", false,-1, 63,0);
        tracep->declBit(c+510,"top u_clint csr_mstatus_write_valid_o", false,-1);
        tracep->declBit(c+101,"top u_clint csr_mepc_write_valid_o", false,-1);
        tracep->declBit(c+101,"top u_clint csr_mcause_write_valid_o", false,-1);
        tracep->declBit(c+101,"top u_clint csr_mtval_write_valid_o", false,-1);
        tracep->declBit(c+511,"top u_clint csr_mtvec_write_valid_o", false,-1);
        tracep->declQuad(c+102,"top u_clint clint_pc_o", false,-1, 63,0);
        tracep->declBit(c+104,"top u_clint clint_pc_valid_o", false,-1);
        tracep->declBus(c+477,"top u_clint stall_o", false,-1, 5,0);
        tracep->declBus(c+478,"top u_clint flush_o", false,-1, 5,0);
        tracep->declBus(c+534,"top u_clint load_use_flush", false,-1, 5,0);
        tracep->declBus(c+535,"top u_clint load_use_stall", false,-1, 5,0);
        tracep->declBus(c+536,"top u_clint jump_flush", false,-1, 5,0);
        tracep->declBus(c+529,"top u_clint jump_stall", false,-1, 5,0);
        tracep->declBus(c+537,"top u_clint trap_flush", false,-1, 5,0);
        tracep->declBus(c+529,"top u_clint trap_stall", false,-1, 5,0);
        tracep->declBus(c+538,"top u_clint ram_if_flush", false,-1, 5,0);
        tracep->declBus(c+539,"top u_clint ram_if_stall", false,-1, 5,0);
        tracep->declBus(c+538,"top u_clint ram_mem_flush", false,-1, 5,0);
        tracep->declBus(c+539,"top u_clint ram_mem_stall", false,-1, 5,0);
        tracep->declBit(c+499,"top u_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb rst", false,-1);
        tracep->declBus(c+478,"top u_mem_wb flush_valid_i", false,-1, 5,0);
        tracep->declBus(c+477,"top u_mem_wb stall_valid_i", false,-1, 5,0);
        tracep->declQuad(c+504,"top u_mem_wb csr_mstatus_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+67,"top u_mem_wb csr_mepc_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+506,"top u_mem_wb csr_mcause_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_mem_wb csr_mtval_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+508,"top u_mem_wb csr_mtvec_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+510,"top u_mem_wb csr_mstatus_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+101,"top u_mem_wb csr_mepc_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+101,"top u_mem_wb csr_mcause_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+101,"top u_mem_wb csr_mtval_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+511,"top u_mem_wb csr_mtvec_write_valid_mem_wb_i", false,-1);
        tracep->declQuad(c+67,"top u_mem_wb pc_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+69,"top u_mem_wb inst_data_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+82,"top u_mem_wb csr_addr_mem_wb_i", false,-1, 11,0);
        tracep->declQuad(c+79,"top u_mem_wb exc_csr_data_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+81,"top u_mem_wb exc_csr_valid_mem_wb_i", false,-1);
        tracep->declBus(c+72,"top u_mem_wb rd_addr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+86,"top u_mem_wb mem_data_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_mem_wb csr_mstatus_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+107,"top u_mem_wb csr_mepc_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_mem_wb csr_mcause_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_mem_wb csr_mtval_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_mem_wb csr_mtvec_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+115,"top u_mem_wb csr_mstatus_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+116,"top u_mem_wb csr_mepc_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+117,"top u_mem_wb csr_mcause_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+118,"top u_mem_wb csr_mtval_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+119,"top u_mem_wb csr_mtvec_write_valid_mem_wb_o", false,-1);
        tracep->declQuad(c+120,"top u_mem_wb pc_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+122,"top u_mem_wb inst_data_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+123,"top u_mem_wb csr_addr_mem_wb_o", false,-1, 11,0);
        tracep->declQuad(c+124,"top u_mem_wb exc_csr_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+126,"top u_mem_wb exc_csr_valid_mem_wb_o", false,-1);
        tracep->declBus(c+127,"top u_mem_wb rd_addr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+128,"top u_mem_wb mem_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb reg_wen", false,-1);
        tracep->declBus(c+524,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+486,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+119,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mtvec_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"top u_mem_wb u_csr_mtval_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_mem_wb u_csr_mtval_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mtval_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mtval_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+461,"top u_mem_wb u_csr_mtval_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+118,"top u_mem_wb u_csr_mtval_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mtval_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"top u_mem_wb u_csr_mcause_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_mem_wb u_csr_mcause_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mcause_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mcause_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+461,"top u_mem_wb u_csr_mcause_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+117,"top u_mem_wb u_csr_mcause_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mcause_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"top u_mem_wb u_csr_mepc_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_mem_wb u_csr_mepc_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mepc_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mepc_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+461,"top u_mem_wb u_csr_mepc_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+116,"top u_mem_wb u_csr_mepc_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mepc_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+487,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+115,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mstatus_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_csr_mtvec_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_csr_mtvec_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mtvec_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mtvec_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+488,"top u_mem_wb u_csr_mtvec_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_mem_wb u_csr_mtvec_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mtvec_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_csr_mtval_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_csr_mtval_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mtval_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mtval_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+462,"top u_mem_wb u_csr_mtval_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_mem_wb u_csr_mtval_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mtval_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_csr_mcause_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_csr_mcause_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mcause_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mcause_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+490,"top u_mem_wb u_csr_mcause_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_mem_wb u_csr_mcause_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mcause_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_csr_mepc_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_csr_mepc_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mepc_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mepc_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+464,"top u_mem_wb u_csr_mepc_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+107,"top u_mem_wb u_csr_mepc_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mepc_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_csr_mstatus_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_csr_mstatus_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_mstatus_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_mstatus_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+492,"top u_mem_wb u_csr_mstatus_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_mem_wb u_csr_mstatus_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_mstatus_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_pc_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_pc_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_pc_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_pc_mem_wb rst", false,-1);
        tracep->declQuad(c+464,"top u_mem_wb u_pc_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_mem_wb u_pc_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_pc_mem_wb wen", false,-1);
        tracep->declBus(c+518,"top u_mem_wb u_inst_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"top u_mem_wb u_inst_data_mem_wb RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"top u_mem_wb u_inst_data_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_inst_data_mem_wb rst", false,-1);
        tracep->declBus(c+466,"top u_mem_wb u_inst_data_mem_wb din", false,-1, 31,0);
        tracep->declBus(c+122,"top u_mem_wb u_inst_data_mem_wb dout", false,-1, 31,0);
        tracep->declBit(c+485,"top u_mem_wb u_inst_data_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_mem_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_mem_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_mem_data_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_mem_data_mem_wb rst", false,-1);
        tracep->declQuad(c+467,"top u_mem_wb u_mem_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+128,"top u_mem_wb u_mem_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_mem_data_mem_wb wen", false,-1);
        tracep->declBus(c+526,"top u_mem_wb u_csr_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top u_mem_wb u_csr_addr_mem_wb RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+499,"top u_mem_wb u_csr_addr_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_csr_addr_mem_wb rst", false,-1);
        tracep->declBus(c+469,"top u_mem_wb u_csr_addr_mem_wb din", false,-1, 11,0);
        tracep->declBus(c+123,"top u_mem_wb u_csr_addr_mem_wb dout", false,-1, 11,0);
        tracep->declBit(c+485,"top u_mem_wb u_csr_addr_mem_wb wen", false,-1);
        tracep->declBus(c+512,"top u_mem_wb u_exc_csr_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_mem_wb u_exc_csr_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_mem_wb u_exc_csr_data_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_exc_csr_data_mem_wb rst", false,-1);
        tracep->declQuad(c+470,"top u_mem_wb u_exc_csr_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_mem_wb u_exc_csr_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"top u_mem_wb u_exc_csr_data_mem_wb wen", false,-1);
        tracep->declBus(c+524,"top u_mem_wb u_exc_csr_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"top u_mem_wb u_exc_csr_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"top u_mem_wb u_exc_csr_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_exc_csr_valid_mem_wb rst", false,-1);
        tracep->declBus(c+472,"top u_mem_wb u_exc_csr_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+126,"top u_mem_wb u_exc_csr_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"top u_mem_wb u_exc_csr_valid_mem_wb wen", false,-1);
        tracep->declBus(c+522,"top u_mem_wb u_rd_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"top u_mem_wb u_rd_addr_mem_wb RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"top u_mem_wb u_rd_addr_mem_wb clk", false,-1);
        tracep->declBit(c+500,"top u_mem_wb u_rd_addr_mem_wb rst", false,-1);
        tracep->declBus(c+473,"top u_mem_wb u_rd_addr_mem_wb din", false,-1, 4,0);
        tracep->declBus(c+127,"top u_mem_wb u_rd_addr_mem_wb dout", false,-1, 4,0);
        tracep->declBit(c+485,"top u_mem_wb u_rd_addr_mem_wb wen", false,-1);
        tracep->declBit(c+499,"top u_writeback clk", false,-1);
        tracep->declBit(c+500,"top u_writeback rst", false,-1);
        tracep->declQuad(c+120,"top u_writeback pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+122,"top u_writeback inst_data_wb_i", false,-1, 31,0);
        tracep->declBit(c+499,"top u_rv64_gpr_regfile clk", false,-1);
        tracep->declBit(c+500,"top u_rv64_gpr_regfile rst", false,-1);
        tracep->declBus(c+13,"top u_rv64_gpr_regfile rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+14,"top u_rv64_gpr_regfile rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+130,"top u_rv64_gpr_regfile rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_rv64_gpr_regfile rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+127,"top u_rv64_gpr_regfile write_idx_i", false,-1, 4,0);
        tracep->declQuad(c+128,"top u_rv64_gpr_regfile write_data_i", false,-1, 63,0);
        tracep->declBit(c+540,"top u_rv64_gpr_regfile write_data_valid_i", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+216+i*2,"top u_rv64_gpr_regfile rf", true,(i+0), 63,0);}}
        tracep->declBit(c+499,"top u_rv64_csr_regfile clk", false,-1);
        tracep->declBit(c+500,"top u_rv64_csr_regfile rst", false,-1);
        tracep->declQuad(c+105,"top u_rv64_csr_regfile csr_mstatus_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+107,"top u_rv64_csr_regfile csr_mepc_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_rv64_csr_regfile csr_mcause_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_rv64_csr_regfile csr_mtval_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_rv64_csr_regfile csr_mtvec_writedata_i", false,-1, 63,0);
        tracep->declBit(c+115,"top u_rv64_csr_regfile csr_mstatus_write_valid_i", false,-1);
        tracep->declBit(c+116,"top u_rv64_csr_regfile csr_mepc_write_valid_i", false,-1);
        tracep->declBit(c+117,"top u_rv64_csr_regfile csr_mcause_write_valid_i", false,-1);
        tracep->declBit(c+118,"top u_rv64_csr_regfile csr_mtval_write_valid_i", false,-1);
        tracep->declBit(c+119,"top u_rv64_csr_regfile csr_mtvec_write_valid_i", false,-1);
        tracep->declQuad(c+134,"top u_rv64_csr_regfile csr_mstatus_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+136,"top u_rv64_csr_regfile csr_mepc_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+138,"top u_rv64_csr_regfile csr_mcause_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+140,"top u_rv64_csr_regfile csr_mtval_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+142,"top u_rv64_csr_regfile csr_mtvec_readdata_o", false,-1, 63,0);
        tracep->declBus(c+25,"top u_rv64_csr_regfile csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+26,"top u_rv64_csr_regfile csr_readdata_o", false,-1, 63,0);
        tracep->declBus(c+123,"top u_rv64_csr_regfile csr_writeaddr_i", false,-1, 11,0);
        tracep->declBit(c+126,"top u_rv64_csr_regfile csr_write_valid_i", false,-1);
        tracep->declQuad(c+124,"top u_rv64_csr_regfile csr_writedata_i", false,-1, 63,0);
        tracep->declBus(c+512,"top u_rv64_csr_regfile u_csr_mstatus WIDTH", false,-1, 31,0);
        tracep->declQuad(c+541,"top u_rv64_csr_regfile u_csr_mstatus RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_rv64_csr_regfile u_csr_mstatus clk", false,-1);
        tracep->declBit(c+500,"top u_rv64_csr_regfile u_csr_mstatus rst", false,-1);
        tracep->declQuad(c+280,"top u_rv64_csr_regfile u_csr_mstatus din", false,-1, 63,0);
        tracep->declQuad(c+134,"top u_rv64_csr_regfile u_csr_mstatus dout", false,-1, 63,0);
        tracep->declBit(c+282,"top u_rv64_csr_regfile u_csr_mstatus wen", false,-1);
        tracep->declBus(c+512,"top u_rv64_csr_regfile u_csr_mepc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_rv64_csr_regfile u_csr_mepc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_rv64_csr_regfile u_csr_mepc clk", false,-1);
        tracep->declBit(c+500,"top u_rv64_csr_regfile u_csr_mepc rst", false,-1);
        tracep->declQuad(c+283,"top u_rv64_csr_regfile u_csr_mepc din", false,-1, 63,0);
        tracep->declQuad(c+136,"top u_rv64_csr_regfile u_csr_mepc dout", false,-1, 63,0);
        tracep->declBit(c+285,"top u_rv64_csr_regfile u_csr_mepc wen", false,-1);
        tracep->declBus(c+512,"top u_rv64_csr_regfile u_csr_mcause WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_rv64_csr_regfile u_csr_mcause RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_rv64_csr_regfile u_csr_mcause clk", false,-1);
        tracep->declBit(c+500,"top u_rv64_csr_regfile u_csr_mcause rst", false,-1);
        tracep->declQuad(c+286,"top u_rv64_csr_regfile u_csr_mcause din", false,-1, 63,0);
        tracep->declQuad(c+138,"top u_rv64_csr_regfile u_csr_mcause dout", false,-1, 63,0);
        tracep->declBit(c+288,"top u_rv64_csr_regfile u_csr_mcause wen", false,-1);
        tracep->declBus(c+512,"top u_rv64_csr_regfile u_csr_mtval WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_rv64_csr_regfile u_csr_mtval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_rv64_csr_regfile u_csr_mtval clk", false,-1);
        tracep->declBit(c+500,"top u_rv64_csr_regfile u_csr_mtval rst", false,-1);
        tracep->declQuad(c+289,"top u_rv64_csr_regfile u_csr_mtval din", false,-1, 63,0);
        tracep->declQuad(c+140,"top u_rv64_csr_regfile u_csr_mtval dout", false,-1, 63,0);
        tracep->declBit(c+291,"top u_rv64_csr_regfile u_csr_mtval wen", false,-1);
        tracep->declBus(c+512,"top u_rv64_csr_regfile u_csr_mtvec WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"top u_rv64_csr_regfile u_csr_mtvec RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"top u_rv64_csr_regfile u_csr_mtvec clk", false,-1);
        tracep->declBit(c+500,"top u_rv64_csr_regfile u_csr_mtvec rst", false,-1);
        tracep->declQuad(c+292,"top u_rv64_csr_regfile u_csr_mtvec din", false,-1, 63,0);
        tracep->declQuad(c+142,"top u_rv64_csr_regfile u_csr_mtvec dout", false,-1, 63,0);
        tracep->declBit(c+294,"top u_rv64_csr_regfile u_csr_mtvec wen", false,-1);
        tracep->declBit(c+499,"top u_icache_top clk", false,-1);
        tracep->declBit(c+500,"top u_icache_top rst", false,-1);
        tracep->declBus(c+494,"top u_icache_top preif_raddr_i", false,-1, 31,0);
        tracep->declBus(c+543,"top u_icache_top preif_rmask_i", false,-1, 7,0);
        tracep->declBit(c+501,"top u_icache_top preif_raddr_valid_i", false,-1);
        tracep->declQuad(c+6,"top u_icache_top if_rdata_o", false,-1, 63,0);
        tracep->declBit(c+5,"top u_icache_top if_rdata_valid_o", false,-1);
        tracep->declBus(c+144,"top u_icache_top ram_raddr_icache_o", false,-1, 31,0);
        tracep->declBit(c+145,"top u_icache_top ram_raddr_valid_icache_o", false,-1);
        tracep->declBus(c+146,"top u_icache_top ram_rmask_icache_o", false,-1, 7,0);
        tracep->declBit(c+147,"top u_icache_top ram_rdata_ready_icache_i", false,-1);
        tracep->declQuad(c+148,"top u_icache_top ram_rdata_icache_i", false,-1, 63,0);
        tracep->declBus(c+495,"top u_icache_top cache_blk_addr", false,-1, 3,0);
        tracep->declBus(c+496,"top u_icache_top cache_line_idx", false,-1, 8,4);
        tracep->declBus(c+497,"top u_icache_top cache_line_tag", false,-1, 31,9);
        tracep->declBit(c+474,"top u_icache_top icache_hit", false,-1);
        tracep->declBus(c+503,"top u_icache_top CACHE_RST", false,-1, 3,0);
        tracep->declBus(c+544,"top u_icache_top CACHE_IDLE", false,-1, 3,0);
        tracep->declBus(c+545,"top u_icache_top CACHE_HIT", false,-1, 3,0);
        tracep->declBus(c+546,"top u_icache_top CACHE_MISS", false,-1, 3,0);
        tracep->declBus(c+547,"top u_icache_top CACHE_MISS2", false,-1, 3,0);
        tracep->declBus(c+295,"top u_icache_top icahce_state", false,-1, 3,0);
        tracep->declBus(c+296,"top u_icache_top blk_addr_reg", false,-1, 3,0);
        tracep->declBus(c+297,"top u_icache_top line_idx_reg", false,-1, 4,0);
        tracep->declBus(c+298,"top u_icache_top line_tag_reg", false,-1, 22,0);
        tracep->declBit(c+299,"top u_icache_top icache_tag_wen", false,-1);
        tracep->declBit(c+300,"top u_icache_top icahce_rdata_ok", false,-1);
        tracep->declArray(c+301,"top u_icache_top cache_line_temp", false,-1, 127,0);
        tracep->declBit(c+305,"top u_icache_top icache_data_wen", false,-1);
        tracep->declArray(c+306,"top u_icache_top icache_line_rdata", false,-1, 127,0);
        tracep->declArray(c+548,"top u_icache_top icache_wmask", false,-1, 127,0);
        tracep->declBus(c+552,"top u_icache_top u_icache_tag TAG_LEN", false,-1, 31,0);
        tracep->declBus(c+522,"top u_icache_top u_icache_tag IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"top u_icache_top u_icache_tag TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"top u_icache_top u_icache_tag clk", false,-1);
        tracep->declBit(c+500,"top u_icache_top u_icache_tag rst", false,-1);
        tracep->declBus(c+497,"top u_icache_top u_icache_tag icache_tag_i", false,-1, 22,0);
        tracep->declBus(c+496,"top u_icache_top u_icache_tag icache_index_i", false,-1, 4,0);
        tracep->declBit(c+299,"top u_icache_top u_icache_tag write_valid_i", false,-1);
        tracep->declBit(c+474,"top u_icache_top u_icache_tag icache_hit_o", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+310+i*1,"top u_icache_top u_icache_tag icache_tag_regs", true,(i+0), 22,0);}}
        tracep->declBus(c+342,"top u_icache_top u_icache_tag i", false,-1, 31,0);
        tracep->declBus(c+522,"top u_icache_top u_icache_data IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+530,"top u_icache_top u_icache_data BLK_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"top u_icache_top u_icache_data TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"top u_icache_top u_icache_data clk", false,-1);
        tracep->declBit(c+500,"top u_icache_top u_icache_data rst", false,-1);
        tracep->declBus(c+496,"top u_icache_top u_icache_data icache_index_i", false,-1, 4,0);
        tracep->declBus(c+495,"top u_icache_top u_icache_data icache_blk_addr_i", false,-1, 3,0);
        tracep->declArray(c+301,"top u_icache_top u_icache_data icache_line_wdata_i", false,-1, 127,0);
        tracep->declArray(c+548,"top u_icache_top u_icache_data icache_wmask", false,-1, 127,0);
        tracep->declBit(c+305,"top u_icache_top u_icache_data icache_wen_i", false,-1);
        tracep->declArray(c+306,"top u_icache_top u_icache_data icache_line_rdata_o", false,-1, 127,0);
        tracep->declBus(c+553,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Bits", false,-1, 31,0);
        tracep->declBus(c+512,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Word_Depth", false,-1, 31,0);
        tracep->declBus(c+528,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Add_Width", false,-1, 31,0);
        tracep->declBus(c+553,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Wen_Width", false,-1, 31,0);
        tracep->declArray(c+306,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Q", false,-1, 127,0);
        tracep->declBit(c+499,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW CLK", false,-1);
        tracep->declBit(c+554,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW CEN", false,-1);
        tracep->declBit(c+343,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW WEN", false,-1);
        tracep->declArray(c+555,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW BWEN", false,-1, 127,0);
        tracep->declBus(c+498,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW A", false,-1, 5,0);
        tracep->declArray(c+301,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW D", false,-1, 127,0);
        tracep->declBit(c+540,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW cen", false,-1);
        tracep->declBit(c+305,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW wen", false,-1);
        tracep->declArray(c+548,"top u_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW bwen", false,-1, 127,0);
        tracep->declBit(c+499,"top u_dcache_top clk", false,-1);
        tracep->declBit(c+500,"top u_dcache_top rst", false,-1);
        tracep->declBus(c+88,"top u_dcache_top mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+90,"top u_dcache_top mem_mask_i", false,-1, 7,0);
        tracep->declBit(c+89,"top u_dcache_top mem_addr_valid_i", false,-1);
        tracep->declBit(c+91,"top u_dcache_top mem_write_valid_i", false,-1);
        tracep->declQuad(c+95,"top u_dcache_top mem_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_dcache_top mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+92,"top u_dcache_top mem_data_ready_o", false,-1);
        tracep->declBus(c+150,"top u_dcache_top ram_raddr_dcache_o", false,-1, 31,0);
        tracep->declBit(c+151,"top u_dcache_top ram_raddr_valid_dcache_o", false,-1);
        tracep->declBus(c+152,"top u_dcache_top ram_rmask_dcache_o", false,-1, 7,0);
        tracep->declBit(c+153,"top u_dcache_top ram_rdata_ready_dcache_i", false,-1);
        tracep->declQuad(c+154,"top u_dcache_top ram_rdata_dcache_i", false,-1, 63,0);
        tracep->declBus(c+156,"top u_dcache_top ram_waddr_dcache_o", false,-1, 31,0);
        tracep->declBit(c+157,"top u_dcache_top ram_waddr_valid_dcache_o", false,-1);
        tracep->declBus(c+158,"top u_dcache_top ram_wmask_dcache_o", false,-1, 7,0);
        tracep->declBit(c+159,"top u_dcache_top ram_wdata_ready_dcache_i", false,-1);
        tracep->declQuad(c+160,"top u_dcache_top ram_wdata_dcache_o", false,-1, 63,0);
        tracep->declBit(c+344,"top u_dcache_top uncache", false,-1);
        tracep->declBus(c+345,"top u_dcache_top cache_blk_addr", false,-1, 3,0);
        tracep->declBus(c+346,"top u_dcache_top cache_line_idx", false,-1, 8,4);
        tracep->declBus(c+347,"top u_dcache_top cache_line_tag", false,-1, 31,9);
        tracep->declBit(c+348,"top u_dcache_top dcache_hit", false,-1);
        tracep->declBus(c+503,"top u_dcache_top CACHE_RST", false,-1, 3,0);
        tracep->declBus(c+544,"top u_dcache_top CACHE_IDLE", false,-1, 3,0);
        tracep->declBus(c+545,"top u_dcache_top CACHE_READ_HIT", false,-1, 3,0);
        tracep->declBus(c+546,"top u_dcache_top CACHE_READ_MISS", false,-1, 3,0);
        tracep->declBus(c+547,"top u_dcache_top CACHE_READ_MISS2", false,-1, 3,0);
        tracep->declBus(c+559,"top u_dcache_top CACHE_WRITE_HIT1", false,-1, 3,0);
        tracep->declBus(c+560,"top u_dcache_top CACHE_WRITE_HIT2", false,-1, 3,0);
        tracep->declBus(c+561,"top u_dcache_top CACHE_WRITE_MISS", false,-1, 3,0);
        tracep->declBus(c+562,"top u_dcache_top CACHE_WRITE_MISS2", false,-1, 3,0);
        tracep->declBus(c+563,"top u_dcache_top UNCACHE_READ", false,-1, 3,0);
        tracep->declBus(c+564,"top u_dcache_top UNCACHE_WRITE", false,-1, 3,0);
        tracep->declBus(c+349,"top u_dcache_top dcahce_state", false,-1, 3,0);
        tracep->declBus(c+350,"top u_dcache_top blk_addr_reg", false,-1, 3,0);
        tracep->declBus(c+351,"top u_dcache_top line_idx_reg", false,-1, 4,0);
        tracep->declBus(c+352,"top u_dcache_top line_tag_reg", false,-1, 22,0);
        tracep->declBit(c+353,"top u_dcache_top dcache_tag_wen", false,-1);
        tracep->declBit(c+354,"top u_dcache_top dcahce_rdata_ok", false,-1);
        tracep->declArray(c+355,"top u_dcache_top cache_line_temp", false,-1, 127,0);
        tracep->declQuad(c+359,"top u_dcache_top uncache_rdata", false,-1, 63,0);
        tracep->declBit(c+361,"top u_dcache_top dcache_data_wen", false,-1);
        tracep->declArray(c+362,"top u_dcache_top dcache_wmask_temp", false,-1, 127,0);
        tracep->declArray(c+366,"top u_dcache_top dcache_wmask", false,-1, 127,0);
        tracep->declQuad(c+370,"top u_dcache_top wmask_bit", false,-1, 63,0);
        tracep->declBus(c+372,"top u_dcache_top addr_last3", false,-1, 2,0);
        tracep->declArray(c+373,"top u_dcache_top dcache_line_rdata", false,-1, 127,0);
        tracep->declBus(c+552,"top u_dcache_top u_dcache_tag TAG_LEN", false,-1, 31,0);
        tracep->declBus(c+522,"top u_dcache_top u_dcache_tag IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"top u_dcache_top u_dcache_tag TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"top u_dcache_top u_dcache_tag clk", false,-1);
        tracep->declBit(c+500,"top u_dcache_top u_dcache_tag rst", false,-1);
        tracep->declBus(c+347,"top u_dcache_top u_dcache_tag dcache_tag_i", false,-1, 22,0);
        tracep->declBus(c+346,"top u_dcache_top u_dcache_tag dcache_index_i", false,-1, 4,0);
        tracep->declBit(c+353,"top u_dcache_top u_dcache_tag write_valid_i", false,-1);
        tracep->declBit(c+348,"top u_dcache_top u_dcache_tag dcache_hit_o", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+377+i*1,"top u_dcache_top u_dcache_tag dcache_tag_regs", true,(i+0), 22,0);}}
        tracep->declBus(c+409,"top u_dcache_top u_dcache_tag i", false,-1, 31,0);
        tracep->declBus(c+522,"top u_dcache_top u_dcache_data IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+530,"top u_dcache_top u_dcache_data BLK_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"top u_dcache_top u_dcache_data TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"top u_dcache_top u_dcache_data clk", false,-1);
        tracep->declBit(c+500,"top u_dcache_top u_dcache_data rst", false,-1);
        tracep->declBus(c+346,"top u_dcache_top u_dcache_data dcache_index_i", false,-1, 4,0);
        tracep->declBus(c+345,"top u_dcache_top u_dcache_data dcache_blk_addr_i", false,-1, 3,0);
        tracep->declArray(c+355,"top u_dcache_top u_dcache_data dcache_line_wdata_i", false,-1, 127,0);
        tracep->declArray(c+366,"top u_dcache_top u_dcache_data dcache_wmask", false,-1, 127,0);
        tracep->declBit(c+361,"top u_dcache_top u_dcache_data dcache_wen_i", false,-1);
        tracep->declArray(c+373,"top u_dcache_top u_dcache_data dcache_line_rdata_o", false,-1, 127,0);
        tracep->declBus(c+553,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW Bits", false,-1, 31,0);
        tracep->declBus(c+512,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW Word_Depth", false,-1, 31,0);
        tracep->declBus(c+528,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW Add_Width", false,-1, 31,0);
        tracep->declBus(c+553,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW Wen_Width", false,-1, 31,0);
        tracep->declArray(c+373,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW Q", false,-1, 127,0);
        tracep->declBit(c+499,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW CLK", false,-1);
        tracep->declBit(c+554,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW CEN", false,-1);
        tracep->declBit(c+410,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW WEN", false,-1);
        tracep->declArray(c+411,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW BWEN", false,-1, 127,0);
        tracep->declBus(c+415,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW A", false,-1, 5,0);
        tracep->declArray(c+355,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW D", false,-1, 127,0);
        tracep->declBit(c+540,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW cen", false,-1);
        tracep->declBit(c+361,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW wen", false,-1);
        tracep->declArray(c+366,"top u_dcache_top u_dcache_data u_S011HD1P_X32Y2D128_BW bwen", false,-1, 127,0);
        tracep->declBit(c+499,"top u_ram_arb clk", false,-1);
        tracep->declBit(c+500,"top u_ram_arb rst", false,-1);
        tracep->declBus(c+144,"top u_ram_arb if_read_addr_i", false,-1, 31,0);
        tracep->declBit(c+145,"top u_ram_arb if_valid_i", false,-1);
        tracep->declBus(c+146,"top u_ram_arb if_rmask_i", false,-1, 7,0);
        tracep->declQuad(c+148,"top u_ram_arb if_rdata_o", false,-1, 63,0);
        tracep->declBit(c+147,"top u_ram_arb if_rdata_valid_o", false,-1);
        tracep->declBus(c+150,"top u_ram_arb mem_read_addr_i", false,-1, 31,0);
        tracep->declBit(c+151,"top u_ram_arb mem_valid_i", false,-1);
        tracep->declBus(c+152,"top u_ram_arb mem_rmask_i", false,-1, 7,0);
        tracep->declQuad(c+154,"top u_ram_arb mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+153,"top u_ram_arb mem_rdata_valid_o", false,-1);
        tracep->declBus(c+156,"top u_ram_arb mem_write_addr_i", false,-1, 31,0);
        tracep->declBit(c+157,"top u_ram_arb mem_write_valid_i", false,-1);
        tracep->declBus(c+158,"top u_ram_arb mem_wmask_i", false,-1, 7,0);
        tracep->declQuad(c+160,"top u_ram_arb mem_wdata_i", false,-1, 63,0);
        tracep->declBit(c+159,"top u_ram_arb mem_wdata_ready_o", false,-1);
        tracep->declBus(c+531,"top u_ram_arb STATE_LEN", false,-1, 31,0);
        tracep->declBus(c+532,"top u_ram_arb IDLE", false,-1, 2,0);
        tracep->declBus(c+565,"top u_ram_arb MEM1", false,-1, 2,0);
        tracep->declBus(c+566,"top u_ram_arb MEM2", false,-1, 2,0);
        tracep->declBus(c+567,"top u_ram_arb MEM3", false,-1, 2,0);
        tracep->declBus(c+568,"top u_ram_arb PREIDLE", false,-1, 2,0);
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
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<4>/*127:0*/ __Vtemp65;
    VlWide<4>/*127:0*/ __Vtemp66;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__u_fetch__DOT___if_trap_bus),19);
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),64);
        tracep->fullIData(oldp+4,(((IData)(vlSelf->top__DOT__if_rdata_valid)
                                    ? ((((0U == (0x1fU 
                                                 & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                    << 3U)))
                                          ? 0U : (vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        << 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                       << 3U))))) 
                                        | (vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata[
                                           (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                  >> 2U))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                  << 3U)))) 
                                       & (IData)((- (QData)((IData)(vlSelf->top__DOT__if_rdata_valid)))))
                                    : 0x13U)),32);
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__if_rdata_valid));
        tracep->fullQData(oldp+6,(((QData)((IData)(
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                          << 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                            << 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                           << 3U))))) 
                                                    | (vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata[
                                                       (3U 
                                                        & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                           >> 2U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                           << 3U)))))) 
                                   & (- (QData)((IData)(vlSelf->top__DOT__if_rdata_valid))))),64);
        tracep->fullBit(oldp+8,((1U & (~ (IData)(vlSelf->top__DOT__if_rdata_valid)))));
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q),64);
        tracep->fullIData(oldp+11,(vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q),32);
        tracep->fullIData(oldp+12,(vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q),19);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__u_dcode__DOT___rs1_idx),5);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__u_dcode__DOT___rs2_idx),5);
        tracep->fullCData(oldp+15,((((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                       | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                      | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                     | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                     ? (0x1fU & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->fullQData(oldp+16,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid)
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
        tracep->fullQData(oldp+18,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)
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
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__u_dcode__DOT___imm_data),64);
        tracep->fullQData(oldp+22,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                       >> 0xfU))))),64);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid));
        tracep->fullSData(oldp+25,(vlSelf->top__DOT__u_dcode__DOT___csr_idx),12);
        tracep->fullQData(oldp+26,(((0x300U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
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
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__u_dcode__DOT___alu_op),6);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__u_dcode__DOT___mem_op),4);
        tracep->fullCData(oldp+30,((((((((((((((1U 
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
        tracep->fullCData(oldp+31,(((((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set) 
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
        tracep->fullBit(oldp+32,(((5U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                  & ((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid) 
                                     | (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)))));
        tracep->fullIData(oldp+33,(vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus),19);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q),5);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q),5);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q),5);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q),64);
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q));
        tracep->fullSData(oldp+46,(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q),12);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q),64);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q),6);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q),4);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q),5);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q),4);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q),3);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q),64);
        tracep->fullIData(oldp+56,(vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q),32);
        tracep->fullIData(oldp+57,(vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q),19);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__exc_alu_data_ex),64);
        tracep->fullQData(oldp+60,((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+62,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                           | (1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)))))));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid));
        tracep->fullIData(oldp+64,(vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus),19);
        tracep->fullQData(oldp+65,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q),64);
        tracep->fullIData(oldp+69,(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q),32);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q),64);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q),5);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q),64);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q));
        tracep->fullSData(oldp+82,(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q),12);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q),4);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q),4);
        tracep->fullIData(oldp+85,(vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q),19);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__mem_data_mem),64);
        tracep->fullIData(oldp+88,((IData)(vlSelf->top__DOT__u_memory__DOT___addr)),32);
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__mem_addr_valid));
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__u_memory__DOT___mask),8);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__mem_write_valid));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__mem_data_ready));
        tracep->fullQData(oldp+93,(((0xa0000000U == 
                                     (0xa0000000U & (IData)(vlSelf->top__DOT__u_memory__DOT___addr)))
                                     ? vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata
                                     : ((1U == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
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
                                         : ((3U == (IData)(vlSelf->top__DOT__u_memory__DOT___mask))
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
                                             : ((0xfU 
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
                                                  : 0ULL)))))),64);
        tracep->fullQData(oldp+95,(((IData)(vlSelf->top__DOT__u_memory__DOT___ls8byte)
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q))))
                                     : ((IData)(vlSelf->top__DOT__u_memory__DOT___ls16byte)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q))))
                                         : ((IData)(vlSelf->top__DOT__u_memory__DOT___ls32byte)
                                             ? (QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q))
                                             : vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q)))),64);
        tracep->fullIData(oldp+97,(vlSelf->top__DOT__u_memory__DOT___mem_trap_bus),19);
        tracep->fullBit(oldp+98,((((IData)(vlSelf->top__DOT__u_memory__DOT___isload) 
                                   | (IData)(vlSelf->top__DOT__u_memory__DOT___isstore)) 
                                  & (~ (IData)(vlSelf->top__DOT__mem_data_ready)))));
        tracep->fullQData(oldp+99,((QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q))),64);
        tracep->fullBit(oldp+101,((1U & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                         >> 0x12U))));
        tracep->fullQData(oldp+102,((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                             >> 0x10U))))) 
                                      & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                               >> 0x12U))))) 
                                        & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))),64);
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__u_clint__DOT___trap_valid));
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q),64);
        tracep->fullIData(oldp+122,(vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q),32);
        tracep->fullSData(oldp+123,(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q),12);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q));
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q),5);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q),64);
        tracep->fullQData(oldp+130,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                      == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                      : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                     [vlSelf->top__DOT__u_dcode__DOT___rs1_idx])),64);
        tracep->fullQData(oldp+132,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                      == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                      : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                     [vlSelf->top__DOT__u_dcode__DOT___rs2_idx])),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q),64);
        tracep->fullIData(oldp+144,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),8);
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_valid_o));
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__u_ram_arb__DOT___if_rdata_o),64);
        tracep->fullIData(oldp+150,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
        tracep->fullCData(oldp+152,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),8);
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_valid_o));
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__u_ram_arb__DOT___mem_rdata_o),64);
        tracep->fullIData(oldp+156,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),8);
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__u_ram_arb__DOT___ram_write_ready));
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__u_execute_top__DOT___alu_in1),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__u_execute_top__DOT___alu_in2),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__u_execute_top__DOT___alu_out),64);
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out));
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra));
        tracep->fullBit(oldp+170,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl));
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32));
        tracep->fullCData(oldp+173,((0x3fU & (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),6);
        tracep->fullQData(oldp+174,(((((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))) 
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
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
        tracep->fullBit(oldp+184,(((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                     | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                    | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullBit(oldp+185,((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                    | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullWData(oldp+186,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed));
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32));
        tracep->fullQData(oldp+192,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                          : 
                                                         VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                          : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+194,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                          : 
                                                         VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                          : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+196,(VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+198,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+200,(VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+202,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
        tracep->fullQData(oldp+204,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                      : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
        tracep->fullQData(oldp+206,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                      : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
        tracep->fullIData(oldp+208,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1)),32);
        tracep->fullIData(oldp+209,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),32);
        tracep->fullIData(oldp+210,(VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+211,(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+212,(VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+213,(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
        tracep->fullIData(oldp+214,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
        tracep->fullIData(oldp+215,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+280,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en));
        tracep->fullQData(oldp+283,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en));
        tracep->fullQData(oldp+286,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en));
        tracep->fullQData(oldp+289,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en));
        tracep->fullQData(oldp+292,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                      ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                      : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+294,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en));
        tracep->fullCData(oldp+295,(vlSelf->top__DOT__u_icache_top__DOT__icahce_state),4);
        tracep->fullCData(oldp+296,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),4);
        tracep->fullCData(oldp+297,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),5);
        tracep->fullIData(oldp+298,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),23);
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_wen));
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__u_icache_top__DOT__icahce_rdata_ok));
        tracep->fullWData(oldp+301,(vlSelf->top__DOT__u_icache_top__DOT__cache_line_temp),128);
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__u_icache_top__DOT__icache_data_wen));
        tracep->fullWData(oldp+306,(vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata),128);
        tracep->fullIData(oldp+310,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[0]),23);
        tracep->fullIData(oldp+311,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[1]),23);
        tracep->fullIData(oldp+312,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[2]),23);
        tracep->fullIData(oldp+313,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[3]),23);
        tracep->fullIData(oldp+314,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[4]),23);
        tracep->fullIData(oldp+315,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[5]),23);
        tracep->fullIData(oldp+316,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[6]),23);
        tracep->fullIData(oldp+317,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[7]),23);
        tracep->fullIData(oldp+318,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[8]),23);
        tracep->fullIData(oldp+319,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[9]),23);
        tracep->fullIData(oldp+320,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[10]),23);
        tracep->fullIData(oldp+321,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[11]),23);
        tracep->fullIData(oldp+322,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[12]),23);
        tracep->fullIData(oldp+323,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[13]),23);
        tracep->fullIData(oldp+324,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[14]),23);
        tracep->fullIData(oldp+325,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[15]),23);
        tracep->fullIData(oldp+326,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[16]),23);
        tracep->fullIData(oldp+327,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[17]),23);
        tracep->fullIData(oldp+328,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[18]),23);
        tracep->fullIData(oldp+329,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[19]),23);
        tracep->fullIData(oldp+330,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[20]),23);
        tracep->fullIData(oldp+331,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[21]),23);
        tracep->fullIData(oldp+332,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[22]),23);
        tracep->fullIData(oldp+333,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[23]),23);
        tracep->fullIData(oldp+334,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[24]),23);
        tracep->fullIData(oldp+335,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[25]),23);
        tracep->fullIData(oldp+336,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[26]),23);
        tracep->fullIData(oldp+337,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[27]),23);
        tracep->fullIData(oldp+338,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[28]),23);
        tracep->fullIData(oldp+339,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[29]),23);
        tracep->fullIData(oldp+340,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[30]),23);
        tracep->fullIData(oldp+341,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[31]),23);
        tracep->fullIData(oldp+342,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
        tracep->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_data_wen)))));
        tracep->fullBit(oldp+344,((0xa0000000U == (0xa0000000U 
                                                   & (IData)(vlSelf->top__DOT__u_memory__DOT___addr)))));
        tracep->fullCData(oldp+345,((0xfU & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))),4);
        tracep->fullCData(oldp+346,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__u_memory__DOT___addr 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+347,((0x7fffffU & (IData)(
                                                         (vlSelf->top__DOT__u_memory__DOT___addr 
                                                          >> 9U)))),23);
        tracep->fullBit(oldp+348,(((0x7fffffU & (IData)(
                                                        (vlSelf->top__DOT__u_memory__DOT___addr 
                                                         >> 9U))) 
                                   == vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs
                                   [(0x1fU & (IData)(
                                                     (vlSelf->top__DOT__u_memory__DOT___addr 
                                                      >> 4U)))])));
        tracep->fullCData(oldp+349,(vlSelf->top__DOT__u_dcache_top__DOT__dcahce_state),4);
        tracep->fullCData(oldp+350,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),4);
        tracep->fullCData(oldp+351,(vlSelf->top__DOT__u_dcache_top__DOT__line_idx_reg),5);
        tracep->fullIData(oldp+352,(vlSelf->top__DOT__u_dcache_top__DOT__line_tag_reg),23);
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__u_dcache_top__DOT__dcahce_rdata_ok));
        tracep->fullWData(oldp+355,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_temp),128);
        tracep->fullQData(oldp+359,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),64);
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_temp),128);
        tracep->fullWData(oldp+366,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask),128);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__u_dcache_top__DOT__wmask_bit),64);
        tracep->fullCData(oldp+372,((7U & (IData)(vlSelf->top__DOT__u_memory__DOT___addr))),3);
        tracep->fullWData(oldp+373,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_line_rdata),128);
        tracep->fullIData(oldp+377,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[0]),23);
        tracep->fullIData(oldp+378,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[1]),23);
        tracep->fullIData(oldp+379,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[2]),23);
        tracep->fullIData(oldp+380,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[3]),23);
        tracep->fullIData(oldp+381,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[4]),23);
        tracep->fullIData(oldp+382,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[5]),23);
        tracep->fullIData(oldp+383,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[6]),23);
        tracep->fullIData(oldp+384,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[7]),23);
        tracep->fullIData(oldp+385,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[8]),23);
        tracep->fullIData(oldp+386,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[9]),23);
        tracep->fullIData(oldp+387,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[10]),23);
        tracep->fullIData(oldp+388,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[11]),23);
        tracep->fullIData(oldp+389,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[12]),23);
        tracep->fullIData(oldp+390,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[13]),23);
        tracep->fullIData(oldp+391,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[14]),23);
        tracep->fullIData(oldp+392,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[15]),23);
        tracep->fullIData(oldp+393,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[16]),23);
        tracep->fullIData(oldp+394,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[17]),23);
        tracep->fullIData(oldp+395,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[18]),23);
        tracep->fullIData(oldp+396,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[19]),23);
        tracep->fullIData(oldp+397,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[20]),23);
        tracep->fullIData(oldp+398,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[21]),23);
        tracep->fullIData(oldp+399,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[22]),23);
        tracep->fullIData(oldp+400,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[23]),23);
        tracep->fullIData(oldp+401,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[24]),23);
        tracep->fullIData(oldp+402,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[25]),23);
        tracep->fullIData(oldp+403,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[26]),23);
        tracep->fullIData(oldp+404,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[27]),23);
        tracep->fullIData(oldp+405,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[28]),23);
        tracep->fullIData(oldp+406,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[29]),23);
        tracep->fullIData(oldp+407,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[30]),23);
        tracep->fullIData(oldp+408,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[31]),23);
        tracep->fullIData(oldp+409,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
        tracep->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen)))));
        __Vtemp64[0U] = (~ vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask[0U]);
        __Vtemp64[1U] = (~ vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask[1U]);
        __Vtemp64[2U] = (~ vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask[2U]);
        __Vtemp64[3U] = (~ vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask[3U]);
        tracep->fullWData(oldp+411,(__Vtemp64),128);
        tracep->fullCData(oldp+415,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__u_memory__DOT___addr 
                                                      >> 4U)))),6);
        tracep->fullQData(oldp+416,(((IData)(vlSelf->top__DOT__u_if_id__DOT___flush_valid)
                                      ? 0ULL : vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),64);
        tracep->fullIData(oldp+418,(((IData)(vlSelf->top__DOT__u_if_id__DOT___flush_valid)
                                      ? 0x13U : ((IData)(vlSelf->top__DOT__if_rdata_valid)
                                                  ? 
                                                 ((((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                           << 3U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                          << 3U))))) 
                                                   | (vlSelf->top__DOT__u_icache_top__DOT__icache_line_rdata[
                                                      (3U 
                                                       & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                          << 3U)))) 
                                                  & (IData)(
                                                            (- (QData)((IData)(vlSelf->top__DOT__if_rdata_valid)))))
                                                  : 0x13U))),32);
        tracep->fullQData(oldp+419,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q)),64);
        tracep->fullIData(oldp+421,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)),32);
        tracep->fullCData(oldp+422,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx))),5);
        tracep->fullCData(oldp+423,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx))),5);
        tracep->fullCData(oldp+424,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->fullQData(oldp+425,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_dcode__DOT___imm_data)),64);
        tracep->fullQData(oldp+427,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xfU)))))),64);
        tracep->fullBit(oldp+429,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 2U)) & (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid))));
        tracep->fullSData(oldp+430,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))),12);
        tracep->fullQData(oldp+431,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullQData(oldp+433,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullQData(oldp+435,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullCData(oldp+437,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___alu_op))),6);
        tracep->fullCData(oldp+438,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___mem_op))),4);
        tracep->fullCData(oldp+439,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullCData(oldp+440,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullIData(oldp+441,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus)),19);
        tracep->fullQData(oldp+442,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q)),64);
        tracep->fullIData(oldp+444,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q)),32);
        tracep->fullCData(oldp+445,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q))),5);
        tracep->fullQData(oldp+446,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q)),64);
        tracep->fullQData(oldp+448,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q)),64);
        tracep->fullQData(oldp+450,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)),64);
        tracep->fullQData(oldp+452,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__exc_alu_data_ex)),64);
        tracep->fullQData(oldp+454,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
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
        tracep->fullBit(oldp+456,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                             >> 3U)) 
                                         & (~ ((0U 
                                                == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                               | (1U 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))))));
        tracep->fullSData(oldp+457,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q))),12);
        tracep->fullCData(oldp+458,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q))),4);
        tracep->fullCData(oldp+459,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q))),4);
        tracep->fullIData(oldp+460,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus)),19);
        tracep->fullBit(oldp+461,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                             >> 4U)) 
                                         & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                            >> 0x12U)))));
        tracep->fullQData(oldp+462,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)))),64);
        tracep->fullQData(oldp+464,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q)),64);
        tracep->fullIData(oldp+466,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)),32);
        tracep->fullQData(oldp+467,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__mem_data_mem)),64);
        tracep->fullSData(oldp+469,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q))),12);
        tracep->fullQData(oldp+470,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
        tracep->fullBit(oldp+472,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q))));
        tracep->fullCData(oldp+473,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q))),5);
        tracep->fullBit(oldp+474,(((0x7fffffU & (IData)(
                                                        (vlSelf->top__DOT__pc_next 
                                                         >> 9U))) 
                                   == vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
                                   [(0x1fU & (IData)(
                                                     (vlSelf->top__DOT__pc_next 
                                                      >> 4U)))])));
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__pc_next),64);
        tracep->fullCData(oldp+477,(vlSelf->top__DOT__stall_clint),6);
        tracep->fullCData(oldp+478,(vlSelf->top__DOT__flush_clint),6);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),64);
        tracep->fullBit(oldp+481,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 1U)))));
        tracep->fullIData(oldp+482,(((IData)(vlSelf->top__DOT__u_if_id__DOT___flush_valid)
                                      ? 0U : vlSelf->top__DOT__u_fetch__DOT___if_trap_bus)),19);
        tracep->fullBit(oldp+483,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 2U)))));
        tracep->fullBit(oldp+484,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 3U)))));
        tracep->fullBit(oldp+485,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 4U)))));
        tracep->fullBit(oldp+486,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__csr_mtvec_write_valid))));
        tracep->fullBit(oldp+487,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->top__DOT__csr_mstatus_write_valid))));
        tracep->fullQData(oldp+488,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__csr_mtvec_writedata)),64);
        tracep->fullQData(oldp+490,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : 0xbULL)),64);
        tracep->fullQData(oldp+492,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->top__DOT__csr_mstatus_writedata)),64);
        tracep->fullIData(oldp+494,((IData)(vlSelf->top__DOT__pc_next)),32);
        tracep->fullCData(oldp+495,((0xfU & (IData)(vlSelf->top__DOT__pc_next))),4);
        tracep->fullCData(oldp+496,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__pc_next 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+497,((0x7fffffU & (IData)(
                                                         (vlSelf->top__DOT__pc_next 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+498,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__pc_next 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+499,(vlSelf->clk));
        tracep->fullBit(oldp+500,(vlSelf->rst));
        tracep->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullBit(oldp+502,((1U & ((~ (IData)(vlSelf->top__DOT__stall_clint)) 
                                         & (~ (IData)(vlSelf->rst))))));
        tracep->fullCData(oldp+503,(0U),4);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__csr_mstatus_writedata),64);
        tracep->fullQData(oldp+506,(0xbULL),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__csr_mtvec_writedata),64);
        tracep->fullBit(oldp+510,(vlSelf->top__DOT__csr_mstatus_write_valid));
        tracep->fullBit(oldp+511,(vlSelf->top__DOT__csr_mtvec_write_valid));
        tracep->fullIData(oldp+512,(0x40U),32);
        tracep->fullQData(oldp+513,(0x80000000ULL),64);
        tracep->fullIData(oldp+515,(0x13U),32);
        tracep->fullQData(oldp+516,(0ULL),64);
        tracep->fullIData(oldp+518,(0x20U),32);
        tracep->fullIData(oldp+519,(0x13U),32);
        tracep->fullIData(oldp+520,(0x13U),32);
        tracep->fullIData(oldp+521,(0U),19);
        tracep->fullIData(oldp+522,(5U),32);
        tracep->fullCData(oldp+523,(0U),5);
        tracep->fullIData(oldp+524,(1U),32);
        tracep->fullBit(oldp+525,(0U));
        tracep->fullIData(oldp+526,(0xcU),32);
        tracep->fullSData(oldp+527,(0U),12);
        tracep->fullIData(oldp+528,(6U),32);
        tracep->fullCData(oldp+529,(0U),6);
        tracep->fullIData(oldp+530,(4U),32);
        tracep->fullIData(oldp+531,(3U),32);
        tracep->fullCData(oldp+532,(0U),3);
        tracep->fullIData(oldp+533,(0x40U),32);
        tracep->fullCData(oldp+534,(4U),6);
        tracep->fullCData(oldp+535,(3U),6);
        tracep->fullCData(oldp+536,(6U),6);
        tracep->fullCData(oldp+537,(0xeU),6);
        tracep->fullCData(oldp+538,(0x10U),6);
        tracep->fullCData(oldp+539,(0xfU),6);
        tracep->fullBit(oldp+540,(1U));
        tracep->fullQData(oldp+541,(0xa00001800ULL),64);
        tracep->fullCData(oldp+543,(0xfU),8);
        tracep->fullCData(oldp+544,(1U),4);
        tracep->fullCData(oldp+545,(2U),4);
        tracep->fullCData(oldp+546,(3U),4);
        tracep->fullCData(oldp+547,(4U),4);
        __Vtemp65[0U] = 0xffffffffU;
        __Vtemp65[1U] = 0xffffffffU;
        __Vtemp65[2U] = 0xffffffffU;
        __Vtemp65[3U] = 0xffffffffU;
        tracep->fullWData(oldp+548,(__Vtemp65),128);
        tracep->fullIData(oldp+552,(0x17U),32);
        tracep->fullIData(oldp+553,(0x80U),32);
        tracep->fullBit(oldp+554,(0U));
        __Vtemp66[0U] = 0U;
        __Vtemp66[1U] = 0U;
        __Vtemp66[2U] = 0U;
        __Vtemp66[3U] = 0U;
        tracep->fullWData(oldp+555,(__Vtemp66),128);
        tracep->fullCData(oldp+559,(5U),4);
        tracep->fullCData(oldp+560,(6U),4);
        tracep->fullCData(oldp+561,(7U),4);
        tracep->fullCData(oldp+562,(8U),4);
        tracep->fullCData(oldp+563,(9U),4);
        tracep->fullCData(oldp+564,(0xaU),4);
        tracep->fullCData(oldp+565,(1U),3);
        tracep->fullCData(oldp+566,(2U),3);
        tracep->fullCData(oldp+567,(3U),3);
        tracep->fullCData(oldp+568,(4U),3);
    }
}
