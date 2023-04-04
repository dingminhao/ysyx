// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_top.h for the primary calling header

#include "Vysyx_top___024root.h"
#include "Vysyx_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Fetch__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Fetch__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void get_pc(long long pc);

VL_INLINE_OPT void Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Fetch__DOT__get_pc_TOP(QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Fetch__DOT__get_pc_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    get_pc(pc__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vysyx_top___024root___sequent__TOP__1(Vysyx_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_top__DOT__Regfile__DOT__gpr__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v32;
    QData/*63:0*/ __Vdlyvval__ysyx_top__DOT__Regfile__DOT__gpr__v32;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_top__DOT__Regfile__DOT__i = 0x20U;
    }
    __Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v0 = 0U;
    __Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v32 = 0U;
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v0 = 1U;
    } else if (vlSelf->ysyx_top__DOT__access_rd) {
        __Vdlyvval__ysyx_top__DOT__Regfile__DOT__gpr__v32 
            = (((- (QData)((IData)((1U == (7U & vlSelf->ysyx_top__DOT__dec_info_bus))))) 
                & vlSelf->ysyx_top__DOT__Exestage__DOT__alu_wbck_dat) 
               | ((- (QData)((IData)((2U == (7U & vlSelf->ysyx_top__DOT__dec_info_bus))))) 
                  & ((- (QData)((IData)((1U & (vlSelf->ysyx_top__DOT__dec_info_bus 
                                               >> 3U))))) 
                     & (4ULL + vlSelf->ysyx_top__DOT__IFU__DOT__pc))));
        __Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v32 = 1U;
        __Vdlyvdim0__ysyx_top__DOT__Regfile__DOT__gpr__v32 
            = ((IData)(vlSelf->ysyx_top__DOT__access_rd)
                ? (0x1fU & (IData)((vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                    >> 7U))) : 0U);
    }
    if (__Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v0) {
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[1U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[2U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[3U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[4U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[5U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[6U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[7U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[8U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[9U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0xaU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0xbU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0xcU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0xdU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0xeU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0xfU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x10U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x11U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x12U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x13U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x14U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x15U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x16U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x17U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x18U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x19U] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x1aU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x1bU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x1cU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x1dU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x1eU] = 0ULL;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__ysyx_top__DOT__Regfile__DOT__gpr__v32) {
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[__Vdlyvdim0__ysyx_top__DOT__Regfile__DOT__gpr__v32] 
            = __Vdlyvval__ysyx_top__DOT__Regfile__DOT__gpr__v32;
        vlSelf->ysyx_top__DOT__Regfile__DOT__gpr[0U] = 0ULL;
    }
    vlSelf->ysyx_top__DOT__IFU__DOT__pc = ((IData)(vlSelf->rst)
                                            ? 0x80000000ULL
                                            : vlSelf->ysyx_top__DOT__IFU__DOT__next_pc);
    Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Fetch__DOT__pmem_read_TOP(vlSelf->ysyx_top__DOT__IFU__DOT__pc, vlSelf->__Vtask_ysyx_top__DOT__Fetch__DOT__pmem_read__0__rdata);
    vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data = vlSelf->__Vtask_ysyx_top__DOT__Fetch__DOT__pmem_read__0__rdata;
    Vysyx_top___024root____Vdpiimwrap_ysyx_top__DOT__Fetch__DOT__get_pc_TOP(vlSelf->ysyx_top__DOT__IFU__DOT__pc);
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus 
        = ((0xc0U & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus)) 
           | (6U | (((0x13U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)) 
                     << 5U) | (((0x100073U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)) 
                                << 4U) | ((0x73U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)) 
                                          << 3U)))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus 
        = ((0x61fU & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus)) 
           | (((IData)((0x6063ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
               << 8U) | (((IData)((0x5063ULL == (0x707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                          << 7U) | (((IData)((0x4063ULL 
                                              == (0x707fULL 
                                                  & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                     << 6U) | ((IData)(
                                                       (0x1063ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                               << 5U)))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus 
        = ((0x7fU & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus) 
           | (0x7ff80U & ((IData)((vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                   >> 0x14U)) << 7U)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus 
        = ((0x7c0U & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus)) 
           | (5U | (((IData)((0x2003ULL == (0x707fULL 
                                            & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                     << 5U) | (((IData)((0x1003ULL 
                                         == (0x707fULL 
                                             & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                << 4U) | ((IData)((3ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                          << 3U)))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus 
        = ((0x43fU & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus)) 
           | (((IData)((0x1023ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
               << 9U) | (((IData)((0x23ULL == (0x707fULL 
                                               & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                          << 8U) | (((IData)((0x5003ULL 
                                              == (0x707fULL 
                                                  & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                     << 7U) | ((IData)(
                                                       (0x4003ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                               << 6U)))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus 
        = ((0x3ffU & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus)) 
           | ((IData)((0x2023ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
              << 0xaU));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus 
        = ((0x7fffU & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus) 
           | (((0x17U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
               << 0x10U) | ((((0x13U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                              | (0x37U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                             | (0x17U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                            << 0xfU)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrw 
        = (IData)((0x1073ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrs 
        = (IData)((0x2073ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrc 
        = (IData)((0x3073ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_addi 
        = (IData)((0x13ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slti 
        = (IData)((0x2013ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slli 
        = (IData)((0x1013ULL == (0xfe00707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_sltiu 
        = (IData)((0x3013ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_xori 
        = (IData)((0x4013ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_ori = (IData)(
                                                            (0x6013ULL 
                                                             == 
                                                             (0x707fULL 
                                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_andi 
        = (IData)((0x7013ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srli 
        = (IData)((0x5013ULL == (0xfe00707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srai 
        = (IData)((0x40005013ULL == (0xfe00707fULL 
                                     & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence 
        = (IData)((0xfULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i 
        = (IData)((0x100fULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_remu 
        = (IData)((0x2007033ULL == (0xfe00707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mul = (IData)(
                                                            (0x2000033ULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulh 
        = (IData)((0x2001033ULL == (0xfe00707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhsu 
        = (IData)((0x2002033ULL == (0xfe00707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhu 
        = (IData)((0x2003033ULL == (0xfe00707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_div = (IData)(
                                                            (0x2004033ULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_divu 
        = (IData)((0x2005033ULL == (0xfe00707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_rem = (IData)(
                                                            (0x2006033ULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci 
        = (IData)((0x7073ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr 
        = (IData)((0x67ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi 
        = (IData)((0x5073ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi 
        = (IData)((0x6073ULL == (0x707fULL & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus 
        = ((0x1ffc0U & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus) 
           | (1U | ((((IData)((0x33ULL == (0xfe00707fULL 
                                           & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_addi)) 
                     << 5U) | (((0x17U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                << 4U) | ((0x37U == 
                                           (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                          << 3U)))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus 
        = ((0x1fe3fU & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus) 
           | ((((IData)((0x2033ULL == (0xfe00707fULL 
                                       & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slti)) 
               << 8U) | ((((IData)((0x1033ULL == (0xfe00707fULL 
                                                  & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                           | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slli)) 
                          << 7U) | ((IData)((0x40000033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                    << 6U))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus 
        = ((0x1f1ffU & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus) 
           | ((((IData)((0x5033ULL == (0xfe00707fULL 
                                       & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srli)) 
               << 0xbU) | ((((IData)((0x4033ULL == 
                                      (0xfe00707fULL 
                                       & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                             | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_xori)) 
                            << 0xaU) | (((IData)((0x3033ULL 
                                                  == 
                                                  (0xfe00707fULL 
                                                   & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                         | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_sltiu)) 
                                        << 9U))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus 
        = ((0x18fffU & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus) 
           | ((((IData)((0x7033ULL == (0xfe00707fULL 
                                       & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_andi)) 
               << 0xeU) | ((((IData)((0x6033ULL == 
                                      (0xfe00707fULL 
                                       & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                             | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_ori)) 
                            << 0xdU) | (((IData)((0x40005033ULL 
                                                  == 
                                                  (0xfe00707fULL 
                                                   & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                         | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srai)) 
                                        << 0xcU))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus 
        = ((0x3fU & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus)) 
           | ((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence) 
                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i)) 
               << 7U) | ((0x30200073U == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)) 
                         << 6U)));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus 
        = ((0x3ffU & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus)) 
           | ((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_remu) 
              << 0xaU));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus 
        = ((0x7c0U & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus)) 
           | (3U | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhsu) 
                     << 5U) | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulh) 
                                << 4U) | ((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mul) 
                                          << 3U)))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus 
        = ((0x43fU & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus)) 
           | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_rem) 
               << 9U) | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_divu) 
                          << 8U) | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_div) 
                                     << 7U) | ((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhu) 
                                               << 6U)))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__inst_type_muldiv 
        = ((((((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mul) 
                 | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulh)) 
                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhsu)) 
               | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_mulhu)) 
              | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_div)) 
             | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_divu)) 
            | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_rem)) 
           | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_remu));
    vlSelf->ysyx_top__DOT__access_rd = (((((((0x37U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                            | (0x6fU 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                           | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr)) 
                                          | (3U == 
                                             (0x7fU 
                                              & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                         | (0x13U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                        | (0x33U == 
                                           (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus 
        = ((0x7e0U & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus)) 
           | (2U | (((IData)((0x63ULL == (0x707fULL 
                                          & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                     << 4U) | (((0x6fU == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr)) 
                               << 3U))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus 
        = ((0x1ffU & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus)) 
           | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr) 
               << 0xaU) | ((IData)((0x7063ULL == (0x707fULL 
                                                  & vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                           << 9U)));
    vlSelf->ysyx_top__DOT__rs1 = vlSelf->ysyx_top__DOT__Regfile__DOT__gpr
        [(((((((((((((0x37U != (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                     & (0x17U != (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                    & (0x6fU != (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                   & (0x73U != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                  & (0x100073U != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                 & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi))) 
                & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi))) 
               & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))) 
              & (0x13U != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
             & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence))) 
            & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i))) 
           & (0x30200073U != (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))
           ? (0x1fU & (IData)((vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                               >> 0xfU))) : 0U)];
    vlSelf->ysyx_top__DOT__dec_imm = ((((((((- (QData)((IData)(
                                                               ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                                | (0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))))) 
                                            & (((QData)((IData)(
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
                                                                  << 0xcU))))) 
                                           | ((- (QData)((IData)(
                                                                 (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))))) 
                                              & (((- (QData)((IData)(
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
                                                                             << 1U))))))))) 
                                          | ((- (QData)((IData)(
                                                                (0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))))) 
                                             & (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 0x1fU)))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
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
                                                                            << 1U))))))))) 
                                         | ((- (QData)((IData)(
                                                               (0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                               >> 0x1fU)))))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                               >> 0x19U)) 
                                                                      << 5U)) 
                                                                  | (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                                >> 7U))))))))) 
                                        | ((- (QData)((IData)(
                                                              ((((((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_addi) 
                                                                     | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slti)) 
                                                                    | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_sltiu)) 
                                                                   | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_xori)) 
                                                                  | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_ori)) 
                                                                 | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_andi)) 
                                                                | (3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                                               | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                              >> 0x1fU)))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                            >> 0x14U)))))))) 
                                       | ((- (QData)((IData)(
                                                             (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi) 
                                                               | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                                                              | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci))))) 
                                          & (QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                        >> 0xfU))))))) 
                                      | ((- (QData)((IData)(
                                                            (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_slli) 
                                                              | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srli)) 
                                                             | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_srai))))) 
                                         & (QData)((IData)(
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                                                       >> 0x14U)))))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus 
        = ((0x7ffe0U & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus) 
           | (4U | ((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrs) 
                      | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                     << 4U) | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrw) 
                                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi)) 
                               << 3U))));
    vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus 
        = ((0x7ff9fU & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus) 
           | (((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi) 
                 | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci)) 
               << 6U) | (((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrc) 
                          | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci)) 
                         << 5U)));
    vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2 = 
        ((IData)(vlSelf->ysyx_top__DOT__access_rs2)
          ? vlSelf->ysyx_top__DOT__Regfile__DOT__gpr
         [((((0x33U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
             | (0x23U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
            | (0x63U == (0x7fU & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))))
            ? (0x1fU & (IData)((vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data 
                                >> 0x14U))) : 0U)] : vlSelf->ysyx_top__DOT__dec_imm);
    vlSelf->ysyx_top__DOT__dec_info_bus = (((((((- (IData)(
                                                           ((((0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                              | (0x17U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                                             | (0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))) 
                                                            | ((0x33U 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                               & (~ (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_type_muldiv)))))) 
                                                & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_alu_info_bus) 
                                               | ((- (IData)(
                                                             (((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                               | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_jalr)) 
                                                              | (0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))))) 
                                                  & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_bjp_info_bus))) 
                                              | ((- (IData)((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_type_muldiv))) 
                                                 & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_muldiv_info_bus))) 
                                             | ((- (IData)(
                                                           ((((((IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrw) 
                                                                | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrwi)) 
                                                               | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrs)) 
                                                              | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrsi)) 
                                                             | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrc)) 
                                                            | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_csrrci)))) 
                                                & vlSelf->ysyx_top__DOT__Idstage__DOT__dec_csr_info_bus)) 
                                            | ((- (IData)(
                                                          ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)))))) 
                                               & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_mem_info_bus))) 
                                           | ((- (IData)(
                                                         ((((((0x100073U 
                                                               == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data)) 
                                                              | (0x73U 
                                                                 == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                             | (0x13U 
                                                                == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                            | (0x30200073U 
                                                               == (IData)(vlSelf->ysyx_top__DOT__Fetch__DOT___mem_data))) 
                                                           | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence)) 
                                                          | (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__inst_fence_i)))) 
                                              & (IData)(vlSelf->ysyx_top__DOT__Idstage__DOT__dec_sys_info_bus)));
    if (VL_UNLIKELY((IData)((0x16U == (0x17U & vlSelf->ysyx_top__DOT__dec_info_bus))))) {
        VL_FINISH_MT("/home/dmh/ysyx-workbench/npc/vsrc/exe_stage.v", 62, "");
    }
    if ((1U == (7U & vlSelf->ysyx_top__DOT__dec_info_bus))) {
        vlSelf->ysyx_top__DOT__Exestage__DOT__alu_wbck_dat 
            = ((8U & vlSelf->ysyx_top__DOT__dec_info_bus)
                ? vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2
                : ((0x10U & vlSelf->ysyx_top__DOT__dec_info_bus)
                    ? (vlSelf->ysyx_top__DOT__IFU__DOT__pc 
                       + vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2)
                    : ((0x20U & vlSelf->ysyx_top__DOT__dec_info_bus)
                        ? (vlSelf->ysyx_top__DOT__rs1 
                           + vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2)
                        : ((0x40U & vlSelf->ysyx_top__DOT__dec_info_bus)
                            ? (vlSelf->ysyx_top__DOT__rs1 
                               - vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2)
                            : ((0x80U & vlSelf->ysyx_top__DOT__dec_info_bus)
                                ? VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_top__DOT__rs1, vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2)
                                : ((0x100U & vlSelf->ysyx_top__DOT__dec_info_bus)
                                    ? ((vlSelf->ysyx_top__DOT__rs1 
                                        > vlSelf->ysyx_top__DOT__Exestage__DOT__alu_op2)
                                        ? 1ULL : 0ULL)
                                    : 0ULL))))));
    } else if ((3U != (7U & vlSelf->ysyx_top__DOT__dec_info_bus))) {
        vlSelf->ysyx_top__DOT__Exestage__DOT__alu_wbck_dat = 0ULL;
    }
}

VL_INLINE_OPT void Vysyx_top___024root___combo__TOP__4(Vysyx_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->ysyx_top__DOT__IFU__DOT__next_pc = ((IData)(vlSelf->rst)
                                                 ? 0x80000004ULL
                                                 : 
                                                ((8U 
                                                  & vlSelf->ysyx_top__DOT__dec_info_bus)
                                                  ? 
                                                 ((((- (QData)((IData)(
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
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->ysyx_top__DOT__IFU__DOT__pc)));
}

void Vysyx_top___024root___eval(Vysyx_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_top___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_top___024root___change_request_1(Vysyx_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_top___024root___change_request(Vysyx_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root___change_request\n"); );
    // Body
    return (Vysyx_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_top___024root___change_request_1(Vysyx_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_top___024root___eval_debug_assertions(Vysyx_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
