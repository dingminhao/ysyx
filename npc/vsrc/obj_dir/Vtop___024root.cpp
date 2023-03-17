// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_1d8cb818_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->ledr = ((8U == (IData)(vlSelf->top__DOT__st_next))
                     ? (0x10U | (IData)(vlSelf->top__DOT__st_next))
                     : ((4U == (IData)(vlSelf->top__DOT__st_next))
                         ? (0x10U | (IData)(vlSelf->top__DOT__st_next))
                         : (IData)(vlSelf->top__DOT__st_cur)));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__in) 
                     << 4U) | (IData)(vlSelf->top__DOT__st_cur));
    vlSelf->top__DOT__st_next = Vtop__ConstPool__TABLE_1d8cb818_0
        [__Vtableidx1];
    vlSelf->top__DOT__in = vlSelf->set2;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__st_cur = ((IData)(vlSelf->rst)
                                 ? (IData)(vlSelf->top__DOT__st_next)
                                 : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->set1) & (~ (IData)(vlSelf->__Vclklast__TOP__set1)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if ((((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)) 
         | ((IData)(vlSelf->set1) & (~ (IData)(vlSelf->__Vclklast__TOP__set1))))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__set1 = vlSelf->set1;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->set1 & 0xfeU))) {
        Verilated::overWidthError("set1");}
    if (VL_UNLIKELY((vlSelf->set2 & 0xfeU))) {
        Verilated::overWidthError("set2");}
}
#endif  // VL_DEBUG
