// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(rst,0,0);
    VL_IN8(set1,0,0);
    VL_IN8(set2,0,0);
    VL_OUT8(ledr,4,0);

    // LOCAL SIGNALS
    CData/*3:0*/ top__DOT__st_next;
    CData/*3:0*/ top__DOT__st_cur;
    CData/*0:0*/ top__DOT__in;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP__set1;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
