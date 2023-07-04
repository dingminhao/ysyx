// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051145_top__Syms.h"


void Vysyx_22051145_top___024root__trace_chg_sub_0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22051145_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22051145_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22051145_top___024root*>(voidSelf);
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22051145_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_22051145_top___024root__trace_chg_sub_0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h32591264__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus),19);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+1,(vlSelf->ysyx_22051145_top__DOT__pc_next),64);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_22051145_top__DOT__stall_clint),6);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_22051145_top__DOT__flush_clint),6);
        bufp->chgBit(oldp+5,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                       >> 3U)))));
        bufp->chgQData(oldp+6,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                 ? 0ULL : vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex)),64);
        bufp->chgSData(oldp+8,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                 ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q))),12);
        bufp->chgQData(oldp+9,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                 ? 0ULL : (((- (QData)((IData)(
                                                               (2U 
                                                                == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                           | (((- (QData)((IData)(
                                                                  (3U 
                                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                               & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                                  | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2)) 
                                              | (((- (QData)((IData)(
                                                                     (4U 
                                                                      == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                  & ((~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                                     & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q)) 
                                                 | ((- (QData)((IData)(
                                                                       (1U 
                                                                        == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                    & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q)))))),64);
        bufp->chgBit(oldp+11,((1U & ((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                         >> 3U)) & 
                                     (~ ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                         | (1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))))));
        bufp->chgQData(oldp+12,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q)),64);
        bufp->chgIData(oldp+14,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q)),32);
        bufp->chgCData(oldp+15,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q))),4);
        bufp->chgQData(oldp+16,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q)),64);
        bufp->chgCData(oldp+18,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q))),4);
        bufp->chgCData(oldp+19,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q))),5);
        bufp->chgQData(oldp+20,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q)),64);
        bufp->chgQData(oldp+22,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q)),64);
        bufp->chgIData(oldp+24,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus)),19);
        bufp->chgIData(oldp+25,((IData)(vlSelf->ysyx_22051145_top__DOT__pc_next)),32);
        bufp->chgCData(oldp+26,((0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__pc_next))),4);
        bufp->chgCData(oldp+27,((0x1fU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                  >> 4U)))),5);
        bufp->chgIData(oldp+28,((0x7fffffU & (IData)(
                                                     (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                      >> 9U)))),23);
        bufp->chgBit(oldp+29,(((0x7fffffU & (IData)(
                                                    (vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                     >> 9U))) 
                               == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
                               [(0x1fU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                  >> 4U)))])));
        bufp->chgCData(oldp+30,((0x1fU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                  >> 4U)))),6);
        bufp->chgBit(oldp+31,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                        >> 2U)))));
        bufp->chgCData(oldp+32,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__alu_op_id))),6);
        bufp->chgQData(oldp+33,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : ((0x300U 
                                             == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                             ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q
                                             : ((0x341U 
                                                 == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                 ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q
                                                 : 
                                                ((0x342U 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q
                                                  : 
                                                 ((0x343U 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                    ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q
                                                    : 0ULL))))))),64);
        bufp->chgSData(oldp+35,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))),12);
        bufp->chgQData(oldp+36,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                               >> 0xfU)))))),64);
        bufp->chgBit(oldp+38,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                   >> 2U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_imm_valid_id))));
        bufp->chgCData(oldp+39,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : ((IData)((
                                                   (0U 
                                                    == 
                                                    (0xf8000U 
                                                     & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                                      | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))
                                           ? 1U : (
                                                   (2U 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write)))) 
                                                   | ((3U 
                                                       & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set)))) 
                                                      | (4U 
                                                         & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))))))),3);
        bufp->chgCData(oldp+40,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : ((1U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc)))) 
                                          | ((2U & 
                                              (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui)))) 
                                             | ((3U 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal)))) 
                                                | ((4U 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr)))) 
                                                   | ((5U 
                                                       & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load)))) 
                                                      | ((6U 
                                                          & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store)))) 
                                                         | ((7U 
                                                             & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch)))) 
                                                            | ((8U 
                                                                & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm)))) 
                                                               | ((9U 
                                                                   & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32)))) 
                                                                  | ((0xaU 
                                                                      & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op)))) 
                                                                     | ((0xbU 
                                                                         & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32)))) 
                                                                        | ((0xcU 
                                                                            & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr)))) 
                                                                           | (0xdU 
                                                                              & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak)))))))))))))))))),5);
        bufp->chgQData(oldp+41,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type))) 
                                             & (((- (QData)((IData)(
                                                                    (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0x1fU)))) 
                                                 << 0xbU) 
                                                | (QData)((IData)(
                                                                  (0x7ffU 
                                                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0x14U)))))) 
                                            | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0x1fU)))) 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     ((0x7e0U 
                                                                       & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                            >> 7U))))))) 
                                               | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 7U)))))))) 
                                                  | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type))) 
                                                      & (((- (QData)((IData)(
                                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0x1fU)))) 
                                                          << 0x1fU) 
                                                         | (QData)((IData)(
                                                                           (0x7ffff000U 
                                                                            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))) 
                                                     | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))) 
                                                        & (((- (QData)((IData)(
                                                                               (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x1fU)))) 
                                                            << 0x14U) 
                                                           | (QData)((IData)(
                                                                             ((0xff000U 
                                                                               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q) 
                                                                              | ((0x800U 
                                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 9U)) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)))))))))))))),64);
        bufp->chgIData(oldp+43,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)),32);
        bufp->chgCData(oldp+44,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : ((1U & (- (IData)(
                                                           ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                            & (0U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                          | ((4U & 
                                              (- (IData)(
                                                         ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                          & (0x4000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                             | ((2U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                               & (0x1000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                | ((3U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                  & (0x2000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                   | ((5U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                     & (0x5000U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                      | ((8U 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                        & (0U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                         | ((9U 
                                                             & (- (IData)(
                                                                          ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                           & (0x1000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                            | ((0xaU 
                                                                & (- (IData)(
                                                                             ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                              & (0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                               | ((7U 
                                                                   & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                                & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                  | ((6U 
                                                                      & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                     | (0xbU 
                                                                        & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))))))))))))))),4);
        bufp->chgQData(oldp+45,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q)),64);
        bufp->chgCData(oldp+47,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0) 
                                           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_ha2d02da5__0))
                                           ? (0x1fU 
                                              & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                 >> 7U))
                                           : 0U))),5);
        bufp->chgQData(oldp+48,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid)
                                             ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                             : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id)))
                                                 ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                                 : 
                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                                  : 
                                                 vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                                 [vlSelf->ysyx_22051145_top__DOT__rs1_idx_id]))))),64);
        bufp->chgCData(oldp+50,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id))),5);
        bufp->chgQData(oldp+51,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)
                                             ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                             : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id)))
                                                 ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                                 : 
                                                (((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                                  : 
                                                 vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                                 [vlSelf->ysyx_22051145_top__DOT__rs2_idx_id]))))),64);
        bufp->chgCData(oldp+53,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id))),5);
        bufp->chgIData(oldp+54,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus)),19);
        bufp->chgBit(oldp+55,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                        >> 1U)))));
        bufp->chgQData(oldp+56,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current)),64);
        bufp->chgIData(oldp+58,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                  ? 0x13U : ((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
                                              ? (((
                                                   (0U 
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
        bufp->chgIData(oldp+59,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                                  ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus)),19);
        bufp->chgBit(oldp+60,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                        >> 4U)))));
        bufp->chgSData(oldp+61,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q))),12);
        bufp->chgBit(oldp+62,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_d));
        bufp->chgQData(oldp+63,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : 0xbULL)),64);
        bufp->chgQData(oldp+65,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_d),64);
        bufp->chgBit(oldp+67,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                   >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint))));
        bufp->chgQData(oldp+68,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mstatus_writedata_clint)),64);
        bufp->chgQData(oldp+70,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)))),64);
        bufp->chgBit(oldp+72,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                   >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint))));
        bufp->chgQData(oldp+73,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mtvec_writedata_clint)),64);
        bufp->chgQData(oldp+75,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
        bufp->chgBit(oldp+77,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                   >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q))));
        bufp->chgIData(oldp+78,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)),32);
        bufp->chgQData(oldp+79,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0ULL : vlSelf->ysyx_22051145_top__DOT__mem_data_mem)),64);
        bufp->chgCData(oldp+81,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q))),5);
        bufp->chgQData(oldp+82,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+84,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current),64);
        bufp->chgIData(oldp+86,(((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
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
        bufp->chgBit(oldp+87,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))));
        bufp->chgQData(oldp+88,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q),64);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q),19);
        bufp->chgCData(oldp+92,(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id),5);
        bufp->chgCData(oldp+93,(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id),5);
        bufp->chgCData(oldp+94,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0) 
                                  | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_ha2d02da5__0))
                                  ? (0x1fU & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgSData(oldp+95,(vlSelf->ysyx_22051145_top__DOT__csr_idx_id),12);
        bufp->chgQData(oldp+96,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid)
                                  ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                  : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                      & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id)))
                                      ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                      : (((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                          ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                          : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                         [vlSelf->ysyx_22051145_top__DOT__rs1_idx_id])))),64);
        bufp->chgQData(oldp+98,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)
                                  ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                  : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                      & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id)))
                                      ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                      : (((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                          ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                          : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                         [vlSelf->ysyx_22051145_top__DOT__rs2_idx_id])))),64);
        bufp->chgQData(oldp+100,(((0x300U == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q
                                   : ((0x341U == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                       ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q
                                       : ((0x342U == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                           ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q
                                           : ((0x343U 
                                               == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                               ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q
                                               : ((0x305U 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q
                                                   : 0ULL)))))),64);
        bufp->chgQData(oldp+102,((QData)((IData)((0x1fU 
                                                  & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                     >> 0xfU))))),64);
        bufp->chgBit(oldp+104,(vlSelf->ysyx_22051145_top__DOT__csr_imm_valid_id));
        bufp->chgQData(oldp+105,((((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type))) 
                                   & (((- (QData)((IData)(
                                                          (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                           >> 0x1fU)))) 
                                       << 0xbU) | (QData)((IData)(
                                                                  (0x7ffU 
                                                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0x14U)))))) 
                                  | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store))) 
                                      & (((- (QData)((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                              >> 0x1fU)))) 
                                          << 0xbU) 
                                         | (QData)((IData)(
                                                           ((0x7e0U 
                                                             & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                  >> 7U))))))) 
                                     | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                        >> 7U)))))))) 
                                        | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type))) 
                                            & (((- (QData)((IData)(
                                                                   (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0x1fU)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))) 
                                           | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))) 
                                              & (((- (QData)((IData)(
                                                                     (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0x1fU)))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x14U))))))))))))),64);
        bufp->chgCData(oldp+107,(vlSelf->ysyx_22051145_top__DOT__alu_op_id),6);
        bufp->chgCData(oldp+108,(((1U & (- (IData)(
                                                   ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                  | ((4U & (- (IData)(
                                                      ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                       & (0x4000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                     | ((2U & (- (IData)(
                                                         ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                          & (0x1000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                        | ((3U & (- (IData)(
                                                            ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                             & (0x2000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                           | ((5U & 
                                               (- (IData)(
                                                          ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                           & (0x5000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                              | ((8U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                & (0U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                 | ((9U 
                                                     & (- (IData)(
                                                                  ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                   & (0x1000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                    | ((0xaU 
                                                        & (- (IData)(
                                                                     ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                      & (0x2000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                       | ((7U 
                                                           & (- (IData)(
                                                                        ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                         & (0x6000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                          | ((6U 
                                                              & (- (IData)(
                                                                           ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                            & (0x3000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                             | (0xbU 
                                                                & (- (IData)(
                                                                             ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                              & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))))))))))))),4);
        bufp->chgCData(oldp+109,(((IData)(((0U == (0xf8000U 
                                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                                           & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                              | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))
                                   ? 1U : ((2U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write)))) 
                                           | ((3U & 
                                               (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set)))) 
                                              | (4U 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)))))))),3);
        bufp->chgCData(oldp+110,(((1U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc)))) 
                                  | ((2U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui)))) 
                                     | ((3U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal)))) 
                                        | ((4U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr)))) 
                                           | ((5U & 
                                               (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load)))) 
                                              | ((6U 
                                                  & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store)))) 
                                                 | ((7U 
                                                     & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch)))) 
                                                    | ((8U 
                                                        & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm)))) 
                                                       | ((9U 
                                                           & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32)))) 
                                                          | ((0xaU 
                                                              & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op)))) 
                                                             | ((0xbU 
                                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32)))) 
                                                                | ((0xcU 
                                                                    & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr)))) 
                                                                   | (0xdU 
                                                                      & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak))))))))))))))))),5);
        bufp->chgBit(oldp+111,(((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid) 
                                   | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)))));
        bufp->chgIData(oldp+112,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus),19);
        bufp->chgQData(oldp+113,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q),64);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q),32);
        bufp->chgCData(oldp+116,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_idx_id_ex_q),5);
        bufp->chgCData(oldp+117,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_idx_id_ex_q),5);
        bufp->chgCData(oldp+118,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q),5);
        bufp->chgSData(oldp+119,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q),12);
        bufp->chgQData(oldp+120,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q),64);
        bufp->chgQData(oldp+122,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q),64);
        bufp->chgBit(oldp+124,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q));
        bufp->chgQData(oldp+125,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q),64);
        bufp->chgQData(oldp+127,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q),64);
        bufp->chgQData(oldp+129,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q),64);
        bufp->chgCData(oldp+131,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q),6);
        bufp->chgCData(oldp+132,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q),4);
        bufp->chgCData(oldp+133,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q),3);
        bufp->chgCData(oldp+134,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q),5);
        bufp->chgCData(oldp+135,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q),4);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q),19);
        bufp->chgQData(oldp+137,(vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex),64);
        bufp->chgQData(oldp+139,((((- (QData)((IData)(
                                                      (2U 
                                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                  | (((- (QData)((IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                      & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                         | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2)) 
                                     | (((- (QData)((IData)(
                                                            (4U 
                                                             == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                         & ((~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q)) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                           & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q))))),64);
        bufp->chgBit(oldp+141,((1U & (~ ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                         | (1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)))))));
        bufp->chgQData(oldp+142,((((- (QData)((IData)(
                                                      ((3U 
                                                        == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                                       | (7U 
                                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))))) 
                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q 
                                      + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q)) 
                                  | ((- (QData)((IData)(
                                                        (4U 
                                                         == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q))))) 
                                     & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q 
                                        + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q)))),64);
        bufp->chgBit(oldp+144,(vlSelf->ysyx_22051145_top__DOT__branch_pc_valid_ex));
        bufp->chgIData(oldp+145,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus),19);
        bufp->chgQData(oldp+146,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q),64);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q),32);
        bufp->chgQData(oldp+149,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___imm_data_ex_mem_q),64);
        bufp->chgCData(oldp+151,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q),5);
        bufp->chgQData(oldp+152,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs1_data_ex_mem_q),64);
        bufp->chgQData(oldp+154,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q),64);
        bufp->chgQData(oldp+156,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q),64);
        bufp->chgQData(oldp+158,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q),64);
        bufp->chgBit(oldp+160,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q));
        bufp->chgSData(oldp+161,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q),12);
        bufp->chgCData(oldp+162,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_op_ex_mem_q),4);
        bufp->chgCData(oldp+163,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q),4);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q),19);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_22051145_top__DOT__mem_addr_mem),32);
        bufp->chgBit(oldp+166,(vlSelf->ysyx_22051145_top__DOT__mem_addr_valid_mem));
        bufp->chgCData(oldp+167,(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem),8);
        bufp->chgBit(oldp+168,(vlSelf->ysyx_22051145_top__DOT__mem_write_valid_mem));
        bufp->chgQData(oldp+169,(vlSelf->ysyx_22051145_top__DOT__mem_wdata_mem),64);
        bufp->chgQData(oldp+171,(vlSelf->ysyx_22051145_top__DOT__mem_data_mem),64);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus),19);
        bufp->chgQData(oldp+174,((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q))),64);
        bufp->chgBit(oldp+176,((1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                      >> 0x12U))));
        bufp->chgQData(oldp+177,((((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                          >> 0x10U))))) 
                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                            >> 0x12U))))) 
                                     & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q))),64);
        bufp->chgBit(oldp+179,(vlSelf->ysyx_22051145_top__DOT__pc_valid_clint));
        bufp->chgQData(oldp+180,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
        bufp->chgQData(oldp+182,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
        bufp->chgQData(oldp+184,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
        bufp->chgQData(oldp+186,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
        bufp->chgQData(oldp+188,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
        bufp->chgBit(oldp+190,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
        bufp->chgBit(oldp+191,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
        bufp->chgBit(oldp+192,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
        bufp->chgBit(oldp+193,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
        bufp->chgBit(oldp+194,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
        bufp->chgQData(oldp+195,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___pc_mem_wb_q),64);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___inst_data_mem_wb_q),32);
        bufp->chgSData(oldp+198,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q),12);
        bufp->chgQData(oldp+199,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
        bufp->chgBit(oldp+201,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q));
        bufp->chgCData(oldp+202,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q),5);
        bufp->chgQData(oldp+203,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___mem_data_mem_wb_q),64);
        bufp->chgQData(oldp+205,((((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                   : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                  [vlSelf->ysyx_22051145_top__DOT__rs1_idx_id])),64);
        bufp->chgQData(oldp+207,((((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                   : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                  [vlSelf->ysyx_22051145_top__DOT__rs2_idx_id])),64);
        bufp->chgQData(oldp+209,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q),64);
        bufp->chgQData(oldp+211,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q),64);
        bufp->chgQData(oldp+213,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q),64);
        bufp->chgQData(oldp+215,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q),64);
        bufp->chgQData(oldp+217,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q),64);
        bufp->chgQData(oldp+219,(((QData)((IData)((
                                                   ((0U 
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
        bufp->chgBit(oldp+221,(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache));
        bufp->chgIData(oldp+222,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_icache_o),32);
        bufp->chgBit(oldp+223,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o));
        bufp->chgCData(oldp+224,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_rmask_icache_o),8);
        bufp->chgQData(oldp+225,(vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache),64);
        bufp->chgBit(oldp+227,(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache));
        bufp->chgIData(oldp+228,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_dcache_o),32);
        bufp->chgBit(oldp+229,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o));
        bufp->chgCData(oldp+230,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_rmask_dcache_o),8);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_dcache_o),32);
        bufp->chgBit(oldp+232,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_valid_dcache_o));
        bufp->chgCData(oldp+233,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wmask_dcache_o),8);
        bufp->chgQData(oldp+234,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wdata_dcache_o),64);
        bufp->chgQData(oldp+236,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o),64);
        bufp->chgBit(oldp+238,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o));
        bufp->chgBit(oldp+239,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_ready));
        bufp->chgBit(oldp+240,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o));
        bufp->chgQData(oldp+241,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o),64);
        bufp->chgBit(oldp+243,((0xa0000000U == (0xa0000000U 
                                                & vlSelf->ysyx_22051145_top__DOT__mem_addr_mem))));
        bufp->chgCData(oldp+244,(((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))
                                   ? 0U : (0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q)))),4);
        bufp->chgCData(oldp+245,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx),5);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag),23);
        bufp->chgBit(oldp+247,((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag 
                                == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs
                                [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx])));
        bufp->chgCData(oldp+248,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_state),4);
        bufp->chgCData(oldp+249,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg),4);
        bufp->chgCData(oldp+250,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_idx_reg),5);
        bufp->chgIData(oldp+251,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_tag_reg),23);
        bufp->chgBit(oldp+252,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_tag_wen));
        bufp->chgBit(oldp+253,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_rdata_ok));
        bufp->chgWData(oldp+254,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_temp),128);
        bufp->chgQData(oldp+258,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata),64);
        bufp->chgBit(oldp+260,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen));
        bufp->chgWData(oldp+261,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp),128);
        bufp->chgWData(oldp+265,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask),128);
        bufp->chgQData(oldp+269,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit),64);
        bufp->chgCData(oldp+271,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3),3);
        bufp->chgWData(oldp+272,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata),128);
        bufp->chgBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen)))));
        __Vtemp_h32591264__0[0U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[0U]);
        __Vtemp_h32591264__0[1U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[1U]);
        __Vtemp_h32591264__0[2U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[2U]);
        __Vtemp_h32591264__0[3U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[3U]);
        bufp->chgWData(oldp+277,(__Vtemp_h32591264__0),128);
        bufp->chgCData(oldp+281,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx),6);
        bufp->chgIData(oldp+282,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[0]),23);
        bufp->chgIData(oldp+283,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[1]),23);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[2]),23);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[3]),23);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[4]),23);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[5]),23);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[6]),23);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[7]),23);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[8]),23);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[9]),23);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[10]),23);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[11]),23);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[12]),23);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[13]),23);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[14]),23);
        bufp->chgIData(oldp+297,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[15]),23);
        bufp->chgIData(oldp+298,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[16]),23);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[17]),23);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[18]),23);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[19]),23);
        bufp->chgIData(oldp+302,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[20]),23);
        bufp->chgIData(oldp+303,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[21]),23);
        bufp->chgIData(oldp+304,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[22]),23);
        bufp->chgIData(oldp+305,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[23]),23);
        bufp->chgIData(oldp+306,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[24]),23);
        bufp->chgIData(oldp+307,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[25]),23);
        bufp->chgIData(oldp+308,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[26]),23);
        bufp->chgIData(oldp+309,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[27]),23);
        bufp->chgIData(oldp+310,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[28]),23);
        bufp->chgIData(oldp+311,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[29]),23);
        bufp->chgIData(oldp+312,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[30]),23);
        bufp->chgIData(oldp+313,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[31]),23);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__i),32);
        bufp->chgQData(oldp+315,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed),64);
        bufp->chgQData(oldp+317,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed),64);
        bufp->chgQData(oldp+319,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out),64);
        bufp->chgBit(oldp+321,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out));
        bufp->chgBit(oldp+322,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed));
        bufp->chgBit(oldp+323,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32));
        bufp->chgQData(oldp+324,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                   ? (QData)((IData)(
                                                     ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                       ? 
                                                      VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                                       : 
                                                      VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))))
                                   : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                       ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                       : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),64);
        bufp->chgQData(oldp+326,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                   ? (QData)((IData)(
                                                     ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                       ? 
                                                      VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                                       : 
                                                      VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))))
                                   : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                       ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                       : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),64);
        bufp->chgQData(oldp+328,(VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
        bufp->chgQData(oldp+330,(VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
        bufp->chgQData(oldp+332,(VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
        bufp->chgQData(oldp+334,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
        bufp->chgQData(oldp+336,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                   ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                   : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),64);
        bufp->chgQData(oldp+338,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                   ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                   : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),64);
        bufp->chgIData(oldp+340,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed)),32);
        bufp->chgIData(oldp+341,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),32);
        bufp->chgIData(oldp+342,(VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
        bufp->chgIData(oldp+343,(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
        bufp->chgIData(oldp+344,(VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
        bufp->chgIData(oldp+345,(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
        bufp->chgIData(oldp+346,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                   ? VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                   : VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),32);
        bufp->chgIData(oldp+347,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                   ? VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                   : VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),32);
        bufp->chgBit(oldp+348,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0) 
                                | ((0x16U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                   | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))));
        bufp->chgBit(oldp+349,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0) 
                                | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))));
        bufp->chgWData(oldp+350,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
        bufp->chgBit(oldp+354,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra));
        bufp->chgBit(oldp+355,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl));
        bufp->chgBit(oldp+356,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll));
        bufp->chgBit(oldp+357,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32));
        bufp->chgCData(oldp+358,((0x3fU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),6);
        bufp->chgQData(oldp+359,((((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl))) 
                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                  | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra))) 
                                      & ((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                          & (0xffffffffffffffffULL 
                                             >> (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count))) 
                                         | ((~ (0xffffffffffffffffULL 
                                                >> (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count))) 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32)
                                                                      ? (IData)(
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                                >> 0x1fU))
                                                                      : (IData)(
                                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                                >> 0x3fU)))))))))) 
                                     | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll))) 
                                        & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))),64);
        bufp->chgQData(oldp+361,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
        bufp->chgQData(oldp+363,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
        bufp->chgQData(oldp+365,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
        bufp->chgQData(oldp+367,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
        bufp->chgQData(oldp+369,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[0]),64);
        bufp->chgQData(oldp+371,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[1]),64);
        bufp->chgQData(oldp+373,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[2]),64);
        bufp->chgQData(oldp+375,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[3]),64);
        bufp->chgQData(oldp+377,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[4]),64);
        bufp->chgQData(oldp+379,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[5]),64);
        bufp->chgQData(oldp+381,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[6]),64);
        bufp->chgQData(oldp+383,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[7]),64);
        bufp->chgQData(oldp+385,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[8]),64);
        bufp->chgQData(oldp+387,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[9]),64);
        bufp->chgQData(oldp+389,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[10]),64);
        bufp->chgQData(oldp+391,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[11]),64);
        bufp->chgQData(oldp+393,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[12]),64);
        bufp->chgQData(oldp+395,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[13]),64);
        bufp->chgQData(oldp+397,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[14]),64);
        bufp->chgQData(oldp+399,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[15]),64);
        bufp->chgQData(oldp+401,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[16]),64);
        bufp->chgQData(oldp+403,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[17]),64);
        bufp->chgQData(oldp+405,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[18]),64);
        bufp->chgQData(oldp+407,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[19]),64);
        bufp->chgQData(oldp+409,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[20]),64);
        bufp->chgQData(oldp+411,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[21]),64);
        bufp->chgQData(oldp+413,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[22]),64);
        bufp->chgQData(oldp+415,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[23]),64);
        bufp->chgQData(oldp+417,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[24]),64);
        bufp->chgQData(oldp+419,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[25]),64);
        bufp->chgQData(oldp+421,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[26]),64);
        bufp->chgQData(oldp+423,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[27]),64);
        bufp->chgQData(oldp+425,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[28]),64);
        bufp->chgQData(oldp+427,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[29]),64);
        bufp->chgQData(oldp+429,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[30]),64);
        bufp->chgQData(oldp+431,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[31]),64);
        bufp->chgCData(oldp+433,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_state),4);
        bufp->chgCData(oldp+434,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg),4);
        bufp->chgCData(oldp+435,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_idx_reg),5);
        bufp->chgIData(oldp+436,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_tag_reg),23);
        bufp->chgBit(oldp+437,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_tag_wen));
        bufp->chgBit(oldp+438,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok));
        bufp->chgWData(oldp+439,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__cache_line_temp),128);
        bufp->chgBit(oldp+443,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen));
        bufp->chgWData(oldp+444,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata),128);
        bufp->chgBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen)))));
        bufp->chgIData(oldp+449,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[0]),23);
        bufp->chgIData(oldp+450,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[1]),23);
        bufp->chgIData(oldp+451,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[2]),23);
        bufp->chgIData(oldp+452,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[3]),23);
        bufp->chgIData(oldp+453,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[4]),23);
        bufp->chgIData(oldp+454,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[5]),23);
        bufp->chgIData(oldp+455,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[6]),23);
        bufp->chgIData(oldp+456,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[7]),23);
        bufp->chgIData(oldp+457,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[8]),23);
        bufp->chgIData(oldp+458,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[9]),23);
        bufp->chgIData(oldp+459,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[10]),23);
        bufp->chgIData(oldp+460,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[11]),23);
        bufp->chgIData(oldp+461,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[12]),23);
        bufp->chgIData(oldp+462,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[13]),23);
        bufp->chgIData(oldp+463,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[14]),23);
        bufp->chgIData(oldp+464,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[15]),23);
        bufp->chgIData(oldp+465,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[16]),23);
        bufp->chgIData(oldp+466,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[17]),23);
        bufp->chgIData(oldp+467,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[18]),23);
        bufp->chgIData(oldp+468,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[19]),23);
        bufp->chgIData(oldp+469,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[20]),23);
        bufp->chgIData(oldp+470,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[21]),23);
        bufp->chgIData(oldp+471,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[22]),23);
        bufp->chgIData(oldp+472,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[23]),23);
        bufp->chgIData(oldp+473,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[24]),23);
        bufp->chgIData(oldp+474,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[25]),23);
        bufp->chgIData(oldp+475,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[26]),23);
        bufp->chgIData(oldp+476,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[27]),23);
        bufp->chgIData(oldp+477,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[28]),23);
        bufp->chgIData(oldp+478,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[29]),23);
        bufp->chgIData(oldp+479,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[30]),23);
        bufp->chgIData(oldp+480,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[31]),23);
        bufp->chgIData(oldp+481,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__i),32);
        bufp->chgQData(oldp+482,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                   : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        bufp->chgBit(oldp+484,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en));
        bufp->chgQData(oldp+485,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                   : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        bufp->chgBit(oldp+487,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en));
        bufp->chgQData(oldp+488,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                   : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        bufp->chgBit(oldp+490,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en));
        bufp->chgQData(oldp+491,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                   : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        bufp->chgBit(oldp+493,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en));
        bufp->chgQData(oldp+494,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                   : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
        bufp->chgBit(oldp+496,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en));
    }
    bufp->chgBit(oldp+497,(vlSelf->clk));
    bufp->chgBit(oldp+498,(vlSelf->rst));
    bufp->chgBit(oldp+499,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgBit(oldp+500,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                     | (IData)(vlSelf->rst))))));
}

void Vysyx_22051145_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22051145_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22051145_top___024root*>(voidSelf);
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
