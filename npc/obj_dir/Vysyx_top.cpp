// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_top.h"
#include "Vysyx_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_top::Vysyx_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_top::Vysyx_top(const char* _vcname__)
    : Vysyx_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_top::~Vysyx_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_top___024root___eval_initial(Vysyx_top___024root* vlSelf);
void Vysyx_top___024root___eval_settle(Vysyx_top___024root* vlSelf);
void Vysyx_top___024root___eval(Vysyx_top___024root* vlSelf);
QData Vysyx_top___024root___change_request(Vysyx_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_top___024root___eval_debug_assertions(Vysyx_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_top___024root___final(Vysyx_top___024root* vlSelf);

static void _eval_initial_loop(Vysyx_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_top___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/dmh/ysyx-workbench/npc/vsrc/top.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/dmh/ysyx-workbench/npc/vsrc/top.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_top::final() {
    Vysyx_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vysyx_top___024root__traceInitTop(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_top___024root*>(voidSelf);
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vysyx_top___024root__traceRegister(Vysyx_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vysyx_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
