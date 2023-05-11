// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051145_top__Syms.h"


void Vysyx_22051145_top___024root__traceInitSub0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22051145_top___024root__traceInitTop(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22051145_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22051145_top___024root__traceInitSub0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+499,"clk", false,-1);
        tracep->declBit(c+500,"rst", false,-1);
        tracep->declBit(c+499,"ysyx_22051145_top clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top rst", false,-1);
        tracep->declQuad(c+2,"ysyx_22051145_top inst_addr", false,-1, 63,0);
        tracep->declQuad(c+475,"ysyx_22051145_top pc_next", false,-1, 63,0);
        tracep->declBit(c+501,"ysyx_22051145_top read_req", false,-1);
        tracep->declQuad(c+2,"ysyx_22051145_top inst_addr_if", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22051145_top inst_data_if", false,-1, 31,0);
        tracep->declBus(c+1,"ysyx_22051145_top trap_bus_if", false,-1, 18,0);
        tracep->declBit(c+5,"ysyx_22051145_top ram_stall_valid_if", false,-1);
        tracep->declQuad(c+6,"ysyx_22051145_top inst_addr_if_id", false,-1, 63,0);
        tracep->declBus(c+8,"ysyx_22051145_top inst_data_if_id", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_22051145_top trap_bus_if_id", false,-1, 18,0);
        tracep->declBus(c+10,"ysyx_22051145_top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22051145_top rs2_idx_id", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_22051145_top rd_idx_id", false,-1, 4,0);
        tracep->declBus(c+13,"ysyx_22051145_top csr_idx_id", false,-1, 11,0);
        tracep->declQuad(c+14,"ysyx_22051145_top rs1_data_id", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22051145_top rs2_data_id", false,-1, 63,0);
        tracep->declQuad(c+18,"ysyx_22051145_top csr_data_id", false,-1, 63,0);
        tracep->declQuad(c+20,"ysyx_22051145_top csr_imm_id", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22051145_top csr_imm_valid_id", false,-1);
        tracep->declQuad(c+23,"ysyx_22051145_top imm_data_id", false,-1, 63,0);
        tracep->declBus(c+25,"ysyx_22051145_top alu_op_id", false,-1, 5,0);
        tracep->declBus(c+26,"ysyx_22051145_top mem_op_id", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_22051145_top csr_op_id", false,-1, 2,0);
        tracep->declBus(c+28,"ysyx_22051145_top exc_op_id", false,-1, 4,0);
        tracep->declBus(c+503,"ysyx_22051145_top pc_op_id", false,-1, 3,0);
        tracep->declQuad(c+6,"ysyx_22051145_top pc_id", false,-1, 63,0);
        tracep->declBus(c+8,"ysyx_22051145_top inst_id", false,-1, 31,0);
        tracep->declBit(c+29,"ysyx_22051145_top load_use_id", false,-1);
        tracep->declBus(c+30,"ysyx_22051145_top trap_bus_id", false,-1, 18,0);
        tracep->declQuad(c+31,"ysyx_22051145_top pc_id_ex", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_22051145_top inst_id_ex", false,-1, 31,0);
        tracep->declBus(c+34,"ysyx_22051145_top rs1_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+35,"ysyx_22051145_top rs2_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22051145_top rd_idx_id_ex", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22051145_top csr_idx_id_ex", false,-1, 11,0);
        tracep->declQuad(c+38,"ysyx_22051145_top imm_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22051145_top csr_imm_id_ex", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051145_top csr_imm_valid_id_ex", false,-1);
        tracep->declQuad(c+43,"ysyx_22051145_top rs1_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22051145_top rs2_data_id_ex", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22051145_top csr_data_id_ex", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22051145_top alu_op_id_ex", false,-1, 5,0);
        tracep->declBus(c+50,"ysyx_22051145_top mem_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+51,"ysyx_22051145_top csr_op_id_ex", false,-1, 2,0);
        tracep->declBus(c+52,"ysyx_22051145_top exc_op_id_ex", false,-1, 4,0);
        tracep->declBus(c+53,"ysyx_22051145_top pc_op_id_ex", false,-1, 3,0);
        tracep->declBus(c+54,"ysyx_22051145_top trap_bus_id_ex", false,-1, 18,0);
        tracep->declQuad(c+31,"ysyx_22051145_top pc_ex", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_22051145_top inst_data_ex", false,-1, 31,0);
        tracep->declBus(c+36,"ysyx_22051145_top rd_idx_ex", false,-1, 4,0);
        tracep->declQuad(c+43,"ysyx_22051145_top rs1_data_ex", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22051145_top rs2_data_ex", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22051145_top imm_data_ex", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22051145_top csr_data_ex", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22051145_top csr_imm_ex", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051145_top csr_imm_valid_ex", false,-1);
        tracep->declBus(c+50,"ysyx_22051145_top mem_op_ex", false,-1, 3,0);
        tracep->declBus(c+53,"ysyx_22051145_top pc_op_ex", false,-1, 3,0);
        tracep->declBus(c+37,"ysyx_22051145_top exc_csr_idx_ex", false,-1, 11,0);
        tracep->declQuad(c+55,"ysyx_22051145_top exc_alu_data_ex", false,-1, 63,0);
        tracep->declQuad(c+57,"ysyx_22051145_top exc_csr_data_ex", false,-1, 63,0);
        tracep->declBit(c+59,"ysyx_22051145_top exc_csr_valid_ex", false,-1);
        tracep->declBus(c+52,"ysyx_22051145_top exc_op_ex", false,-1, 4,0);
        tracep->declQuad(c+60,"ysyx_22051145_top branch_pc_ex", false,-1, 63,0);
        tracep->declBit(c+62,"ysyx_22051145_top branch_pc_valid_ex", false,-1);
        tracep->declBit(c+62,"ysyx_22051145_top jump_hazard_valid_ex", false,-1);
        tracep->declBus(c+63,"ysyx_22051145_top trap_bus_ex", false,-1, 18,0);
        tracep->declQuad(c+64,"ysyx_22051145_top pc_ex_mem", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22051145_top inst_data_ex_mem", false,-1, 31,0);
        tracep->declQuad(c+67,"ysyx_22051145_top imm_data_ex_mem", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_22051145_top rd_idx_ex_mem", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051145_top rs1_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22051145_top rs2_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22051145_top alu_data_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22051145_top csr_data_ex_mem", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22051145_top csr_valid_ex_mem", false,-1);
        tracep->declBus(c+79,"ysyx_22051145_top csr_idx_ex_mem", false,-1, 11,0);
        tracep->declBus(c+80,"ysyx_22051145_top pc_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+81,"ysyx_22051145_top mem_op_ex_mem", false,-1, 3,0);
        tracep->declBus(c+82,"ysyx_22051145_top trap_bus_ex_mem", false,-1, 18,0);
        tracep->declQuad(c+64,"ysyx_22051145_top pc_mem", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22051145_top inst_data_mem", false,-1, 31,0);
        tracep->declBus(c+83,"ysyx_22051145_top mem_addr_mem", false,-1, 31,0);
        tracep->declBit(c+84,"ysyx_22051145_top mem_addr_valid_mem", false,-1);
        tracep->declBus(c+85,"ysyx_22051145_top mem_mask_mem", false,-1, 7,0);
        tracep->declBit(c+86,"ysyx_22051145_top mem_write_valid_mem", false,-1);
        tracep->declQuad(c+87,"ysyx_22051145_top mem_wdata_mem", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_22051145_top ram_stall_valid_mem", false,-1);
        tracep->declBus(c+69,"ysyx_22051145_top rd_idx_mem", false,-1, 4,0);
        tracep->declQuad(c+90,"ysyx_22051145_top mem_data_mem", false,-1, 63,0);
        tracep->declBus(c+79,"ysyx_22051145_top csr_idx_mem", false,-1, 11,0);
        tracep->declQuad(c+76,"ysyx_22051145_top exc_csr_data_mem", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22051145_top exc_csr_valid_mem", false,-1);
        tracep->declBus(c+92,"ysyx_22051145_top trap_bus_mem", false,-1, 18,0);
        tracep->declQuad(c+504,"ysyx_22051145_top csr_mstatus_writedata_clint", false,-1, 63,0);
        tracep->declQuad(c+64,"ysyx_22051145_top csr_mepc_writedata_clint", false,-1, 63,0);
        tracep->declQuad(c+506,"ysyx_22051145_top csr_mcause_writedata_clint", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22051145_top csr_mtval_writedata_clint", false,-1, 63,0);
        tracep->declQuad(c+508,"ysyx_22051145_top csr_mtvec_writedata_clint", false,-1, 63,0);
        tracep->declBit(c+510,"ysyx_22051145_top csr_mstatus_write_valid_clint", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top csr_mepc_write_valid_clint", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top csr_mcause_write_valid_clint", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top csr_mtval_write_valid_clint", false,-1);
        tracep->declBit(c+511,"ysyx_22051145_top csr_mtvec_write_valid_clint", false,-1);
        tracep->declQuad(c+96,"ysyx_22051145_top pc_clint", false,-1, 63,0);
        tracep->declBit(c+98,"ysyx_22051145_top pc_valid_clint", false,-1);
        tracep->declBus(c+477,"ysyx_22051145_top stall_clint", false,-1, 5,0);
        tracep->declBus(c+478,"ysyx_22051145_top flush_clint", false,-1, 5,0);
        tracep->declQuad(c+99,"ysyx_22051145_top csr_mstatus_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22051145_top csr_mepc_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22051145_top csr_mcause_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22051145_top csr_mtval_writedata_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051145_top csr_mtvec_writedata_mem_wb", false,-1, 63,0);
        tracep->declBit(c+109,"ysyx_22051145_top csr_mstatus_write_valid_mem_wb", false,-1);
        tracep->declBit(c+110,"ysyx_22051145_top csr_mepc_write_valid_mem_wb", false,-1);
        tracep->declBit(c+111,"ysyx_22051145_top csr_mcause_write_valid_mem_wb", false,-1);
        tracep->declBit(c+112,"ysyx_22051145_top csr_mtval_write_valid_mem_wb", false,-1);
        tracep->declBit(c+113,"ysyx_22051145_top csr_mtvec_write_valid_mem_wb", false,-1);
        tracep->declQuad(c+114,"ysyx_22051145_top pc_mem_wb", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22051145_top inst_data_mem_wb", false,-1, 31,0);
        tracep->declBus(c+117,"ysyx_22051145_top csr_idx_mem_wb", false,-1, 11,0);
        tracep->declQuad(c+118,"ysyx_22051145_top exc_csr_data_mem_wb", false,-1, 63,0);
        tracep->declBit(c+120,"ysyx_22051145_top exc_csr_valid_mem_wb", false,-1);
        tracep->declBus(c+121,"ysyx_22051145_top rd_idx_mem_wb", false,-1, 4,0);
        tracep->declQuad(c+122,"ysyx_22051145_top mem_data_mem_wb", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22051145_top rs1_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+126,"ysyx_22051145_top rs2_data_gpr", false,-1, 63,0);
        tracep->declQuad(c+128,"ysyx_22051145_top csr_mstatus_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+130,"ysyx_22051145_top csr_mepc_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22051145_top csr_mcause_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22051145_top csr_mtval_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22051145_top csr_mtvec_readdata_csr", false,-1, 63,0);
        tracep->declQuad(c+18,"ysyx_22051145_top csr_data_csr", false,-1, 63,0);
        tracep->declQuad(c+138,"ysyx_22051145_top if_rdata_icache", false,-1, 63,0);
        tracep->declBit(c+140,"ysyx_22051145_top if_rdata_valid_icache", false,-1);
        tracep->declBus(c+141,"ysyx_22051145_top ram_raddr_icache", false,-1, 31,0);
        tracep->declBit(c+142,"ysyx_22051145_top ram_raddr_valid_icache", false,-1);
        tracep->declBus(c+143,"ysyx_22051145_top ram_rmask_icache", false,-1, 7,0);
        tracep->declQuad(c+144,"ysyx_22051145_top mem_rdata_dcache", false,-1, 63,0);
        tracep->declBit(c+146,"ysyx_22051145_top mem_data_ready_dcache", false,-1);
        tracep->declBus(c+147,"ysyx_22051145_top ram_raddr_dcache", false,-1, 31,0);
        tracep->declBit(c+148,"ysyx_22051145_top ram_raddr_valid_dcache", false,-1);
        tracep->declBus(c+149,"ysyx_22051145_top ram_rmask_dcache", false,-1, 7,0);
        tracep->declBus(c+150,"ysyx_22051145_top ram_waddr_dcache", false,-1, 31,0);
        tracep->declBit(c+151,"ysyx_22051145_top ram_waddr_valid_dcache", false,-1);
        tracep->declBus(c+152,"ysyx_22051145_top ram_wmask_dcache", false,-1, 7,0);
        tracep->declQuad(c+153,"ysyx_22051145_top ram_wdata_dcache", false,-1, 63,0);
        tracep->declQuad(c+155,"ysyx_22051145_top mem_rdata_ram", false,-1, 63,0);
        tracep->declBit(c+157,"ysyx_22051145_top mem_rdata_valid_ram", false,-1);
        tracep->declBit(c+158,"ysyx_22051145_top mem_wdata_ready_ram", false,-1);
        tracep->declBit(c+159,"ysyx_22051145_top if_rdata_valid_ram", false,-1);
        tracep->declQuad(c+160,"ysyx_22051145_top if_rdata_ram", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top u_pc_reg clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top u_pc_reg rst", false,-1);
        tracep->declBus(c+477,"ysyx_22051145_top u_pc_reg stall_valid_i", false,-1, 5,0);
        tracep->declBus(c+478,"ysyx_22051145_top u_pc_reg flush_valid_i", false,-1, 5,0);
        tracep->declQuad(c+60,"ysyx_22051145_top u_pc_reg branch_pc_i", false,-1, 63,0);
        tracep->declBit(c+62,"ysyx_22051145_top u_pc_reg branch_pc_valid_i", false,-1);
        tracep->declQuad(c+96,"ysyx_22051145_top u_pc_reg clint_pc_i", false,-1, 63,0);
        tracep->declBit(c+98,"ysyx_22051145_top u_pc_reg clint_pc_valid_i", false,-1);
        tracep->declBit(c+501,"ysyx_22051145_top u_pc_reg read_req_o", false,-1);
        tracep->declQuad(c+475,"ysyx_22051145_top u_pc_reg pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22051145_top u_pc_reg pc_o", false,-1, 63,0);
        tracep->declBus(c+512,"ysyx_22051145_top u_pc_reg u_pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+513,"ysyx_22051145_top u_pc_reg u_pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top u_pc_reg u_pc_reg clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top u_pc_reg u_pc_reg rst", false,-1);
        tracep->declQuad(c+479,"ysyx_22051145_top u_pc_reg u_pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22051145_top u_pc_reg u_pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+502,"ysyx_22051145_top u_pc_reg u_pc_reg wen", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_fetch rst", false,-1);
        tracep->declQuad(c+2,"ysyx_22051145_top ysyx_22051145_fetch pc_now_i", false,-1, 63,0);
        tracep->declBit(c+140,"ysyx_22051145_top ysyx_22051145_fetch if_rdata_valid_i", false,-1);
        tracep->declQuad(c+138,"ysyx_22051145_top ysyx_22051145_fetch if_rdata_i", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22051145_top ysyx_22051145_fetch ram_stall_valid_if_o", false,-1);
        tracep->declQuad(c+2,"ysyx_22051145_top ysyx_22051145_fetch inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22051145_top ysyx_22051145_fetch inst_data_o", false,-1, 31,0);
        tracep->declBus(c+1,"ysyx_22051145_top ysyx_22051145_fetch trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"ysyx_22051145_top ysyx_22051145_fetch i", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_if_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_if_id rst", false,-1);
        tracep->declBus(c+477,"ysyx_22051145_top ysyx_22051145_if_id stall_valid_i", false,-1, 5,0);
        tracep->declBus(c+478,"ysyx_22051145_top ysyx_22051145_if_id flush_valid_i", false,-1, 5,0);
        tracep->declQuad(c+2,"ysyx_22051145_top ysyx_22051145_if_id inst_addr_if_id_i", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22051145_top ysyx_22051145_if_id inst_data_if_id_i", false,-1, 31,0);
        tracep->declBus(c+1,"ysyx_22051145_top ysyx_22051145_if_id trap_bus_if_id_i", false,-1, 18,0);
        tracep->declQuad(c+6,"ysyx_22051145_top ysyx_22051145_if_id inst_addr_if_id_o", false,-1, 63,0);
        tracep->declBus(c+8,"ysyx_22051145_top ysyx_22051145_if_id inst_data_if_id_o", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_22051145_top ysyx_22051145_if_id trap_bus_if_id_o", false,-1, 18,0);
        tracep->declBit(c+481,"ysyx_22051145_top ysyx_22051145_if_id reg_wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_if_id u_inst_addr_if_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_if_id u_inst_addr_if_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_if_id u_inst_addr_if_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_if_id u_inst_addr_if_id rst", false,-1);
        tracep->declQuad(c+416,"ysyx_22051145_top ysyx_22051145_if_id u_inst_addr_if_id din", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22051145_top ysyx_22051145_if_id u_inst_addr_if_id dout", false,-1, 63,0);
        tracep->declBit(c+481,"ysyx_22051145_top ysyx_22051145_if_id u_inst_addr_if_id wen", false,-1);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_if_id u_inst_data_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"ysyx_22051145_top ysyx_22051145_if_id u_inst_data_if_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_if_id u_inst_data_if_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_if_id u_inst_data_if_id rst", false,-1);
        tracep->declBus(c+418,"ysyx_22051145_top ysyx_22051145_if_id u_inst_data_if_id din", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_22051145_top ysyx_22051145_if_id u_inst_data_if_id dout", false,-1, 31,0);
        tracep->declBit(c+481,"ysyx_22051145_top ysyx_22051145_if_id u_inst_data_if_id wen", false,-1);
        tracep->declBus(c+520,"ysyx_22051145_top ysyx_22051145_if_id u_trap_bus_if_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+521,"ysyx_22051145_top ysyx_22051145_if_id u_trap_bus_if_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_if_id u_trap_bus_if_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_if_id u_trap_bus_if_id rst", false,-1);
        tracep->declBus(c+482,"ysyx_22051145_top ysyx_22051145_if_id u_trap_bus_if_id din", false,-1, 18,0);
        tracep->declBus(c+9,"ysyx_22051145_top ysyx_22051145_if_id u_trap_bus_if_id dout", false,-1, 18,0);
        tracep->declBit(c+481,"ysyx_22051145_top ysyx_22051145_if_id u_trap_bus_if_id wen", false,-1);
        tracep->declQuad(c+6,"ysyx_22051145_top ysyx_22051145_decode inst_addr_i", false,-1, 63,0);
        tracep->declBus(c+8,"ysyx_22051145_top ysyx_22051145_decode inst_data_i", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_22051145_top ysyx_22051145_decode trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+124,"ysyx_22051145_top ysyx_22051145_decode rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+126,"ysyx_22051145_top ysyx_22051145_decode rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+18,"ysyx_22051145_top ysyx_22051145_decode csr_data_i", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051145_top ysyx_22051145_decode id_ex_exc_op_i", false,-1, 4,0);
        tracep->declQuad(c+55,"ysyx_22051145_top ysyx_22051145_decode ex_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+36,"ysyx_22051145_top ysyx_22051145_decode ex_rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+90,"ysyx_22051145_top ysyx_22051145_decode mem_rd_data_i", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_22051145_top ysyx_22051145_decode mem_rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_22051145_top ysyx_22051145_decode rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22051145_top ysyx_22051145_decode rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_22051145_top ysyx_22051145_decode rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+14,"ysyx_22051145_top ysyx_22051145_decode rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22051145_top ysyx_22051145_decode rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_22051145_top ysyx_22051145_decode imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+20,"ysyx_22051145_top ysyx_22051145_decode csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22051145_top ysyx_22051145_decode csr_imm_valid_o", false,-1);
        tracep->declBus(c+13,"ysyx_22051145_top ysyx_22051145_decode csr_idx_o", false,-1, 11,0);
        tracep->declQuad(c+18,"ysyx_22051145_top ysyx_22051145_decode csr_data_o", false,-1, 63,0);
        tracep->declBus(c+25,"ysyx_22051145_top ysyx_22051145_decode alu_op_o", false,-1, 5,0);
        tracep->declBus(c+26,"ysyx_22051145_top ysyx_22051145_decode mem_op_o", false,-1, 3,0);
        tracep->declBus(c+28,"ysyx_22051145_top ysyx_22051145_decode exc_op_o", false,-1, 4,0);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_decode pc_op_o", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_22051145_top ysyx_22051145_decode csr_op_o", false,-1, 2,0);
        tracep->declQuad(c+6,"ysyx_22051145_top ysyx_22051145_decode inst_addr_o", false,-1, 63,0);
        tracep->declBus(c+8,"ysyx_22051145_top ysyx_22051145_decode inst_data_o", false,-1, 31,0);
        tracep->declBit(c+29,"ysyx_22051145_top ysyx_22051145_decode load_use_valid_o", false,-1);
        tracep->declBus(c+30,"ysyx_22051145_top ysyx_22051145_decode trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"ysyx_22051145_top ysyx_22051145_decode i", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex rst", false,-1);
        tracep->declBus(c+478,"ysyx_22051145_top ysyx_22051145_id_ex flush_valid_i", false,-1, 5,0);
        tracep->declBus(c+477,"ysyx_22051145_top ysyx_22051145_id_ex stall_valid_i", false,-1, 5,0);
        tracep->declQuad(c+6,"ysyx_22051145_top ysyx_22051145_id_ex pc_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+8,"ysyx_22051145_top ysyx_22051145_id_ex inst_data_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22051145_top ysyx_22051145_id_ex rs1_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22051145_top ysyx_22051145_id_ex rs2_idx_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_22051145_top ysyx_22051145_id_ex rd_idx_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+23,"ysyx_22051145_top ysyx_22051145_id_ex imm_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+20,"ysyx_22051145_top ysyx_22051145_id_ex csr_imm_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22051145_top ysyx_22051145_id_ex csr_imm_valid_id_ex_i", false,-1);
        tracep->declQuad(c+14,"ysyx_22051145_top ysyx_22051145_id_ex rs1_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22051145_top ysyx_22051145_id_ex rs2_data_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+18,"ysyx_22051145_top ysyx_22051145_id_ex csr_data_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22051145_top ysyx_22051145_id_ex csr_idx_id_ex_i", false,-1, 11,0);
        tracep->declBus(c+25,"ysyx_22051145_top ysyx_22051145_id_ex alu_op_id_ex_i", false,-1, 5,0);
        tracep->declBus(c+26,"ysyx_22051145_top ysyx_22051145_id_ex mem_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+28,"ysyx_22051145_top ysyx_22051145_id_ex exc_op_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_id_ex pc_op_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_22051145_top ysyx_22051145_id_ex csr_op_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+30,"ysyx_22051145_top ysyx_22051145_id_ex trap_bus_id_ex_i", false,-1, 18,0);
        tracep->declQuad(c+31,"ysyx_22051145_top ysyx_22051145_id_ex pc_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_22051145_top ysyx_22051145_id_ex inst_data_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+34,"ysyx_22051145_top ysyx_22051145_id_ex rs1_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+35,"ysyx_22051145_top ysyx_22051145_id_ex rs2_idx_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22051145_top ysyx_22051145_id_ex rd_idx_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+38,"ysyx_22051145_top ysyx_22051145_id_ex imm_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22051145_top ysyx_22051145_id_ex csr_imm_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051145_top ysyx_22051145_id_ex csr_imm_valid_id_ex_o", false,-1);
        tracep->declQuad(c+43,"ysyx_22051145_top ysyx_22051145_id_ex rs1_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22051145_top ysyx_22051145_id_ex rs2_data_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22051145_top ysyx_22051145_id_ex csr_data_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+37,"ysyx_22051145_top ysyx_22051145_id_ex csr_idx_id_ex_o", false,-1, 11,0);
        tracep->declBus(c+49,"ysyx_22051145_top ysyx_22051145_id_ex alu_op_id_ex_o", false,-1, 5,0);
        tracep->declBus(c+50,"ysyx_22051145_top ysyx_22051145_id_ex mem_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+52,"ysyx_22051145_top ysyx_22051145_id_ex exc_op_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+53,"ysyx_22051145_top ysyx_22051145_id_ex pc_op_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+51,"ysyx_22051145_top ysyx_22051145_id_ex csr_op_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+54,"ysyx_22051145_top ysyx_22051145_id_ex trap_bus_id_ex_o", false,-1, 18,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex reg_wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_id_ex rst", false,-1);
        tracep->declQuad(c+419,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_id_ex wen", false,-1);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_id_ex u_inst_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"ysyx_22051145_top ysyx_22051145_id_ex u_inst_data_id_ex RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_inst_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_inst_data_id_ex rst", false,-1);
        tracep->declBus(c+421,"ysyx_22051145_top ysyx_22051145_id_ex u_inst_data_id_ex din", false,-1, 31,0);
        tracep->declBus(c+33,"ysyx_22051145_top ysyx_22051145_id_ex u_inst_data_id_ex dout", false,-1, 31,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_inst_data_id_ex wen", false,-1);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_idx_id_ex rst", false,-1);
        tracep->declBus(c+422,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_idx_id_ex wen", false,-1);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_idx_id_ex rst", false,-1);
        tracep->declBus(c+423,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+35,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_idx_id_ex wen", false,-1);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_id_ex u_rd_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"ysyx_22051145_top ysyx_22051145_id_ex u_rd_idx_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_rd_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_rd_idx_id_ex rst", false,-1);
        tracep->declBus(c+424,"ysyx_22051145_top ysyx_22051145_id_ex u_rd_idx_id_ex din", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22051145_top ysyx_22051145_id_ex u_rd_idx_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_rd_idx_id_ex wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_id_ex u_imm_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_id_ex u_imm_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_imm_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_imm_data_id_ex rst", false,-1);
        tracep->declQuad(c+425,"ysyx_22051145_top ysyx_22051145_id_ex u_imm_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22051145_top ysyx_22051145_id_ex u_imm_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_imm_data_id_ex wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_id_ex rst", false,-1);
        tracep->declQuad(c+427,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_id_ex wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_valid_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_valid_id_ex RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_valid_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_valid_id_ex rst", false,-1);
        tracep->declBus(c+429,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_valid_id_ex din", false,-1, 0,0);
        tracep->declBus(c+42,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_valid_id_ex dout", false,-1, 0,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_imm_valid_id_ex wen", false,-1);
        tracep->declBus(c+526,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_idx_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_idx_id_ex RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_idx_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_idx_id_ex rst", false,-1);
        tracep->declBus(c+430,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_idx_id_ex din", false,-1, 11,0);
        tracep->declBus(c+37,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_idx_id_ex dout", false,-1, 11,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_idx_id_ex wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_data_id_ex rst", false,-1);
        tracep->declQuad(c+431,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_rs1_data_id_ex wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_data_id_ex rst", false,-1);
        tracep->declQuad(c+433,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_rs2_data_id_ex wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_data_id_ex WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_data_id_ex RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_data_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_data_id_ex rst", false,-1);
        tracep->declQuad(c+435,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_data_id_ex din", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_data_id_ex dout", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_data_id_ex wen", false,-1);
        tracep->declBus(c+528,"ysyx_22051145_top ysyx_22051145_id_ex u_alu_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+529,"ysyx_22051145_top ysyx_22051145_id_ex u_alu_op_id_ex RESET_VAL", false,-1, 5,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_alu_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_alu_op_id_ex rst", false,-1);
        tracep->declBus(c+437,"ysyx_22051145_top ysyx_22051145_id_ex u_alu_op_id_ex din", false,-1, 5,0);
        tracep->declBus(c+49,"ysyx_22051145_top ysyx_22051145_id_ex u_alu_op_id_ex dout", false,-1, 5,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_alu_op_id_ex wen", false,-1);
        tracep->declBus(c+530,"ysyx_22051145_top ysyx_22051145_id_ex u_mem_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_id_ex u_mem_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_mem_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_mem_op_id_ex rst", false,-1);
        tracep->declBus(c+438,"ysyx_22051145_top ysyx_22051145_id_ex u_mem_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+50,"ysyx_22051145_top ysyx_22051145_id_ex u_mem_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_mem_op_id_ex wen", false,-1);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_id_ex u_exc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"ysyx_22051145_top ysyx_22051145_id_ex u_exc_op_id_ex RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_exc_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_exc_op_id_ex rst", false,-1);
        tracep->declBus(c+439,"ysyx_22051145_top ysyx_22051145_id_ex u_exc_op_id_ex din", false,-1, 4,0);
        tracep->declBus(c+52,"ysyx_22051145_top ysyx_22051145_id_ex u_exc_op_id_ex dout", false,-1, 4,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_exc_op_id_ex wen", false,-1);
        tracep->declBus(c+530,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_op_id_ex RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_op_id_ex rst", false,-1);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_op_id_ex din", false,-1, 3,0);
        tracep->declBus(c+53,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_op_id_ex dout", false,-1, 3,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_pc_op_id_ex wen", false,-1);
        tracep->declBus(c+531,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_op_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+532,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_op_id_ex RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_op_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_op_id_ex rst", false,-1);
        tracep->declBus(c+440,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_op_id_ex din", false,-1, 2,0);
        tracep->declBus(c+51,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_op_id_ex dout", false,-1, 2,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_csr_op_id_ex wen", false,-1);
        tracep->declBus(c+520,"ysyx_22051145_top ysyx_22051145_id_ex u_trap_bus_id_ex WIDTH", false,-1, 31,0);
        tracep->declBus(c+521,"ysyx_22051145_top ysyx_22051145_id_ex u_trap_bus_id_ex RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_id_ex u_trap_bus_id_ex clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_id_ex u_trap_bus_id_ex rst", false,-1);
        tracep->declBus(c+441,"ysyx_22051145_top ysyx_22051145_id_ex u_trap_bus_id_ex din", false,-1, 18,0);
        tracep->declBus(c+54,"ysyx_22051145_top ysyx_22051145_id_ex u_trap_bus_id_ex dout", false,-1, 18,0);
        tracep->declBit(c+483,"ysyx_22051145_top ysyx_22051145_id_ex u_trap_bus_id_ex wen", false,-1);
        tracep->declQuad(c+31,"ysyx_22051145_top ysyx_22051145_execute pc_i", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_22051145_top ysyx_22051145_execute inst_data_i", false,-1, 31,0);
        tracep->declBus(c+36,"ysyx_22051145_top ysyx_22051145_execute rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+43,"ysyx_22051145_top ysyx_22051145_execute rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22051145_top ysyx_22051145_execute rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22051145_top ysyx_22051145_execute imm_data_i", false,-1, 63,0);
        tracep->declBus(c+37,"ysyx_22051145_top ysyx_22051145_execute csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+47,"ysyx_22051145_top ysyx_22051145_execute csr_data_i", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22051145_top ysyx_22051145_execute csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051145_top ysyx_22051145_execute csr_imm_valid_i", false,-1);
        tracep->declBus(c+49,"ysyx_22051145_top ysyx_22051145_execute alu_op_i", false,-1, 5,0);
        tracep->declBus(c+50,"ysyx_22051145_top ysyx_22051145_execute mem_op_i", false,-1, 3,0);
        tracep->declBus(c+52,"ysyx_22051145_top ysyx_22051145_execute exc_op_i", false,-1, 4,0);
        tracep->declBus(c+51,"ysyx_22051145_top ysyx_22051145_execute csr_op_i", false,-1, 2,0);
        tracep->declBus(c+53,"ysyx_22051145_top ysyx_22051145_execute pc_op_i", false,-1, 3,0);
        tracep->declBus(c+54,"ysyx_22051145_top ysyx_22051145_execute trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+31,"ysyx_22051145_top ysyx_22051145_execute pc_o", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_22051145_top ysyx_22051145_execute inst_data_o", false,-1, 31,0);
        tracep->declBus(c+36,"ysyx_22051145_top ysyx_22051145_execute rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+43,"ysyx_22051145_top ysyx_22051145_execute rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22051145_top ysyx_22051145_execute rs2_data_o", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22051145_top ysyx_22051145_execute imm_data_o", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22051145_top ysyx_22051145_execute csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22051145_top ysyx_22051145_execute csr_imm_o", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051145_top ysyx_22051145_execute csr_imm_valid_o", false,-1);
        tracep->declBus(c+37,"ysyx_22051145_top ysyx_22051145_execute exc_csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+50,"ysyx_22051145_top ysyx_22051145_execute mem_op_o", false,-1, 3,0);
        tracep->declBus(c+53,"ysyx_22051145_top ysyx_22051145_execute pc_op_o", false,-1, 3,0);
        tracep->declQuad(c+55,"ysyx_22051145_top ysyx_22051145_execute exc_alu_data_o", false,-1, 63,0);
        tracep->declQuad(c+57,"ysyx_22051145_top ysyx_22051145_execute exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+59,"ysyx_22051145_top ysyx_22051145_execute exc_csr_valid_o", false,-1);
        tracep->declBus(c+52,"ysyx_22051145_top ysyx_22051145_execute exc_op_o", false,-1, 4,0);
        tracep->declQuad(c+60,"ysyx_22051145_top ysyx_22051145_execute branch_pc_o", false,-1, 63,0);
        tracep->declBit(c+62,"ysyx_22051145_top ysyx_22051145_execute branch_pc_valid_o", false,-1);
        tracep->declBit(c+62,"ysyx_22051145_top ysyx_22051145_execute jump_hazard_valid_o", false,-1);
        tracep->declBus(c+63,"ysyx_22051145_top ysyx_22051145_execute trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"ysyx_22051145_top ysyx_22051145_execute i", false,-1, 31,0);
        tracep->declQuad(c+162,"ysyx_22051145_top ysyx_22051145_execute u_alu alu_a_i", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22051145_top ysyx_22051145_execute u_alu alu_b_i", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22051145_top ysyx_22051145_execute u_alu alu_op_i", false,-1, 5,0);
        tracep->declQuad(c+166,"ysyx_22051145_top ysyx_22051145_execute u_alu alu_out_o", false,-1, 63,0);
        tracep->declBit(c+168,"ysyx_22051145_top ysyx_22051145_execute u_alu compare_out_o", false,-1);
        tracep->declBit(c+169,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift shift_sra_i", false,-1);
        tracep->declBit(c+170,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift shift_srl_i", false,-1);
        tracep->declBit(c+171,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift shift_sll_i", false,-1);
        tracep->declBit(c+172,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift shift32_valid_i", false,-1);
        tracep->declQuad(c+162,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift shift_num_i", false,-1, 63,0);
        tracep->declBus(c+173,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift shift_count_i", false,-1, 5,0);
        tracep->declQuad(c+174,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift shift_out_o", false,-1, 63,0);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+176,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert1 in", false,-1, 63,0);
        tracep->declQuad(c+178,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert1 out", false,-1, 63,0);
        tracep->declBus(c+533,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert1 i", false,-1, 31,0);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+180,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert2 in", false,-1, 63,0);
        tracep->declQuad(c+182,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert2 out", false,-1, 63,0);
        tracep->declBus(c+533,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_shift u_Vectorinvert2 i", false,-1, 31,0);
        tracep->declBit(c+184,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_mul_top rs1_signed_valid_i", false,-1);
        tracep->declBit(c+185,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_mul_top rs2_signed_valid_i", false,-1);
        tracep->declQuad(c+162,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_mul_top rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_mul_top rs2_data_i", false,-1, 63,0);
        tracep->declArray(c+186,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_mul_top mul_out_o", false,-1, 127,0);
        tracep->declBit(c+190,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top signed_valid_i", false,-1);
        tracep->declBit(c+191,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div32_valid_i", false,-1);
        tracep->declQuad(c+162,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top sr1_data_i", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top sr2_data_i", false,-1, 63,0);
        tracep->declQuad(c+192,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div_out_o", false,-1, 63,0);
        tracep->declQuad(c+194,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top rem_out_o", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top sr1_64_signed", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top sr2_64_signed", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div64_signed", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top rem64_signed", false,-1, 63,0);
        tracep->declQuad(c+200,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top rem64_unsigned", false,-1, 63,0);
        tracep->declQuad(c+204,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div64_result", false,-1, 63,0);
        tracep->declQuad(c+206,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top rem64_result", false,-1, 63,0);
        tracep->declBus(c+208,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top sr1_32_signed", false,-1, 31,0);
        tracep->declBus(c+209,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top sr2_32_signed", false,-1, 31,0);
        tracep->declBus(c+210,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div32_signed", false,-1, 31,0);
        tracep->declBus(c+211,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top rem32_signed", false,-1, 31,0);
        tracep->declBus(c+212,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div32_unsigned", false,-1, 31,0);
        tracep->declBus(c+213,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top rem32_unsigned", false,-1, 31,0);
        tracep->declBus(c+214,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top div32_result", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22051145_top ysyx_22051145_execute u_alu u_alu_div_top rem32_result", false,-1, 31,0);
        tracep->declQuad(c+40,"ysyx_22051145_top ysyx_22051145_execute u_execute_csr csr_imm_i", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051145_top ysyx_22051145_execute u_execute_csr csr_imm_valid_i", false,-1);
        tracep->declQuad(c+43,"ysyx_22051145_top ysyx_22051145_execute u_execute_csr rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22051145_top ysyx_22051145_execute u_execute_csr csr_data_i", false,-1, 63,0);
        tracep->declBus(c+51,"ysyx_22051145_top ysyx_22051145_execute u_execute_csr csr_op_i", false,-1, 2,0);
        tracep->declQuad(c+57,"ysyx_22051145_top ysyx_22051145_execute u_execute_csr csr_exe_data_o", false,-1, 63,0);
        tracep->declBit(c+59,"ysyx_22051145_top ysyx_22051145_execute u_execute_csr csr_exe_data_valid_o", false,-1);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem rst", false,-1);
        tracep->declBus(c+478,"ysyx_22051145_top ysyx_22051145_ex_mem flush_valid_i", false,-1, 5,0);
        tracep->declBus(c+477,"ysyx_22051145_top ysyx_22051145_ex_mem stall_valid_i", false,-1, 5,0);
        tracep->declQuad(c+31,"ysyx_22051145_top ysyx_22051145_ex_mem pc_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_22051145_top ysyx_22051145_ex_mem inst_data_ex_mem_i", false,-1, 31,0);
        tracep->declQuad(c+38,"ysyx_22051145_top ysyx_22051145_ex_mem imm_data_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+36,"ysyx_22051145_top ysyx_22051145_ex_mem rd_idx_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+43,"ysyx_22051145_top ysyx_22051145_ex_mem rs1_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22051145_top ysyx_22051145_ex_mem rs2_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22051145_top ysyx_22051145_ex_mem alu_data_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+57,"ysyx_22051145_top ysyx_22051145_ex_mem csr_writedata_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+59,"ysyx_22051145_top ysyx_22051145_ex_mem csr_writevalid_ex_mem_i", false,-1);
        tracep->declBus(c+37,"ysyx_22051145_top ysyx_22051145_ex_mem csr_addr_ex_mem_i", false,-1, 11,0);
        tracep->declBus(c+53,"ysyx_22051145_top ysyx_22051145_ex_mem pc_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+50,"ysyx_22051145_top ysyx_22051145_ex_mem mem_op_ex_mem_i", false,-1, 3,0);
        tracep->declBus(c+63,"ysyx_22051145_top ysyx_22051145_ex_mem trap_bus_ex_mem_i", false,-1, 18,0);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_ex_mem pc_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22051145_top ysyx_22051145_ex_mem inst_data_ex_mem_o", false,-1, 31,0);
        tracep->declQuad(c+67,"ysyx_22051145_top ysyx_22051145_ex_mem imm_data_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_22051145_top ysyx_22051145_ex_mem rd_idx_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051145_top ysyx_22051145_ex_mem rs1_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22051145_top ysyx_22051145_ex_mem rs2_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22051145_top ysyx_22051145_ex_mem alu_data_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22051145_top ysyx_22051145_ex_mem csr_writedata_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22051145_top ysyx_22051145_ex_mem csr_writevalid_ex_mem_o", false,-1);
        tracep->declBus(c+79,"ysyx_22051145_top ysyx_22051145_ex_mem csr_addr_ex_mem_o", false,-1, 11,0);
        tracep->declBus(c+80,"ysyx_22051145_top ysyx_22051145_ex_mem pc_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+81,"ysyx_22051145_top ysyx_22051145_ex_mem mem_op_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+82,"ysyx_22051145_top ysyx_22051145_ex_mem trap_bus_ex_mem_o", false,-1, 18,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem reg_wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_ex_mem_id rst", false,-1);
        tracep->declQuad(c+442,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_ex_mem_id wen", false,-1);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_ex_mem u_inst_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"ysyx_22051145_top ysyx_22051145_ex_mem u_inst_data_ex_mem_id RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_inst_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_inst_data_ex_mem_id rst", false,-1);
        tracep->declBus(c+444,"ysyx_22051145_top ysyx_22051145_ex_mem u_inst_data_ex_mem_id din", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_22051145_top ysyx_22051145_ex_mem u_inst_data_ex_mem_id dout", false,-1, 31,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_inst_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_ex_mem u_rd_idx_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"ysyx_22051145_top ysyx_22051145_ex_mem u_rd_idx_ex_mem_id RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_rd_idx_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_rd_idx_ex_mem_id rst", false,-1);
        tracep->declBus(c+445,"ysyx_22051145_top ysyx_22051145_ex_mem u_rd_idx_ex_mem_id din", false,-1, 4,0);
        tracep->declBus(c+69,"ysyx_22051145_top ysyx_22051145_ex_mem u_rd_idx_ex_mem_id dout", false,-1, 4,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_rd_idx_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs1_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs1_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs1_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs1_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+446,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs1_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs1_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs1_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs2_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs2_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs2_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs2_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+448,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs2_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs2_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_rs2_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_ex_mem u_imm_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_ex_mem u_imm_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_imm_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_imm_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+450,"ysyx_22051145_top ysyx_22051145_ex_mem u_imm_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+67,"ysyx_22051145_top ysyx_22051145_ex_mem u_imm_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_imm_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_ex_mem u_alu_data_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_ex_mem u_alu_data_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_alu_data_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_alu_data_ex_mem_id rst", false,-1);
        tracep->declQuad(c+452,"ysyx_22051145_top ysyx_22051145_ex_mem u_alu_data_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22051145_top ysyx_22051145_ex_mem u_alu_data_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_alu_data_ex_mem_id wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writedata_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writedata_ex_mem_id RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writedata_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writedata_ex_mem_id rst", false,-1);
        tracep->declQuad(c+454,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writedata_ex_mem_id din", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writedata_ex_mem_id dout", false,-1, 63,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writedata_ex_mem_id wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writevalid_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writevalid_ex_mem_id RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writevalid_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writevalid_ex_mem_id rst", false,-1);
        tracep->declBus(c+456,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writevalid_ex_mem_id din", false,-1, 0,0);
        tracep->declBus(c+78,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writevalid_ex_mem_id dout", false,-1, 0,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_writevalid_ex_mem_id wen", false,-1);
        tracep->declBus(c+526,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_addr_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_addr_ex_mem_id RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_addr_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_addr_ex_mem_id rst", false,-1);
        tracep->declBus(c+457,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_addr_ex_mem_id din", false,-1, 11,0);
        tracep->declBus(c+79,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_addr_ex_mem_id dout", false,-1, 11,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_csr_addr_ex_mem_id wen", false,-1);
        tracep->declBus(c+530,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+458,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+80,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_pc_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+530,"ysyx_22051145_top ysyx_22051145_ex_mem u_mem_op_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_ex_mem u_mem_op_ex_mem_id RESET_VAL", false,-1, 3,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_mem_op_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_mem_op_ex_mem_id rst", false,-1);
        tracep->declBus(c+459,"ysyx_22051145_top ysyx_22051145_ex_mem u_mem_op_ex_mem_id din", false,-1, 3,0);
        tracep->declBus(c+81,"ysyx_22051145_top ysyx_22051145_ex_mem u_mem_op_ex_mem_id dout", false,-1, 3,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_mem_op_ex_mem_id wen", false,-1);
        tracep->declBus(c+520,"ysyx_22051145_top ysyx_22051145_ex_mem u_trap_bus_ex_mem_id WIDTH", false,-1, 31,0);
        tracep->declBus(c+521,"ysyx_22051145_top ysyx_22051145_ex_mem u_trap_bus_ex_mem_id RESET_VAL", false,-1, 18,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ex_mem u_trap_bus_ex_mem_id clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ex_mem u_trap_bus_ex_mem_id rst", false,-1);
        tracep->declBus(c+460,"ysyx_22051145_top ysyx_22051145_ex_mem u_trap_bus_ex_mem_id din", false,-1, 18,0);
        tracep->declBus(c+82,"ysyx_22051145_top ysyx_22051145_ex_mem u_trap_bus_ex_mem_id dout", false,-1, 18,0);
        tracep->declBit(c+484,"ysyx_22051145_top ysyx_22051145_ex_mem u_trap_bus_ex_mem_id wen", false,-1);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_memory clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_memory rst", false,-1);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_memory pc_i", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22051145_top ysyx_22051145_memory inst_data_i", false,-1, 31,0);
        tracep->declBus(c+69,"ysyx_22051145_top ysyx_22051145_memory rd_idx_i", false,-1, 4,0);
        tracep->declQuad(c+72,"ysyx_22051145_top ysyx_22051145_memory rs2_data_i", false,-1, 63,0);
        tracep->declBus(c+81,"ysyx_22051145_top ysyx_22051145_memory mem_op_i", false,-1, 3,0);
        tracep->declQuad(c+74,"ysyx_22051145_top ysyx_22051145_memory exc_alu_data_i", false,-1, 63,0);
        tracep->declBus(c+79,"ysyx_22051145_top ysyx_22051145_memory csr_addr_i", false,-1, 11,0);
        tracep->declQuad(c+76,"ysyx_22051145_top ysyx_22051145_memory exc_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22051145_top ysyx_22051145_memory exc_csr_valid_i", false,-1);
        tracep->declBus(c+83,"ysyx_22051145_top ysyx_22051145_memory mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+84,"ysyx_22051145_top ysyx_22051145_memory mem_addr_valid_o", false,-1);
        tracep->declBus(c+85,"ysyx_22051145_top ysyx_22051145_memory mem_mask_o", false,-1, 7,0);
        tracep->declBit(c+86,"ysyx_22051145_top ysyx_22051145_memory mem_write_valid_o", false,-1);
        tracep->declBit(c+146,"ysyx_22051145_top ysyx_22051145_memory mem_data_ready_i", false,-1);
        tracep->declQuad(c+144,"ysyx_22051145_top ysyx_22051145_memory mem_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22051145_top ysyx_22051145_memory mem_wdata_o", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_22051145_top ysyx_22051145_memory ram_stall_valid_mem_o", false,-1);
        tracep->declBus(c+82,"ysyx_22051145_top ysyx_22051145_memory trap_bus_i", false,-1, 18,0);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_memory pc_o", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22051145_top ysyx_22051145_memory inst_data_o", false,-1, 31,0);
        tracep->declQuad(c+90,"ysyx_22051145_top ysyx_22051145_memory mem_data_o", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_22051145_top ysyx_22051145_memory rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+79,"ysyx_22051145_top ysyx_22051145_memory csr_addr_o", false,-1, 11,0);
        tracep->declQuad(c+76,"ysyx_22051145_top ysyx_22051145_memory exc_csr_data_o", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22051145_top ysyx_22051145_memory exc_csr_valid_o", false,-1);
        tracep->declBus(c+92,"ysyx_22051145_top ysyx_22051145_memory trap_bus_o", false,-1, 18,0);
        tracep->declBus(c+515,"ysyx_22051145_top ysyx_22051145_memory i", false,-1, 31,0);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_clint rst", false,-1);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_clint pc_i", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22051145_top ysyx_22051145_clint inst_data_i", false,-1, 31,0);
        tracep->declBus(c+92,"ysyx_22051145_top ysyx_22051145_clint trap_bus_i", false,-1, 18,0);
        tracep->declBit(c+5,"ysyx_22051145_top ysyx_22051145_clint ram_stall_valid_if_i", false,-1);
        tracep->declBit(c+89,"ysyx_22051145_top ysyx_22051145_clint ram_stall_valid_mem_i", false,-1);
        tracep->declBit(c+29,"ysyx_22051145_top ysyx_22051145_clint load_use_valid_id_i", false,-1);
        tracep->declBit(c+62,"ysyx_22051145_top ysyx_22051145_clint jump_valid_ex_i", false,-1);
        tracep->declQuad(c+128,"ysyx_22051145_top ysyx_22051145_clint csr_mstatus_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+130,"ysyx_22051145_top ysyx_22051145_clint csr_mepc_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22051145_top ysyx_22051145_clint csr_mcause_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22051145_top ysyx_22051145_clint csr_mtval_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22051145_top ysyx_22051145_clint csr_mtvec_readdata_i", false,-1, 63,0);
        tracep->declQuad(c+504,"ysyx_22051145_top ysyx_22051145_clint csr_mstatus_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_clint csr_mepc_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+506,"ysyx_22051145_top ysyx_22051145_clint csr_mcause_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22051145_top ysyx_22051145_clint csr_mtval_writedata_o", false,-1, 63,0);
        tracep->declQuad(c+508,"ysyx_22051145_top ysyx_22051145_clint csr_mtvec_writedata_o", false,-1, 63,0);
        tracep->declBit(c+510,"ysyx_22051145_top ysyx_22051145_clint csr_mstatus_write_valid_o", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top ysyx_22051145_clint csr_mepc_write_valid_o", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top ysyx_22051145_clint csr_mcause_write_valid_o", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top ysyx_22051145_clint csr_mtval_write_valid_o", false,-1);
        tracep->declBit(c+511,"ysyx_22051145_top ysyx_22051145_clint csr_mtvec_write_valid_o", false,-1);
        tracep->declQuad(c+96,"ysyx_22051145_top ysyx_22051145_clint clint_pc_o", false,-1, 63,0);
        tracep->declBit(c+98,"ysyx_22051145_top ysyx_22051145_clint clint_pc_valid_o", false,-1);
        tracep->declBus(c+477,"ysyx_22051145_top ysyx_22051145_clint stall_o", false,-1, 5,0);
        tracep->declBus(c+478,"ysyx_22051145_top ysyx_22051145_clint flush_o", false,-1, 5,0);
        tracep->declBus(c+534,"ysyx_22051145_top ysyx_22051145_clint load_use_flush", false,-1, 5,0);
        tracep->declBus(c+535,"ysyx_22051145_top ysyx_22051145_clint load_use_stall", false,-1, 5,0);
        tracep->declBus(c+536,"ysyx_22051145_top ysyx_22051145_clint jump_flush", false,-1, 5,0);
        tracep->declBus(c+529,"ysyx_22051145_top ysyx_22051145_clint jump_stall", false,-1, 5,0);
        tracep->declBus(c+537,"ysyx_22051145_top ysyx_22051145_clint trap_flush", false,-1, 5,0);
        tracep->declBus(c+529,"ysyx_22051145_top ysyx_22051145_clint trap_stall", false,-1, 5,0);
        tracep->declBus(c+538,"ysyx_22051145_top ysyx_22051145_clint ram_if_flush", false,-1, 5,0);
        tracep->declBus(c+539,"ysyx_22051145_top ysyx_22051145_clint ram_if_stall", false,-1, 5,0);
        tracep->declBus(c+538,"ysyx_22051145_top ysyx_22051145_clint ram_mem_flush", false,-1, 5,0);
        tracep->declBus(c+539,"ysyx_22051145_top ysyx_22051145_clint ram_mem_stall", false,-1, 5,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb rst", false,-1);
        tracep->declBus(c+478,"ysyx_22051145_top ysyx_22051145_mem_wb flush_valid_i", false,-1, 5,0);
        tracep->declBus(c+477,"ysyx_22051145_top ysyx_22051145_mem_wb stall_valid_i", false,-1, 5,0);
        tracep->declQuad(c+504,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mstatus_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mepc_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+506,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mcause_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtval_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+508,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtvec_writedata_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+510,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mstatus_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mepc_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mcause_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+95,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtval_write_valid_mem_wb_i", false,-1);
        tracep->declBit(c+511,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtvec_write_valid_mem_wb_i", false,-1);
        tracep->declQuad(c+64,"ysyx_22051145_top ysyx_22051145_mem_wb pc_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22051145_top ysyx_22051145_mem_wb inst_data_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+79,"ysyx_22051145_top ysyx_22051145_mem_wb csr_addr_mem_wb_i", false,-1, 11,0);
        tracep->declQuad(c+76,"ysyx_22051145_top ysyx_22051145_mem_wb exc_csr_data_mem_wb_i", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22051145_top ysyx_22051145_mem_wb exc_csr_valid_mem_wb_i", false,-1);
        tracep->declBus(c+69,"ysyx_22051145_top ysyx_22051145_mem_wb rd_addr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+90,"ysyx_22051145_top ysyx_22051145_mem_wb mem_data_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mstatus_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mepc_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mcause_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtval_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtvec_writedata_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+109,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mstatus_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+110,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mepc_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+111,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mcause_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+112,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtval_write_valid_mem_wb_o", false,-1);
        tracep->declBit(c+113,"ysyx_22051145_top ysyx_22051145_mem_wb csr_mtvec_write_valid_mem_wb_o", false,-1);
        tracep->declQuad(c+114,"ysyx_22051145_top ysyx_22051145_mem_wb pc_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22051145_top ysyx_22051145_mem_wb inst_data_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+117,"ysyx_22051145_top ysyx_22051145_mem_wb csr_addr_mem_wb_o", false,-1, 11,0);
        tracep->declQuad(c+118,"ysyx_22051145_top ysyx_22051145_mem_wb exc_csr_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+120,"ysyx_22051145_top ysyx_22051145_mem_wb exc_csr_valid_mem_wb_o", false,-1);
        tracep->declBus(c+121,"ysyx_22051145_top ysyx_22051145_mem_wb rd_addr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+122,"ysyx_22051145_top ysyx_22051145_mem_wb mem_data_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb reg_wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+486,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+113,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+461,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+112,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+461,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+111,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+461,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+110,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_write_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_write_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_write_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_write_valid_mem_wb rst", false,-1);
        tracep->declBus(c+487,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_write_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+109,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_write_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_write_valid_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+488,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtvec_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+462,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mtval_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+490,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mcause_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+464,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mepc_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_writedata_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_writedata_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_writedata_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_writedata_mem_wb rst", false,-1);
        tracep->declQuad(c+492,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_writedata_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_writedata_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_mstatus_writedata_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_pc_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_pc_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_pc_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_pc_mem_wb rst", false,-1);
        tracep->declQuad(c+464,"ysyx_22051145_top ysyx_22051145_mem_wb u_pc_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+114,"ysyx_22051145_top ysyx_22051145_mem_wb u_pc_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_pc_mem_wb wen", false,-1);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_mem_wb u_inst_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"ysyx_22051145_top ysyx_22051145_mem_wb u_inst_data_mem_wb RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_inst_data_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_inst_data_mem_wb rst", false,-1);
        tracep->declBus(c+466,"ysyx_22051145_top ysyx_22051145_mem_wb u_inst_data_mem_wb din", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22051145_top ysyx_22051145_mem_wb u_inst_data_mem_wb dout", false,-1, 31,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_inst_data_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_mem_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_mem_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_mem_data_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_mem_data_mem_wb rst", false,-1);
        tracep->declQuad(c+467,"ysyx_22051145_top ysyx_22051145_mem_wb u_mem_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+122,"ysyx_22051145_top ysyx_22051145_mem_wb u_mem_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_mem_data_mem_wb wen", false,-1);
        tracep->declBus(c+526,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_addr_mem_wb RESET_VAL", false,-1, 11,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_addr_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_addr_mem_wb rst", false,-1);
        tracep->declBus(c+469,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_addr_mem_wb din", false,-1, 11,0);
        tracep->declBus(c+117,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_addr_mem_wb dout", false,-1, 11,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_csr_addr_mem_wb wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_data_mem_wb WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_data_mem_wb RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_data_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_data_mem_wb rst", false,-1);
        tracep->declQuad(c+470,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_data_mem_wb din", false,-1, 63,0);
        tracep->declQuad(c+118,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_data_mem_wb dout", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_data_mem_wb wen", false,-1);
        tracep->declBus(c+524,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_valid_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+525,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_valid_mem_wb RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_valid_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_valid_mem_wb rst", false,-1);
        tracep->declBus(c+472,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_valid_mem_wb din", false,-1, 0,0);
        tracep->declBus(c+120,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_valid_mem_wb dout", false,-1, 0,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_exc_csr_valid_mem_wb wen", false,-1);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_mem_wb u_rd_addr_mem_wb WIDTH", false,-1, 31,0);
        tracep->declBus(c+523,"ysyx_22051145_top ysyx_22051145_mem_wb u_rd_addr_mem_wb RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_mem_wb u_rd_addr_mem_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_mem_wb u_rd_addr_mem_wb rst", false,-1);
        tracep->declBus(c+473,"ysyx_22051145_top ysyx_22051145_mem_wb u_rd_addr_mem_wb din", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22051145_top ysyx_22051145_mem_wb u_rd_addr_mem_wb dout", false,-1, 4,0);
        tracep->declBit(c+485,"ysyx_22051145_top ysyx_22051145_mem_wb u_rd_addr_mem_wb wen", false,-1);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_wb clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_wb rst", false,-1);
        tracep->declQuad(c+114,"ysyx_22051145_top ysyx_22051145_wb pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22051145_top ysyx_22051145_wb inst_data_wb_i", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_gpr clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_gpr rst", false,-1);
        tracep->declBus(c+10,"ysyx_22051145_top ysyx_22051145_gpr rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22051145_top ysyx_22051145_gpr rs2_idx_i", false,-1, 4,0);
        tracep->declQuad(c+124,"ysyx_22051145_top ysyx_22051145_gpr rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+126,"ysyx_22051145_top ysyx_22051145_gpr rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+121,"ysyx_22051145_top ysyx_22051145_gpr write_idx_i", false,-1, 4,0);
        tracep->declQuad(c+122,"ysyx_22051145_top ysyx_22051145_gpr write_data_i", false,-1, 63,0);
        tracep->declBit(c+540,"ysyx_22051145_top ysyx_22051145_gpr write_data_valid_i", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+216+i*2,"ysyx_22051145_top ysyx_22051145_gpr rf", true,(i+0), 63,0);}}
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile rst", false,-1);
        tracep->declQuad(c+99,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mstatus_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mepc_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mcause_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mtval_writedata_i", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mtvec_writedata_i", false,-1, 63,0);
        tracep->declBit(c+109,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mstatus_write_valid_i", false,-1);
        tracep->declBit(c+110,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mepc_write_valid_i", false,-1);
        tracep->declBit(c+111,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mcause_write_valid_i", false,-1);
        tracep->declBit(c+112,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mtval_write_valid_i", false,-1);
        tracep->declBit(c+113,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mtvec_write_valid_i", false,-1);
        tracep->declQuad(c+128,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mstatus_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+130,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mepc_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mcause_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mtval_readdata_o", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_mtvec_readdata_o", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_readaddr_i", false,-1, 11,0);
        tracep->declQuad(c+18,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_readdata_o", false,-1, 63,0);
        tracep->declBus(c+117,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_writeaddr_i", false,-1, 11,0);
        tracep->declBit(c+120,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_write_valid_i", false,-1);
        tracep->declQuad(c+118,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile csr_writedata_i", false,-1, 63,0);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mstatus WIDTH", false,-1, 31,0);
        tracep->declQuad(c+541,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mstatus RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mstatus clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mstatus rst", false,-1);
        tracep->declQuad(c+280,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mstatus din", false,-1, 63,0);
        tracep->declQuad(c+128,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mstatus dout", false,-1, 63,0);
        tracep->declBit(c+282,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mstatus wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mepc WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mepc RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mepc clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mepc rst", false,-1);
        tracep->declQuad(c+283,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mepc din", false,-1, 63,0);
        tracep->declQuad(c+130,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mepc dout", false,-1, 63,0);
        tracep->declBit(c+285,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mepc wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mcause WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mcause RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mcause clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mcause rst", false,-1);
        tracep->declQuad(c+286,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mcause din", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mcause dout", false,-1, 63,0);
        tracep->declBit(c+288,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mcause wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtval WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtval clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtval rst", false,-1);
        tracep->declQuad(c+289,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtval din", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtval dout", false,-1, 63,0);
        tracep->declBit(c+291,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtval wen", false,-1);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtvec WIDTH", false,-1, 31,0);
        tracep->declQuad(c+516,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtvec RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtvec clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtvec rst", false,-1);
        tracep->declQuad(c+292,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtvec din", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtvec dout", false,-1, 63,0);
        tracep->declBit(c+294,"ysyx_22051145_top ysyx_22051145_rv64_csr_regfile u_csr_mtvec wen", false,-1);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_icache_top clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_icache_top rst", false,-1);
        tracep->declBus(c+494,"ysyx_22051145_top ysyx_22051145_icache_top preif_raddr_i", false,-1, 31,0);
        tracep->declBus(c+543,"ysyx_22051145_top ysyx_22051145_icache_top preif_rmask_i", false,-1, 7,0);
        tracep->declBit(c+501,"ysyx_22051145_top ysyx_22051145_icache_top preif_raddr_valid_i", false,-1);
        tracep->declQuad(c+138,"ysyx_22051145_top ysyx_22051145_icache_top if_rdata_o", false,-1, 63,0);
        tracep->declBit(c+140,"ysyx_22051145_top ysyx_22051145_icache_top if_rdata_valid_o", false,-1);
        tracep->declBus(c+141,"ysyx_22051145_top ysyx_22051145_icache_top ram_raddr_icache_o", false,-1, 31,0);
        tracep->declBit(c+142,"ysyx_22051145_top ysyx_22051145_icache_top ram_raddr_valid_icache_o", false,-1);
        tracep->declBus(c+143,"ysyx_22051145_top ysyx_22051145_icache_top ram_rmask_icache_o", false,-1, 7,0);
        tracep->declBit(c+159,"ysyx_22051145_top ysyx_22051145_icache_top ram_rdata_ready_icache_i", false,-1);
        tracep->declQuad(c+160,"ysyx_22051145_top ysyx_22051145_icache_top ram_rdata_icache_i", false,-1, 63,0);
        tracep->declBus(c+495,"ysyx_22051145_top ysyx_22051145_icache_top cache_blk_addr", false,-1, 3,0);
        tracep->declBus(c+496,"ysyx_22051145_top ysyx_22051145_icache_top cache_line_idx", false,-1, 8,4);
        tracep->declBus(c+497,"ysyx_22051145_top ysyx_22051145_icache_top cache_line_tag", false,-1, 31,9);
        tracep->declBit(c+474,"ysyx_22051145_top ysyx_22051145_icache_top icache_hit", false,-1);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_icache_top CACHE_RST", false,-1, 3,0);
        tracep->declBus(c+544,"ysyx_22051145_top ysyx_22051145_icache_top CACHE_IDLE", false,-1, 3,0);
        tracep->declBus(c+545,"ysyx_22051145_top ysyx_22051145_icache_top CACHE_HIT", false,-1, 3,0);
        tracep->declBus(c+546,"ysyx_22051145_top ysyx_22051145_icache_top CACHE_MISS", false,-1, 3,0);
        tracep->declBus(c+547,"ysyx_22051145_top ysyx_22051145_icache_top CACHE_MISS2", false,-1, 3,0);
        tracep->declBus(c+295,"ysyx_22051145_top ysyx_22051145_icache_top icahce_state", false,-1, 3,0);
        tracep->declBus(c+296,"ysyx_22051145_top ysyx_22051145_icache_top blk_addr_reg", false,-1, 3,0);
        tracep->declBus(c+297,"ysyx_22051145_top ysyx_22051145_icache_top line_idx_reg", false,-1, 4,0);
        tracep->declBus(c+298,"ysyx_22051145_top ysyx_22051145_icache_top line_tag_reg", false,-1, 22,0);
        tracep->declBit(c+299,"ysyx_22051145_top ysyx_22051145_icache_top icache_tag_wen", false,-1);
        tracep->declBit(c+300,"ysyx_22051145_top ysyx_22051145_icache_top icahce_rdata_ok", false,-1);
        tracep->declArray(c+301,"ysyx_22051145_top ysyx_22051145_icache_top cache_line_temp", false,-1, 127,0);
        tracep->declBit(c+305,"ysyx_22051145_top ysyx_22051145_icache_top icache_data_wen", false,-1);
        tracep->declArray(c+306,"ysyx_22051145_top ysyx_22051145_icache_top icache_line_rdata", false,-1, 127,0);
        tracep->declArray(c+548,"ysyx_22051145_top ysyx_22051145_icache_top icache_wmask", false,-1, 127,0);
        tracep->declBus(c+552,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag TAG_LEN", false,-1, 31,0);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag rst", false,-1);
        tracep->declBus(c+497,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag icache_tag_i", false,-1, 22,0);
        tracep->declBus(c+496,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag icache_index_i", false,-1, 4,0);
        tracep->declBit(c+299,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag write_valid_i", false,-1);
        tracep->declBit(c+474,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag icache_hit_o", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+310+i*1,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag icache_tag_regs", true,(i+0), 22,0);}}
        tracep->declBus(c+342,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_tag i", false,-1, 31,0);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+530,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data BLK_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data rst", false,-1);
        tracep->declBus(c+496,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data icache_index_i", false,-1, 4,0);
        tracep->declBus(c+495,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data icache_blk_addr_i", false,-1, 3,0);
        tracep->declArray(c+301,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data icache_line_wdata_i", false,-1, 127,0);
        tracep->declArray(c+548,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data icache_wmask", false,-1, 127,0);
        tracep->declBit(c+305,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data icache_wen_i", false,-1);
        tracep->declArray(c+306,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data icache_line_rdata_o", false,-1, 127,0);
        tracep->declBus(c+553,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Bits", false,-1, 31,0);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Word_Depth", false,-1, 31,0);
        tracep->declBus(c+528,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Add_Width", false,-1, 31,0);
        tracep->declBus(c+553,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Wen_Width", false,-1, 31,0);
        tracep->declArray(c+306,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW Q", false,-1, 127,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW CLK", false,-1);
        tracep->declBit(c+554,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW CEN", false,-1);
        tracep->declBit(c+343,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW WEN", false,-1);
        tracep->declArray(c+555,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW BWEN", false,-1, 127,0);
        tracep->declBus(c+498,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW A", false,-1, 5,0);
        tracep->declArray(c+301,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW D", false,-1, 127,0);
        tracep->declBit(c+540,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW cen", false,-1);
        tracep->declBit(c+305,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW wen", false,-1);
        tracep->declArray(c+548,"ysyx_22051145_top ysyx_22051145_icache_top u_icache_data u_S011HD1P_X32Y2D128_BW bwen", false,-1, 127,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_dcache clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_dcache rst", false,-1);
        tracep->declBus(c+83,"ysyx_22051145_top ysyx_22051145_dcache mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22051145_top ysyx_22051145_dcache mem_mask_i", false,-1, 7,0);
        tracep->declBit(c+84,"ysyx_22051145_top ysyx_22051145_dcache mem_addr_valid_i", false,-1);
        tracep->declBit(c+86,"ysyx_22051145_top ysyx_22051145_dcache mem_write_valid_i", false,-1);
        tracep->declQuad(c+87,"ysyx_22051145_top ysyx_22051145_dcache mem_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22051145_top ysyx_22051145_dcache mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+146,"ysyx_22051145_top ysyx_22051145_dcache mem_data_ready_o", false,-1);
        tracep->declBus(c+147,"ysyx_22051145_top ysyx_22051145_dcache ram_raddr_dcache_o", false,-1, 31,0);
        tracep->declBit(c+148,"ysyx_22051145_top ysyx_22051145_dcache ram_raddr_valid_dcache_o", false,-1);
        tracep->declBus(c+149,"ysyx_22051145_top ysyx_22051145_dcache ram_rmask_dcache_o", false,-1, 7,0);
        tracep->declBit(c+157,"ysyx_22051145_top ysyx_22051145_dcache ram_rdata_ready_dcache_i", false,-1);
        tracep->declQuad(c+155,"ysyx_22051145_top ysyx_22051145_dcache ram_rdata_dcache_i", false,-1, 63,0);
        tracep->declBus(c+150,"ysyx_22051145_top ysyx_22051145_dcache ram_waddr_dcache_o", false,-1, 31,0);
        tracep->declBit(c+151,"ysyx_22051145_top ysyx_22051145_dcache ram_waddr_valid_dcache_o", false,-1);
        tracep->declBus(c+152,"ysyx_22051145_top ysyx_22051145_dcache ram_wmask_dcache_o", false,-1, 7,0);
        tracep->declBit(c+158,"ysyx_22051145_top ysyx_22051145_dcache ram_wdata_ready_dcache_i", false,-1);
        tracep->declQuad(c+153,"ysyx_22051145_top ysyx_22051145_dcache ram_wdata_dcache_o", false,-1, 63,0);
        tracep->declBit(c+344,"ysyx_22051145_top ysyx_22051145_dcache uncache", false,-1);
        tracep->declBus(c+345,"ysyx_22051145_top ysyx_22051145_dcache cache_blk_addr", false,-1, 3,0);
        tracep->declBus(c+346,"ysyx_22051145_top ysyx_22051145_dcache cache_line_idx", false,-1, 8,4);
        tracep->declBus(c+347,"ysyx_22051145_top ysyx_22051145_dcache cache_line_tag", false,-1, 31,9);
        tracep->declBit(c+348,"ysyx_22051145_top ysyx_22051145_dcache dcache_hit", false,-1);
        tracep->declBus(c+503,"ysyx_22051145_top ysyx_22051145_dcache CACHE_RST", false,-1, 3,0);
        tracep->declBus(c+544,"ysyx_22051145_top ysyx_22051145_dcache CACHE_IDLE", false,-1, 3,0);
        tracep->declBus(c+545,"ysyx_22051145_top ysyx_22051145_dcache CACHE_READ_HIT", false,-1, 3,0);
        tracep->declBus(c+546,"ysyx_22051145_top ysyx_22051145_dcache CACHE_READ_MISS", false,-1, 3,0);
        tracep->declBus(c+547,"ysyx_22051145_top ysyx_22051145_dcache CACHE_READ_MISS2", false,-1, 3,0);
        tracep->declBus(c+559,"ysyx_22051145_top ysyx_22051145_dcache CACHE_WRITE_HIT1", false,-1, 3,0);
        tracep->declBus(c+560,"ysyx_22051145_top ysyx_22051145_dcache CACHE_WRITE_HIT2", false,-1, 3,0);
        tracep->declBus(c+561,"ysyx_22051145_top ysyx_22051145_dcache CACHE_WRITE_MISS", false,-1, 3,0);
        tracep->declBus(c+562,"ysyx_22051145_top ysyx_22051145_dcache CACHE_WRITE_MISS2", false,-1, 3,0);
        tracep->declBus(c+563,"ysyx_22051145_top ysyx_22051145_dcache UNCACHE_READ", false,-1, 3,0);
        tracep->declBus(c+564,"ysyx_22051145_top ysyx_22051145_dcache UNCACHE_WRITE", false,-1, 3,0);
        tracep->declBus(c+349,"ysyx_22051145_top ysyx_22051145_dcache dcahce_state", false,-1, 3,0);
        tracep->declBus(c+350,"ysyx_22051145_top ysyx_22051145_dcache blk_addr_reg", false,-1, 3,0);
        tracep->declBus(c+351,"ysyx_22051145_top ysyx_22051145_dcache line_idx_reg", false,-1, 4,0);
        tracep->declBus(c+352,"ysyx_22051145_top ysyx_22051145_dcache line_tag_reg", false,-1, 22,0);
        tracep->declBit(c+353,"ysyx_22051145_top ysyx_22051145_dcache dcache_tag_wen", false,-1);
        tracep->declBit(c+354,"ysyx_22051145_top ysyx_22051145_dcache dcahce_rdata_ok", false,-1);
        tracep->declArray(c+355,"ysyx_22051145_top ysyx_22051145_dcache cache_line_temp", false,-1, 127,0);
        tracep->declQuad(c+359,"ysyx_22051145_top ysyx_22051145_dcache uncache_rdata", false,-1, 63,0);
        tracep->declBit(c+361,"ysyx_22051145_top ysyx_22051145_dcache dcache_data_wen", false,-1);
        tracep->declArray(c+362,"ysyx_22051145_top ysyx_22051145_dcache dcache_wmask_temp", false,-1, 127,0);
        tracep->declArray(c+366,"ysyx_22051145_top ysyx_22051145_dcache dcache_wmask", false,-1, 127,0);
        tracep->declQuad(c+370,"ysyx_22051145_top ysyx_22051145_dcache wmask_bit", false,-1, 63,0);
        tracep->declBus(c+372,"ysyx_22051145_top ysyx_22051145_dcache addr_last3", false,-1, 2,0);
        tracep->declArray(c+373,"ysyx_22051145_top ysyx_22051145_dcache dcache_line_rdata", false,-1, 127,0);
        tracep->declBus(c+552,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag TAG_LEN", false,-1, 31,0);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag rst", false,-1);
        tracep->declBus(c+347,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag dcache_tag_i", false,-1, 22,0);
        tracep->declBus(c+346,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag dcache_index_i", false,-1, 4,0);
        tracep->declBit(c+353,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag write_valid_i", false,-1);
        tracep->declBit(c+348,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag dcache_hit_o", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+377+i*1,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag dcache_tag_regs", true,(i+0), 22,0);}}
        tracep->declBus(c+409,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_tag i", false,-1, 31,0);
        tracep->declBus(c+522,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data IDX_LEN", false,-1, 31,0);
        tracep->declBus(c+530,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data BLK_LEN", false,-1, 31,0);
        tracep->declBus(c+518,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data TAG_NUM", false,-1, 31,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data rst", false,-1);
        tracep->declBus(c+346,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data dcache_index_i", false,-1, 4,0);
        tracep->declBus(c+345,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data dcache_blk_addr_i", false,-1, 3,0);
        tracep->declArray(c+355,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data dcache_line_wdata_i", false,-1, 127,0);
        tracep->declArray(c+366,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data dcache_wmask", false,-1, 127,0);
        tracep->declBit(c+361,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data dcache_wen_i", false,-1);
        tracep->declArray(c+373,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data dcache_line_rdata_o", false,-1, 127,0);
        tracep->declBus(c+553,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW Bits", false,-1, 31,0);
        tracep->declBus(c+512,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW Word_Depth", false,-1, 31,0);
        tracep->declBus(c+528,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW Add_Width", false,-1, 31,0);
        tracep->declBus(c+553,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW Wen_Width", false,-1, 31,0);
        tracep->declArray(c+373,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW Q", false,-1, 127,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW CLK", false,-1);
        tracep->declBit(c+554,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW CEN", false,-1);
        tracep->declBit(c+410,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW WEN", false,-1);
        tracep->declArray(c+411,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW BWEN", false,-1, 127,0);
        tracep->declBus(c+415,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW A", false,-1, 5,0);
        tracep->declArray(c+355,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW D", false,-1, 127,0);
        tracep->declBit(c+540,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW cen", false,-1);
        tracep->declBit(c+361,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW wen", false,-1);
        tracep->declArray(c+366,"ysyx_22051145_top ysyx_22051145_dcache u_dcache_data u_S011HD1P_X32Y2D128_BW bwen", false,-1, 127,0);
        tracep->declBit(c+499,"ysyx_22051145_top ysyx_22051145_ram clk", false,-1);
        tracep->declBit(c+500,"ysyx_22051145_top ysyx_22051145_ram rst", false,-1);
        tracep->declBus(c+141,"ysyx_22051145_top ysyx_22051145_ram if_read_addr_i", false,-1, 31,0);
        tracep->declBit(c+142,"ysyx_22051145_top ysyx_22051145_ram if_valid_i", false,-1);
        tracep->declBus(c+143,"ysyx_22051145_top ysyx_22051145_ram if_rmask_i", false,-1, 7,0);
        tracep->declQuad(c+160,"ysyx_22051145_top ysyx_22051145_ram if_rdata_o", false,-1, 63,0);
        tracep->declBit(c+159,"ysyx_22051145_top ysyx_22051145_ram if_rdata_valid_o", false,-1);
        tracep->declBus(c+147,"ysyx_22051145_top ysyx_22051145_ram mem_read_addr_i", false,-1, 31,0);
        tracep->declBit(c+148,"ysyx_22051145_top ysyx_22051145_ram mem_valid_i", false,-1);
        tracep->declBus(c+149,"ysyx_22051145_top ysyx_22051145_ram mem_rmask_i", false,-1, 7,0);
        tracep->declQuad(c+155,"ysyx_22051145_top ysyx_22051145_ram mem_rdata_o", false,-1, 63,0);
        tracep->declBit(c+157,"ysyx_22051145_top ysyx_22051145_ram mem_rdata_valid_o", false,-1);
        tracep->declBus(c+150,"ysyx_22051145_top ysyx_22051145_ram mem_write_addr_i", false,-1, 31,0);
        tracep->declBit(c+151,"ysyx_22051145_top ysyx_22051145_ram mem_write_valid_i", false,-1);
        tracep->declBus(c+152,"ysyx_22051145_top ysyx_22051145_ram mem_wmask_i", false,-1, 7,0);
        tracep->declQuad(c+153,"ysyx_22051145_top ysyx_22051145_ram mem_wdata_i", false,-1, 63,0);
        tracep->declBit(c+158,"ysyx_22051145_top ysyx_22051145_ram mem_wdata_ready_o", false,-1);
        tracep->declBus(c+531,"ysyx_22051145_top ysyx_22051145_ram STATE_LEN", false,-1, 31,0);
        tracep->declBus(c+532,"ysyx_22051145_top ysyx_22051145_ram IDLE", false,-1, 2,0);
        tracep->declBus(c+565,"ysyx_22051145_top ysyx_22051145_ram MEM1", false,-1, 2,0);
        tracep->declBus(c+566,"ysyx_22051145_top ysyx_22051145_ram MEM2", false,-1, 2,0);
        tracep->declBus(c+567,"ysyx_22051145_top ysyx_22051145_ram MEM3", false,-1, 2,0);
        tracep->declBus(c+568,"ysyx_22051145_top ysyx_22051145_ram PREIDLE", false,-1, 2,0);
    }
}

void Vysyx_22051145_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22051145_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22051145_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22051145_top___024root__traceRegister(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22051145_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22051145_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22051145_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22051145_top___024root__traceFullSub0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22051145_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22051145_top___024root* const __restrict vlSelf = static_cast<Vysyx_22051145_top___024root*>(voidSelf);
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22051145_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22051145_top___024root__traceFullSub0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<4>/*127:0*/ __Vtemp65;
    VlWide<4>/*127:0*/ __Vtemp66;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus),19);
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22051145_top__DOT__u_pc_reg__DOT___pc_current),64);
        tracep->fullIData(oldp+4,(((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
                                    ? ((((0U == (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                    << 3U)))
                                          ? 0U : (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                        << 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                       << 3U))))) 
                                        | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                           (3U & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                  >> 2U))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                  << 3U)))) 
                                       & (IData)((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))))
                                    : 0x13U)),32);
        tracep->fullBit(oldp+5,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))));
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q),64);
        tracep->fullIData(oldp+8,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q),32);
        tracep->fullIData(oldp+9,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q),19);
        tracep->fullCData(oldp+10,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx),5);
        tracep->fullCData(oldp+11,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx),5);
        tracep->fullCData(oldp+12,((((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type) 
                                       | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type)) 
                                      | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type)) 
                                     | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))
                                     ? (0x1fU & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->fullSData(oldp+13,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx),12);
        tracep->fullQData(oldp+14,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid)
                                     ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                     : ((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx) 
                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                         & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx)))
                                         ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                         : (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx) 
                                             == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                             ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                             : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                            [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx])))),64);
        tracep->fullQData(oldp+16,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)
                                     ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                     : ((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx) 
                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                         & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx)))
                                         ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                         : (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx) 
                                             == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                             ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                             : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                            [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx])))),64);
        tracep->fullQData(oldp+18,(((0x300U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                     ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q
                                     : ((0x341U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q
                                         : ((0x342U 
                                             == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                             ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q
                                             : ((0x343U 
                                                 == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                 ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q
                                                 : 
                                                ((0x305U 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q
                                                  : 0ULL)))))),64);
        tracep->fullQData(oldp+20,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                       >> 0xfU))))),64);
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_imm_valid));
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___imm_data),64);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___alu_op),6);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___mem_op),4);
        tracep->fullCData(oldp+27,(((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                      | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)) 
                                     & (0U == (0x1fU 
                                               & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                  >> 0xfU))))
                                     ? 1U : (((2U & 
                                               (- (IData)(
                                                          ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrw) 
                                                           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi))))) 
                                              | (3U 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set))))) 
                                             | (4U 
                                                & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))))),3);
        tracep->fullCData(oldp+28,((((((((((((((1U 
                                                & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc)))) 
                                               | (2U 
                                                  & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui))))) 
                                              | (3U 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))))) 
                                             | (4U 
                                                & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr))))) 
                                            | (5U & 
                                               (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load))))) 
                                           | (6U & 
                                              (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store))))) 
                                          | (7U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch))))) 
                                         | (8U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm))))) 
                                        | (9U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32))))) 
                                       | (0xaU & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op))))) 
                                      | (0xbU & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32))))) 
                                     | (0xcU & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr))))) 
                                    | (0xdU & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak)))))),5);
        tracep->fullBit(oldp+29,(((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid) 
                                     | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)))));
        tracep->fullIData(oldp+30,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus),19);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q),64);
        tracep->fullIData(oldp+33,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q),32);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_idx_id_ex_q),5);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_idx_id_ex_q),5);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q),5);
        tracep->fullSData(oldp+37,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q),12);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q),64);
        tracep->fullBit(oldp+42,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q));
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q),64);
        tracep->fullCData(oldp+49,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q),6);
        tracep->fullCData(oldp+50,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q),4);
        tracep->fullCData(oldp+51,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q),3);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q),5);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q),4);
        tracep->fullIData(oldp+54,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q),19);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex),64);
        tracep->fullQData(oldp+57,((((((- (QData)((IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                       & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                      | ((- (QData)((IData)(
                                                            (3U 
                                                             == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                         & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                            | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2))) 
                                     | ((- (QData)((IData)(
                                                           (4U 
                                                            == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                        & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                           & (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2)))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                       & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q))),64);
        tracep->fullBit(oldp+59,((1U & (~ ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                           | (1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)))))));
        tracep->fullQData(oldp+60,((((- (QData)((IData)(
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                                         | (7U 
                                                            == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))))) 
                                     & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q 
                                        + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q)) 
                                    | ((- (QData)((IData)(
                                                          (4U 
                                                           == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q))))) 
                                       & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q 
                                          + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q)))),64);
        tracep->fullBit(oldp+62,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___branch_pc_valid));
        tracep->fullIData(oldp+63,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus),19);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q),64);
        tracep->fullIData(oldp+66,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q),32);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___imm_data_ex_mem_q),64);
        tracep->fullCData(oldp+69,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q),5);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs1_data_ex_mem_q),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q),64);
        tracep->fullBit(oldp+78,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q));
        tracep->fullSData(oldp+79,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q),12);
        tracep->fullCData(oldp+80,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_op_ex_mem_q),4);
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q),4);
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q),19);
        tracep->fullIData(oldp+83,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr)),32);
        tracep->fullBit(oldp+84,(vlSelf->ysyx_22051145_top__DOT__mem_addr_valid_mem));
        tracep->fullCData(oldp+85,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask),8);
        tracep->fullBit(oldp+86,(vlSelf->ysyx_22051145_top__DOT__mem_write_valid_mem));
        tracep->fullQData(oldp+87,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte)
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q))))
                                     : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls16byte)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q))))
                                         : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls32byte)
                                             ? (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q))
                                             : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q)))),64);
        tracep->fullBit(oldp+89,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isload) 
                                   | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore)) 
                                  & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache)))));
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22051145_top__DOT__mem_data_mem),64);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus),19);
        tracep->fullQData(oldp+93,((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q))),64);
        tracep->fullBit(oldp+95,((1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                        >> 0x12U))));
        tracep->fullQData(oldp+96,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                            >> 0x10U))))) 
                                     & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                              >> 0x12U))))) 
                                       & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q))),64);
        tracep->fullBit(oldp+98,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_clint__DOT___trap_valid));
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
        tracep->fullBit(oldp+109,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
        tracep->fullBit(oldp+110,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
        tracep->fullBit(oldp+111,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
        tracep->fullBit(oldp+112,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
        tracep->fullBit(oldp+113,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___pc_mem_wb_q),64);
        tracep->fullIData(oldp+116,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___inst_data_mem_wb_q),32);
        tracep->fullSData(oldp+117,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q),12);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q));
        tracep->fullCData(oldp+121,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q),5);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___mem_data_mem_wb_q),64);
        tracep->fullQData(oldp+124,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx) 
                                      == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                      : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                     [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx])),64);
        tracep->fullQData(oldp+126,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx) 
                                      == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                      : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                     [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx])),64);
        tracep->fullQData(oldp+128,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q),64);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q),64);
        tracep->fullQData(oldp+138,(((QData)((IData)(
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                            << 3U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                              << 3U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                             << 3U))))) 
                                                      | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                         (3U 
                                                          & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                             >> 2U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                             << 3U)))))) 
                                     & (- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache))))),64);
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache));
        tracep->fullIData(oldp+141,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_icache_o),32);
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o));
        tracep->fullCData(oldp+143,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_rmask_icache_o),8);
        tracep->fullQData(oldp+144,(((0xa0000000U == 
                                      (0xa0000000U 
                                       & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr)))
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata
                                      : ((1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                      << 3U)))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                  (((IData)(7U) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                        << 3U))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                       << 3U))))) 
                                                                | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                   (3U 
                                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                       >> 2U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                       << 3U)))))))
                                          : ((3U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                          << 3U)))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                      (((IData)(0xfU) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                            << 3U))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                           << 3U))))) 
                                                                    | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                       (3U 
                                                                        & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                           >> 2U))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                           << 3U)))))))
                                              : ((0xfU 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask))
                                                  ? (QData)((IData)(
                                                                    (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                           << 3U)))
                                                                       ? 0U
                                                                       : 
                                                                      (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                             << 3U))) 
                                                                        >> 5U)] 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                            << 3U))))) 
                                                                     | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                        (3U 
                                                                         & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                            >> 2U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                            << 3U))))))
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                          << 3U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                          << 3U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                          << 3U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                            << 3U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                              << 3U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                             << 3U))))) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata[
                                                                         (3U 
                                                                          & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                                             >> 2U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg) 
                                                             << 3U)))))
                                                   : 0ULL)))))),64);
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache));
        tracep->fullIData(oldp+147,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_dcache_o),32);
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o));
        tracep->fullCData(oldp+149,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_rmask_dcache_o),8);
        tracep->fullIData(oldp+150,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_dcache_o),32);
        tracep->fullBit(oldp+151,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_valid_dcache_o));
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wmask_dcache_o),8);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wdata_dcache_o),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o),64);
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_ready));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o));
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out),64);
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out));
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra));
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32));
        tracep->fullCData(oldp+173,((0x3fU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),6);
        tracep->fullQData(oldp+174,(((((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl))) 
                                       & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                      | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra))) 
                                         & ((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                             & (0xffffffffffffffffULL 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32)
                                                     ? 
                                                    ((IData)(0x20U) 
                                                     + (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                                     : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))) 
                                            | ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32)
                                                                       ? (IData)(
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                                >> 0x1fU))
                                                                       : (IData)(
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                                >> 0x3fU))))))) 
                                               & (~ 
                                                  (0xffffffffffffffffULL 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32)
                                                        ? 
                                                       ((IData)(0x20U) 
                                                        + (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                                        : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))))))) 
                                     | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll))) 
                                        & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res))),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
        tracep->fullBit(oldp+184,(((((0x14U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                     | (0x15U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                                    | (0x16U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullBit(oldp+185,((((0x14U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                    | (0x15U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))));
        tracep->fullWData(oldp+186,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
        tracep->fullBit(oldp+190,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed));
        tracep->fullBit(oldp+191,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32));
        tracep->fullQData(oldp+192,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                                          : 
                                                         VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                          : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+194,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                      ? (QData)((IData)(
                                                        ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                          ? 
                                                         VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                                          : 
                                                         VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))))
                                      : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                          ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                          : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),64);
        tracep->fullQData(oldp+196,(VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+198,(VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+200,(VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+202,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
        tracep->fullQData(oldp+204,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                      : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),64);
        tracep->fullQData(oldp+206,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                      : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),64);
        tracep->fullIData(oldp+208,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1)),32);
        tracep->fullIData(oldp+209,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),32);
        tracep->fullIData(oldp+210,(VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+211,(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+212,(VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+213,(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
        tracep->fullIData(oldp+214,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                      : VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),32);
        tracep->fullIData(oldp+215,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                      : VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),32);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[31]),64);
        tracep->fullQData(oldp+280,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                      : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+282,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en));
        tracep->fullQData(oldp+283,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                      : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+285,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en));
        tracep->fullQData(oldp+286,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                      : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+288,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en));
        tracep->fullQData(oldp+289,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                      : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+291,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en));
        tracep->fullQData(oldp+292,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                      ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                      : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        tracep->fullBit(oldp+294,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en));
        tracep->fullCData(oldp+295,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_state),4);
        tracep->fullCData(oldp+296,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg),4);
        tracep->fullCData(oldp+297,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_idx_reg),5);
        tracep->fullIData(oldp+298,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_tag_reg),23);
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_tag_wen));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok));
        tracep->fullWData(oldp+301,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__cache_line_temp),128);
        tracep->fullBit(oldp+305,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen));
        tracep->fullWData(oldp+306,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata),128);
        tracep->fullIData(oldp+310,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[0]),23);
        tracep->fullIData(oldp+311,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[1]),23);
        tracep->fullIData(oldp+312,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[2]),23);
        tracep->fullIData(oldp+313,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[3]),23);
        tracep->fullIData(oldp+314,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[4]),23);
        tracep->fullIData(oldp+315,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[5]),23);
        tracep->fullIData(oldp+316,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[6]),23);
        tracep->fullIData(oldp+317,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[7]),23);
        tracep->fullIData(oldp+318,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[8]),23);
        tracep->fullIData(oldp+319,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[9]),23);
        tracep->fullIData(oldp+320,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[10]),23);
        tracep->fullIData(oldp+321,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[11]),23);
        tracep->fullIData(oldp+322,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[12]),23);
        tracep->fullIData(oldp+323,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[13]),23);
        tracep->fullIData(oldp+324,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[14]),23);
        tracep->fullIData(oldp+325,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[15]),23);
        tracep->fullIData(oldp+326,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[16]),23);
        tracep->fullIData(oldp+327,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[17]),23);
        tracep->fullIData(oldp+328,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[18]),23);
        tracep->fullIData(oldp+329,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[19]),23);
        tracep->fullIData(oldp+330,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[20]),23);
        tracep->fullIData(oldp+331,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[21]),23);
        tracep->fullIData(oldp+332,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[22]),23);
        tracep->fullIData(oldp+333,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[23]),23);
        tracep->fullIData(oldp+334,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[24]),23);
        tracep->fullIData(oldp+335,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[25]),23);
        tracep->fullIData(oldp+336,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[26]),23);
        tracep->fullIData(oldp+337,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[27]),23);
        tracep->fullIData(oldp+338,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[28]),23);
        tracep->fullIData(oldp+339,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[29]),23);
        tracep->fullIData(oldp+340,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[30]),23);
        tracep->fullIData(oldp+341,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[31]),23);
        tracep->fullIData(oldp+342,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__i),32);
        tracep->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen)))));
        tracep->fullBit(oldp+344,((0xa0000000U == (0xa0000000U 
                                                   & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr)))));
        tracep->fullCData(oldp+345,((0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr))),4);
        tracep->fullCData(oldp+346,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+347,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                          >> 9U)))),23);
        tracep->fullBit(oldp+348,(((0x7fffffU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                         >> 9U))) 
                                   == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs
                                   [(0x1fU & (IData)(
                                                     (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                      >> 4U)))])));
        tracep->fullCData(oldp+349,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_state),4);
        tracep->fullCData(oldp+350,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg),4);
        tracep->fullCData(oldp+351,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_idx_reg),5);
        tracep->fullIData(oldp+352,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_tag_reg),23);
        tracep->fullBit(oldp+353,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_tag_wen));
        tracep->fullBit(oldp+354,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_rdata_ok));
        tracep->fullWData(oldp+355,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_temp),128);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata),64);
        tracep->fullBit(oldp+361,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen));
        tracep->fullWData(oldp+362,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp),128);
        tracep->fullWData(oldp+366,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask),128);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit),64);
        tracep->fullCData(oldp+372,((7U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr))),3);
        tracep->fullWData(oldp+373,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata),128);
        tracep->fullIData(oldp+377,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[0]),23);
        tracep->fullIData(oldp+378,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[1]),23);
        tracep->fullIData(oldp+379,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[2]),23);
        tracep->fullIData(oldp+380,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[3]),23);
        tracep->fullIData(oldp+381,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[4]),23);
        tracep->fullIData(oldp+382,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[5]),23);
        tracep->fullIData(oldp+383,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[6]),23);
        tracep->fullIData(oldp+384,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[7]),23);
        tracep->fullIData(oldp+385,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[8]),23);
        tracep->fullIData(oldp+386,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[9]),23);
        tracep->fullIData(oldp+387,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[10]),23);
        tracep->fullIData(oldp+388,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[11]),23);
        tracep->fullIData(oldp+389,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[12]),23);
        tracep->fullIData(oldp+390,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[13]),23);
        tracep->fullIData(oldp+391,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[14]),23);
        tracep->fullIData(oldp+392,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[15]),23);
        tracep->fullIData(oldp+393,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[16]),23);
        tracep->fullIData(oldp+394,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[17]),23);
        tracep->fullIData(oldp+395,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[18]),23);
        tracep->fullIData(oldp+396,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[19]),23);
        tracep->fullIData(oldp+397,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[20]),23);
        tracep->fullIData(oldp+398,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[21]),23);
        tracep->fullIData(oldp+399,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[22]),23);
        tracep->fullIData(oldp+400,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[23]),23);
        tracep->fullIData(oldp+401,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[24]),23);
        tracep->fullIData(oldp+402,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[25]),23);
        tracep->fullIData(oldp+403,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[26]),23);
        tracep->fullIData(oldp+404,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[27]),23);
        tracep->fullIData(oldp+405,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[28]),23);
        tracep->fullIData(oldp+406,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[29]),23);
        tracep->fullIData(oldp+407,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[30]),23);
        tracep->fullIData(oldp+408,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[31]),23);
        tracep->fullIData(oldp+409,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__i),32);
        tracep->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen)))));
        __Vtemp64[0U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[0U]);
        __Vtemp64[1U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[1U]);
        __Vtemp64[2U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[2U]);
        __Vtemp64[3U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[3U]);
        tracep->fullWData(oldp+411,(__Vtemp64),128);
        tracep->fullCData(oldp+415,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                      >> 4U)))),6);
        tracep->fullQData(oldp+416,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__u_pc_reg__DOT___pc_current)),64);
        tracep->fullIData(oldp+418,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                      ? 0x13U : ((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
                                                  ? 
                                                 ((((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                           << 3U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                          << 3U))))) 
                                                   | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                      (3U 
                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                          << 3U)))) 
                                                  & (IData)(
                                                            (- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))))
                                                  : 0x13U))),32);
        tracep->fullQData(oldp+419,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q)),64);
        tracep->fullIData(oldp+421,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)),32);
        tracep->fullCData(oldp+422,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx))),5);
        tracep->fullCData(oldp+423,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx))),5);
        tracep->fullCData(oldp+424,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type) 
                                                 | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type)) 
                                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type)) 
                                               | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))
                                               ? (0x1fU 
                                                  & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                     >> 7U))
                                               : 0U))),5);
        tracep->fullQData(oldp+425,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___imm_data)),64);
        tracep->fullQData(oldp+427,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xfU)))))),64);
        tracep->fullBit(oldp+429,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                       >> 2U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_imm_valid))));
        tracep->fullSData(oldp+430,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))),12);
        tracep->fullQData(oldp+431,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid)
                                                 ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx) 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx)))
                                                  ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx) 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                                   : 
                                                  vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                                  [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx]))))),64);
        tracep->fullQData(oldp+433,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)
                                                 ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx) 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx)))
                                                  ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx) 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                                   : 
                                                  vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                                  [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx]))))),64);
        tracep->fullQData(oldp+435,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : ((0x300U 
                                                 == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                 ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q
                                                 : 
                                                ((0x341U 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q
                                                  : 
                                                 ((0x342U 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q
                                                   : 
                                                  ((0x343U 
                                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                    ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                     ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q
                                                     : 0ULL))))))),64);
        tracep->fullCData(oldp+437,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___alu_op))),6);
        tracep->fullCData(oldp+438,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___mem_op))),4);
        tracep->fullCData(oldp+439,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : ((((((
                                                   (((((((1U 
                                                          & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc)))) 
                                                         | (2U 
                                                            & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui))))) 
                                                        | (3U 
                                                           & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))))) 
                                                       | (4U 
                                                          & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr))))) 
                                                      | (5U 
                                                         & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load))))) 
                                                     | (6U 
                                                        & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store))))) 
                                                    | (7U 
                                                       & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch))))) 
                                                   | (8U 
                                                      & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm))))) 
                                                  | (9U 
                                                     & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32))))) 
                                                 | (0xaU 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op))))) 
                                                | (0xbU 
                                                   & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32))))) 
                                               | (0xcU 
                                                  & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr))))) 
                                              | (0xdU 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak))))))),5);
        tracep->fullCData(oldp+440,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : ((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)) 
                                               & (0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                      >> 0xfU))))
                                               ? 1U
                                               : ((
                                                   (2U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrw) 
                                                                  | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi))))) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set))))) 
                                                  | (4U 
                                                     & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)))))))),3);
        tracep->fullIData(oldp+441,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus)),19);
        tracep->fullQData(oldp+442,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q)),64);
        tracep->fullIData(oldp+444,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q)),32);
        tracep->fullCData(oldp+445,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q))),5);
        tracep->fullQData(oldp+446,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q)),64);
        tracep->fullQData(oldp+448,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q)),64);
        tracep->fullQData(oldp+450,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q)),64);
        tracep->fullQData(oldp+452,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex)),64);
        tracep->fullQData(oldp+454,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : ((((
                                                   (- (QData)((IData)(
                                                                      (2U 
                                                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                                  | ((- (QData)((IData)(
                                                                        (3U 
                                                                         == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                     & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                                        | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2))) 
                                                 | ((- (QData)((IData)(
                                                                       (4U 
                                                                        == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                    & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                                       & (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2)))) 
                                                | ((- (QData)((IData)(
                                                                      (1U 
                                                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q)))),64);
        tracep->fullBit(oldp+456,((1U & ((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                             >> 3U)) 
                                         & (~ ((0U 
                                                == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                               | (1U 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))))));
        tracep->fullSData(oldp+457,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q))),12);
        tracep->fullCData(oldp+458,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q))),4);
        tracep->fullCData(oldp+459,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q))),4);
        tracep->fullIData(oldp+460,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus)),19);
        tracep->fullBit(oldp+461,((1U & ((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                             >> 4U)) 
                                         & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                            >> 0x12U)))));
        tracep->fullQData(oldp+462,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)))),64);
        tracep->fullQData(oldp+464,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q)),64);
        tracep->fullIData(oldp+466,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)),32);
        tracep->fullQData(oldp+467,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__mem_data_mem)),64);
        tracep->fullSData(oldp+469,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q))),12);
        tracep->fullQData(oldp+470,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
        tracep->fullBit(oldp+472,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q))));
        tracep->fullCData(oldp+473,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q))),5);
        tracep->fullBit(oldp+474,(((0x7fffffU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                         >> 9U))) 
                                   == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
                                   [(0x1fU & (IData)(
                                                     (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                      >> 4U)))])));
        tracep->fullQData(oldp+475,(vlSelf->ysyx_22051145_top__DOT__pc_next),64);
        tracep->fullCData(oldp+477,(vlSelf->ysyx_22051145_top__DOT__stall_clint),6);
        tracep->fullCData(oldp+478,(vlSelf->ysyx_22051145_top__DOT__flush_clint),6);
        tracep->fullQData(oldp+479,(vlSelf->ysyx_22051145_top__DOT__u_pc_reg__DOT___pc_next_d),64);
        tracep->fullBit(oldp+481,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                            >> 1U)))));
        tracep->fullIData(oldp+482,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                      ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus)),19);
        tracep->fullBit(oldp+483,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                            >> 2U)))));
        tracep->fullBit(oldp+484,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                            >> 3U)))));
        tracep->fullBit(oldp+485,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                            >> 4U)))));
        tracep->fullBit(oldp+486,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint))));
        tracep->fullBit(oldp+487,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                       >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint))));
        tracep->fullQData(oldp+488,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mtvec_writedata_clint)),64);
        tracep->fullQData(oldp+490,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : 0xbULL)),64);
        tracep->fullQData(oldp+492,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                      ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mstatus_writedata_clint)),64);
        tracep->fullIData(oldp+494,((IData)(vlSelf->ysyx_22051145_top__DOT__pc_next)),32);
        tracep->fullCData(oldp+495,((0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__pc_next))),4);
        tracep->fullCData(oldp+496,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+497,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+498,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+499,(vlSelf->clk));
        tracep->fullBit(oldp+500,(vlSelf->rst));
        tracep->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullBit(oldp+502,((1U & ((~ (IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint)) 
                                         & (~ (IData)(vlSelf->rst))))));
        tracep->fullCData(oldp+503,(0U),4);
        tracep->fullQData(oldp+504,(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_writedata_clint),64);
        tracep->fullQData(oldp+506,(0xbULL),64);
        tracep->fullQData(oldp+508,(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_writedata_clint),64);
        tracep->fullBit(oldp+510,(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint));
        tracep->fullBit(oldp+511,(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint));
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
