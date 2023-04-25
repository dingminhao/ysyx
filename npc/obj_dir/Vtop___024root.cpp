// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_inst_read(long long raddr, long long* rdata, char rmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_fetch__DOT__pmem_inst_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_fetch__DOT__pmem_inst_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rmask__Vcvt;
    for (size_t rmask__Vidx = 0; rmask__Vidx < 1; ++rmask__Vidx) rmask__Vcvt = rmask;
    pmem_inst_read(raddr__Vcvt, &rdata__Vcvt, rmask__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_read(long long pc, long long raddr, long long* rdata, char rmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__pmem_read_TOP(QData/*63:0*/ pc, QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__pmem_read_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rmask__Vcvt;
    for (size_t rmask__Vidx = 0; rmask__Vidx < 1; ++rmask__Vidx) rmask__Vcvt = rmask;
    pmem_read(pc__Vcvt, raddr__Vcvt, &rdata__Vcvt, rmask__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long pc, long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__pmem_write_TOP(QData/*63:0*/ pc, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__pmem_write_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(pc__Vcvt, waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_nextpc(long long nextpc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__set_nextpc_TOP(QData/*63:0*/ nextpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__set_nextpc_TOP\n"); );
    // Body
    long long nextpc__Vcvt;
    for (size_t nextpc__Vidx = 0; nextpc__Vidx < 1; ++nextpc__Vidx) nextpc__Vcvt = nextpc;
    set_nextpc(nextpc__Vcvt);
}

extern "C" void inst_commit(long long pc, int inst, svBit commit_valid);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_writeback__DOT__inst_commit_TOP(QData/*63:0*/ pc, IData/*31:0*/ inst, CData/*0:0*/ commit_valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_writeback__DOT__inst_commit_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    svBit commit_valid__Vcvt;
    for (size_t commit_valid__Vidx = 0; commit_valid__Vidx < 1; ++commit_valid__Vidx) commit_valid__Vcvt = commit_valid;
    inst_commit(pc__Vcvt, inst__Vcvt, commit_valid__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_rv64_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_rv64_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ top__DOT__u_dcode__DOT___type_system;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrs;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrc;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrsi;
    CData/*0:0*/ top__DOT__u_dcode__DOT___inst_csrrci;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound2;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound3;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound4;
    CData/*0:0*/ top__DOT__u_dcode__DOT____Vlvbound5;
    CData/*0:0*/ top__DOT__u_execute_top__DOT___rs1_rs2;
    CData/*0:0*/ top__DOT__u_execute_top__DOT___rs1_imm;
    CData/*0:0*/ top__DOT__u_execute_top__DOT___pc_4;
    CData/*0:0*/ top__DOT__u_execute_top__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isCF;
    CData/*0:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT;
    CData/*0:0*/ top__DOT__u_memory__DOT___isload;
    CData/*0:0*/ top__DOT__u_memory__DOT___isstore;
    CData/*0:0*/ top__DOT__u_memory__DOT___ls8byte;
    CData/*0:0*/ top__DOT__u_memory__DOT___ls16byte;
    CData/*0:0*/ top__DOT__u_memory__DOT___ls32byte;
    CData/*0:0*/ top__DOT__u_memory__DOT___unsigned;
    CData/*0:0*/ top__DOT__u_memory__DOT___signed;
    CData/*7:0*/ top__DOT__u_memory__DOT___mask;
    CData/*0:0*/ top__DOT__u_memory__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__u_clint__DOT___trap_ebreak;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_rv64_gpr_regfile__DOT__rf__v0;
    VlWide<3>/*64:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a;
    VlWide<3>/*64:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b;
    VlWide<3>/*64:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___add_out;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp9;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    CData/*31:0*/ __Vdeeptemp37;
    QData/*63:0*/ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_out;
    QData/*63:0*/ top__DOT__u_memory__DOT___mem_read;
    QData/*63:0*/ top__DOT__u_memory__DOT___addr;
    QData/*63:0*/ __Vdly__top__DOT__u_id_ex__DOT___csr_data_id_ex_q;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_rv64_gpr_regfile__DOT__rf__v0;
    // Body
    __Vdly__top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
        = vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q;
    Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__set_nextpc_TOP(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q);
    Vtop___024root____Vdpiimwrap_top__DOT__u_writeback__DOT__inst_commit_TOP(vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q, vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q, 
                                                                             ((0ULL 
                                                                               != vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q) 
                                                                              & (0x13U 
                                                                                != vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__mem_data_mem);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 1U)))) {
        vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
            = ((2U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : vlSelf->top__DOT__u_fetch__DOT___if_trap_bus);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___pc_op_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___rs2_idx_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___rs1_idx_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__exc_alu_data_ex);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q 
            = ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                   >> 2U)) & (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___imm_data_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : (QData)((IData)((0x1fU & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xfU)))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q 
            = ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                   >> 4U)) & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q));
    }
    __Vdlyvval__top__DOT__u_rv64_gpr_regfile__DOT__rf__v0 
        = vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data;
    __Vdlyvdim0__top__DOT__u_rv64_gpr_regfile__DOT__rf__v0 
        = vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q;
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___alu_op));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___rs1_data_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q);
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__u_id_ex__DOT___csr_data_id_ex_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        __Vdly__top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : ((0x300U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                           ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q
                           : ((0x341U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                               ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q
                               : ((0x342U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                   ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q
                                   : ((0x343U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                       ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q
                                       : ((0x305U == (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx))
                                           ? vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q
                                           : 0ULL))))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (((((((((((((1U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_auipc)))) 
                                   | (2U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_lui))))) 
                                  | (3U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))))) 
                                 | (4U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jalr))))) 
                                | (5U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load))))) 
                               | (6U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store))))) 
                              | (7U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))))) 
                             | (8U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm))))) 
                            | (9U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32))))) 
                           | (0xaU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op))))) 
                          | (0xbU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32))))) 
                         | (0xcU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr))))) 
                        | (0xdU & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_ebreak))))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___pc_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___inst_data_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0x13U : vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q);
    }
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q);
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fffeU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | (IData)(top__DOT__u_execute_top__DOT____Vlvbound1));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 1U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fffdU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 1U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 2U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fffbU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 2U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 3U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fff7U & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 3U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 4U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ffefU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 4U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 5U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ffdfU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 5U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 6U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ffbfU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 6U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 7U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7ff7fU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 7U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 8U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7feffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 8U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 9U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fdffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 9U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xaU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7fbffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xaU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xbU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7f7ffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xbU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xcU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7efffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xcU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xdU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7dfffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xdU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xeU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x7bfffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xeU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0xfU));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x77fffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0xfU));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0x10U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x6ffffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0x10U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0x11U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x5ffffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0x11U));
    top__DOT__u_execute_top__DOT____Vlvbound1 = (1U 
                                                 & (vlSelf->top__DOT__u_id_ex__DOT___trap_bus_id_ex_q 
                                                    >> 0x12U));
    vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus 
        = ((0x3ffffU & vlSelf->top__DOT__u_execute_top__DOT___exc_trap_bus) 
           | ((IData)(top__DOT__u_execute_top__DOT____Vlvbound1) 
              << 0x12U));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___pc_op_id_ex_q = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___csr_addr_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___mem_op_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___mem_op));
    }
    top__DOT__u_memory__DOT___unsigned = (((5U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                           | (4U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                          | (7U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    top__DOT__u_memory__DOT___signed = ((((2U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                          | (1U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                         | (3U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                        | (6U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    top__DOT__u_memory__DOT___isload = (((((((1U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                            | (6U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                           | (2U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                          | (5U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                         | (3U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                        | (7U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    top__DOT__u_memory__DOT___isstore = ((((8U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                           | (0xbU 
                                              == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                          | (9U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                         | (0xaU == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    top__DOT__u_memory__DOT___addr = ((0U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))
                                       ? 0x80000000ULL
                                       : vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q);
    top__DOT__u_memory__DOT___ls8byte = (((1U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                          | (4U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                         | (8U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    top__DOT__u_memory__DOT___ls16byte = (((2U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                           | (5U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                          | (9U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    top__DOT__u_memory__DOT___ls32byte = (((3U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q))) 
                                          | (7U == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_dcode__DOT___imm_data);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___csr_writevalid_ex_mem_q 
            = (1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                         >> 3U)) & (~ ((0U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q)) 
                                       | (1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))));
    }
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed 
        = ((((0x19U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
             | (0x1dU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
            | (0x1bU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0x1fU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32 
        = ((((0x1dU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
             | (0x1eU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
            | (0x1fU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0x20U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra 
        = ((8U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (0xbU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl 
        = ((7U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (0xaU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll 
        = ((6U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (9U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32 
        = (((9U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
            | (0xbU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0xaU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP 
        = ((((((((0xcU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                 | (0x13U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                | (0xdU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
               | (0xeU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
              | (0xfU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
             | (0x10U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
            | (0x11U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
           | (0x12U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : ((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)
                           ? vlSelf->top__DOT__exc_alu_data_ex
                           : ((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q)) 
                               & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx)))
                               ? vlSelf->top__DOT__mem_data_mem
                               : (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
                                   == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                   ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                   : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                  [vlSelf->top__DOT__u_dcode__DOT___rs2_idx]))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : ((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid)
                           ? vlSelf->top__DOT__exc_alu_data_ex
                           : ((((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q)) 
                               & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx)))
                               ? vlSelf->top__DOT__mem_data_mem
                               : (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
                                   == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
                                   ? vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data
                                   : vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf
                                  [vlSelf->top__DOT__u_dcode__DOT___rs1_idx]))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q = 0xa00001800ULL;
    } else if (vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_q 
            = ((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q = 0ULL;
    } else if (vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q 
            = ((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q = 0ULL;
    } else if (vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_q 
            = ((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q = 0ULL;
    } else if (vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q 
            = ((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q = 0ULL;
    } else if (vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_q 
            = ((IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                ? vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                : vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q);
    }
    top__DOT__u_execute_top__DOT___rs1_rs2 = (((0xbU 
                                                == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                               | (0xaU 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    top__DOT__u_execute_top__DOT___rs1_imm = ((((8U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                                | (9U 
                                                   == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
                                               | (5U 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
                                              | (6U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    top__DOT__u_execute_top__DOT___pc_4 = ((3U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                           | (4U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    top__DOT__u_memory__DOT___mask = (0xffU & ((((1U 
                                                  & (- (IData)((IData)(top__DOT__u_memory__DOT___ls8byte)))) 
                                                 | (3U 
                                                    & (- (IData)((IData)(top__DOT__u_memory__DOT___ls16byte))))) 
                                                | (0xfU 
                                                   & (- (IData)((IData)(top__DOT__u_memory__DOT___ls32byte))))) 
                                               | (- (IData)(
                                                            ((6U 
                                                              == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)) 
                                                             | (0xbU 
                                                                == (IData)(vlSelf->top__DOT__u_ex_mem__DOT___mem_op_ex_mem_q)))))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
           | (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP));
    vlSelf->top__DOT__u_rv64_gpr_regfile__DOT__rf[__Vdlyvdim0__top__DOT__u_rv64_gpr_regfile__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__u_rv64_gpr_regfile__DOT__rf__v0;
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_idx_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_idx));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__csr_mstatus_writedata);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q 
            = ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                   >> 4U)) & (IData)(vlSelf->top__DOT__csr_mstatus_write_valid));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__csr_mtvec_writedata);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q 
            = ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                   >> 4U)) & (IData)(vlSelf->top__DOT__csr_mtvec_write_valid));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_writedata_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : 0xbULL);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q 
            = (1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                         >> 4U)) & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                    >> 0x12U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q 
            = (1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                         >> 4U)) & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                    >> 0x12U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_writedata_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q 
            = (1U & ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                         >> 4U)) & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                    >> 0x12U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_writedata_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : (QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 4U)))) {
        vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_data_mem_wb_q 
            = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q);
    }
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q);
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fffeU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | (IData)(top__DOT__u_memory__DOT____Vlvbound1));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 1U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fffdU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 1U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 2U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fffbU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 2U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 3U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fff7U & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 3U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 4U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ffefU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 4U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 5U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ffdfU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 5U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 6U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ffbfU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 6U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 7U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7ff7fU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 7U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 8U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7feffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 8U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 9U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fdffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 9U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xaU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7fbffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xaU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xbU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7f7ffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xbU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xcU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7efffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xcU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xdU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7dfffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xdU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xeU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x7bfffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xeU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0xfU));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x77fffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0xfU));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0x10U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x6ffffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0x10U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0x11U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x5ffffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0x11U));
    top__DOT__u_memory__DOT____Vlvbound1 = (1U & (vlSelf->top__DOT__u_ex_mem__DOT___trap_bus_ex_mem_q 
                                                  >> 0x12U));
    vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
        = ((0x3ffffU & vlSelf->top__DOT__u_memory__DOT___mem_trap_bus) 
           | ((IData)(top__DOT__u_memory__DOT____Vlvbound1) 
              << 0x12U));
    vlSelf->top__DOT__u_rv64_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___rd_addr_mem_wb_q))
            ? 0ULL : vlSelf->top__DOT__u_mem_wb__DOT___mem_data_mem_wb_q);
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___rd_idx_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q));
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q;
    if ((0x300U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mstatus_en 
            = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            if ((0x342U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                if ((0x343U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                    if ((0x305U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                        vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_en 
                            = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            if ((0x342U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mcause_en 
                    = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
            }
        }
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_en 
                = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q);
    }
    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en 
        = vlSelf->top__DOT__u_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q;
    if ((0x300U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
        if ((0x341U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
            if ((0x342U != (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                if ((0x343U == (IData)(vlSelf->top__DOT__u_mem_wb__DOT___csr_addr_mem_wb_q))) {
                    vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtval_en 
                        = vlSelf->top__DOT__u_mem_wb__DOT___exc_csr_valid_mem_wb_q;
                }
            }
        }
    }
    top__DOT__u_clint__DOT___trap_ebreak = (1U & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                  >> 0x11U));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___inst_data_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0x13U : vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__u_ex_mem__DOT___csr_writedata_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : (((((- (QData)((IData)((2U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                             & vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2) 
                            | ((- (QData)((IData)((3U 
                                                   == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                               & (vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
                                  | vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2))) 
                           | ((- (QData)((IData)((4U 
                                                  == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                              & (vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
                                 & (~ vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2)))) 
                          | ((- (QData)((IData)((1U 
                                                 == (IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q))))) 
                             & vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q)));
    }
    if (VL_UNLIKELY(top__DOT__u_clint__DOT___trap_ebreak)) {
        VL_FINISH_MT("/home/dmh/ysyx-workbench/npc/vsrc/core/clint.v", 115, "");
    }
    vlSelf->top__DOT__u_clint__DOT___trap_valid = (1U 
                                                   & (((vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                        >> 0x12U) 
                                                       | (IData)(top__DOT__u_clint__DOT___trap_ebreak)) 
                                                      | (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                         >> 0x10U)));
    vlSelf->top__DOT__u_execute_top__DOT__u_execute_csr__DOT___csr_op2 
        = ((IData)(vlSelf->top__DOT__u_id_ex__DOT___csr_imm_valid_id_ex_q)
            ? vlSelf->top__DOT__u_id_ex__DOT___csr_imm_id_ex_q
            : vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q);
    vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q 
        = __Vdly__top__DOT__u_id_ex__DOT___csr_data_id_ex_q;
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                           | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                          | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                         | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))
                         ? (0x1fU & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                     >> 7U)) : 0U));
    }
    top__DOT__u_memory__DOT___mem_read = 0ULL;
    if (top__DOT__u_memory__DOT___isload) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__pmem_read_TOP(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q, top__DOT__u_memory__DOT___addr, vlSelf->__Vtask_top__DOT__u_memory__DOT__pmem_read__2__rdata, 
                                                                            ((IData)(top__DOT__u_memory__DOT___isload)
                                                                              ? (IData)(top__DOT__u_memory__DOT___mask)
                                                                              : 0U));
        top__DOT__u_memory__DOT___mem_read = vlSelf->__Vtask_top__DOT__u_memory__DOT__pmem_read__2__rdata;
    } else if (top__DOT__u_memory__DOT___isstore) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_memory__DOT__pmem_write_TOP(vlSelf->top__DOT__u_ex_mem__DOT___pc_ex_mem_q, top__DOT__u_memory__DOT___addr, 
                                                                             ((IData)(top__DOT__u_memory__DOT___ls8byte)
                                                                               ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q))))
                                                                               : 
                                                                              ((IData)(top__DOT__u_memory__DOT___ls16byte)
                                                                                ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q))))
                                                                                : 
                                                                               ((IData)(top__DOT__u_memory__DOT___ls32byte)
                                                                                 ? (QData)((IData)(vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q))
                                                                                 : vlSelf->top__DOT__u_ex_mem__DOT___rs2_data_ex_mem_q))), 
                                                                             ((IData)(top__DOT__u_memory__DOT___isstore)
                                                                               ? (IData)(top__DOT__u_memory__DOT___mask)
                                                                               : 0U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___inst_data_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0x13U : vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q);
    }
    vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
        = ((((((- (QData)((IData)(top__DOT__u_execute_top__DOT___rs1_rs2))) 
               & vlSelf->top__DOT__u_id_ex__DOT___rs2_data_id_ex_q) 
              | ((- (QData)((IData)(top__DOT__u_execute_top__DOT___rs1_imm))) 
                 & vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)) 
             | ((- (QData)((IData)((0xcU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))))) 
                & vlSelf->top__DOT__u_id_ex__DOT___csr_data_id_ex_q)) 
            | (4ULL & (- (QData)((IData)(top__DOT__u_execute_top__DOT___pc_4))))) 
           | (0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                          ((1U 
                                                            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                                           | (2U 
                                                              == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)))))) 
                                       & vlSelf->top__DOT__u_id_ex__DOT___imm_data_id_ex_q)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__u_id_ex__DOT___csr_op_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : ((((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set) 
                          | (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)) 
                         & (0U == (0x1fU & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                            >> 0xfU))))
                         ? 1U : (((2U & (- (IData)(
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrw) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi))))) 
                                  | (3U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_set))))) 
                                 | (4U & (- (IData)((IData)(vlSelf->top__DOT__u_dcode__DOT___csr_clear)))))));
    }
    vlSelf->top__DOT__mem_data_mem = (((IData)(top__DOT__u_memory__DOT___unsigned) 
                                       | (IData)(top__DOT__u_memory__DOT___signed))
                                       ? ((IData)(top__DOT__u_memory__DOT___signed)
                                           ? ((IData)(top__DOT__u_memory__DOT___ls8byte)
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (top__DOT__u_memory__DOT___mem_read 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(top__DOT__u_memory__DOT___mem_read)))))
                                               : ((IData)(top__DOT__u_memory__DOT___ls16byte)
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(top__DOT__u_memory__DOT___mem_read)))))
                                                   : 
                                                  ((IData)(top__DOT__u_memory__DOT___ls32byte)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (top__DOT__u_memory__DOT___mem_read 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(top__DOT__u_memory__DOT___mem_read)))
                                                    : top__DOT__u_memory__DOT___mem_read)))
                                           : ((IData)(top__DOT__u_memory__DOT___unsigned)
                                               ? ((IData)(top__DOT__u_memory__DOT___ls8byte)
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(top__DOT__u_memory__DOT___mem_read))))
                                                   : 
                                                  ((IData)(top__DOT__u_memory__DOT___ls16byte)
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(top__DOT__u_memory__DOT___mem_read))))
                                                    : 
                                                   ((IData)(top__DOT__u_memory__DOT___ls32byte)
                                                     ? (QData)((IData)(top__DOT__u_memory__DOT___mem_read))
                                                     : top__DOT__u_memory__DOT___mem_read)))
                                               : 0ULL))
                                       : vlSelf->top__DOT__u_ex_mem__DOT___alu_data_ex_mem_q);
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2 
        = (0x3fU & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                     ? (0x1fU & (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                     : (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[0U] 
        = ((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2) 
           ^ (- (IData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[1U] 
        = ((IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                    >> 0x20U)) ^ (- (IData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U] 
        = (1U & ((1U & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                                >> 0x3fU))) ^ (- (IData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop)))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 1U)))) {
        vlSelf->top__DOT__u_if_id__DOT___inst_addr_if_id_q 
            = ((2U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0ULL : vlSelf->top__DOT__u_pc_reg__DOT___pc_current);
    }
    vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
        = (((- (QData)((IData)(((IData)(top__DOT__u_execute_top__DOT___rs1_rs2) 
                                | (IData)(top__DOT__u_execute_top__DOT___rs1_imm))))) 
            & vlSelf->top__DOT__u_id_ex__DOT___rs1_data_id_ex_q) 
           | ((- (QData)((IData)(((IData)(top__DOT__u_execute_top__DOT___pc_4) 
                                  | (1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)))))) 
              & vlSelf->top__DOT__u_id_ex__DOT___pc_id_ex_q));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 1U)))) {
        vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
            = ((2U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0x13U : (IData)(vlSelf->top__DOT__u_fetch__DOT___mem_data));
    }
    __Vtemp6[0U] = (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1);
    __Vtemp6[1U] = (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                            >> 0x20U));
    __Vtemp6[2U] = (((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                       | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                      | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                     | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                    & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                               >> 0x3fU)));
    VL_EXTEND_WW(128,65, __Vtemp7, __Vtemp6);
    __Vtemp8[0U] = (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2);
    __Vtemp8[1U] = (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                            >> 0x20U));
    __Vtemp8[2U] = ((((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                      | (0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                     | (0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                    & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in2 
                               >> 0x3fU)));
    VL_EXTEND_WW(128,65, __Vtemp9, __Vtemp8);
    VL_MUL_W(4, __Vtemp10, __Vtemp7, __Vtemp9);
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U] 
        = __Vtemp10[0U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[1U] 
        = __Vtemp10[1U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[2U] 
        = __Vtemp10[2U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[3U] 
        = __Vtemp10[3U];
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
        = ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
            ? (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1))
            : vlSelf->top__DOT__u_execute_top__DOT___alu_in1);
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[0U] 
        = (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1);
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[1U] 
        = (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                   >> 0x20U));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U] 
        = (1U & (IData)((vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                         >> 0x3fU)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0x80000000ULL;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))) {
        vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
            = vlSelf->top__DOT__u_pc_reg__DOT___pc_next;
    }
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffffff8ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x3fU))))))));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffffffc7ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffffe3fULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffff1ffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffff8fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffffffc7fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffffe3ffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffff1fffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffff8ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffffc7ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffffe3fffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffff1ffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffff8fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffc7fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffe3ffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffff1fffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfff8ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffc7ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfe3fffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xf1ffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0x8fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num)))) 
              << 0x3fU));
    VL_ADD_W(3, __Vtemp13, top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a, top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b);
    VL_EXTEND_WI(65,1, __Vtemp14, (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop));
    VL_ADD_W(3, __Vtemp15, __Vtemp13, __Vtemp14);
    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U] 
        = __Vtemp15[0U];
    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U] 
        = __Vtemp15[1U];
    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U] 
        = (1U & __Vtemp15[2U]);
    vlSelf->top__DOT__u_dcode__DOT___type_jal = (IData)(
                                                        (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_auipc = (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_lui = (IData)(
                                                        (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_branch = (IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_store = (IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_jalr = (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op_imm = (IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32 
        = (IData)((0x1bU == (0x7fU & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_load = (IData)(
                                                         (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op = (IData)(
                                                       (0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_dcode__DOT___type_op_32 = (IData)(
                                                          (0x3bU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    top__DOT__u_dcode__DOT___type_system = (IData)(
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
        = (((- (QData)((IData)((((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra) 
                                 | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl)) 
                                | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll))))) 
            & (((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra) 
                | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))
                ? vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv
                : vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num)) 
           << (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2));
    top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT 
        = (1U & ((top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U] 
                  >> 0x1fU) ^ (top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U] 
                               ^ (top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U] 
                                  >> 0x1fU))));
    top__DOT__u_execute_top__DOT__u_alu__DOT___isCF 
        = (1U & ((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSUBop) 
                 ^ (((((top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U] 
                        | top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U]) 
                       | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]) 
                      & ((top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U] 
                          | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U])) 
                         | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]))) 
                     & (((~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U]) 
                         | top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U]) 
                        | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]))) 
                    & (((~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_a[2U]) 
                        | (~ top__DOT__u_execute_top__DOT__u_alu__DOT___alu_b[2U])) 
                       | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U]))));
    vlSelf->top__DOT__u_dcode__DOT___U_type = ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_auipc) 
                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_lui));
    vlSelf->top__DOT__u_dcode__DOT___mem_op = (((((
                                                   ((((((1U 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                       & (0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU))))))) 
                                                        | (4U 
                                                           & (- (IData)(
                                                                        ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                         & (4U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0xcU)))))))) 
                                                       | (2U 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                        & (1U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU)))))))) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                       & (2U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU)))))))) 
                                                     | (5U 
                                                        & (- (IData)(
                                                                     ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                      & (5U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0xcU)))))))) 
                                                    | (8U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                     & (0U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                            >> 0xcU)))))))) 
                                                   | (9U 
                                                      & (- (IData)(
                                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                    & (1U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0xcU)))))))) 
                                                  | (0xaU 
                                                     & (- (IData)(
                                                                  ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                   & (2U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0xcU)))))))) 
                                                 | (7U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                  & (6U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                         >> 0xcU)))))))) 
                                                | (6U 
                                                   & (- (IData)(
                                                                ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                                 & (3U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0xcU)))))))) 
                                               | (0xbU 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store) 
                                                                & (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0xcU))))))));
    vlSelf->top__DOT__u_dcode__DOT___R_type = ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32));
    vlSelf->top__DOT__u_dcode__DOT___inst_ebreak = 
        (((IData)(top__DOT__u_dcode__DOT___type_system) 
          & (0U == (7U & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                          >> 0xcU)))) & (1U == (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0x14U)));
    vlSelf->top__DOT__u_dcode__DOT___inst_csrrw = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                          >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrs = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                           & (2U == 
                                              (7U & 
                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrc = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                           & (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0xcU))));
    vlSelf->top__DOT__u_dcode__DOT___I_type = (((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_load) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm)) 
                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32)) 
                                                | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jalr)) 
                                               | (IData)(top__DOT__u_dcode__DOT___type_system));
    vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi = 
        ((IData)(top__DOT__u_dcode__DOT___type_system) 
         & (5U == (7U & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                         >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrsi = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (6U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU))));
    top__DOT__u_dcode__DOT___inst_csrrci = ((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (7U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU))));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffffff8ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x3fU))))))));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffffffc7ULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffffe3fULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffff1ffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffff8fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffffffc7fffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffffe3ffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffff1fffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffff8ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffffc7ffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffffe3fffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffff1ffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffff8fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffc7fffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffe3ffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffff1fffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfff8ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffc7ffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfe3fffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xf1ffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x8fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))) 
              << 0x3fU));
    vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out 
        = ((((((((0xcU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                 | (0x10U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                & (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT)) 
               | (((0xdU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                   | (0x12U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                  & (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCF))) 
              | ((0xeU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                 & (0U == ((top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U] 
                            | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U]) 
                           | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U])))) 
             | ((0xfU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                & (0U != ((top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U] 
                           | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U]) 
                          | top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[2U])))) 
            | ((0x11U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
               & (~ (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isSLT)))) 
           | ((0x13U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
              & (~ (IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCF))));
    vlSelf->top__DOT__u_dcode__DOT___rs2_idx = ((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0x14U))
                                                 : 0U);
    vlSelf->top__DOT__u_dcode__DOT___imm_data = (((
                                                   (((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___I_type))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x1fU)))) 
                                                         << 0xbU) 
                                                        | (QData)((IData)(
                                                                          (0x7ffU 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0x14U)))))) 
                                                    | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_store))) 
                                                       & (((- (QData)((IData)(
                                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0x1fU)))) 
                                                           << 0xbU) 
                                                          | (QData)((IData)(
                                                                            ((0x7e0U 
                                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)) 
                                                                             | (0x1fU 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 7U)))))))) 
                                                   | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))) 
                                                      & (((- (QData)((IData)(
                                                                             (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 7U))))))))) 
                                                  | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___U_type))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x1fU)))) 
                                                         << 0x1fU) 
                                                        | (QData)((IData)(
                                                                          (0x7ffff000U 
                                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q)))))) 
                                                 | ((- (QData)((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal))) 
                                                    & (((- (QData)((IData)(
                                                                           (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                            >> 0x1fU)))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         ((0xff000U 
                                                                           & vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 9U)) 
                                                                             | ((0x7e0U 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U))))))))));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q);
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fffeU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | (IData)(top__DOT__u_dcode__DOT____Vlvbound5));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 1U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fffdU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 1U));
    top__DOT__u_dcode__DOT____Vlvbound4 = (1U & (~ 
                                                 ((((((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                      | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                     | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___U_type)) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal)) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch))));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fffbU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound4) 
              << 2U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 3U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fff7U & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 3U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 4U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ffefU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 4U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 5U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ffdfU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 5U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 6U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ffbfU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 6U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 7U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7ff7fU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 7U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 8U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7feffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 8U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 9U));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fdffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 9U));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xaU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7fbffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xaU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xbU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7f7ffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xbU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xcU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7efffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xcU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xdU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7dfffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xdU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xeU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x7bfffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xeU));
    top__DOT__u_dcode__DOT____Vlvbound5 = (1U & (vlSelf->top__DOT__u_if_id__DOT___trap_bus_if_id_q 
                                                 >> 0xfU));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x77fffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound5) 
              << 0xfU));
    top__DOT__u_dcode__DOT____Vlvbound1 = (((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (0U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU)))) 
                                           & (0x302U 
                                              == (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                  >> 0x14U)));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x6ffffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound1) 
              << 0x10U));
    top__DOT__u_dcode__DOT____Vlvbound2 = vlSelf->top__DOT__u_dcode__DOT___inst_ebreak;
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x5ffffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound2) 
              << 0x11U));
    top__DOT__u_dcode__DOT____Vlvbound3 = (((IData)(top__DOT__u_dcode__DOT___type_system) 
                                            & (0U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0xcU)))) 
                                           & (0U == 
                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                               >> 0x14U)));
    vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus 
        = ((0x3ffffU & vlSelf->top__DOT__u_dcode__DOT___decode_trap_bus) 
           | ((IData)(top__DOT__u_dcode__DOT____Vlvbound3) 
              << 0x12U));
    vlSelf->top__DOT__u_dcode__DOT___csr_set = ((IData)(top__DOT__u_dcode__DOT___inst_csrrs) 
                                                | (IData)(top__DOT__u_dcode__DOT___inst_csrrsi));
    vlSelf->top__DOT__u_dcode__DOT___csr_clear = ((IData)(top__DOT__u_dcode__DOT___inst_csrrc) 
                                                  | (IData)(top__DOT__u_dcode__DOT___inst_csrrci));
    vlSelf->top__DOT__u_dcode__DOT___isNeed_csr = (
                                                   (((((IData)(top__DOT__u_dcode__DOT___inst_csrrc) 
                                                       | (IData)(top__DOT__u_dcode__DOT___inst_csrrci)) 
                                                      | (IData)(top__DOT__u_dcode__DOT___inst_csrrs)) 
                                                     | (IData)(top__DOT__u_dcode__DOT___inst_csrrsi)) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrw)) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi));
    vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid 
        = (((IData)(top__DOT__u_dcode__DOT___inst_csrrci) 
            | (IData)(top__DOT__u_dcode__DOT___inst_csrrsi)) 
           | (IData)(vlSelf->top__DOT__u_dcode__DOT___inst_csrrwi));
    top__DOT__u_execute_top__DOT__u_alu__DOT___alu_out 
        = (((((((((((- (QData)((IData)(((1U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                        | (2U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
                    & (((QData)((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    top__DOT__u_execute_top__DOT__u_alu__DOT___add_out[0U])))) 
                   | ((- (QData)((IData)((5U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                      & (vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                         & vlSelf->top__DOT__u_execute_top__DOT___alu_in2))) 
                  | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                     & (vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                        | vlSelf->top__DOT__u_execute_top__DOT___alu_in2))) 
                 | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                    & (vlSelf->top__DOT__u_execute_top__DOT___alu_in1 
                       ^ vlSelf->top__DOT__u_execute_top__DOT___alu_in2))) 
                | ((- (QData)((IData)((((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra) 
                                        | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl)) 
                                       | (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll))))) 
                   & ((((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_srl))) 
                        & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                       | ((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sra))) 
                          & ((vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                              & (0xffffffffffffffffULL 
                                 >> (0x3fU & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                                               ? ((IData)(0x20U) 
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
                                & (~ (0xffffffffffffffffULL 
                                      >> (0x3fU & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___isshift32)
                                                    ? 
                                                   ((IData)(0x20U) 
                                                    + (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))
                                                    : (IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_in2))))))))) 
                      | ((- (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___shift_sll))) 
                         & vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))) 
               | ((- (QData)((IData)((0x14U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U]))))) 
              | ((- (QData)((IData)((((0x15U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                      | (0x16U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                     | (0x17U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
                 & (((QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[2U]))))) 
             | ((- (QData)((IData)((0x18U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))))) 
                & (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result[0U])))) 
            | ((- (QData)((IData)(((((0x19U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                     | (0x1aU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                    | (0x1dU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x1eU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
               & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                   ? (QData)((IData)(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                       ? VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                       : VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                   : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                       ? VL_DIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                       : VL_DIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2))))) 
           | ((- (QData)((IData)(((((0x1bU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)) 
                                    | (0x1cU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                   | (0x1fU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q))) 
                                  | (0x20U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___alu_op_id_ex_q)))))) 
              & ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div32)
                  ? (QData)((IData)(((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                                      ? VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2))
                                      : VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in1), (IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))))
                  : ((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___is_div_signed)
                      ? VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)
                      : VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_execute_top__DOT___alu_in1, vlSelf->top__DOT__u_execute_top__DOT___alu_in2)))));
    vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid 
        = ((((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out) 
             & (7U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
            | (3U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q))) 
           | (4U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)));
    vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx) 
            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_idx)));
    vlSelf->top__DOT__u_dcode__DOT___csr_idx = ((IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr)
                                                 ? 
                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                 >> 0x14U)
                                                 : 0U);
    __Vdeeptemp37 = ((((((((((((((((((((((((1U & (- (IData)(
                                                            (((((((((((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU)))) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0x19U))) 
                                                                      | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                          & (0U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0xcU)))) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x19U)))) 
                                                                     | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU))))) 
                                                                    | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                                       & (0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU))))) 
                                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_load)) 
                                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                                 | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_jal)) 
                                                                | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_jalr) 
                                                                   & (0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0xcU))))) 
                                                               | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_auipc)) 
                                                              | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_lui)) 
                                                             | (IData)(vlSelf->top__DOT__u_dcode__DOT___isNeed_csr))))) 
                                           | (2U & 
                                              (- (IData)(
                                                         ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                            & (0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0x20U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U))) 
                                                          | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0xcU)))) 
                                                             & (0x20U 
                                                                == 
                                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x19U)))))))) 
                                          | (3U & (- (IData)(
                                                             ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                & (4U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0xcU)))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0x19U))) 
                                                              | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0xcU))))))))) 
                                         | (4U & (- (IData)(
                                                            ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                               & (6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xcU)))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0x19U))) 
                                                             | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                                & (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0xcU))))))))) 
                                        | (5U & (- (IData)(
                                                           ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                              & (7U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0xcU)))) 
                                                             & (0U 
                                                                == 
                                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x19U))) 
                                                            | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                               & (7U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xcU))))))))) 
                                       | (6U & (- (IData)(
                                                          ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                             & (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0xcU)))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0x19U))) 
                                                           | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                               & (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0xcU)))) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0x1aU)))))))) 
                                      | (7U & (- (IData)(
                                                         ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                            & (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U))) 
                                                          | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                              & (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0xcU)))) 
                                                             & (0U 
                                                                == 
                                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x1aU)))))))) 
                                     | (8U & (- (IData)(
                                                        ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                           & (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0xcU)))) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                              >> 0x19U))) 
                                                         | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                             & (5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0xcU)))) 
                                                            & (0x10U 
                                                               == 
                                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0x1aU)))))))) 
                                    | (9U & (- (IData)(
                                                       ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                          & (1U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0xcU)))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                             >> 0x19U))) 
                                                        | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                            & (1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U)))))))) 
                                   | (0xaU & (- (IData)(
                                                        ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                           & (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0xcU)))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                              >> 0x19U))) 
                                                         | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                             & (5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0xcU)))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0x19U)))))))) 
                                  | (0xbU & (- (IData)(
                                                       ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm_32) 
                                                          & (5U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0xcU)))) 
                                                         & (0x20U 
                                                            == 
                                                            (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                             >> 0x19U))) 
                                                        | (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                            & (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0xcU)))) 
                                                           & (0x20U 
                                                              == 
                                                              (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0x19U)))))))) 
                                 | (0xcU & (- (IData)(
                                                      ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                         & (2U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0xcU)))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                            >> 0x19U))) 
                                                       | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                          & (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0xcU))))))))) 
                                | (0xdU & (- (IData)(
                                                     ((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                        & (3U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                               >> 0xcU)))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                           >> 0x19U))) 
                                                      | ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_imm) 
                                                         & (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                >> 0xcU))))))))) 
                               | (0xeU & (- (IData)(
                                                    ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                     & (0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                            >> 0xcU)))))))) 
                              | (0xfU & (- (IData)(
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                           >> 0xcU)))))))) 
                             | (0x10U & (- (IData)(
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                           >> 0xcU)))))))) 
                            | (0x11U & (- (IData)(((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                          >> 0xcU)))))))) 
                           | (0x12U & (- (IData)(((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                         >> 0xcU)))))))) 
                          | (0x13U & (- (IData)(((IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch) 
                                                 & (7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                        >> 0xcU)))))))) 
                         | (0x14U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                 & (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                        >> 0xcU)))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0x19U))))))) 
                        | (0x15U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                & (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                       >> 0xcU)))) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                   >> 0x19U))))))) 
                       | (0x16U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                               & (2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                      >> 0xcU)))) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                  >> 0x19U))))))) 
                      | (0x17U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                              & (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                     >> 0xcU)))) 
                                             & (1U 
                                                == 
                                                (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                 >> 0x19U))))))) 
                     | (0x18U & (- (IData)((((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0xcU)))) 
                                            & (1U == 
                                               (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                >> 0x19U)))))));
    vlSelf->top__DOT__u_dcode__DOT___alu_op = (((((
                                                   (((__Vdeeptemp37 
                                                      | (0x19U 
                                                         & (- (IData)(
                                                                      (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                        & (4U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                               >> 0xcU)))) 
                                                                       & (1U 
                                                                          == 
                                                                          (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0x19U))))))) 
                                                     | (0x1aU 
                                                        & (- (IData)(
                                                                     (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                       & (5U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                              >> 0xcU)))) 
                                                                      & (1U 
                                                                         == 
                                                                         (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0x19U))))))) 
                                                    | (0x1bU 
                                                       & (- (IData)(
                                                                    (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                      & (6U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0xcU)))) 
                                                                     & (1U 
                                                                        == 
                                                                        (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                         >> 0x19U))))))) 
                                                   | (0x1cU 
                                                      & (- (IData)(
                                                                   (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                            >> 0xcU)))) 
                                                                    & (1U 
                                                                       == 
                                                                       (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0x19U))))))) 
                                                  | (0x1dU 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                    & (4U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0xcU)))) 
                                                                   & (1U 
                                                                      == 
                                                                      (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0x19U))))))) 
                                                 | (0x1eU 
                                                    & (- (IData)(
                                                                 (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                   & (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0xcU)))) 
                                                                  & (1U 
                                                                     == 
                                                                     (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                      >> 0x19U))))))) 
                                                | (0x1fU 
                                                   & (- (IData)(
                                                                (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                  & (6U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                         >> 0xcU)))) 
                                                                 & (1U 
                                                                    == 
                                                                    (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0x19U))))))) 
                                               | (0x20U 
                                                  & (- (IData)(
                                                               (((IData)(vlSelf->top__DOT__u_dcode__DOT___type_op_32) 
                                                                 & (7U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0xcU)))) 
                                                                & (1U 
                                                                   == 
                                                                   (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                                    >> 0x19U)))))));
    vlSelf->top__DOT__u_dcode__DOT___rs1_idx = ((((
                                                   ((IData)(vlSelf->top__DOT__u_dcode__DOT___R_type) 
                                                    | (IData)(vlSelf->top__DOT__u_dcode__DOT___I_type)) 
                                                   | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_store)) 
                                                  | (IData)(vlSelf->top__DOT__u_dcode__DOT___type_branch)) 
                                                 & (~ (IData)(vlSelf->top__DOT__u_dcode__DOT___csr_imm_valid)))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__u_if_id__DOT___inst_data_if_id_q 
                                                    >> 0xfU))
                                                 : 0U);
    vlSelf->top__DOT__u_execute_top__DOT___alu_out 
        = ((IData)(top__DOT__u_execute_top__DOT__u_alu__DOT___isCMP)
            ? (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT__u_alu__DOT___compare_out))
            : top__DOT__u_execute_top__DOT__u_alu__DOT___alu_out);
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next = ((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid)
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                                          >> 0x10U))))) 
                                                   & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mepc_q) 
                                                  | ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT__u_memory__DOT___mem_trap_bus 
                                                                            >> 0x12U))))) 
                                                     & vlSelf->top__DOT__u_rv64_csr_regfile__DOT___mtvec_q))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid)
                                                   ? 
                                                  (((- (QData)((IData)(
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
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)));
    vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx) 
            == (IData)(vlSelf->top__DOT__u_id_ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_idx)));
    vlSelf->top__DOT__exc_alu_data_ex = (((9U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
                                          | (0xbU == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_execute_top__DOT___alu_out 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__u_execute_top__DOT___alu_out)))
                                          : vlSelf->top__DOT__u_execute_top__DOT___alu_out);
    vlSelf->top__DOT__u_dcode__DOT___load_use_data_hazard_valid 
        = ((5U == (IData)(vlSelf->top__DOT__u_id_ex__DOT___exc_op_id_ex_q)) 
           & ((IData)(vlSelf->top__DOT__u_dcode__DOT___rs1_exc_bypass_valid) 
              | (IData)(vlSelf->top__DOT__u_dcode__DOT___rs2_exc_bypass_valid)));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    if (vlSelf->rst) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_fetch__DOT__pmem_inst_read_TOP(0x80000000ULL, vlSelf->__Vtask_top__DOT__u_fetch__DOT__pmem_inst_read__0__rdata, 0xffU);
        vlSelf->top__DOT__u_fetch__DOT___mem_data = vlSelf->__Vtask_top__DOT__u_fetch__DOT__pmem_inst_read__0__rdata;
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__u_fetch__DOT__pmem_inst_read_TOP(vlSelf->top__DOT__u_pc_reg__DOT___pc_current, vlSelf->__Vtask_top__DOT__u_fetch__DOT__pmem_inst_read__1__rdata, 0xffU);
        vlSelf->top__DOT__u_fetch__DOT___mem_data = vlSelf->__Vtask_top__DOT__u_fetch__DOT__pmem_inst_read__1__rdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__stall_clint = 0U;
        vlSelf->top__DOT__flush_clint = 0U;
    } else {
        vlSelf->top__DOT__stall_clint = ((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid)
                                          ? 0U : ((IData)(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__u_dcode__DOT___load_use_data_hazard_valid)
                                                    ? 3U
                                                    : 0U)));
        vlSelf->top__DOT__flush_clint = ((IData)(vlSelf->top__DOT__u_clint__DOT___trap_valid)
                                          ? 0xeU : 
                                         ((IData)(vlSelf->top__DOT__u_execute_top__DOT___branch_pc_valid)
                                           ? 6U : ((IData)(vlSelf->top__DOT__u_dcode__DOT___load_use_data_hazard_valid)
                                                    ? 4U
                                                    : 0U)));
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
