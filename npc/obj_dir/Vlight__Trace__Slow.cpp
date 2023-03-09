// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlight__Syms.h"


void Vlight___024root__traceInitSub0(Vlight___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vlight___024root__traceInitTop(Vlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vlight___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vlight___024root__traceInitSub0(Vlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBus(c+3,"led", false,-1, 15,0);
        tracep->declBit(c+1,"light clk", false,-1);
        tracep->declBit(c+2,"light rst", false,-1);
        tracep->declBus(c+3,"light led", false,-1, 15,0);
        tracep->declBus(c+4,"light count", false,-1, 31,0);
    }
}

void Vlight___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vlight___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vlight___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vlight___024root__traceRegister(Vlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vlight___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vlight___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vlight___024root__traceCleanup, vlSelf);
    }
}

void Vlight___024root__traceFullSub0(Vlight___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vlight___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vlight___024root* const __restrict vlSelf = static_cast<Vlight___024root*>(voidSelf);
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vlight___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vlight___024root__traceFullSub0(Vlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullSData(oldp+3,(vlSelf->led),16);
        tracep->fullIData(oldp+4,(vlSelf->light__DOT__count),32);
    }
}
