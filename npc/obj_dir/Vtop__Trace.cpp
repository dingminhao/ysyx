// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q),64);
            tracep->chgIData(oldp+4,(vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q),32);
            tracep->chgIData(oldp+5,(vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q),19);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__u_dcode__DOT___rs1_idx),5);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__u_dcode__DOT___rs2_idx),5);
            tracep->chgCData(oldp+8,((((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                         | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                        | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                       | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                       ? (0x1fU & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 7U))
                                       : 0U)),5);
            tracep->chgQData(oldp+9,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid)
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
            tracep->chgQData(oldp+11,(((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)
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
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__u_dcode__DOT___imm_data),64);
            tracep->chgQData(oldp+15,((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                          >> 0xfU))))),64);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid));
            tracep->chgSData(oldp+18,(vlSelf->top__DOT__u_dcode__DOT___csr_idx),12);
            tracep->chgQData(oldp+19,(((0x300U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                        ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q
                                        : ((0x341U 
                                            == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                            ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q
                                            : ((0x342U 
                                                == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q
                                                : (
                                                   (0x343U 
                                                    == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                    ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                                     ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q
                                                     : 0ULL)))))),64);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__u_dcode__DOT___alu_op),6);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__u_dcode__DOT___mem_op),4);
            tracep->chgCData(oldp+23,((((((((((((((1U 
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
                                            | (8U & 
                                               (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm))))) 
                                           | (9U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32))))) 
                                          | (0xaU & 
                                             (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op))))) 
                                         | (0xbU & 
                                            (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32))))) 
                                        | (0xcU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr))))) 
                                       | (0xdU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_ebreak)))))),5);
            tracep->chgCData(oldp+24,(((((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set) 
                                         | (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)) 
                                        & (0U == (0x1fU 
                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                     >> 0xfU))))
                                        ? 1U : (((2U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrw) 
                                                                | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi))))) 
                                                 | (3U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set))))) 
                                                | (4U 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear))))))),3);
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__u_dcode__DOT___load_use_data_hazard_valid));
            tracep->chgIData(oldp+26,(vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus),19);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q),5);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q),5);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q),5);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q),64);
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q));
            tracep->chgSData(oldp+39,(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q),12);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q),64);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q),6);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q),4);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q),5);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q),4);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q),3);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q),64);
            tracep->chgIData(oldp+49,(vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q),32);
            tracep->chgIData(oldp+50,(vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q),19);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__exc_alu_data_ex),64);
            tracep->chgQData(oldp+53,((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+55,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                              | (1U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)))))));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid));
            tracep->chgIData(oldp+57,(vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus),19);
            tracep->chgQData(oldp+58,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q),64);
            tracep->chgIData(oldp+62,(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q),32);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q),64);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q),5);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q),64);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q));
            tracep->chgSData(oldp+75,(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q),12);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q),4);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q),4);
            tracep->chgIData(oldp+78,(vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q),19);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__mem_data_mem),64);
            tracep->chgQData(oldp+81,((QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q))),64);
            tracep->chgBit(oldp+83,((1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                           >> 0x12U))));
            tracep->chgQData(oldp+84,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                               >> 0x10U))))) 
                                        & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                                 >> 0x12U))))) 
                                          & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))),64);
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__u_clint__DOT___trap_valid));
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q),64);
            tracep->chgIData(oldp+104,(vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q),32);
            tracep->chgSData(oldp+105,(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q),12);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q));
            tracep->chgCData(oldp+109,(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q),5);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q),64);
            tracep->chgQData(oldp+112,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                         == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                         ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                         : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                        [vlSelf->top__DOT__u_dcode__DOT___rs1_idx])),64);
            tracep->chgQData(oldp+114,((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                         == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                         ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                         : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                        [vlSelf->top__DOT__u_dcode__DOT___rs2_idx])),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q),64);
            tracep->chgQData(oldp+126,(((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid)
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
                                             : (4ULL 
                                                + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)))),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__u_execute_top__DOT___alu_in1),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__u_execute_top__DOT___alu_in2),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__u_execute_top__DOT___alu_out),64);
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out));
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32));
            tracep->chgCData(oldp+139,((0x3fU & (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),6);
            tracep->chgQData(oldp+140,(((((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))) 
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
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
            tracep->chgBit(oldp+150,(((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                        | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                       | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                      | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
            tracep->chgBit(oldp+151,((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                       | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                      | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))));
            tracep->chgWData(oldp+152,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed));
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32));
            tracep->chgQData(oldp+158,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                             ? 
                                                            VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                             : 
                                                            VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                         : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                             ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                             : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
            tracep->chgQData(oldp+160,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                                             ? 
                                                            VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                                             : 
                                                            VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                                         : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                             ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                             : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),64);
            tracep->chgQData(oldp+162,(VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
            tracep->chgQData(oldp+164,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
            tracep->chgQData(oldp+166,(VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
            tracep->chgQData(oldp+168,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),64);
            tracep->chgQData(oldp+170,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                         : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
            tracep->chgQData(oldp+172,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                                         : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),64);
            tracep->chgIData(oldp+174,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1)),32);
            tracep->chgIData(oldp+175,((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)),32);
            tracep->chgIData(oldp+176,(VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
            tracep->chgIData(oldp+177,(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
            tracep->chgIData(oldp+178,(VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
            tracep->chgIData(oldp+179,(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))),32);
            tracep->chgIData(oldp+180,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                         : VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
            tracep->chgIData(oldp+181,(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                         : VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))),32);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[31]),64);
            tracep->chgQData(oldp+246,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                         ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                         : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en));
            tracep->chgQData(oldp+249,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                         ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                         : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en));
            tracep->chgQData(oldp+252,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                         ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                         : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en));
            tracep->chgQData(oldp+255,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                         ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                         : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en));
            tracep->chgQData(oldp+258,(((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                         ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                         : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+261,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),64);
            tracep->chgQData(oldp+263,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q)),64);
            tracep->chgIData(oldp+265,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0x13U : vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)),32);
            tracep->chgCData(oldp+266,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx))),5);
            tracep->chgCData(oldp+267,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx))),5);
            tracep->chgCData(oldp+268,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (((
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                     >> 7U))
                                                  : 0U))),5);
            tracep->chgQData(oldp+269,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_dcode__DOT___imm_data)),64);
            tracep->chgQData(oldp+271,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xfU)))))),64);
            tracep->chgBit(oldp+273,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                          >> 2U)) & (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid))));
            tracep->chgSData(oldp+274,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))),12);
            tracep->chgQData(oldp+275,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
            tracep->chgQData(oldp+277,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
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
            tracep->chgQData(oldp+279,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : (
                                                   (0x300U 
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
            tracep->chgCData(oldp+281,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___alu_op))),6);
            tracep->chgCData(oldp+282,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___mem_op))),4);
            tracep->chgCData(oldp+283,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (((
                                                   ((((((((((1U 
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
            tracep->chgCData(oldp+284,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : ((((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)) 
                                                  & (0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                         >> 0xfU))))
                                                  ? 1U
                                                  : 
                                                 (((2U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrw) 
                                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi))))) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set))))) 
                                                  | (4U 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)))))))),3);
            tracep->chgIData(oldp+285,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus)),19);
            tracep->chgQData(oldp+286,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q)),64);
            tracep->chgIData(oldp+288,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0x13U : vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q)),32);
            tracep->chgCData(oldp+289,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q))),5);
            tracep->chgQData(oldp+290,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q)),64);
            tracep->chgQData(oldp+292,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q)),64);
            tracep->chgQData(oldp+294,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)),64);
            tracep->chgQData(oldp+296,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__exc_alu_data_ex)),64);
            tracep->chgQData(oldp+298,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : (
                                                   ((((- (QData)((IData)(
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
            tracep->chgBit(oldp+300,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                                >> 3U)) 
                                            & (~ ((0U 
                                                   == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))))));
            tracep->chgSData(oldp+301,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q))),12);
            tracep->chgCData(oldp+302,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q))),4);
            tracep->chgCData(oldp+303,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q))),4);
            tracep->chgIData(oldp+304,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus)),19);
            tracep->chgBit(oldp+305,((1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                                >> 4U)) 
                                            & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                               >> 0x12U)))));
            tracep->chgQData(oldp+306,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : (QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)))),64);
            tracep->chgQData(oldp+308,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q)),64);
            tracep->chgIData(oldp+310,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0x13U : vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)),32);
            tracep->chgQData(oldp+311,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__mem_data_mem)),64);
            tracep->chgSData(oldp+313,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q))),12);
            tracep->chgQData(oldp+314,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
            tracep->chgBit(oldp+316,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                          >> 4U)) & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q))));
            tracep->chgCData(oldp+317,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q))),5);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+318,((IData)(vlSelf->top__DOT__u_fetch__DOT___mem_data)),32);
            tracep->chgCData(oldp+319,(vlSelf->top__DOT__stall_clint),6);
            tracep->chgCData(oldp+320,(vlSelf->top__DOT__flush_clint),6);
            tracep->chgBit(oldp+321,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
            tracep->chgBit(oldp+322,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
            tracep->chgBit(oldp+323,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 1U))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                            >> 1U))));
            tracep->chgBit(oldp+326,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                               >> 1U)))));
            tracep->chgIData(oldp+327,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0x13U : (IData)(vlSelf->top__DOT__u_fetch__DOT___mem_data))),32);
            tracep->chgIData(oldp+328,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0U : vlSelf->top__DOT__trap_bus_if)),19);
            tracep->chgBit(oldp+329,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                            >> 2U))));
            tracep->chgBit(oldp+330,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 2U))));
            tracep->chgBit(oldp+331,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                               >> 2U)))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                            >> 3U))));
            tracep->chgBit(oldp+333,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 3U))));
            tracep->chgBit(oldp+334,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                               >> 3U)))));
            tracep->chgBit(oldp+335,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                            >> 4U))));
            tracep->chgBit(oldp+336,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                            >> 4U))));
            tracep->chgBit(oldp+337,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                               >> 4U)))));
            tracep->chgBit(oldp+338,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                          >> 4U)) & (IData)(vlSelf->top__DOT__csr_mtvec_write_valid))));
            tracep->chgBit(oldp+339,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                          >> 4U)) & (IData)(vlSelf->top__DOT__csr_mstatus_write_valid))));
            tracep->chgQData(oldp+340,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__csr_mtvec_writedata)),64);
            tracep->chgQData(oldp+342,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : 0xbULL)),64);
            tracep->chgQData(oldp+344,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                         ? 0ULL : vlSelf->top__DOT__csr_mstatus_writedata)),64);
        }
        tracep->chgBit(oldp+346,(vlSelf->clk));
        tracep->chgBit(oldp+347,(vlSelf->rst));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
