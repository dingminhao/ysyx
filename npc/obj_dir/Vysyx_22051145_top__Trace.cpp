// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051145_top__Syms.h"


void Vysyx_22051145_top___024root__traceChgSub0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22051145_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22051145_top___024root* const __restrict vlSelf = static_cast<Vysyx_22051145_top___024root*>(voidSelf);
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22051145_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22051145_top___024root__traceChgSub0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp67;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus),19);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current),64);
            tracep->chgIData(oldp+3,(((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
                                       ? ((((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                 << 3U)))
                                             ? 0U : 
                                            (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                     << 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                     << 3U))))) 
                                           | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                              (3U & 
                                               ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                >> 2U))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                     << 3U)))) 
                                          & (IData)(
                                                    (- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))))
                                       : 0x13U)),32);
            tracep->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))));
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q),64);
            tracep->chgIData(oldp+7,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q),32);
            tracep->chgIData(oldp+8,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q),19);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx),5);
            tracep->chgCData(oldp+10,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx),5);
            tracep->chgCData(oldp+11,((((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type) 
                                          | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type)) 
                                         | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type)) 
                                        | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))
                                        ? (0x1fU & 
                                           (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                            >> 7U))
                                        : 0U)),5);
            tracep->chgSData(oldp+12,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx),12);
            tracep->chgQData(oldp+13,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid)
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
            tracep->chgQData(oldp+15,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)
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
            tracep->chgQData(oldp+17,(((0x300U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                        ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q
                                        : ((0x341U 
                                            == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                            ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q
                                            : ((0x342U 
                                                == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q
                                                : (
                                                   (0x343U 
                                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                    ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))
                                                     ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q
                                                     : 0ULL)))))),64);
            tracep->chgQData(oldp+19,((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                          >> 0xfU))))),64);
            tracep->chgBit(oldp+21,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_imm_valid));
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___imm_data),64);
            tracep->chgCData(oldp+24,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___alu_op),6);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___mem_op),4);
            tracep->chgCData(oldp+26,(((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                         | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)) 
                                        & (0U == (0x1fU 
                                                  & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                     >> 0xfU))))
                                        ? 1U : (((2U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrw) 
                                                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi))))) 
                                                 | (3U 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set))))) 
                                                | (4U 
                                                   & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))))),3);
            tracep->chgCData(oldp+27,((((((((((((((1U 
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
                                            | (8U & 
                                               (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm))))) 
                                           | (9U & 
                                              (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32))))) 
                                          | (0xaU & 
                                             (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op))))) 
                                         | (0xbU & 
                                            (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32))))) 
                                        | (0xcU & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr))))) 
                                       | (0xdU & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak)))))),5);
            tracep->chgBit(oldp+28,(((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                     & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid) 
                                        | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)))));
            tracep->chgIData(oldp+29,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus),19);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q),64);
            tracep->chgIData(oldp+32,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q),32);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_idx_id_ex_q),5);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_idx_id_ex_q),5);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q),5);
            tracep->chgSData(oldp+36,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q),12);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q),64);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q));
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q),64);
            tracep->chgCData(oldp+48,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q),6);
            tracep->chgCData(oldp+49,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q),4);
            tracep->chgCData(oldp+50,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q),3);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q),5);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q),4);
            tracep->chgIData(oldp+53,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q),19);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex),64);
            tracep->chgQData(oldp+56,((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+58,((1U & (~ ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                              | (1U 
                                                 == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)))))));
            tracep->chgQData(oldp+59,((((- (QData)((IData)(
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
            tracep->chgBit(oldp+61,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___branch_pc_valid));
            tracep->chgIData(oldp+62,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus),19);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q),64);
            tracep->chgIData(oldp+65,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q),32);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___imm_data_ex_mem_q),64);
            tracep->chgCData(oldp+68,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q),5);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs1_data_ex_mem_q),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q),64);
            tracep->chgBit(oldp+77,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q));
            tracep->chgSData(oldp+78,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q),12);
            tracep->chgCData(oldp+79,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_op_ex_mem_q),4);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q),4);
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q),19);
            tracep->chgIData(oldp+82,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr)),32);
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22051145_top__DOT__mem_addr_valid_mem));
            tracep->chgCData(oldp+84,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask),8);
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22051145_top__DOT__mem_write_valid_mem));
            tracep->chgQData(oldp+86,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___ls8byte)
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
            tracep->chgBit(oldp+88,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isload) 
                                      | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___isstore)) 
                                     & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache)))));
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22051145_top__DOT__mem_data_mem),64);
            tracep->chgIData(oldp+91,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus),19);
            tracep->chgQData(oldp+92,((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q))),64);
            tracep->chgBit(oldp+94,((1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                           >> 0x12U))));
            tracep->chgQData(oldp+95,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                               >> 0x10U))))) 
                                        & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                                 >> 0x12U))))) 
                                          & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q))),64);
            tracep->chgBit(oldp+97,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_clint__DOT___trap_valid));
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
            tracep->chgBit(oldp+108,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
            tracep->chgBit(oldp+110,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
            tracep->chgBit(oldp+111,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
            tracep->chgBit(oldp+112,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
            tracep->chgQData(oldp+113,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___pc_mem_wb_q),64);
            tracep->chgIData(oldp+115,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___inst_data_mem_wb_q),32);
            tracep->chgSData(oldp+116,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q),12);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q));
            tracep->chgCData(oldp+120,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q),5);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___mem_data_mem_wb_q),64);
            tracep->chgQData(oldp+123,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx) 
                                         == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                         : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                        [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx])),64);
            tracep->chgQData(oldp+125,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx) 
                                         == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                         : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                        [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx])),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q),64);
            tracep->chgQData(oldp+137,(((QData)((IData)(
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
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache));
            tracep->chgIData(oldp+140,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_icache_o),32);
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o));
            tracep->chgCData(oldp+142,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_rmask_icache_o),8);
            tracep->chgQData(oldp+143,(((0xa0000000U 
                                         == (0xa0000000U 
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
                                             : ((3U 
                                                 == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mask))
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
                                                 : 
                                                ((0xfU 
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
            tracep->chgBit(oldp+145,(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache));
            tracep->chgIData(oldp+146,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_dcache_o),32);
            tracep->chgBit(oldp+147,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o));
            tracep->chgCData(oldp+148,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_rmask_dcache_o),8);
            tracep->chgIData(oldp+149,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_dcache_o),32);
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_valid_dcache_o));
            tracep->chgCData(oldp+151,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wmask_dcache_o),8);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wdata_dcache_o),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o),64);
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_ready));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o));
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out),64);
            tracep->chgBit(oldp+167,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out));
            tracep->chgBit(oldp+168,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra));
            tracep->chgBit(oldp+169,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32));
            tracep->chgCData(oldp+172,((0x3fU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),6);
            tracep->chgQData(oldp+173,(((((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl))) 
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
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
            tracep->chgBit(oldp+183,(((((0x14U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                        | (0x15U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                                       | (0x16U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                                      | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))));
            tracep->chgBit(oldp+184,((((0x14U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                       | (0x15U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))) 
                                      | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))));
            tracep->chgWData(oldp+185,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
            tracep->chgBit(oldp+189,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed));
            tracep->chgBit(oldp+190,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32));
            tracep->chgQData(oldp+191,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                             ? 
                                                            VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                                             : 
                                                            VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))))
                                         : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                             ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                             : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),64);
            tracep->chgQData(oldp+193,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                             ? 
                                                            VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                                             : 
                                                            VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))))
                                         : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                             ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                             : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),64);
            tracep->chgQData(oldp+195,(VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+197,(VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+199,(VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+201,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+203,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                         : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),64);
            tracep->chgQData(oldp+205,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)
                                         : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),64);
            tracep->chgIData(oldp+207,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1)),32);
            tracep->chgIData(oldp+208,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)),32);
            tracep->chgIData(oldp+209,(VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+210,(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+211,(VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+212,(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+213,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                         : VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),32);
            tracep->chgIData(oldp+214,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2))
                                         : VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_in2)))),32);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[31]),64);
            tracep->chgQData(oldp+279,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                         : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+281,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en));
            tracep->chgQData(oldp+282,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                         : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en));
            tracep->chgQData(oldp+285,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                         : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+287,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en));
            tracep->chgQData(oldp+288,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                         : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+290,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en));
            tracep->chgQData(oldp+291,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                         ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                         : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+293,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en));
            tracep->chgCData(oldp+294,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_state),4);
            tracep->chgCData(oldp+295,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg),4);
            tracep->chgCData(oldp+296,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_idx_reg),5);
            tracep->chgIData(oldp+297,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_tag_reg),23);
            tracep->chgBit(oldp+298,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_tag_wen));
            tracep->chgBit(oldp+299,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok));
            tracep->chgWData(oldp+300,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__cache_line_temp),128);
            tracep->chgBit(oldp+304,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen));
            tracep->chgWData(oldp+305,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata),128);
            tracep->chgIData(oldp+309,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[0]),23);
            tracep->chgIData(oldp+310,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[1]),23);
            tracep->chgIData(oldp+311,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[2]),23);
            tracep->chgIData(oldp+312,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[3]),23);
            tracep->chgIData(oldp+313,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[4]),23);
            tracep->chgIData(oldp+314,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[5]),23);
            tracep->chgIData(oldp+315,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[6]),23);
            tracep->chgIData(oldp+316,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[7]),23);
            tracep->chgIData(oldp+317,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[8]),23);
            tracep->chgIData(oldp+318,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[9]),23);
            tracep->chgIData(oldp+319,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[10]),23);
            tracep->chgIData(oldp+320,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[11]),23);
            tracep->chgIData(oldp+321,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[12]),23);
            tracep->chgIData(oldp+322,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[13]),23);
            tracep->chgIData(oldp+323,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[14]),23);
            tracep->chgIData(oldp+324,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[15]),23);
            tracep->chgIData(oldp+325,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[16]),23);
            tracep->chgIData(oldp+326,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[17]),23);
            tracep->chgIData(oldp+327,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[18]),23);
            tracep->chgIData(oldp+328,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[19]),23);
            tracep->chgIData(oldp+329,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[20]),23);
            tracep->chgIData(oldp+330,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[21]),23);
            tracep->chgIData(oldp+331,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[22]),23);
            tracep->chgIData(oldp+332,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[23]),23);
            tracep->chgIData(oldp+333,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[24]),23);
            tracep->chgIData(oldp+334,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[25]),23);
            tracep->chgIData(oldp+335,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[26]),23);
            tracep->chgIData(oldp+336,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[27]),23);
            tracep->chgIData(oldp+337,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[28]),23);
            tracep->chgIData(oldp+338,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[29]),23);
            tracep->chgIData(oldp+339,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[30]),23);
            tracep->chgIData(oldp+340,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[31]),23);
            tracep->chgIData(oldp+341,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__i),32);
            tracep->chgBit(oldp+342,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen)))));
            tracep->chgBit(oldp+343,((0xa0000000U == 
                                      (0xa0000000U 
                                       & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr)))));
            tracep->chgCData(oldp+344,((0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr))),4);
            tracep->chgCData(oldp+345,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+346,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                             >> 9U)))),23);
            tracep->chgBit(oldp+347,(((0x7fffffU & (IData)(
                                                           (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                            >> 9U))) 
                                      == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs
                                      [(0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                         >> 4U)))])));
            tracep->chgCData(oldp+348,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_state),4);
            tracep->chgCData(oldp+349,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg),4);
            tracep->chgCData(oldp+350,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_idx_reg),5);
            tracep->chgIData(oldp+351,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_tag_reg),23);
            tracep->chgBit(oldp+352,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_tag_wen));
            tracep->chgBit(oldp+353,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_rdata_ok));
            tracep->chgWData(oldp+354,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_temp),128);
            tracep->chgQData(oldp+358,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata),64);
            tracep->chgBit(oldp+360,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen));
            tracep->chgWData(oldp+361,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp),128);
            tracep->chgWData(oldp+365,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask),128);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit),64);
            tracep->chgCData(oldp+371,((7U & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr))),3);
            tracep->chgWData(oldp+372,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata),128);
            tracep->chgIData(oldp+376,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[0]),23);
            tracep->chgIData(oldp+377,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[1]),23);
            tracep->chgIData(oldp+378,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[2]),23);
            tracep->chgIData(oldp+379,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[3]),23);
            tracep->chgIData(oldp+380,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[4]),23);
            tracep->chgIData(oldp+381,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[5]),23);
            tracep->chgIData(oldp+382,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[6]),23);
            tracep->chgIData(oldp+383,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[7]),23);
            tracep->chgIData(oldp+384,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[8]),23);
            tracep->chgIData(oldp+385,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[9]),23);
            tracep->chgIData(oldp+386,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[10]),23);
            tracep->chgIData(oldp+387,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[11]),23);
            tracep->chgIData(oldp+388,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[12]),23);
            tracep->chgIData(oldp+389,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[13]),23);
            tracep->chgIData(oldp+390,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[14]),23);
            tracep->chgIData(oldp+391,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[15]),23);
            tracep->chgIData(oldp+392,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[16]),23);
            tracep->chgIData(oldp+393,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[17]),23);
            tracep->chgIData(oldp+394,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[18]),23);
            tracep->chgIData(oldp+395,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[19]),23);
            tracep->chgIData(oldp+396,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[20]),23);
            tracep->chgIData(oldp+397,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[21]),23);
            tracep->chgIData(oldp+398,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[22]),23);
            tracep->chgIData(oldp+399,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[23]),23);
            tracep->chgIData(oldp+400,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[24]),23);
            tracep->chgIData(oldp+401,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[25]),23);
            tracep->chgIData(oldp+402,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[26]),23);
            tracep->chgIData(oldp+403,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[27]),23);
            tracep->chgIData(oldp+404,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[28]),23);
            tracep->chgIData(oldp+405,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[29]),23);
            tracep->chgIData(oldp+406,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[30]),23);
            tracep->chgIData(oldp+407,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[31]),23);
            tracep->chgIData(oldp+408,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__i),32);
            tracep->chgBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen)))));
            __Vtemp67[0U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[0U]);
            __Vtemp67[1U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[1U]);
            __Vtemp67[2U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[2U]);
            __Vtemp67[3U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[3U]);
            tracep->chgWData(oldp+410,(__Vtemp67),128);
            tracep->chgCData(oldp+414,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___addr 
                                                         >> 4U)))),6);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+415,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current)),64);
            tracep->chgIData(oldp+417,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                         ? 0x13U : 
                                        ((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
                                          ? ((((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
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
            tracep->chgQData(oldp+418,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q)),64);
            tracep->chgIData(oldp+420,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)),32);
            tracep->chgCData(oldp+421,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_idx))),5);
            tracep->chgCData(oldp+422,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_idx))),5);
            tracep->chgCData(oldp+423,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (((
                                                   ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___R_type) 
                                                    | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type)) 
                                                   | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type)) 
                                                  | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                     >> 7U))
                                                  : 0U))),5);
            tracep->chgQData(oldp+424,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___imm_data)),64);
            tracep->chgQData(oldp+426,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xfU)))))),64);
            tracep->chgBit(oldp+428,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                          >> 2U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_imm_valid))));
            tracep->chgSData(oldp+429,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_idx))),12);
            tracep->chgQData(oldp+430,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
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
            tracep->chgQData(oldp+432,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
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
            tracep->chgQData(oldp+434,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : (
                                                   (0x300U 
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
            tracep->chgCData(oldp+436,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___alu_op))),6);
            tracep->chgCData(oldp+437,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___mem_op))),4);
            tracep->chgCData(oldp+438,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (((
                                                   ((((((((((1U 
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
            tracep->chgCData(oldp+439,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : ((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                                   | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)) 
                                                  & (0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                         >> 0xfU))))
                                                  ? 1U
                                                  : 
                                                 (((2U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrw) 
                                                                  | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_csrrwi))))) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set))))) 
                                                  | (4U 
                                                     & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)))))))),3);
            tracep->chgIData(oldp+440,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus)),19);
            tracep->chgQData(oldp+441,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q)),64);
            tracep->chgIData(oldp+443,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q)),32);
            tracep->chgCData(oldp+444,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q))),5);
            tracep->chgQData(oldp+445,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q)),64);
            tracep->chgQData(oldp+447,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q)),64);
            tracep->chgQData(oldp+449,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q)),64);
            tracep->chgQData(oldp+451,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex)),64);
            tracep->chgQData(oldp+453,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : (
                                                   ((((- (QData)((IData)(
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
            tracep->chgBit(oldp+455,((1U & ((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                                >> 3U)) 
                                            & (~ ((0U 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))))));
            tracep->chgSData(oldp+456,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q))),12);
            tracep->chgCData(oldp+457,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q))),4);
            tracep->chgCData(oldp+458,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q))),4);
            tracep->chgIData(oldp+459,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus)),19);
            tracep->chgBit(oldp+460,((1U & ((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                                >> 4U)) 
                                            & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                               >> 0x12U)))));
            tracep->chgQData(oldp+461,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)))),64);
            tracep->chgQData(oldp+463,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q)),64);
            tracep->chgIData(oldp+465,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)),32);
            tracep->chgQData(oldp+466,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__mem_data_mem)),64);
            tracep->chgSData(oldp+468,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q))),12);
            tracep->chgQData(oldp+469,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
            tracep->chgBit(oldp+471,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                          >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q))));
            tracep->chgCData(oldp+472,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q))),5);
            tracep->chgBit(oldp+473,(((0x7fffffU & (IData)(
                                                           (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                            >> 9U))) 
                                      == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
                                      [(0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                         >> 4U)))])));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+474,(vlSelf->ysyx_22051145_top__DOT__pc_next),64);
            tracep->chgCData(oldp+476,(vlSelf->ysyx_22051145_top__DOT__stall_clint),6);
            tracep->chgCData(oldp+477,(vlSelf->ysyx_22051145_top__DOT__flush_clint),6);
            tracep->chgQData(oldp+478,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d),64);
            tracep->chgBit(oldp+480,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                               >> 1U)))));
            tracep->chgIData(oldp+481,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                         ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus)),19);
            tracep->chgBit(oldp+482,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                               >> 2U)))));
            tracep->chgBit(oldp+483,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                               >> 3U)))));
            tracep->chgBit(oldp+484,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                               >> 4U)))));
            tracep->chgBit(oldp+485,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                          >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint))));
            tracep->chgBit(oldp+486,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                          >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint))));
            tracep->chgQData(oldp+487,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mtvec_writedata_clint)),64);
            tracep->chgQData(oldp+489,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : 0xbULL)),64);
            tracep->chgQData(oldp+491,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mstatus_writedata_clint)),64);
            tracep->chgIData(oldp+493,((IData)(vlSelf->ysyx_22051145_top__DOT__pc_next)),32);
            tracep->chgCData(oldp+494,((0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__pc_next))),4);
            tracep->chgCData(oldp+495,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+496,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+497,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                         >> 4U)))),6);
        }
        tracep->chgBit(oldp+498,(vlSelf->clk));
        tracep->chgBit(oldp+499,(vlSelf->rst));
        tracep->chgBit(oldp+500,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgBit(oldp+501,((1U & ((~ (IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint)) 
                                        & (~ (IData)(vlSelf->rst))))));
    }
}

void Vysyx_22051145_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22051145_top___024root* const __restrict vlSelf = static_cast<Vysyx_22051145_top___024root*>(voidSelf);
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
