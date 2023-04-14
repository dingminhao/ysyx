// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_top__Syms.h"


void Vysyx_top___024root__traceChgSub0(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_top___024root* const __restrict vlSelf = static_cast<Vysyx_top___024root*>(voidSelf);
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_top___024root__traceChgSub0(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_top__DOT__u_pc__DOT___pc_current),64);
            tracep->chgIData(oldp+2,((IData)(vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data)),32);
            tracep->chgCData(oldp+3,(((((((IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___R_type) 
                                          | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___I_type)) 
                                         | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_store)) 
                                        | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_branch)) 
                                       & (~ (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___isNeed_immCSR)))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data 
                                                           >> 0xfU)))
                                       : 0U)),5);
            tracep->chgCData(oldp+4,(((((IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___R_type) 
                                        | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_store)) 
                                       | (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___type_branch))
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data 
                                                           >> 0x14U)))
                                       : 0U)),5);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_top__DOT__u_dcode__DOT___rd_idx),5);
            tracep->chgSData(oldp+6,(vlSelf->ysyx_top__DOT__u_dcode__DOT___csr_idx),12);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_top__DOT__u_dcode__DOT___imm_data),64);
            tracep->chgQData(oldp+9,((QData)((IData)(
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data 
                                                                 >> 0xfU)))))),64);
            tracep->chgBit(oldp+11,(vlSelf->ysyx_top__DOT__u_dcode__DOT___isNeed_immCSR));
            tracep->chgCData(oldp+12,(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op),6);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_top__DOT__u_dcode__DOT___mem_op),4);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_top__DOT__u_dcode__DOT___exc_op),5);
            tracep->chgCData(oldp+15,(vlSelf->ysyx_top__DOT__u_dcode__DOT___pc_op),4);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_top__DOT__u_dcode__DOT___csr_op),3);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus),3);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_top__DOT__rs1_data),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_top__DOT__rs2_data),64);
            tracep->chgQData(oldp+22,((((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned) 
                                        | (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed))
                                        ? ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed)
                                            ? (((((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte))) 
                                                  & (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 7U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))) 
                                                 | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte))) 
                                                    & (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0xfU)))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))))) 
                                                | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte))) 
                                                   & (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))) 
                                               | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls64byte))) 
                                                  & vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))
                                            : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned)
                                                ? (
                                                   ((((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte))) 
                                                      & (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))) 
                                                     | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte))) 
                                                        & (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))) 
                                                    | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte))) 
                                                       & (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))) 
                                                   | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls64byte))) 
                                                      & vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))
                                                : 0ULL))
                                        : vlSelf->ysyx_top__DOT__exc_out)),64);
            tracep->chgQData(oldp+24,((QData)((IData)(vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data))),64);
            tracep->chgBit(oldp+26,((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))));
            tracep->chgQData(oldp+27,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_q),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mcause_q),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtval_q),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_q),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mstatus_q),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___csr_readdata),64);
            tracep->chgBit(oldp+39,(vlSelf->ysyx_top__DOT__u_execute__DOT___csr_exe_valid));
            tracep->chgQData(oldp+40,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_top__DOT__exc_out),64);
            tracep->chgQData(oldp+44,(((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed)
                                        ? (((((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte))) 
                                              & (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))) 
                                             | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte))) 
                                                & (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))))) 
                                            | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte))) 
                                               & (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))) 
                                           | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls64byte))) 
                                              & vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))
                                        : ((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned)
                                            ? (((((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls8byte))) 
                                                  & (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))))) 
                                                 | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls16byte))) 
                                                    & (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))))) 
                                                | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls32byte))) 
                                                   & (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read)))) 
                                               | ((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___ls64byte))) 
                                                  & vlSelf->ysyx_top__DOT__u_memory__DOT___mem_read))
                                            : 0ULL))),64);
            tracep->chgBit(oldp+46,(((IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___unsigned) 
                                     | (IData)(vlSelf->ysyx_top__DOT__u_memory__DOT___signed))));
            tracep->chgQData(oldp+47,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus) 
                                                               >> 2U))))) 
                                        & vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))))) 
                                          & vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))),64);
            tracep->chgBit(oldp+49,((IData)((0U != 
                                             (7U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))))));
            tracep->chgQData(oldp+50,((((((- (QData)((IData)(
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
                                          | (4ULL & 
                                             (- (QData)((IData)(vlSelf->ysyx_top__DOT__u_pc__DOT___isready_inc4))))))),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[0]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[1]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[2]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[3]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[4]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[5]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[6]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[7]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[8]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[9]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[10]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[11]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[12]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[13]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[14]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[15]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[16]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[17]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[18]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[19]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[20]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[21]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[22]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[23]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[24]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[25]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[26]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[27]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[28]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[29]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[30]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_top__DOT__u_rv64reg__DOT__rf[31]),64);
            tracep->chgQData(oldp+116,(((IData)(vlSelf->ysyx_top__DOT__csr_mstatus_i_en)
                                         ? vlSelf->ysyx_top__DOT__csr_mstatus_i
                                         : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
            tracep->chgBit(oldp+118,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mstatus_en));
            tracep->chgQData(oldp+119,(((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))
                                         ? vlSelf->ysyx_top__DOT__u_pc__DOT___pc_current
                                         : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
            tracep->chgBit(oldp+121,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mepc_en));
            tracep->chgQData(oldp+122,(((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))
                                         ? 0xbULL : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
            tracep->chgBit(oldp+124,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mcause_en));
            tracep->chgQData(oldp+125,(((1U & (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___decode_trap_bus))
                                         ? (QData)((IData)(vlSelf->ysyx_top__DOT__u_fetch__DOT___mem_data))
                                         : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
            tracep->chgBit(oldp+127,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtval_en));
            tracep->chgQData(oldp+128,(((IData)(vlSelf->ysyx_top__DOT__csr_mtvec_i_en)
                                         ? vlSelf->ysyx_top__DOT__csr_mtvec_i
                                         : vlSelf->ysyx_top__DOT__u_execute__DOT__u_execute_csr__DOT___csr_exe_result)),64);
            tracep->chgBit(oldp+130,(vlSelf->ysyx_top__DOT__u_rv64_csr_regfile__DOT___mtvec_en));
            tracep->chgQData(oldp+131,(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_out),64);
            tracep->chgBit(oldp+137,(((((((((0xcU == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                            | (0x10U 
                                               == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                           & (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isSLT)) 
                                          | (((0xdU 
                                               == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                              | (0x12U 
                                                 == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                             & (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isCF))) 
                                         | ((0xeU == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                            & (0U == 
                                               ((vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[0U] 
                                                 | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[1U]) 
                                                | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[2U])))) 
                                        | ((0xfU == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                           & (0U != 
                                              ((vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[0U] 
                                                | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[1U]) 
                                               | vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___add_out[2U])))) 
                                       | ((0x11U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                          & (~ (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isSLT)))) 
                                      | ((0x13U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                         & (~ (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isCF))))));
            tracep->chgBit(oldp+138,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sra));
            tracep->chgBit(oldp+139,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_srl));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_sll));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___isshift32));
            tracep->chgCData(oldp+142,((0x3fU & (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),6);
            tracep->chgQData(oldp+143,(((((- (QData)((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___shift_srl))) 
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
            tracep->chgQData(oldp+145,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
            tracep->chgBit(oldp+153,(((((0x14U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                        | (0x15U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                       | (0x16U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                      | (0x18U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)))));
            tracep->chgBit(oldp+154,((((0x14U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)) 
                                       | (0x15U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op))) 
                                      | (0x18U == (IData)(vlSelf->ysyx_top__DOT__u_dcode__DOT___alu_op)))));
            tracep->chgWData(oldp+155,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
            tracep->chgBit(oldp+159,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed));
            tracep->chgBit(oldp+160,(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div32));
            tracep->chgQData(oldp+161,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div32)
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                                             ? 
                                                            VL_DIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                                             : 
                                                            VL_DIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))))
                                         : ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                             ? VL_DIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                             : VL_DIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),64);
            tracep->chgQData(oldp+163,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div32)
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                                             ? 
                                                            VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                                             : 
                                                            VL_MODDIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))))
                                         : ((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                             ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                             : VL_MODDIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),64);
            tracep->chgQData(oldp+165,(VL_DIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+167,(VL_MODDIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+169,(VL_DIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+171,(VL_MODDIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),64);
            tracep->chgQData(oldp+173,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_DIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                         : VL_DIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),64);
            tracep->chgQData(oldp+175,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)
                                         : VL_MODDIV_QQQ(64, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1, vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),64);
            tracep->chgIData(oldp+177,((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1)),32);
            tracep->chgIData(oldp+178,((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)),32);
            tracep->chgIData(oldp+179,(VL_DIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+180,(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+181,(VL_DIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+182,(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))),32);
            tracep->chgIData(oldp+183,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_DIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                         : VL_DIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),32);
            tracep->chgIData(oldp+184,(((IData)(vlSelf->ysyx_top__DOT__u_execute__DOT__u_alu__DOT___is_div_signed)
                                         ? VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2))
                                         : VL_MODDIV_III(32, (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in1), (IData)(vlSelf->ysyx_top__DOT__u_execute__DOT___alu_in2)))),32);
        }
        tracep->chgBit(oldp+185,(vlSelf->clk));
        tracep->chgBit(oldp+186,(vlSelf->rst));
    }
}

void Vysyx_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_top___024root* const __restrict vlSelf = static_cast<Vysyx_top___024root*>(voidSelf);
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
