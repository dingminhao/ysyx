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
        tracep->declBit(c+215,"clk", false,-1);
        tracep->declBit(c+216,"rst", false,-1);
        tracep->declBit(c+215,"ysyx_top clk", false,-1);
        tracep->declBit(c+216,"ysyx_top rst", false,-1);
        tracep->declBit(c+1,"ysyx_top jump_flag", false,-1);
        tracep->declQuad(c+2,"ysyx_top jump_addr", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_top in_addr", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_top rd_data", false,-1, 63,0);
        tracep->declBit(c+219,"ysyx_top access_rs2", false,-1);
        tracep->declBit(c+8,"ysyx_top access_rd", false,-1);
        tracep->declBus(c+9,"ysyx_top rd_waddr", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_top inst", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_top raddr1", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_top raddr2", false,-1, 4,0);
        tracep->declBus(c+220,"ysyx_top inst_type", false,-1, 7,0);
        tracep->declQuad(c+13,"ysyx_top rs1", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_top rs2", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_top dec_imm", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_top dec_info_bus", false,-1, 18,0);
        tracep->declBit(c+216,"ysyx_top IFU rst", false,-1);
        tracep->declBit(c+215,"ysyx_top IFU clk", false,-1);
        tracep->declBit(c+1,"ysyx_top IFU jump_flag", false,-1);
        tracep->declQuad(c+2,"ysyx_top IFU jump_addr", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_top IFU in_addr", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_top IFU pc", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_top IFU next_pc", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_top Fetch inst_addr", false,-1, 63,0);
        tracep->declBus(c+10,"ysyx_top Fetch inst_data", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_top Idstage inst", false,-1, 31,0);
        tracep->declBit(c+8,"ysyx_top Idstage access_rd", false,-1);
        tracep->declBus(c+9,"ysyx_top Idstage rd_waddr_o", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_top Idstage rs1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_top Idstage rs2_raddr_o", false,-1, 4,0);
        tracep->declQuad(c+17,"ysyx_top Idstage dec_imm_o", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_top Idstage dec_info_bus_o", false,-1, 18,0);
        tracep->declBus(c+20,"ysyx_top Idstage opcode", false,-1, 6,0);
        tracep->declBus(c+21,"ysyx_top Idstage funct3", false,-1, 2,0);
        tracep->declBus(c+22,"ysyx_top Idstage funct7", false,-1, 6,0);
        tracep->declBus(c+23,"ysyx_top Idstage rd", false,-1, 4,0);
        tracep->declBus(c+24,"ysyx_top Idstage rs1", false,-1, 4,0);
        tracep->declBus(c+25,"ysyx_top Idstage rs2", false,-1, 4,0);
        tracep->declBus(c+26,"ysyx_top Idstage type_i_imm_11_0", false,-1, 11,0);
        tracep->declBus(c+22,"ysyx_top Idstage type_s_imm_11_5", false,-1, 6,0);
        tracep->declBus(c+23,"ysyx_top Idstage type_s_imm_4_0", false,-1, 4,0);
        tracep->declBus(c+22,"ysyx_top Idstage type_b_imm_12_10_5", false,-1, 6,0);
        tracep->declBus(c+23,"ysyx_top Idstage type_b_imm_4_1_11", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_top Idstage type_u_imm_31_12", false,-1, 19,0);
        tracep->declBus(c+27,"ysyx_top Idstage type_j_imm_31_12", false,-1, 19,0);
        tracep->declBit(c+28,"ysyx_top Idstage opcode_0110111", false,-1);
        tracep->declBit(c+29,"ysyx_top Idstage opcode_0010111", false,-1);
        tracep->declBit(c+30,"ysyx_top Idstage opcode_1101111", false,-1);
        tracep->declBit(c+31,"ysyx_top Idstage opcode_1100111", false,-1);
        tracep->declBit(c+32,"ysyx_top Idstage opcode_1100011", false,-1);
        tracep->declBit(c+33,"ysyx_top Idstage opcode_0000011", false,-1);
        tracep->declBit(c+34,"ysyx_top Idstage opcode_0100011", false,-1);
        tracep->declBit(c+35,"ysyx_top Idstage opcode_0010011", false,-1);
        tracep->declBit(c+36,"ysyx_top Idstage opcode_0110011", false,-1);
        tracep->declBit(c+37,"ysyx_top Idstage opcode_0001111", false,-1);
        tracep->declBit(c+38,"ysyx_top Idstage opcode_1110011", false,-1);
        tracep->declBit(c+39,"ysyx_top Idstage funct3_000", false,-1);
        tracep->declBit(c+40,"ysyx_top Idstage funct3_001", false,-1);
        tracep->declBit(c+41,"ysyx_top Idstage funct3_010", false,-1);
        tracep->declBit(c+42,"ysyx_top Idstage funct3_011", false,-1);
        tracep->declBit(c+43,"ysyx_top Idstage funct3_100", false,-1);
        tracep->declBit(c+44,"ysyx_top Idstage funct3_101", false,-1);
        tracep->declBit(c+45,"ysyx_top Idstage funct3_110", false,-1);
        tracep->declBit(c+46,"ysyx_top Idstage funct3_111", false,-1);
        tracep->declBit(c+47,"ysyx_top Idstage funct7_0000000", false,-1);
        tracep->declBit(c+48,"ysyx_top Idstage funct7_0100000", false,-1);
        tracep->declBit(c+49,"ysyx_top Idstage funct7_0000001", false,-1);
        tracep->declBit(c+28,"ysyx_top Idstage inst_lui", false,-1);
        tracep->declBit(c+29,"ysyx_top Idstage inst_auipc", false,-1);
        tracep->declBit(c+30,"ysyx_top Idstage inst_jal", false,-1);
        tracep->declBit(c+50,"ysyx_top Idstage inst_jalr", false,-1);
        tracep->declBit(c+51,"ysyx_top Idstage inst_beq", false,-1);
        tracep->declBit(c+52,"ysyx_top Idstage inst_bne", false,-1);
        tracep->declBit(c+53,"ysyx_top Idstage inst_blt", false,-1);
        tracep->declBit(c+54,"ysyx_top Idstage inst_bge", false,-1);
        tracep->declBit(c+55,"ysyx_top Idstage inst_bltu", false,-1);
        tracep->declBit(c+56,"ysyx_top Idstage inst_bgeu", false,-1);
        tracep->declBit(c+57,"ysyx_top Idstage inst_lb", false,-1);
        tracep->declBit(c+58,"ysyx_top Idstage inst_lh", false,-1);
        tracep->declBit(c+59,"ysyx_top Idstage inst_lw", false,-1);
        tracep->declBit(c+60,"ysyx_top Idstage inst_lbu", false,-1);
        tracep->declBit(c+61,"ysyx_top Idstage inst_lhu", false,-1);
        tracep->declBit(c+62,"ysyx_top Idstage inst_sb", false,-1);
        tracep->declBit(c+63,"ysyx_top Idstage inst_sh", false,-1);
        tracep->declBit(c+64,"ysyx_top Idstage inst_sw", false,-1);
        tracep->declBit(c+65,"ysyx_top Idstage inst_addi", false,-1);
        tracep->declBit(c+66,"ysyx_top Idstage inst_slti", false,-1);
        tracep->declBit(c+67,"ysyx_top Idstage inst_sltiu", false,-1);
        tracep->declBit(c+68,"ysyx_top Idstage inst_xori", false,-1);
        tracep->declBit(c+69,"ysyx_top Idstage inst_ori", false,-1);
        tracep->declBit(c+70,"ysyx_top Idstage inst_andi", false,-1);
        tracep->declBit(c+71,"ysyx_top Idstage inst_slli", false,-1);
        tracep->declBit(c+72,"ysyx_top Idstage inst_srli", false,-1);
        tracep->declBit(c+73,"ysyx_top Idstage inst_srai", false,-1);
        tracep->declBit(c+74,"ysyx_top Idstage inst_add", false,-1);
        tracep->declBit(c+75,"ysyx_top Idstage inst_sub", false,-1);
        tracep->declBit(c+76,"ysyx_top Idstage inst_sll", false,-1);
        tracep->declBit(c+77,"ysyx_top Idstage inst_slt", false,-1);
        tracep->declBit(c+78,"ysyx_top Idstage inst_sltu", false,-1);
        tracep->declBit(c+79,"ysyx_top Idstage inst_xor", false,-1);
        tracep->declBit(c+80,"ysyx_top Idstage inst_srl", false,-1);
        tracep->declBit(c+81,"ysyx_top Idstage inst_sra", false,-1);
        tracep->declBit(c+82,"ysyx_top Idstage inst_or", false,-1);
        tracep->declBit(c+83,"ysyx_top Idstage inst_and", false,-1);
        tracep->declBit(c+84,"ysyx_top Idstage inst_fence", false,-1);
        tracep->declBit(c+85,"ysyx_top Idstage inst_ecall", false,-1);
        tracep->declBit(c+86,"ysyx_top Idstage inst_ebreak", false,-1);
        tracep->declBit(c+87,"ysyx_top Idstage inst_fence_i", false,-1);
        tracep->declBit(c+88,"ysyx_top Idstage inst_csrrw", false,-1);
        tracep->declBit(c+89,"ysyx_top Idstage inst_csrrs", false,-1);
        tracep->declBit(c+90,"ysyx_top Idstage inst_csrrc", false,-1);
        tracep->declBit(c+91,"ysyx_top Idstage inst_csrrwi", false,-1);
        tracep->declBit(c+92,"ysyx_top Idstage inst_csrrsi", false,-1);
        tracep->declBit(c+93,"ysyx_top Idstage inst_csrrci", false,-1);
        tracep->declBit(c+94,"ysyx_top Idstage inst_mul", false,-1);
        tracep->declBit(c+95,"ysyx_top Idstage inst_mulh", false,-1);
        tracep->declBit(c+96,"ysyx_top Idstage inst_mulhsu", false,-1);
        tracep->declBit(c+97,"ysyx_top Idstage inst_mulhu", false,-1);
        tracep->declBit(c+98,"ysyx_top Idstage inst_div", false,-1);
        tracep->declBit(c+99,"ysyx_top Idstage inst_divu", false,-1);
        tracep->declBit(c+100,"ysyx_top Idstage inst_rem", false,-1);
        tracep->declBit(c+101,"ysyx_top Idstage inst_remu", false,-1);
        tracep->declBit(c+102,"ysyx_top Idstage inst_nop", false,-1);
        tracep->declBit(c+103,"ysyx_top Idstage inst_mret", false,-1);
        tracep->declBus(c+104,"ysyx_top Idstage dec_alu_info_bus", false,-1, 16,0);
        tracep->declBus(c+105,"ysyx_top Idstage dec_bjp_info_bus", false,-1, 10,0);
        tracep->declBus(c+106,"ysyx_top Idstage dec_muldiv_info_bus", false,-1, 10,0);
        tracep->declBus(c+107,"ysyx_top Idstage dec_csr_info_bus", false,-1, 18,0);
        tracep->declBus(c+108,"ysyx_top Idstage dec_mem_info_bus", false,-1, 10,0);
        tracep->declBus(c+109,"ysyx_top Idstage dec_sys_info_bus", false,-1, 7,0);
        tracep->declBit(c+33,"ysyx_top Idstage inst_type_load", false,-1);
        tracep->declBit(c+34,"ysyx_top Idstage inst_type_store", false,-1);
        tracep->declBit(c+32,"ysyx_top Idstage inst_type_branch", false,-1);
        tracep->declBit(c+110,"ysyx_top Idstage inst_type_muldiv", false,-1);
        tracep->declBit(c+111,"ysyx_top Idstage inst_type_div", false,-1);
        tracep->declBit(c+112,"ysyx_top Idstage op_alu", false,-1);
        tracep->declBit(c+113,"ysyx_top Idstage op_bjp", false,-1);
        tracep->declBit(c+110,"ysyx_top Idstage op_muldiv", false,-1);
        tracep->declBit(c+114,"ysyx_top Idstage op_csr", false,-1);
        tracep->declBit(c+115,"ysyx_top Idstage op_sys", false,-1);
        tracep->declBit(c+116,"ysyx_top Idstage op_mem", false,-1);
        tracep->declQuad(c+117,"ysyx_top Idstage inst_u_type_imm", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_top Idstage inst_j_type_imm", false,-1, 63,0);
        tracep->declQuad(c+121,"ysyx_top Idstage inst_b_type_imm", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_top Idstage inst_s_type_imm", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_top Idstage inst_i_type_imm", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_top Idstage inst_csr_type_imm", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_top Idstage inst_shift_type_imm", false,-1, 63,0);
        tracep->declBit(c+131,"ysyx_top Idstage inst_sel_u_imm", false,-1);
        tracep->declBit(c+30,"ysyx_top Idstage inst_sel_j_imm", false,-1);
        tracep->declBit(c+32,"ysyx_top Idstage inst_sel_b_imm", false,-1);
        tracep->declBit(c+34,"ysyx_top Idstage inst_sel_s_imm", false,-1);
        tracep->declBit(c+132,"ysyx_top Idstage inst_sel_i_imm", false,-1);
        tracep->declBit(c+133,"ysyx_top Idstage inst_sel_csr_imm", false,-1);
        tracep->declBit(c+134,"ysyx_top Idstage inst_sel_shift_imm", false,-1);
        tracep->declBit(c+135,"ysyx_top Idstage access_rs1", false,-1);
        tracep->declBit(c+136,"ysyx_top Idstage access_rs2", false,-1);
        tracep->declQuad(c+4,"ysyx_top Exestage pc", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_top Exestage rs1", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_top Exestage rs2", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_top Exestage dec_imm", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_top Exestage dec_info_bus", false,-1, 18,0);
        tracep->declBit(c+219,"ysyx_top Exestage access_rs2", false,-1);
        tracep->declBit(c+1,"ysyx_top Exestage jump_flag", false,-1);
        tracep->declQuad(c+2,"ysyx_top Exestage jump_addr", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_top Exestage wbck_dest_dat", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_top Exestage alu_op1", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_top Exestage alu_op2", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_top Exestage alu_wbck_dat", false,-1, 63,0);
        tracep->declQuad(c+141,"ysyx_top Exestage bjp_wbck_dat", false,-1, 63,0);
        tracep->declBit(c+143,"ysyx_top Exestage alu_flag", false,-1);
        tracep->declBit(c+144,"ysyx_top Exestage bjp_flag", false,-1);
        tracep->declBit(c+145,"ysyx_top Exestage e_break", false,-1);
        tracep->declQuad(c+4,"ysyx_top Exestage ex_alu pc", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_top Exestage ex_alu op1", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_top Exestage ex_alu op2", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_top Exestage ex_alu dec_info_bus", false,-1, 18,0);
        tracep->declQuad(c+139,"ysyx_top Exestage ex_alu result", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_top Exestage ex_bjp pc", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_top Exestage ex_bjp dec_info_bus", false,-1, 18,0);
        tracep->declQuad(c+13,"ysyx_top Exestage ex_bjp rs1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_top Exestage ex_bjp dec_imm", false,-1, 63,0);
        tracep->declQuad(c+141,"ysyx_top Exestage ex_bjp rd", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_top Exestage ex_bjp jump_flag", false,-1);
        tracep->declQuad(c+2,"ysyx_top Exestage ex_bjp jump_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_top Exestage ex_bjp jal_or_jalr", false,-1);
        tracep->declBit(c+146,"ysyx_top Exestage ex_bjp jal", false,-1);
        tracep->declBit(c+147,"ysyx_top Exestage ex_bjp jalr", false,-1);
        tracep->declQuad(c+148,"ysyx_top Exestage ex_bjp op1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_top Exestage ex_bjp op2", false,-1, 63,0);
        tracep->declBit(c+215,"ysyx_top Regfile clk", false,-1);
        tracep->declBit(c+216,"ysyx_top Regfile rst", false,-1);
        tracep->declQuad(c+6,"ysyx_top Regfile w_data", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_top Regfile waddr", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_top Regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_top Regfile raddr2", false,-1, 4,0);
        tracep->declBit(c+8,"ysyx_top Regfile en_w", false,-1);
        tracep->declQuad(c+13,"ysyx_top Regfile rdata_1", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_top Regfile rdata_2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+150+i*2,"ysyx_top Regfile gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+214,"ysyx_top Regfile i", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,((1U & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                       >> 3U))));
        tracep->fullQData(oldp+2,(((((- (QData)((IData)(
                                                        (8U 
                                                         == 
                                                         (0x408U 
                                                          & vlSelf->ysyx_top__DOT__dec_info_bus))))) 
                                     & vlSelf->ysyx_top__DOT__IFU__DOT__pc) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                                              >> 0xaU))))) 
                                       & vlSelf->ysyx_top__DOT__rs1)) 
                                   + vlSelf->ysyx_top__DOT__dec_imm)),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_top__DOT__IFU__DOT__pc),64);
        tracep->fullQData(oldp+6,((((- (QData)((IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->ysyx_top__DOT__dec_info_bus))))) 
                                    & vlSelf->ysyx_top__DOT__Exestage__DOT__alu_wbck_dat) 
                                   | ((- (QData)((IData)(
                                                         (2U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->ysyx_top__DOT__dec_info_bus))))) 
                                      & ((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                                                >> 3U))))) 
                                         & (4ULL + vlSelf->ysyx_top__DOT__IFU__DOT__pc))))),64);
        tracep->fullBit(oldp+8,(vlSelf->ysyx_top__DOT__access_rd));
        tracep->fullCData(oldp+9,(((IData)(vlSelf->ysyx_top__DOT__access_rd)
                                    ? (0x1fU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                        >> 7U)))
                                    : 0U)),5);
        tracep->fullIData(oldp+10,((IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)),32);
        tracep->fullCData(oldp+11,((((((((((((((0x37U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                               & (0x17U 
                                                  != 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                              & (0x6fU 
                                                 != 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                             & (0x73U 
                                                != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                            & (0x100073U 
                                               != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                           & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi))) 
                                          & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi))) 
                                         & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))) 
                                        & (0x13U != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                       & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence))) 
                                      & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i))) 
                                     & (0x30200073U 
                                        != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))
                                     ? (0x1fU & (IData)(
                                                        (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                         >> 0xfU)))
                                     : 0U)),5);
        tracep->fullCData(oldp+12,(((((0x33U == (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                      | (0x23U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                     | (0x63U == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))
                                     ? (0x1fU & (IData)(
                                                        (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                         >> 0x14U)))
                                     : 0U)),5);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_top__DOT__rs1),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr
                                   [((((0x33U == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                       | (0x23U == 
                                          (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                      | (0x63U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))
                                      ? (0x1fU & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0x14U)))
                                      : 0U)]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_top__DOT__dec_imm),64);
        tracep->fullIData(oldp+19,(vlSelf->ysyx_top__DOT__dec_info_bus),19);
        tracep->fullCData(oldp+20,((0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))),7);
        tracep->fullCData(oldp+21,((7U & (IData)((vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                  >> 0xcU)))),3);
        tracep->fullCData(oldp+22,((0x7fU & (IData)(
                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                     >> 0x19U)))),7);
        tracep->fullCData(oldp+23,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                     >> 7U)))),5);
        tracep->fullCData(oldp+24,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+25,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                     >> 0x14U)))),5);
        tracep->fullSData(oldp+26,((0xfffU & (IData)(
                                                     (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+27,((0xfffffU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                        >> 0xcU)))),20);
        tracep->fullBit(oldp+28,((0x37U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+29,((0x17U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+30,((0x6fU == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+31,((0x67U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+32,((0x63U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+33,((3U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+34,((0x23U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+35,((0x13U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+36,((0x33U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+37,((0xfU == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+38,((0x73U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+39,((0U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+40,((1U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+41,((2U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+42,((3U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+43,((4U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+44,((5U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+45,((6U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+46,((7U == (7U & (IData)(
                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                       >> 0xcU))))));
        tracep->fullBit(oldp+47,((0U == (0x7fU & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0x19U))))));
        tracep->fullBit(oldp+48,((0x20U == (0x7fU & (IData)(
                                                            (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                             >> 0x19U))))));
        tracep->fullBit(oldp+49,((1U == (0x7fU & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0x19U))))));
        tracep->fullBit(oldp+50,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr));
        tracep->fullBit(oldp+51,((IData)((0x63ULL == 
                                          (0x707fULL 
                                           & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+52,((IData)((0x1063ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+53,((IData)((0x4063ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+54,((IData)((0x5063ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+55,((IData)((0x6063ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+56,((IData)((0x7063ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+57,((IData)((3ULL == (0x707fULL 
                                                   & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+58,((IData)((0x1003ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+59,((IData)((0x2003ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+60,((IData)((0x4003ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+61,((IData)((0x5003ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+62,((IData)((0x23ULL == 
                                          (0x707fULL 
                                           & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+63,((IData)((0x1023ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+64,((IData)((0x2023ULL 
                                          == (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+65,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_addi));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slti));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_sltiu));
        tracep->fullBit(oldp+68,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_xori));
        tracep->fullBit(oldp+69,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_ori));
        tracep->fullBit(oldp+70,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_andi));
        tracep->fullBit(oldp+71,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slli));
        tracep->fullBit(oldp+72,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srli));
        tracep->fullBit(oldp+73,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srai));
        tracep->fullBit(oldp+74,((IData)((0x33ULL == 
                                          (0xfe00707fULL 
                                           & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+75,((IData)((0x40000033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+76,((IData)((0x1033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+77,((IData)((0x2033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+78,((IData)((0x3033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+79,((IData)((0x4033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+80,((IData)((0x5033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+81,((IData)((0x40005033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+82,((IData)((0x6033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+83,((IData)((0x7033ULL 
                                          == (0xfe00707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+84,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence));
        tracep->fullBit(oldp+85,((0x73U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
        tracep->fullBit(oldp+86,((0x100073U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
        tracep->fullBit(oldp+87,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i));
        tracep->fullBit(oldp+88,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrw));
        tracep->fullBit(oldp+89,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrs));
        tracep->fullBit(oldp+90,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrc));
        tracep->fullBit(oldp+91,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi));
        tracep->fullBit(oldp+92,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi));
        tracep->fullBit(oldp+93,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci));
        tracep->fullBit(oldp+94,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mul));
        tracep->fullBit(oldp+95,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulh));
        tracep->fullBit(oldp+96,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhsu));
        tracep->fullBit(oldp+97,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhu));
        tracep->fullBit(oldp+98,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_div));
        tracep->fullBit(oldp+99,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_divu));
        tracep->fullBit(oldp+100,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_rem));
        tracep->fullBit(oldp+101,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_remu));
        tracep->fullBit(oldp+102,((0x13U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
        tracep->fullBit(oldp+103,((0x30200073U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
        tracep->fullIData(oldp+104,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus),17);
        tracep->fullSData(oldp+105,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus),11);
        tracep->fullSData(oldp+106,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus),11);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus),19);
        tracep->fullSData(oldp+108,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus),11);
        tracep->fullCData(oldp+109,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus),8);
        tracep->fullBit(oldp+110,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_type_muldiv));
        tracep->fullBit(oldp+111,(((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_div) 
                                     | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_divu)) 
                                    | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_rem)) 
                                   | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_remu))));
        tracep->fullBit(oldp+112,(((((0x37U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                     | (0x17U == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                    | (0x13U == (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                   | ((0x33U == (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                      & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_type_muldiv))))));
        tracep->fullBit(oldp+113,((((0x6fU == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                    | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr)) 
                                   | (0x63U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
        tracep->fullBit(oldp+114,(((((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrs)) 
                                     | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                                    | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrc)) 
                                   | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))));
        tracep->fullBit(oldp+115,(((((((0x100073U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)) 
                                       | (0x73U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                      | (0x13U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                     | (0x30200073U 
                                        == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                    | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence)) 
                                   | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i))));
        tracep->fullBit(oldp+116,(((3U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                   | (0x23U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(
                                                                           (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                            >> 0xcU)) 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+119,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                     >> 0x1fU)))))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 0xcU)) 
                                                                       << 0xcU)) 
                                                                   | ((0x800U 
                                                                       & ((IData)(
                                                                                (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 0x14U)) 
                                                                          << 0xbU)) 
                                                                      | (0x7feU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 0x15U)) 
                                                                            << 1U)))))))),64);
        tracep->fullQData(oldp+121,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                     >> 0x1fU)))))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                               >> 7U)) 
                                                                      << 0xbU)) 
                                                                  | ((0x7e0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 0x19U)) 
                                                                         << 5U)) 
                                                                     | (0x1eU 
                                                                        & ((IData)(
                                                                                (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 8U)) 
                                                                           << 1U)))))))),64);
        tracep->fullQData(oldp+123,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                     >> 0x1fU)))))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                               >> 0x19U)) 
                                                                      << 5U)) 
                                                                  | (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 7U)))))))),64);
        tracep->fullQData(oldp+125,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                     >> 0x1fU)))))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (0xfffU 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                             >> 0x14U))))))),64);
        tracep->fullQData(oldp+127,((QData)((IData)(
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                >> 0xfU)))))),64);
        tracep->fullQData(oldp+129,((QData)((IData)(
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                >> 0x14U)))))),64);
        tracep->fullBit(oldp+131,(((0x37U == (0x7fU 
                                              & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                   | (0x17U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
        tracep->fullBit(oldp+132,(((((((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_addi) 
                                         | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slti)) 
                                        | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_sltiu)) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_xori)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_ori)) 
                                     | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_andi)) 
                                    | (3U == (0x7fU 
                                              & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                   | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr))));
        tracep->fullBit(oldp+133,((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi) 
                                    | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                                   | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))));
        tracep->fullBit(oldp+134,((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slli) 
                                    | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srli)) 
                                   | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srai))));
        tracep->fullBit(oldp+135,(((((((((((((0x37U 
                                              != (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                            & (0x6fU 
                                               != (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                           & (0x73U 
                                              != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                          & (0x100073U 
                                             != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                         & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi))) 
                                        & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi))) 
                                       & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))) 
                                      & (0x13U != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                     & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence))) 
                                    & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i))) 
                                   & (0x30200073U != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
        tracep->fullBit(oldp+136,((((0x33U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                    | (0x23U == (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                   | (0x63U == (0x7fU 
                                                & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
        tracep->fullQData(oldp+137,(vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_top__DOT__Exestage__DOT__alu_wbck_dat),64);
        tracep->fullQData(oldp+141,(((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                                            >> 3U))))) 
                                     & (4ULL + vlSelf->ysyx_top__DOT__IFU__DOT__pc))),64);
        tracep->fullBit(oldp+143,((1U == (7U & vlSelf->ysyx_top__DOT__dec_info_bus))));
        tracep->fullBit(oldp+144,((2U == (7U & vlSelf->ysyx_top__DOT__dec_info_bus))));
        tracep->fullBit(oldp+145,((IData)((0x16U == 
                                           (0x17U & vlSelf->ysyx_top__DOT__dec_info_bus)))));
        tracep->fullBit(oldp+146,((IData)((8U == (0x408U 
                                                  & vlSelf->ysyx_top__DOT__dec_info_bus)))));
        tracep->fullBit(oldp+147,((1U & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                         >> 0xaU))));
        tracep->fullQData(oldp+148,((((- (QData)((IData)(
                                                         (8U 
                                                          == 
                                                          (0x408U 
                                                           & vlSelf->ysyx_top__DOT__dec_info_bus))))) 
                                      & vlSelf->ysyx_top__DOT__IFU__DOT__pc) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                                               >> 0xaU))))) 
                                        & vlSelf->ysyx_top__DOT__rs1))),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0]),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[1]),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[2]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[3]),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[4]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[5]),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[6]),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[7]),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[8]),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[9]),64);
        tracep->fullQData(oldp+170,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[10]),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[11]),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[12]),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[13]),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[14]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[15]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[16]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[17]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[18]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[19]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[20]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[21]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[22]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[23]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[24]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[25]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[26]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[27]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[28]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[29]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[30]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[31]),64);
        tracep->fullIData(oldp+214,(vlSelf->ysyx_top__DOT__Regfile__DOT__i),32);
        tracep->fullBit(oldp+215,(vlSelf->clk));
        tracep->fullBit(oldp+216,(vlSelf->rst));
        tracep->fullQData(oldp+217,(((IData)(vlSelf->rst)
                                      ? 0x80000004ULL
                                      : ((8U & vlSelf->ysyx_top__DOT__dec_info_bus)
                                          ? ((((- (QData)((IData)(
                                                                  (8U 
                                                                   == 
                                                                   (0x408U 
                                                                    & vlSelf->ysyx_top__DOT__dec_info_bus))))) 
                                               & vlSelf->ysyx_top__DOT__IFU__DOT__pc) 
                                              | ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                                                        >> 0xaU))))) 
                                                 & vlSelf->ysyx_top__DOT__rs1)) 
                                             + vlSelf->ysyx_top__DOT__dec_imm)
                                          : (4ULL + vlSelf->ysyx_top__DOT__IFU__DOT__pc)))),64);
        tracep->fullBit(oldp+219,(vlSelf->ysyx_top__DOT__access_rs2));
        tracep->fullCData(oldp+220,(vlSelf->ysyx_top__DOT__inst_type),8);
    }
}
