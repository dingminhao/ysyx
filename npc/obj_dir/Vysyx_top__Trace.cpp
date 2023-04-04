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
            tracep->chgBit(oldp+0,((1U & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                          >> 3U))));
            tracep->chgQData(oldp+1,(((((- (QData)((IData)(
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
            tracep->chgQData(oldp+3,(vlSelf->ysyx_top__DOT__IFU__DOT__pc),64);
            tracep->chgQData(oldp+5,((((- (QData)((IData)(
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
                                            & (4ULL 
                                               + vlSelf->ysyx_top__DOT__IFU__DOT__pc))))),64);
            tracep->chgBit(oldp+7,(vlSelf->ysyx_top__DOT__access_rd));
            tracep->chgCData(oldp+8,(((IData)(vlSelf->ysyx_top__DOT__access_rd)
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                           >> 7U)))
                                       : 0U)),5);
            tracep->chgIData(oldp+9,((IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)),32);
            tracep->chgCData(oldp+10,((((((((((((((0x37U 
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
                                           & (0x13U 
                                              != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                          & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence))) 
                                         & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i))) 
                                        & (0x30200073U 
                                           != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))
                                        ? (0x1fU & (IData)(
                                                           (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                            >> 0xfU)))
                                        : 0U)),5);
            tracep->chgCData(oldp+11,(((((0x33U == 
                                          (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                        | (0x63U == 
                                           (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))
                                        ? (0x1fU & (IData)(
                                                           (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                            >> 0x14U)))
                                        : 0U)),5);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_top__DOT__rs1),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr
                                      [((((0x33U == 
                                           (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))
                                         ? (0x1fU & (IData)(
                                                            (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                             >> 0x14U)))
                                         : 0U)]),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_top__DOT__dec_imm),64);
            tracep->chgIData(oldp+18,(vlSelf->ysyx_top__DOT__dec_info_bus),19);
            tracep->chgCData(oldp+19,((0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))),7);
            tracep->chgCData(oldp+20,((7U & (IData)(
                                                    (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                     >> 0xcU)))),3);
            tracep->chgCData(oldp+21,((0x7fU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                        >> 0x19U)))),7);
            tracep->chgCData(oldp+22,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                        >> 7U)))),5);
            tracep->chgCData(oldp+23,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                        >> 0xfU)))),5);
            tracep->chgCData(oldp+24,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                        >> 0x14U)))),5);
            tracep->chgSData(oldp+25,((0xfffU & (IData)(
                                                        (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                         >> 0x14U)))),12);
            tracep->chgIData(oldp+26,((0xfffffU & (IData)(
                                                          (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                           >> 0xcU)))),20);
            tracep->chgBit(oldp+27,((0x37U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+28,((0x17U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+29,((0x6fU == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+30,((0x67U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+31,((0x63U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+32,((3U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+33,((0x23U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+34,((0x13U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+35,((0x33U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+36,((0xfU == (0x7fU 
                                              & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+37,((0x73U == (0x7fU 
                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+38,((0U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+39,((1U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+40,((2U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+41,((3U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+42,((4U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+43,((5U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+44,((6U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+45,((7U == (7U & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+46,((0U == (0x7fU & (IData)(
                                                            (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                             >> 0x19U))))));
            tracep->chgBit(oldp+47,((0x20U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                          >> 0x19U))))));
            tracep->chgBit(oldp+48,((1U == (0x7fU & (IData)(
                                                            (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                             >> 0x19U))))));
            tracep->chgBit(oldp+49,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr));
            tracep->chgBit(oldp+50,((IData)((0x63ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+51,((IData)((0x1063ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+52,((IData)((0x4063ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+53,((IData)((0x5063ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+54,((IData)((0x6063ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+55,((IData)((0x7063ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+56,((IData)((3ULL == 
                                             (0x707fULL 
                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+57,((IData)((0x1003ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+58,((IData)((0x2003ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+59,((IData)((0x4003ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+60,((IData)((0x5003ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+61,((IData)((0x23ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+62,((IData)((0x1023ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+63,((IData)((0x2023ULL 
                                             == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+64,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_addi));
            tracep->chgBit(oldp+65,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slti));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_sltiu));
            tracep->chgBit(oldp+67,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_xori));
            tracep->chgBit(oldp+68,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_ori));
            tracep->chgBit(oldp+69,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_andi));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slli));
            tracep->chgBit(oldp+71,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srli));
            tracep->chgBit(oldp+72,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srai));
            tracep->chgBit(oldp+73,((IData)((0x33ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+74,((IData)((0x40000033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+75,((IData)((0x1033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+76,((IData)((0x2033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+77,((IData)((0x3033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+78,((IData)((0x4033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+79,((IData)((0x5033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+80,((IData)((0x40005033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+81,((IData)((0x6033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+82,((IData)((0x7033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+83,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence));
            tracep->chgBit(oldp+84,((0x73U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
            tracep->chgBit(oldp+85,((0x100073U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
            tracep->chgBit(oldp+86,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i));
            tracep->chgBit(oldp+87,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrw));
            tracep->chgBit(oldp+88,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrs));
            tracep->chgBit(oldp+89,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrc));
            tracep->chgBit(oldp+90,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi));
            tracep->chgBit(oldp+91,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi));
            tracep->chgBit(oldp+92,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci));
            tracep->chgBit(oldp+93,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mul));
            tracep->chgBit(oldp+94,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulh));
            tracep->chgBit(oldp+95,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhsu));
            tracep->chgBit(oldp+96,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhu));
            tracep->chgBit(oldp+97,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_div));
            tracep->chgBit(oldp+98,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_divu));
            tracep->chgBit(oldp+99,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_rem));
            tracep->chgBit(oldp+100,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_remu));
            tracep->chgBit(oldp+101,((0x13U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
            tracep->chgBit(oldp+102,((0x30200073U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
            tracep->chgIData(oldp+103,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus),17);
            tracep->chgSData(oldp+104,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus),11);
            tracep->chgSData(oldp+105,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus),11);
            tracep->chgIData(oldp+106,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus),19);
            tracep->chgSData(oldp+107,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus),11);
            tracep->chgCData(oldp+108,(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus),8);
            tracep->chgBit(oldp+109,(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_type_muldiv));
            tracep->chgBit(oldp+110,(((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_div) 
                                        | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_divu)) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_rem)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_remu))));
            tracep->chgBit(oldp+111,(((((0x37U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                        | (0x17U == 
                                           (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                       | (0x13U == 
                                          (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                      | ((0x33U == 
                                          (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                         & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_type_muldiv))))));
            tracep->chgBit(oldp+112,((((0x6fU == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr)) 
                                      | (0x63U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
            tracep->chgBit(oldp+113,(((((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrw) 
                                          | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi)) 
                                         | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrs)) 
                                        | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrc)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))));
            tracep->chgBit(oldp+114,(((((((0x100073U 
                                           == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)) 
                                          | (0x73U 
                                             == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                         | (0x13U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                        | (0x30200073U 
                                           == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i))));
            tracep->chgBit(oldp+115,(((3U == (0x7fU 
                                              & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                      | (0x23U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
            tracep->chgQData(oldp+116,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(
                                                                   (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                    >> 0xcU)) 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+118,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                        >> 0x1fU)))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
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
            tracep->chgQData(oldp+120,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+122,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+124,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                        >> 0x1fU)))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 0x14U))))))),64);
            tracep->chgQData(oldp+126,((QData)((IData)(
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                   >> 0xfU)))))),64);
            tracep->chgQData(oldp+128,((QData)((IData)(
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                   >> 0x14U)))))),64);
            tracep->chgBit(oldp+130,(((0x37U == (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                      | (0x17U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
            tracep->chgBit(oldp+131,(((((((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_addi) 
                                            | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slti)) 
                                           | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_sltiu)) 
                                          | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_xori)) 
                                         | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_ori)) 
                                        | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_andi)) 
                                       | (3U == (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr))));
            tracep->chgBit(oldp+132,((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))));
            tracep->chgBit(oldp+133,((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slli) 
                                       | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srli)) 
                                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srai))));
            tracep->chgBit(oldp+134,(((((((((((((0x37U 
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
                                         != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))));
            tracep->chgBit(oldp+135,((((0x33U == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                       | (0x23U == 
                                          (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                      | (0x63U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))));
            tracep->chgQData(oldp+136,(vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_top__DOT__Exestage__DOT__alu_wbck_dat),64);
            tracep->chgQData(oldp+140,(((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                                               >> 3U))))) 
                                        & (4ULL + vlSelf->ysyx_top__DOT__IFU__DOT__pc))),64);
            tracep->chgBit(oldp+142,((1U == (7U & vlSelf->ysyx_top__DOT__dec_info_bus))));
            tracep->chgBit(oldp+143,((2U == (7U & vlSelf->ysyx_top__DOT__dec_info_bus))));
            tracep->chgBit(oldp+144,((IData)((0x16U 
                                              == (0x17U 
                                                  & vlSelf->ysyx_top__DOT__dec_info_bus)))));
            tracep->chgBit(oldp+145,((IData)((8U == 
                                              (0x408U 
                                               & vlSelf->ysyx_top__DOT__dec_info_bus)))));
            tracep->chgBit(oldp+146,((1U & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                            >> 0xaU))));
            tracep->chgQData(oldp+147,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+149,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[1]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[2]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[3]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[4]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[5]),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[6]),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[7]),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[8]),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[9]),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[10]),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[11]),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[12]),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[13]),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[14]),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[15]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[16]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[17]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[18]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[19]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[20]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[21]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[22]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[23]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[24]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[25]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[26]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[27]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[28]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[29]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[30]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[31]),64);
            tracep->chgIData(oldp+213,(vlSelf->ysyx_top__DOT__Regfile__DOT__i),32);
        }
        tracep->chgBit(oldp+214,(vlSelf->clk));
        tracep->chgBit(oldp+215,(vlSelf->rst));
        tracep->chgQData(oldp+216,(((IData)(vlSelf->rst)
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
