// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void vmem_write(long long waddr, long long wdata, char wlen, char wen);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen, CData/*7:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    char wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    vmem_write(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt, wen__Vcvt);
}

void Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP\n"); );
    // Variables
    // Body
    VL_FINISH_MT("/home/grand/ysyx-workbench/npc/vsrc/pipeline/top.v", 426, "");
    ++(vlSymsp->__Vcoverage[1709]);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rstn) ^ (IData)(vlSelf->top__DOT____Vtogcov__rstn))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rstn = vlSelf->rstn;
    }
    if (((IData)(vlSelf->ARREADY) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARREADY))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT____Vtogcov__ARREADY = vlSelf->ARREADY;
    }
    if (((IData)(vlSelf->RLAST) ^ (IData)(vlSelf->top__DOT____Vtogcov__RLAST))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT____Vtogcov__RLAST = vlSelf->RLAST;
    }
    if (((IData)(vlSelf->RVALID) ^ (IData)(vlSelf->top__DOT____Vtogcov__RVALID))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT____Vtogcov__RVALID = vlSelf->RVALID;
    }
    if ((1U & ((IData)(vlSelf->RRESP) ^ (IData)(vlSelf->top__DOT____Vtogcov__RRESP)))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT____Vtogcov__RRESP = ((2U & (IData)(vlSelf->top__DOT____Vtogcov__RRESP)) 
                                              | (1U 
                                                 & (IData)(vlSelf->RRESP)));
    }
    if ((2U & ((IData)(vlSelf->RRESP) ^ (IData)(vlSelf->top__DOT____Vtogcov__RRESP)))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT____Vtogcov__RRESP = ((1U & (IData)(vlSelf->top__DOT____Vtogcov__RRESP)) 
                                              | (2U 
                                                 & (IData)(vlSelf->RRESP)));
    }
    if ((1U & ((IData)(vlSelf->RID) ^ (IData)(vlSelf->top__DOT____Vtogcov__RID)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT____Vtogcov__RID = ((0xeU & (IData)(vlSelf->top__DOT____Vtogcov__RID)) 
                                            | (1U & (IData)(vlSelf->RID)));
    }
    if ((2U & ((IData)(vlSelf->RID) ^ (IData)(vlSelf->top__DOT____Vtogcov__RID)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT____Vtogcov__RID = ((0xdU & (IData)(vlSelf->top__DOT____Vtogcov__RID)) 
                                            | (2U & (IData)(vlSelf->RID)));
    }
    if ((4U & ((IData)(vlSelf->RID) ^ (IData)(vlSelf->top__DOT____Vtogcov__RID)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT____Vtogcov__RID = ((0xbU & (IData)(vlSelf->top__DOT____Vtogcov__RID)) 
                                            | (4U & (IData)(vlSelf->RID)));
    }
    if ((8U & ((IData)(vlSelf->RID) ^ (IData)(vlSelf->top__DOT____Vtogcov__RID)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT____Vtogcov__RID = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__RID)) 
                                            | (8U & (IData)(vlSelf->RID)));
    }
    if ((1U & ((IData)(vlSelf->RDATA) ^ (IData)(vlSelf->top__DOT____Vtogcov__RDATA)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->RDATA)))));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 1U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 1U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffffffdULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 1U))))) 
                                                 << 1U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 2U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 2U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffffffbULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 2U))))) 
                                                 << 2U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 3U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 3U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffffff7ULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 3U))))) 
                                                 << 3U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 4U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 4U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffffffefULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 4U))))) 
                                                 << 4U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 5U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 5U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffffffdfULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 5U))))) 
                                                 << 5U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 6U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 6U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffffffbfULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 6U))))) 
                                                 << 6U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 7U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 7U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffffff7fULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 7U))))) 
                                                 << 7U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 8U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 8U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffffeffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 9U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__RDATA 
                                                         >> 9U))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffffdffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 9U))))) 
                                                 << 9U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0xaU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__RDATA 
                                                           >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffffbffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0xaU))))) 
                                                 << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0xbU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__RDATA 
                                                           >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffff7ffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0xbU))))) 
                                                 << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0xcU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__RDATA 
                                                           >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffffefffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0xcU))))) 
                                                 << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0xdU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__RDATA 
                                                           >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffffdfffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0xdU))))) 
                                                 << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0xeU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__RDATA 
                                                           >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffffbfffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0xeU))))) 
                                                 << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0xfU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__RDATA 
                                                           >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffff7fffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0xfU))))) 
                                                 << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x10U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffeffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x11U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffdffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x11U))))) 
                                                 << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x12U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffffbffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x12U))))) 
                                                 << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x13U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffff7ffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x13U))))) 
                                                 << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x14U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffefffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x14U))))) 
                                                 << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x15U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffdfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x15U))))) 
                                                 << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x16U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffffbfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x16U))))) 
                                                 << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x17U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffff7fffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x17U))))) 
                                                 << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x18U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffeffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x19U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffdffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x19U))))) 
                                                 << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x1aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffffbffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x1aU))))) 
                                                 << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x1bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffff7ffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x1bU))))) 
                                                 << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x1cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffefffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x1cU))))) 
                                                 << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x1dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffdfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x1dU))))) 
                                                 << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x1eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffffbfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x1eU))))) 
                                                 << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x1fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffff7fffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x1fU))))) 
                                                 << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x20U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffeffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x21U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffdffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x21U))))) 
                                                 << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x22U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffffbffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x22U))))) 
                                                 << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x23U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffff7ffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x23U))))) 
                                                 << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x24U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffefffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x24U))))) 
                                                 << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x25U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffdfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x25U))))) 
                                                 << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x26U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffffbfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x26U))))) 
                                                 << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x27U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffff7fffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x27U))))) 
                                                 << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x28U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffeffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x29U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffdffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x29U))))) 
                                                 << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x2aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffffbffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x2aU))))) 
                                                 << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x2bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffff7ffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x2cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffefffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x2cU))))) 
                                                 << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x2dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffdfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x2dU))))) 
                                                 << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x2eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffffbfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x2eU))))) 
                                                 << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x2fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffff7fffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x2fU))))) 
                                                 << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x30U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffeffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x31U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffdffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x31U))))) 
                                                 << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x32U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfffbffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x32U))))) 
                                                 << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x33U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfff7ffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x33U))))) 
                                                 << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x34U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffefffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x34U))))) 
                                                 << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x35U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffdfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x35U))))) 
                                                 << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x36U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xffbfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x36U))))) 
                                                 << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x37U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xff7fffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x37U))))) 
                                                 << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x38U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfeffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x39U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfdffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x39U))))) 
                                                 << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x3aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xfbffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x3aU))))) 
                                                 << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x3bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xf7ffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x3bU))))) 
                                                 << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x3cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xefffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x3cU))))) 
                                                 << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x3dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xdfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x3dU))))) 
                                                 << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x3eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0xbfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x3eU))))) 
                                                 << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->RDATA >> 0x3fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__RDATA 
                                                            >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT____Vtogcov__RDATA = ((0x7fffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__RDATA) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->RDATA 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1;
    CData/*2:0*/ __Vdly__ARPORT;
    CData/*1:0*/ __Vdly__ARBURST;
    CData/*2:0*/ __Vdly__ARSIZE;
    CData/*0:0*/ __Vdly__ARLOCK;
    CData/*3:0*/ __Vdly__ARCACHE;
    CData/*3:0*/ __Vdly__ARQOS;
    CData/*7:0*/ __Vdly__ARLEN;
    CData/*3:0*/ __Vdly__ARREGION;
    CData/*0:0*/ __Vdly__ARVALID;
    CData/*3:0*/ __Vdly__ARID;
    QData/*63:0*/ __Vdly__pc;
    QData/*63:0*/ __Vdlyvval__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    // Body
    vlSelf->__Vdly__top__DOT__ifu_valid = vlSelf->top__DOT__ifu_valid;
    __Vdly__ARVALID = vlSelf->ARVALID;
    __Vdly__ARLOCK = vlSelf->ARLOCK;
    __Vdly__ARBURST = vlSelf->ARBURST;
    __Vdly__ARSIZE = vlSelf->ARSIZE;
    __Vdly__ARPORT = vlSelf->ARPORT;
    __Vdly__ARID = vlSelf->ARID;
    __Vdly__ARREGION = vlSelf->ARREGION;
    __Vdly__ARQOS = vlSelf->ARQOS;
    __Vdly__ARCACHE = vlSelf->ARCACHE;
    __Vdly__ARLEN = vlSelf->ARLEN;
    vlSelf->__Vdly__top__DOT__ifu_snxt_pc = vlSelf->top__DOT__ifu_snxt_pc;
    vlSelf->__Vdly__top__DOT__ifu_pc = vlSelf->top__DOT__ifu_pc;
    vlSelf->__Vdly__top__DOT__ifu_instr = vlSelf->top__DOT__ifu_instr;
    __Vdly__pc = vlSelf->pc;
    __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 = 0U;
    __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1 = 0U;
    ++(vlSymsp->__Vcoverage[1705]);
    ++(vlSymsp->__Vcoverage[1715]);
    ++(vlSymsp->__Vcoverage[1721]);
    ++(vlSymsp->__Vcoverage[2069]);
    ++(vlSymsp->__Vcoverage[2074]);
    ++(vlSymsp->__Vcoverage[2292]);
    ++(vlSymsp->__Vcoverage[4295]);
    ++(vlSymsp->__Vcoverage[4305]);
    ++(vlSymsp->__Vcoverage[4317]);
    ++(vlSymsp->__Vcoverage[4346]);
    ++(vlSymsp->__Vcoverage[4350]);
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1704]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1714]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1720]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2068]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2073]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2070]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2291]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[4294]);
    }
    if (vlSelf->rstn) {
        ++(vlSymsp->__Vcoverage[4316]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[4315]);
    }
    if (vlSelf->rstn) {
        ++(vlSymsp->__Vcoverage[4345]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[4344]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[4349]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__i = 0x20U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) {
            ++(vlSymsp->__Vcoverage[4347]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en)))) {
            ++(vlSymsp->__Vcoverage[4348]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    ++(vlSymsp->__Vcoverage[4343]);
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        ++(vlSymsp->__Vcoverage[4342]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                        ++(vlSymsp->__Vcoverage[4343]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                ++(vlSymsp->__Vcoverage[4343]);
            }
        }
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    ++(vlSymsp->__Vcoverage[4343]);
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                        ++(vlSymsp->__Vcoverage[4331]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                        ++(vlSymsp->__Vcoverage[4343]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        ++(vlSymsp->__Vcoverage[4338]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                        ++(vlSymsp->__Vcoverage[4343]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        ++(vlSymsp->__Vcoverage[4328]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        ++(vlSymsp->__Vcoverage[4335]);
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                        if (vlSelf->ARREADY) {
                            ++(vlSymsp->__Vcoverage[4330]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                            ++(vlSymsp->__Vcoverage[4336]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                        if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                            ++(vlSymsp->__Vcoverage[4329]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (vlSelf->ARREADY) {
                            ++(vlSymsp->__Vcoverage[4337]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn)))) {
                            ++(vlSymsp->__Vcoverage[4327]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
                            ++(vlSymsp->__Vcoverage[4326]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            ++(vlSymsp->__Vcoverage[4341]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                      & (~ (IData)(vlSelf->top__DOT__mm_ren)))))) {
                            if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                 & (IData)(vlSelf->top__DOT__mm_ren))) {
                                ++(vlSymsp->__Vcoverage[4339]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                      & (~ (IData)(vlSelf->top__DOT__mm_ren)))))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                          & (IData)(vlSelf->top__DOT__mm_ren))))) {
                                ++(vlSymsp->__Vcoverage[4340]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)))) {
            ++(vlSymsp->__Vcoverage[1703]);
        }
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            ++(vlSymsp->__Vcoverage[1702]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)))) {
            ++(vlSymsp->__Vcoverage[4293]);
        }
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            ++(vlSymsp->__Vcoverage[4292]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            ++(vlSymsp->__Vcoverage[4334]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                      & (~ (IData)(vlSelf->top__DOT__mm_ren)))))) {
                            if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                 & (IData)(vlSelf->top__DOT__mm_ren))) {
                                ++(vlSymsp->__Vcoverage[4332]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                      & (~ (IData)(vlSelf->top__DOT__mm_ren)))))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                          & (IData)(vlSelf->top__DOT__mm_ren))))) {
                                ++(vlSymsp->__Vcoverage[4333]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            ++(vlSymsp->__Vcoverage[1713]);
        }
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            ++(vlSymsp->__Vcoverage[1719]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)))) {
                ++(vlSymsp->__Vcoverage[2289]);
            }
        }
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            ++(vlSymsp->__Vcoverage[2290]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
                ++(vlSymsp->__Vcoverage[2288]);
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                 & (IData)(vlSelf->top__DOT__hazard_nop))) {
                ++(vlSymsp->__Vcoverage[1712]);
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                          & (IData)(vlSelf->top__DOT__hazard_nop))))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)))) {
                    ++(vlSymsp->__Vcoverage[1711]);
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                          & (IData)(vlSelf->top__DOT__hazard_nop))))) {
                if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
                    ++(vlSymsp->__Vcoverage[1710]);
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                          & (IData)(vlSelf->top__DOT__hazard_nop))))) {
                if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
                    ++(vlSymsp->__Vcoverage[1716]);
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                          & (IData)(vlSelf->top__DOT__hazard_nop))))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)))) {
                    ++(vlSymsp->__Vcoverage[1717]);
                }
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & (IData)(vlSelf->top__DOT__jump_en))))) {
            if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                 & (IData)(vlSelf->top__DOT__hazard_nop))) {
                ++(vlSymsp->__Vcoverage[1718]);
            }
        }
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            ++(vlSymsp->__Vcoverage[2067]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & ((IData)(vlSelf->top__DOT__jump_en) 
                         | (IData)(vlSelf->top__DOT__hazard_nop)))))) {
            if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
                ++(vlSymsp->__Vcoverage[2065]);
            }
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                      & ((IData)(vlSelf->top__DOT__jump_en) 
                         | (IData)(vlSelf->top__DOT__hazard_nop)))))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)))) {
                ++(vlSymsp->__Vcoverage[2066]);
            }
        }
    }
    if (vlSelf->rstn) {
        if ((((IData)(vlSelf->top__DOT__mmu_wb_en) 
              & (0U != (IData)(vlSelf->top__DOT__mmu_index_rd))) 
             & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en))) {
            ++(vlSymsp->__Vcoverage[2071]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (((IData)(vlSelf->top__DOT__mmu_wb_en) 
                       & (0U != (IData)(vlSelf->top__DOT__mmu_index_rd))) 
                      & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en))))) {
            ++(vlSymsp->__Vcoverage[2072]);
        }
    }
    vlSelf->RREADY = vlSelf->rstn;
    vlSelf->top__DOT__axi_interface_inst__DOT__delay_rstn 
        = vlSelf->rstn;
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) {
            vlSelf->top__DOT__mm_rdata = vlSelf->RDATA;
        }
    } else {
        vlSelf->top__DOT__mm_rdata = 0ULL;
    }
    vlSelf->__Vdly__top__DOT__ifu_valid = ((IData)(vlSelf->rstn) 
                                           & ((~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                                  & (IData)(vlSelf->top__DOT__jump_en))) 
                                              & (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                                  & (IData)(vlSelf->top__DOT__hazard_nop))
                                                  ? (IData)(vlSelf->top__DOT__ifu_valid)
                                                  : (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en))));
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        __Vdly__ARVALID = (1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    __Vdly__ARVALID = ((~ (IData)(vlSelf->ARREADY)) 
                                       & (IData)(vlSelf->ARVALID));
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                __Vdly__ARVALID = (1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            __Vdly__ARVALID = ((~ (IData)(vlSelf->ARREADY)) 
                               & (IData)(vlSelf->ARVALID));
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARVALID = 1U;
        }
    } else {
        __Vdly__ARVALID = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARLOCK = 0U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARLOCK = 0U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARLOCK = vlSelf->ARLOCK;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARLOCK = 0U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARLOCK = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARLOCK = vlSelf->ARLOCK;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARLOCK = 0U;
        }
    } else {
        __Vdly__ARLOCK = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARBURST = 1U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARBURST = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARBURST = vlSelf->ARBURST;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARBURST = 1U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARBURST = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARBURST = vlSelf->ARBURST;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARBURST = 1U;
        }
    } else {
        __Vdly__ARBURST = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARSIZE = 2U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARSIZE = 3U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARSIZE = vlSelf->ARSIZE;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARSIZE = 2U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARSIZE = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARSIZE = vlSelf->ARSIZE;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARSIZE = 2U;
        }
    } else {
        __Vdly__ARSIZE = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARPORT = 4U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARPORT = 0U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARPORT = vlSelf->ARPORT;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARPORT = 4U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARPORT = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARPORT = vlSelf->ARPORT;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARPORT = 4U;
        }
    } else {
        __Vdly__ARPORT = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARID = 0U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARID = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARID = vlSelf->ARID;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARID = 0U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARID = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARID = vlSelf->ARID;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARID = 0U;
        }
    } else {
        __Vdly__ARID = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARREGION = 0U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARREGION = 0U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARREGION = vlSelf->ARREGION;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARREGION = 0U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARREGION = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARREGION = vlSelf->ARREGION;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARREGION = 0U;
        }
    } else {
        __Vdly__ARREGION = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARQOS = 0U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARQOS = 0U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARQOS = vlSelf->ARQOS;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARQOS = 0U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARQOS = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARQOS = vlSelf->ARQOS;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARQOS = 0U;
        }
    } else {
        __Vdly__ARQOS = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARCACHE = 0U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARCACHE = 0U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARCACHE = vlSelf->ARCACHE;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARCACHE = 0U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARCACHE = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARCACHE = vlSelf->ARCACHE;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARCACHE = 0U;
        }
    } else {
        __Vdly__ARCACHE = 0U;
    }
    if (vlSelf->rstn) {
        if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                             & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                            __Vdly__ARLEN = 0U;
                        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                    & (IData)(vlSelf->top__DOT__mm_ren))) {
                            __Vdly__ARLEN = 0U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                        __Vdly__ARLEN = vlSelf->ARLEN;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                     & (~ (IData)(vlSelf->top__DOT__mm_ren)))) {
                    __Vdly__ARLEN = 0U;
                } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                            & (IData)(vlSelf->top__DOT__mm_ren))) {
                    __Vdly__ARLEN = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ (IData)(vlSelf->ARREADY)))) {
                __Vdly__ARLEN = vlSelf->ARLEN;
            }
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) {
            __Vdly__ARLEN = 0U;
        }
    } else {
        __Vdly__ARLEN = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_addop_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_addop_en = vlSelf->top__DOT__idu_inst__DOT__addop_en;
        }
    } else {
        vlSelf->top__DOT__idu_addop_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_br_result = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_br_result = vlSelf->top__DOT__exu_inst__DOT__br_result;
        }
    } else {
        vlSelf->top__DOT__exu_br_result = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_add_zero_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_add_zero_en = vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__lui_en;
        }
    } else {
        vlSelf->top__DOT__idu_add_zero_en = 0U;
    }
    if (vlSelf->rstn) {
        vlSelf->__Vdly__top__DOT__ifu_snxt_pc = (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                                  & (IData)(vlSelf->top__DOT__jump_en))
                                                  ? vlSelf->snxt_pc
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                                   & (IData)(vlSelf->top__DOT__hazard_nop))
                                                   ? vlSelf->top__DOT__ifu_snxt_pc
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)
                                                    ? vlSelf->snxt_pc
                                                    : vlSelf->top__DOT__ifu_snxt_pc)));
        vlSelf->__Vdly__top__DOT__ifu_pc = (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                             & (IData)(vlSelf->top__DOT__jump_en))
                                             ? vlSelf->pc
                                             : (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                                 & (IData)(vlSelf->top__DOT__hazard_nop))
                                                 ? vlSelf->top__DOT__ifu_pc
                                                 : 
                                                ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)
                                                  ? vlSelf->pc
                                                  : vlSelf->top__DOT__ifu_pc)));
    } else {
        vlSelf->__Vdly__top__DOT__ifu_snxt_pc = 0ULL;
        vlSelf->__Vdly__top__DOT__ifu_pc = 0ULL;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->this_valid = vlSelf->top__DOT__mmu_valid;
        }
    } else {
        vlSelf->this_valid = 0U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->this_ebreak = vlSelf->top__DOT__mmu_ebreak_en;
        }
    } else {
        vlSelf->this_ebreak = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_jal_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_jal_en = vlSelf->top__DOT__idu_jal_en;
        }
    } else {
        vlSelf->top__DOT__exu_jal_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_add_pc_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_add_pc_en = vlSelf->top__DOT__idu_inst__DOT__add_pc_en;
        }
    } else {
        vlSelf->top__DOT__idu_add_pc_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_add_rs1_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_add_rs1_en = vlSelf->top__DOT__idu_inst__DOT__add_rs1_en;
        }
    } else {
        vlSelf->top__DOT__idu_add_rs1_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_iop_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_iop_en = vlSelf->top__DOT__idu_inst__DOT__iop_en;
        }
    } else {
        vlSelf->top__DOT__idu_iop_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_jalr_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_jalr_en = vlSelf->top__DOT__idu_jalr_en;
        }
    } else {
        vlSelf->top__DOT__exu_jalr_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_mop_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_mop_en = vlSelf->top__DOT__idu_inst__DOT__mop_en;
        }
    } else {
        vlSelf->top__DOT__idu_mop_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_mwop_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_mwop_en = vlSelf->top__DOT__idu_inst__DOT__mwop_en;
        }
    } else {
        vlSelf->top__DOT__idu_mwop_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_rop_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_rop_en = vlSelf->top__DOT__idu_inst__DOT__rop_en;
        }
    } else {
        vlSelf->top__DOT__idu_rop_en = 0U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->this_pc = vlSelf->top__DOT__mmu_pc;
        }
    } else {
        vlSelf->this_pc = 0ULL;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_iwop_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_iwop_en = vlSelf->top__DOT__idu_inst__DOT__iwop_en;
        }
    } else {
        vlSelf->top__DOT__idu_iwop_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_store_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_store_en = vlSelf->top__DOT__idu_store_en;
        }
    } else {
        vlSelf->top__DOT__exu_store_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_branch_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_branch_en = vlSelf->top__DOT__idu_branch_en;
        }
    } else {
        vlSelf->top__DOT__exu_branch_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_rwop_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_rwop_en = vlSelf->top__DOT__idu_inst__DOT__rwop_en;
        }
    } else {
        vlSelf->top__DOT__idu_rwop_en = 0U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->this_instr = vlSelf->top__DOT__mmu_instr;
        }
    } else {
        vlSelf->this_instr = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_funct7 = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_funct7 = (vlSelf->top__DOT__ifu_instr 
                                            >> 0x19U);
        }
    } else {
        vlSelf->top__DOT__idu_funct7 = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_data_rs2 = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_data_rs2 = vlSelf->top__DOT__exu_inst__DOT__data_rs2;
        }
    } else {
        vlSelf->top__DOT__exu_data_rs2 = 0ULL;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_funct3 = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_funct3 = vlSelf->top__DOT__idu_funct3;
        }
    } else {
        vlSelf->top__DOT__exu_funct3 = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_rs2_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_rs2_en = vlSelf->top__DOT__idu_inst__DOT__rs2_en;
        }
    } else {
        vlSelf->top__DOT__idu_rs2_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_imm_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_imm_en = vlSelf->top__DOT__idu_inst__DOT__imm_en;
        }
    } else {
        vlSelf->top__DOT__idu_imm_en = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_imm = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_imm = vlSelf->top__DOT__idu_inst__DOT__imm;
        }
    } else {
        vlSelf->top__DOT__idu_imm = 0ULL;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_data_rs1 = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_data_rs1 = vlSelf->top__DOT__idu_inst__DOT__data_rs1;
        }
    } else {
        vlSelf->top__DOT__idu_data_rs1 = 0ULL;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_data_rs2 = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_data_rs2 = vlSelf->top__DOT__idu_inst__DOT__data_rs2;
        }
    } else {
        vlSelf->top__DOT__idu_data_rs2 = 0ULL;
    }
    vlSelf->__Vdly__top__DOT__ifu_instr = ((IData)(vlSelf->rstn)
                                            ? (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                                & (IData)(vlSelf->top__DOT__jump_en))
                                                ? 0x13U
                                                : (
                                                   ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                                    & (IData)(vlSelf->top__DOT__hazard_nop))
                                                    ? vlSelf->top__DOT__ifu_instr
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)
                                                     ? (IData)(vlSelf->RDATA)
                                                     : vlSelf->top__DOT__ifu_instr)))
                                            : 0U);
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            __Vdly__pc = vlSelf->top__DOT__exu_alu_result;
        } else if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                    & (IData)(vlSelf->top__DOT__hazard_nop))) {
            __Vdly__pc = vlSelf->pc;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            __Vdly__pc = vlSelf->snxt_pc;
        }
    } else {
        __Vdly__pc = 0x80000000ULL;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                = vlSelf->top__DOT__mmu_inst__DOT__load_data;
        }
    } else {
        vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data = 0ULL;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_spc_en 
                = vlSelf->top__DOT__exu_wb_spc_en;
        }
    } else {
        vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_spc_en = 0U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_alu_en 
                = vlSelf->top__DOT__exu_wb_alu_en;
        }
    } else {
        vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_alu_en = 0U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                = vlSelf->top__DOT__exu_snxt_pc;
        }
    } else {
        vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc = 0ULL;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_inst__DOT__mmu_load_en 
                = vlSelf->top__DOT__exu_load_en;
        }
    } else {
        vlSelf->top__DOT__mmu_inst__DOT__mmu_load_en = 0U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                = vlSelf->top__DOT__exu_alu_result;
        }
    } else {
        vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result = 0ULL;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_index_rs1 = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_index_rs1 = (0x1fU 
                                               & (vlSelf->top__DOT__ifu_instr 
                                                  >> 0xfU));
        }
    } else {
        vlSelf->top__DOT__idu_index_rs1 = 0U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_index_rs2 = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_index_rs2 = (0x1fU 
                                               & (vlSelf->top__DOT__ifu_instr 
                                                  >> 0x14U));
        }
    } else {
        vlSelf->top__DOT__idu_index_rs2 = 0U;
    }
    if (vlSelf->rstn) {
        if ((((IData)(vlSelf->top__DOT__mmu_wb_en) 
              & (0U != (IData)(vlSelf->top__DOT__mmu_index_rd))) 
             & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en))) {
            __Vdlyvval__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 
                = vlSelf->top__DOT__mmu_wb_data;
            __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 
                = vlSelf->top__DOT__mmu_index_rd;
        }
    } else {
        __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1 = 1U;
    }
    vlSelf->ARVALID = __Vdly__ARVALID;
    vlSelf->ARLOCK = __Vdly__ARLOCK;
    vlSelf->ARBURST = __Vdly__ARBURST;
    vlSelf->ARSIZE = __Vdly__ARSIZE;
    vlSelf->ARPORT = __Vdly__ARPORT;
    vlSelf->ARID = __Vdly__ARID;
    vlSelf->ARREGION = __Vdly__ARREGION;
    vlSelf->ARQOS = __Vdly__ARQOS;
    vlSelf->ARCACHE = __Vdly__ARCACHE;
    vlSelf->ARLEN = __Vdly__ARLEN;
    vlSelf->pc = __Vdly__pc;
    if (__Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0) {
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[__Vdlyvdim0__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0] 
            = __Vdlyvval__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    }
    if (__Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1) {
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[1U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[2U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[3U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[4U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[5U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[6U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[7U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[8U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[9U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xaU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xbU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xcU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xdU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xeU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xfU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x10U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x11U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x12U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x13U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x14U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x15U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x16U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x17U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x18U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x19U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1aU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1bU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1cU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1dU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1eU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1fU] = 0ULL;
    }
    if (((IData)(vlSelf->RREADY) ^ (IData)(vlSelf->top__DOT____Vtogcov__RREADY))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT____Vtogcov__RREADY = vlSelf->RREADY;
    }
    if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__delay_rstn) 
         ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__delay_rstn))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__delay_rstn 
            = vlSelf->top__DOT__axi_interface_inst__DOT__delay_rstn;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mm_rdata) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__mm_rdata)))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__mm_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffffffdULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffffffbULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffffff7ULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffffffefULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffffffdfULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffffffbfULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffffff7fULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffffeffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffffdffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffffbffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffff7ffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffffefffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffffdfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffffbfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffff7fffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffeffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffdffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffffbffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffff7ffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffefffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffdfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffffbfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffff7fffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffeffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffdffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffffbffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffff7ffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffefffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffdfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffffbfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffff7fffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffeffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffdffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffffbffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffff7ffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffefffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffdfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffffbfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffff7fffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffeffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x28U))))) 
                                                    << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffdffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x29U))))) 
                                                    << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffffbffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x2aU))))) 
                                                    << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffff7ffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x2bU))))) 
                                                    << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffefffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x2cU))))) 
                                                    << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffdfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x2dU))))) 
                                                    << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffffbfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x2eU))))) 
                                                    << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffff7fffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x2fU))))) 
                                                    << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffeffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x30U))))) 
                                                    << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffdffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x31U))))) 
                                                    << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfffbffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x32U))))) 
                                                    << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfff7ffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x33U))))) 
                                                    << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffefffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x34U))))) 
                                                    << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffdfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x35U))))) 
                                                    << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xffbfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x36U))))) 
                                                    << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xff7fffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x37U))))) 
                                                    << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfeffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x38U))))) 
                                                    << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfdffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x39U))))) 
                                                    << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xfbffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x3aU))))) 
                                                    << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xf7ffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x3bU))))) 
                                                    << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xefffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x3cU))))) 
                                                    << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xdfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x3dU))))) 
                                                    << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0xbfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x3eU))))) 
                                                    << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mm_rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mm_rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->top__DOT____Vtogcov__mm_rdata = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__mm_rdata) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    if (((IData)(vlSelf->ARVALID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARVALID))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT____Vtogcov__ARVALID = vlSelf->ARVALID;
    }
    if (((IData)(vlSelf->ARLOCK) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLOCK))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT____Vtogcov__ARLOCK = vlSelf->ARLOCK;
    }
    if ((1U & ((IData)(vlSelf->ARBURST) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARBURST)))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT____Vtogcov__ARBURST = ((2U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ARBURST)) 
                                                | (1U 
                                                   & (IData)(vlSelf->ARBURST)));
    }
    if ((2U & ((IData)(vlSelf->ARBURST) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARBURST)))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT____Vtogcov__ARBURST = ((1U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ARBURST)) 
                                                | (2U 
                                                   & (IData)(vlSelf->ARBURST)));
    }
    if ((1U & ((IData)(vlSelf->ARSIZE) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARSIZE)))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT____Vtogcov__ARSIZE = ((6U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ARSIZE)) 
                                               | (1U 
                                                  & (IData)(vlSelf->ARSIZE)));
    }
    if ((2U & ((IData)(vlSelf->ARSIZE) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARSIZE)))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT____Vtogcov__ARSIZE = ((5U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ARSIZE)) 
                                               | (2U 
                                                  & (IData)(vlSelf->ARSIZE)));
    }
    if ((4U & ((IData)(vlSelf->ARSIZE) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARSIZE)))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT____Vtogcov__ARSIZE = ((3U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ARSIZE)) 
                                               | (4U 
                                                  & (IData)(vlSelf->ARSIZE)));
    }
    if ((1U & ((IData)(vlSelf->ARPORT) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARPORT)))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT____Vtogcov__ARPORT = ((6U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ARPORT)) 
                                               | (1U 
                                                  & (IData)(vlSelf->ARPORT)));
    }
    if ((2U & ((IData)(vlSelf->ARPORT) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARPORT)))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT____Vtogcov__ARPORT = ((5U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ARPORT)) 
                                               | (2U 
                                                  & (IData)(vlSelf->ARPORT)));
    }
    if ((4U & ((IData)(vlSelf->ARPORT) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARPORT)))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT____Vtogcov__ARPORT = ((3U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ARPORT)) 
                                               | (4U 
                                                  & (IData)(vlSelf->ARPORT)));
    }
    if ((1U & ((IData)(vlSelf->ARID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARID)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT____Vtogcov__ARID = ((0xeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ARID)) 
                                             | (1U 
                                                & (IData)(vlSelf->ARID)));
    }
    if ((2U & ((IData)(vlSelf->ARID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARID)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT____Vtogcov__ARID = ((0xdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ARID)) 
                                             | (2U 
                                                & (IData)(vlSelf->ARID)));
    }
    if ((4U & ((IData)(vlSelf->ARID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARID)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT____Vtogcov__ARID = ((0xbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__ARID)) 
                                             | (4U 
                                                & (IData)(vlSelf->ARID)));
    }
    if ((8U & ((IData)(vlSelf->ARID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARID)))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT____Vtogcov__ARID = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__ARID)) 
                                             | (8U 
                                                & (IData)(vlSelf->ARID)));
    }
    if ((1U & ((IData)(vlSelf->ARREGION) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT____Vtogcov__ARREGION = ((0xeU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->ARREGION)));
    }
    if ((2U & ((IData)(vlSelf->ARREGION) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT____Vtogcov__ARREGION = ((0xdU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->ARREGION)));
    }
    if ((4U & ((IData)(vlSelf->ARREGION) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT____Vtogcov__ARREGION = ((0xbU 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->ARREGION)));
    }
    if ((8U & ((IData)(vlSelf->ARREGION) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT____Vtogcov__ARREGION = ((7U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__ARREGION)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->ARREGION)));
    }
    if ((1U & ((IData)(vlSelf->ARQOS) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT____Vtogcov__ARQOS = ((0xeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)) 
                                              | (1U 
                                                 & (IData)(vlSelf->ARQOS)));
    }
    if ((2U & ((IData)(vlSelf->ARQOS) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT____Vtogcov__ARQOS = ((0xdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)) 
                                              | (2U 
                                                 & (IData)(vlSelf->ARQOS)));
    }
    if ((4U & ((IData)(vlSelf->ARQOS) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT____Vtogcov__ARQOS = ((0xbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)) 
                                              | (4U 
                                                 & (IData)(vlSelf->ARQOS)));
    }
    if ((8U & ((IData)(vlSelf->ARQOS) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT____Vtogcov__ARQOS = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__ARQOS)) 
                                              | (8U 
                                                 & (IData)(vlSelf->ARQOS)));
    }
    if ((1U & ((IData)(vlSelf->ARCACHE) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT____Vtogcov__ARCACHE = ((0xeU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)) 
                                                | (1U 
                                                   & (IData)(vlSelf->ARCACHE)));
    }
    if ((2U & ((IData)(vlSelf->ARCACHE) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT____Vtogcov__ARCACHE = ((0xdU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)) 
                                                | (2U 
                                                   & (IData)(vlSelf->ARCACHE)));
    }
    if ((4U & ((IData)(vlSelf->ARCACHE) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT____Vtogcov__ARCACHE = ((0xbU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)) 
                                                | (4U 
                                                   & (IData)(vlSelf->ARCACHE)));
    }
    if ((8U & ((IData)(vlSelf->ARCACHE) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT____Vtogcov__ARCACHE = ((7U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ARCACHE)) 
                                                | (8U 
                                                   & (IData)(vlSelf->ARCACHE)));
    }
    vlSelf->top__DOT__axi_interface_inst__DOT__cstate 
        = ((IData)(vlSelf->rstn) ? (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate)
            : 0U);
    if ((1U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (1U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if ((2U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (2U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if ((4U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (4U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if ((8U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (8U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if ((0x10U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if ((0x20U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if ((0x40U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if ((0x80U & ((IData)(vlSelf->ARLEN) ^ (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT____Vtogcov__ARLEN = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__ARLEN)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->ARLEN)));
    }
    if (((IData)(vlSelf->top__DOT__idu_addop_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_addop_en))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->top__DOT____Vtogcov__idu_addop_en = vlSelf->top__DOT__idu_addop_en;
    }
    if (((IData)(vlSelf->top__DOT__exu_br_result) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_br_result))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->top__DOT____Vtogcov__exu_br_result 
            = vlSelf->top__DOT__exu_br_result;
    }
    if (((IData)(vlSelf->top__DOT__idu_add_zero_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_add_zero_en))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->top__DOT____Vtogcov__idu_add_zero_en 
            = vlSelf->top__DOT__idu_add_zero_en;
    }
    if (((IData)(vlSelf->this_valid) ^ (IData)(vlSelf->top__DOT____Vtogcov__this_valid))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__this_valid = vlSelf->this_valid;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_valid = vlSelf->top__DOT__exu_valid;
        }
    } else {
        vlSelf->top__DOT__mmu_valid = 0U;
    }
    if (((IData)(vlSelf->this_ebreak) ^ (IData)(vlSelf->top__DOT____Vtogcov__this_ebreak))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__this_ebreak = vlSelf->this_ebreak;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_ebreak_en = vlSelf->top__DOT__exu_ebreak_en;
        }
    } else {
        vlSelf->top__DOT__mmu_ebreak_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__exu_jal_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_jal_en))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->top__DOT____Vtogcov__exu_jal_en = vlSelf->top__DOT__exu_jal_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_jal_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_jal_en = vlSelf->top__DOT__idu_inst__DOT__jal_en;
        }
    } else {
        vlSelf->top__DOT__idu_jal_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__idu_add_pc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_add_pc_en))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->top__DOT____Vtogcov__idu_add_pc_en 
            = vlSelf->top__DOT__idu_add_pc_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_add_rs1_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_add_rs1_en))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->top__DOT____Vtogcov__idu_add_rs1_en 
            = vlSelf->top__DOT__idu_add_rs1_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_iop_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_iop_en))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->top__DOT____Vtogcov__idu_iop_en = vlSelf->top__DOT__idu_iop_en;
    }
    if (((IData)(vlSelf->top__DOT__exu_jalr_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_jalr_en))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->top__DOT____Vtogcov__exu_jalr_en = vlSelf->top__DOT__exu_jalr_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_jalr_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_jalr_en = vlSelf->top__DOT__idu_inst__DOT__jalr_en;
        }
    } else {
        vlSelf->top__DOT__idu_jalr_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__idu_mop_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_mop_en))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->top__DOT____Vtogcov__idu_mop_en = vlSelf->top__DOT__idu_mop_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_mwop_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_mwop_en))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->top__DOT____Vtogcov__idu_mwop_en = vlSelf->top__DOT__idu_mwop_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_rop_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_rop_en))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->top__DOT____Vtogcov__idu_rop_en = vlSelf->top__DOT__idu_rop_en;
    }
    if ((1U & ((IData)(vlSelf->this_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__this_pc)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->this_pc)))));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 2U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 3U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 4U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 5U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 6U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 7U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 8U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 9U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__this_pc 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0xaU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__this_pc 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0xbU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__this_pc 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0xcU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__this_pc 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0xdU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__this_pc 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0xeU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__this_pc 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0xfU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__this_pc 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffffbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffff7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffeffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffdffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffffbffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffefffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffdfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffffbfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffff7fffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffeffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffdffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfffbffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffefffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffdfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xffbfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xff7fffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfeffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfdffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xfbffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xefffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xdfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0xbfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->this_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__this_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT____Vtogcov__this_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__this_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->this_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_pc = vlSelf->top__DOT__exu_pc;
        }
    } else {
        vlSelf->top__DOT__mmu_pc = 0ULL;
    }
    if (((IData)(vlSelf->top__DOT__idu_iwop_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_iwop_en))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->top__DOT____Vtogcov__idu_iwop_en = vlSelf->top__DOT__idu_iwop_en;
    }
    if (((IData)(vlSelf->top__DOT__exu_store_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_store_en))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->top__DOT____Vtogcov__exu_store_en = vlSelf->top__DOT__exu_store_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_store_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_store_en = vlSelf->top__DOT__idu_inst__DOT__store_en;
        }
    } else {
        vlSelf->top__DOT__idu_store_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__exu_branch_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_branch_en))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->top__DOT____Vtogcov__exu_branch_en 
            = vlSelf->top__DOT__exu_branch_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_branch_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_branch_en = vlSelf->top__DOT__idu_inst__DOT__branch_en;
        }
    } else {
        vlSelf->top__DOT__idu_branch_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__idu_rwop_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_rwop_en))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->top__DOT____Vtogcov__idu_rwop_en = vlSelf->top__DOT__idu_rwop_en;
    }
    if ((1U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffffffeU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (1U 
                                                      & vlSelf->this_instr));
    }
    if ((2U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffffffdU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (2U 
                                                      & vlSelf->this_instr));
    }
    if ((4U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffffffbU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (4U 
                                                      & vlSelf->this_instr));
    }
    if ((8U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffffff7U 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (8U 
                                                      & vlSelf->this_instr));
    }
    if ((0x10U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffffffefU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x10U 
                                                      & vlSelf->this_instr));
    }
    if ((0x20U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffffffdfU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x20U 
                                                      & vlSelf->this_instr));
    }
    if ((0x40U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffffffbfU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x40U 
                                                      & vlSelf->this_instr));
    }
    if ((0x80U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffffff7fU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x80U 
                                                      & vlSelf->this_instr));
    }
    if ((0x100U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffffeffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x100U 
                                                      & vlSelf->this_instr));
    }
    if ((0x200U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffffdffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x200U 
                                                      & vlSelf->this_instr));
    }
    if ((0x400U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffffbffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x400U 
                                                      & vlSelf->this_instr));
    }
    if ((0x800U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x800U 
                                                      & vlSelf->this_instr));
    }
    if ((0x1000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffffefffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x1000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x2000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffffdfffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x2000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x4000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffffbfffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x4000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x8000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffff7fffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x8000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x10000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffeffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x10000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x20000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffdffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x20000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x40000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfffbffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x40000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x80000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x80000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x100000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffefffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x100000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x200000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffdfffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x200000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x400000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xffbfffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x400000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x800000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xff7fffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x800000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x1000000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfeffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x1000000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x2000000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfdffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x2000000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x4000000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xfbffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x4000000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x8000000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x8000000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x10000000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xefffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x10000000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x20000000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xdfffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x20000000U 
                                                      & vlSelf->this_instr));
    }
    if ((0x40000000U & (vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0xbfffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x40000000U 
                                                      & vlSelf->this_instr));
    }
    if (((vlSelf->this_instr ^ vlSelf->top__DOT____Vtogcov__this_instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT____Vtogcov__this_instr = (
                                                   (0x7fffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__this_instr) 
                                                   | (0x80000000U 
                                                      & vlSelf->this_instr));
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_instr = vlSelf->top__DOT__exu_instr;
        }
    } else {
        vlSelf->top__DOT__mmu_instr = 0U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__idu_funct7) 
                >> 5U) ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct7_5)))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct7_5 
            = (1U & ((IData)(vlSelf->top__DOT__idu_funct7) 
                     >> 5U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_funct7) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT____Vtogcov__idu_funct7 = (
                                                   (0x7eU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__idu_funct7) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT____Vtogcov__idu_funct7 = (
                                                   (0x7dU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__idu_funct7) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT____Vtogcov__idu_funct7 = (
                                                   (0x7bU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__idu_funct7) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT____Vtogcov__idu_funct7 = (
                                                   (0x77U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__idu_funct7) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT____Vtogcov__idu_funct7 = (
                                                   (0x6fU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__idu_funct7) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT____Vtogcov__idu_funct7 = (
                                                   (0x5fU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__idu_funct7) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT____Vtogcov__idu_funct7 = (
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct7)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_data_rs2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_data_rs2)))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_data_rs2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_data_rs2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_data_rs2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->top__DOT____Vtogcov__exu_data_rs2 = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_data_rs2 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if (((0U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_000))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_000 
            = (0U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if (((1U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_001))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_001 
            = (1U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if (((2U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_010))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_010 
            = (2U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if (((3U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_011))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_011 
            = (3U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if (((4U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_100))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_100 
            = (4U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if (((5U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_101))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_101 
            = (5U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if (((6U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_110))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_110 
            = (6U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if (((7U == (IData)(vlSelf->top__DOT__exu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_111))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelf->top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_111 
            = (7U == (IData)(vlSelf->top__DOT__exu_funct3));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_funct3) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_funct3)))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->top__DOT____Vtogcov__exu_funct3 = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__exu_funct3)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__exu_funct3)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__exu_funct3) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_funct3)))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->top__DOT____Vtogcov__exu_funct3 = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__exu_funct3)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__exu_funct3)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__exu_funct3) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_funct3)))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->top__DOT____Vtogcov__exu_funct3 = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__exu_funct3)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__exu_funct3)));
    }
    vlSelf->top__DOT__mm_wlen = ((((1U & (- (IData)(
                                                    (0U 
                                                     == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                   | (2U & (- (IData)(
                                                      (1U 
                                                       == (IData)(vlSelf->top__DOT__exu_funct3)))))) 
                                  | (4U & (- (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->top__DOT__exu_funct3)))))) 
                                 | (8U & (- (IData)(
                                                    (3U 
                                                     == (IData)(vlSelf->top__DOT__exu_funct3))))));
    vlSelf->top__DOT__mmu_inst__DOT__load_data = ((
                                                   ((((((- (QData)((IData)(
                                                                           (0U 
                                                                            == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                        & (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mm_rdata 
                                                                                >> 7U)))))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__mm_rdata)))))) 
                                                       | ((- (QData)((IData)(
                                                                             (1U 
                                                                              == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                          & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0xfU)))))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__mm_rdata))))))) 
                                                      | ((- (QData)((IData)(
                                                                            (2U 
                                                                             == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                         & (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mm_rdata 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->top__DOT__mm_rdata))))) 
                                                     | ((- (QData)((IData)(
                                                                           (3U 
                                                                            == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                        & vlSelf->top__DOT__mm_rdata)) 
                                                    | ((- (QData)((IData)(
                                                                          (4U 
                                                                           == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                       & (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__mm_rdata)))))) 
                                                   | ((- (QData)((IData)(
                                                                         (5U 
                                                                          == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                      & (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->top__DOT__mm_rdata)))))) 
                                                  | ((- (QData)((IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                     & (QData)((IData)(vlSelf->top__DOT__mm_rdata))));
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_funct3 = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_funct3 = (7U & (vlSelf->top__DOT__ifu_instr 
                                                  >> 0xcU));
        }
    } else {
        vlSelf->top__DOT__idu_funct3 = 0U;
    }
    if (((IData)(vlSelf->top__DOT__idu_rs2_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_rs2_en))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->top__DOT____Vtogcov__idu_rs2_en = vlSelf->top__DOT__idu_rs2_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_imm_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_imm_en))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->top__DOT____Vtogcov__idu_imm_en = vlSelf->top__DOT__idu_imm_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_imm)))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->top__DOT__idu_imm)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffffbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffff7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffeffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffdffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffffbffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffefffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffdfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffffbfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffff7fffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffeffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffdffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfffbffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffefffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffdfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xffbfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xff7fffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfeffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfdffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xfbffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xefffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xdfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0xbfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_imm >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_imm 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->top__DOT____Vtogcov__idu_imm = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__idu_imm) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__idu_imm 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_data_rs1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_data_rs1)))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__idu_data_rs1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs1 = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs1) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs1 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_data_rs2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_data_rs2)))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__idu_data_rs2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_data_rs2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__idu_data_rs2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->top__DOT____Vtogcov__idu_data_rs2 = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__idu_data_rs2) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_data_rs2 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffeULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->pc)))));
    }
    if ((1U & ((IData)((vlSelf->pc >> 1U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffdULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 1U))))) 
                                              << 1U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 2U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffbULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 2U))))) 
                                              << 2U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 3U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffff7ULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 3U))))) 
                                              << 3U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 4U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffefULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 4U))))) 
                                              << 4U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 5U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffdfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 5U))))) 
                                              << 5U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 6U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffbfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 6U))))) 
                                              << 6U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 7U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 7U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffff7fULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 7U))))) 
                                              << 7U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 8U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 8U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffeffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 8U))))) 
                                              << 8U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 9U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffdffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 9U))))) 
                                              << 9U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xaU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffbffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xaU))))) 
                                              << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xbU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffff7ffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xbU))))) 
                                              << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xcU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffefffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xcU))))) 
                                              << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xdU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffdfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xdU))))) 
                                              << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xeU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffbfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xeU))))) 
                                              << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xfU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffff7fffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xfU))))) 
                                              << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x10U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffeffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x10U))))) 
                                              << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x11U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffdffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x11U))))) 
                                              << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x12U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffbffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x12U))))) 
                                              << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x13U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffff7ffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x13U))))) 
                                              << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x14U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffefffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x14U))))) 
                                              << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x15U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffdfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x15U))))) 
                                              << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x16U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffbfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x16U))))) 
                                              << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x17U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffff7fffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x17U))))) 
                                              << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x18U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffeffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x18U))))) 
                                              << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x19U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffdffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x19U))))) 
                                              << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffbffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1aU))))) 
                                              << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffff7ffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1bU))))) 
                                              << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffefffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1cU))))) 
                                              << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffdfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1dU))))) 
                                              << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffbfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1eU))))) 
                                              << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffff7fffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1fU))))) 
                                              << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x20U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffeffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x20U))))) 
                                              << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x21U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffdffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x21U))))) 
                                              << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x22U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffbffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x22U))))) 
                                              << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x23U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffff7ffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x23U))))) 
                                              << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x24U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffefffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x24U))))) 
                                              << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x25U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffdfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x25U))))) 
                                              << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x26U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffbfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x26U))))) 
                                              << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x27U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffff7fffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x27U))))) 
                                              << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x28U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffeffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x28U))))) 
                                              << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x29U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffdffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x29U))))) 
                                              << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffbffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2aU))))) 
                                              << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffff7ffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2bU))))) 
                                              << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffefffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2cU))))) 
                                              << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffdfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2dU))))) 
                                              << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffbfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2eU))))) 
                                              << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffff7fffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2fU))))) 
                                              << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x30U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffeffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x30U))))) 
                                              << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x31U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffdffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x31U))))) 
                                              << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x32U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffbffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x32U))))) 
                                              << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x33U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfff7ffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x33U))))) 
                                              << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x34U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffefffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x34U))))) 
                                              << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x35U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffdfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x35U))))) 
                                              << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x36U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffbfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x36U))))) 
                                              << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x37U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xff7fffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x37U))))) 
                                              << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x38U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfeffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x38U))))) 
                                              << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x39U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfdffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x39U))))) 
                                              << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfbffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3aU))))) 
                                              << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xf7ffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3bU))))) 
                                              << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xefffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3cU))))) 
                                              << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xdfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3dU))))) 
                                              << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xbfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3eU))))) 
                                              << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__pc = ((0x7fffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU));
    }
    vlSelf->snxt_pc = (4ULL + vlSelf->pc);
    if ((1U & ((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data) 
               ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data)))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4251]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4252]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4253]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4254]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4255]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4256]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4286]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4287]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4288]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_wb_spc_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_wb_spc_en = vlSelf->top__DOT__exu_inst__DOT__wb_spc_en;
        }
    } else {
        vlSelf->top__DOT__exu_wb_spc_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_spc_en) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_wb_spc_en))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_wb_spc_en 
            = vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_spc_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_wb_alu_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_wb_alu_en = vlSelf->top__DOT__idu_wb_alu_en;
        }
    } else {
        vlSelf->top__DOT__exu_wb_alu_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_alu_en) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_wb_alu_en))) {
        ++(vlSymsp->__Vcoverage[4289]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_wb_alu_en 
            = vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_alu_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_snxt_pc = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_snxt_pc = vlSelf->top__DOT__idu_snxt_pc;
        }
    } else {
        vlSelf->top__DOT__exu_snxt_pc = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc) 
               ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc)))) {
        ++(vlSymsp->__Vcoverage[4161]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4162]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_load_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_load_en = vlSelf->top__DOT__idu_load_en;
        }
    } else {
        vlSelf->top__DOT__exu_load_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_en) 
         ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_en))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_en 
            = vlSelf->top__DOT__mmu_inst__DOT__mmu_load_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result) 
               ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result)))) {
        ++(vlSymsp->__Vcoverage[4097]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4098]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4099]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4100]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4101]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4102]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4103]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4104]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4105]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4106]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4107]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4108]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4109]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4110]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4111]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4112]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4113]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4114]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4115]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4116]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4117]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4118]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4119]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4120]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4121]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4122]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4123]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4124]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4125]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4126]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4133]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4134]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4135]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4136]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4137]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4138]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4139]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4142]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4143]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4144]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4145]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4146]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4147]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4148]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4149]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4150]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4151]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4152]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4153]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4156]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4159]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4160]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__mmu_wb_data = ((((- (QData)((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_alu_en))) 
                                       & vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_spc_en))) 
                                         & vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_en))) 
                                        & vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data));
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_alu_result = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_alu_result = vlSelf->top__DOT__exu_inst__DOT__alu_result;
        }
    } else {
        vlSelf->top__DOT__exu_alu_result = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_index_rs1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs1 
            = ((0x1eU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)) 
               | (1U & (IData)(vlSelf->top__DOT__idu_index_rs1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__idu_index_rs1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs1 
            = ((0x1dU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)) 
               | (2U & (IData)(vlSelf->top__DOT__idu_index_rs1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__idu_index_rs1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs1 
            = ((0x1bU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)) 
               | (4U & (IData)(vlSelf->top__DOT__idu_index_rs1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__idu_index_rs1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs1 
            = ((0x17U & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)) 
               | (8U & (IData)(vlSelf->top__DOT__idu_index_rs1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__idu_index_rs1) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs1 
            = ((0xfU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs1)) 
               | (0x10U & (IData)(vlSelf->top__DOT__idu_index_rs1)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_index_rs2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs2 
            = ((0x1eU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)) 
               | (1U & (IData)(vlSelf->top__DOT__idu_index_rs2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__idu_index_rs2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs2 
            = ((0x1dU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)) 
               | (2U & (IData)(vlSelf->top__DOT__idu_index_rs2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__idu_index_rs2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs2 
            = ((0x1bU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)) 
               | (4U & (IData)(vlSelf->top__DOT__idu_index_rs2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__idu_index_rs2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs2 
            = ((0x17U & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)) 
               | (8U & (IData)(vlSelf->top__DOT__idu_index_rs2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__idu_index_rs2) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT____Vtogcov__idu_index_rs2 
            = ((0xfU & (IData)(vlSelf->top__DOT____Vtogcov__idu_index_rs2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__idu_index_rs2)));
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_wb_en = vlSelf->top__DOT__exu_wb_en;
        }
    } else {
        vlSelf->top__DOT__mmu_wb_en = 0U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__mmu_index_rd = vlSelf->top__DOT__exu_index_rd;
        }
    } else {
        vlSelf->top__DOT__mmu_index_rd = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mm_wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelf->top__DOT____Vtogcov__mm_wlen = ((0xeU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__mm_wlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mm_wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->top__DOT____Vtogcov__mm_wlen = ((0xdU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__mm_wlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mm_wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->top__DOT____Vtogcov__mm_wlen = ((0xbU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__mm_wlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mm_wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->top__DOT____Vtogcov__mm_wlen = ((7U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__mm_wlen)) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__mm_wlen)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mmu_inst__DOT__load_data) 
               ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data)))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mmu_inst__DOT__load_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4069]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4070]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4071]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4072]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4073]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4074]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4075]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4076]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4077]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4078]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4079]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4080]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4081]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4082]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4083]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4084]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4085]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4086]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4087]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4088]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4089]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4090]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4091]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4092]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4093]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4094]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4095]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4096]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->snxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__snxt_pc)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->snxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 2U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 3U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 4U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 5U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 6U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 7U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 8U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 9U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xaU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xbU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xcU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xdU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xeU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xfU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffff7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffeffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffdffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffbffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffefffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffdfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffbfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffff7fffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffeffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffdffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffbffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffefffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffdfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffbfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xff7fffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfeffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfdffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfbffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xefffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xdfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xbfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mmu_wb_data) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__mmu_wb_data)))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mmu_wb_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_wb_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_wb_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT____Vtogcov__mmu_wb_data = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__mmu_wb_data) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_wb_data 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    ++(vlSymsp->__Vcoverage[4324]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    ++(vlSymsp->__Vcoverage[4319]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                ++(vlSymsp->__Vcoverage[4324]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                ++(vlSymsp->__Vcoverage[4324]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    ++(vlSymsp->__Vcoverage[4320]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
        if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            ++(vlSymsp->__Vcoverage[4324]);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    ++(vlSymsp->__Vcoverage[4321]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    ++(vlSymsp->__Vcoverage[4323]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    ++(vlSymsp->__Vcoverage[4324]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
                    ++(vlSymsp->__Vcoverage[4324]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)))) {
                    ++(vlSymsp->__Vcoverage[4322]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate 
            = ((0xeU & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)) 
               | (1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate 
            = ((0xdU & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)) 
               | (2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate 
            = ((0xbU & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)) 
               | (4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate 
            = ((7U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__cstate)) 
               | (8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate)));
    }
    if (((IData)(vlSelf->top__DOT__mmu_valid) ^ (IData)(vlSelf->top__DOT____Vtogcov__mmu_valid))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->top__DOT____Vtogcov__mmu_valid = vlSelf->top__DOT__mmu_valid;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_valid = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_valid = vlSelf->top__DOT__idu_valid;
        }
    } else {
        vlSelf->top__DOT__exu_valid = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mmu_ebreak_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__mmu_ebreak_en))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->top__DOT____Vtogcov__mmu_ebreak_en 
            = vlSelf->top__DOT__mmu_ebreak_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_ebreak_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_ebreak_en = vlSelf->top__DOT__idu_ebreak_en;
        }
    } else {
        vlSelf->top__DOT__exu_ebreak_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__idu_jal_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_jal_en))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->top__DOT____Vtogcov__idu_jal_en = vlSelf->top__DOT__idu_jal_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_jalr_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_jalr_en))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->top__DOT____Vtogcov__idu_jalr_en = vlSelf->top__DOT__idu_jalr_en;
    }
    vlSelf->top__DOT__exu_inst__DOT__wb_spc_en = ((IData)(vlSelf->top__DOT__idu_jal_en) 
                                                  | (IData)(vlSelf->top__DOT__idu_jalr_en));
    if ((1U & ((IData)(vlSelf->top__DOT__mmu_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__mmu_pc)))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffffffeULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->top__DOT__mmu_pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffffffdULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 1U))))) 
                                                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffffffbULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 2U))))) 
                                                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffffff7ULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 3U))))) 
                                                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffffffefULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 4U))))) 
                                                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffffffdfULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 5U))))) 
                                                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffffffbfULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 6U))))) 
                                                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffffff7fULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 7U))))) 
                                                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffffeffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 8U))))) 
                                                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffffdffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 9U))))) 
                                                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffffbffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffff7ffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffffefffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffffdfffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffffbfffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffff7fffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffeffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffdffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffffbffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffff7ffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffefffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffdfffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffffbfffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffff7fffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffeffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffdffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffffbffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffff7ffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffefffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffdfffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffffbfffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffff7fffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffeffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffdffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffffbffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffff7ffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffefffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffdfffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x25U))))) 
                                                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffffbfffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x26U))))) 
                                                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffff7fffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x27U))))) 
                                                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffeffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x28U))))) 
                                                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffdffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x29U))))) 
                                                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffffbffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x2aU))))) 
                                                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffff7ffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x2bU))))) 
                                                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffefffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x2cU))))) 
                                                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffdfffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x2dU))))) 
                                                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffffbfffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x2eU))))) 
                                                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffff7fffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x2fU))))) 
                                                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffeffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x30U))))) 
                                                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffdffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x31U))))) 
                                                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfffbffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x32U))))) 
                                                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfff7ffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x33U))))) 
                                                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffefffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x34U))))) 
                                                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffdfffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x35U))))) 
                                                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xffbfffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x36U))))) 
                                                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xff7fffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x37U))))) 
                                                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfeffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x38U))))) 
                                                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfdffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x39U))))) 
                                                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xfbffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x3aU))))) 
                                                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xf7ffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x3bU))))) 
                                                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xefffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x3cU))))) 
                                                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xdfffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x3dU))))) 
                                                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0xbfffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x3eU))))) 
                                                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__mmu_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->top__DOT____Vtogcov__mmu_pc = ((0x7fffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__mmu_pc) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__mmu_pc 
                                                                              >> 0x3fU))))) 
                                                  << 0x3fU));
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_pc = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_pc = vlSelf->top__DOT__idu_pc;
        }
    } else {
        vlSelf->top__DOT__exu_pc = 0ULL;
    }
    if (((IData)(vlSelf->top__DOT__idu_store_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_store_en))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->top__DOT____Vtogcov__idu_store_en = vlSelf->top__DOT__idu_store_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_branch_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_branch_en))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->top__DOT____Vtogcov__idu_branch_en 
            = vlSelf->top__DOT__idu_branch_en;
    }
    if ((1U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffffffeU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (1U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((2U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffffffdU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (2U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((4U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffffffbU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (4U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((8U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffffff7U 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (8U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x10U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffffffefU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x10U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x20U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffffffdfU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x20U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x40U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffffffbfU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x40U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x80U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffffff7fU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x80U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x100U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffffeffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x100U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x200U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffffdffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x200U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x400U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffffbffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x400U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x800U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffff7ffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x800U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffffefffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x1000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffffdfffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x2000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffffbfffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x4000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffff7fffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x8000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffeffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x10000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffdffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x20000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfffbffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x40000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfff7ffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x80000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffefffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x100000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffdfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x200000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xffbfffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x400000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xff7fffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x800000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mmu_instr 
                       ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfeffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x1000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mmu_instr 
                       ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfdffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x2000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mmu_instr 
                       ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xfbffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x4000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mmu_instr 
                       ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xf7ffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x8000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mmu_instr 
                        ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xefffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x10000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mmu_instr 
                        ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xdfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x20000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mmu_instr 
                        ^ vlSelf->top__DOT____Vtogcov__mmu_instr))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0xbfffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x40000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if (((vlSelf->top__DOT__mmu_instr ^ vlSelf->top__DOT____Vtogcov__mmu_instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->top__DOT____Vtogcov__mmu_instr = ((0x7fffffffU 
                                                   & vlSelf->top__DOT____Vtogcov__mmu_instr) 
                                                  | (0x80000000U 
                                                     & vlSelf->top__DOT__mmu_instr));
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & (IData)(vlSelf->top__DOT__jump_en))) {
            vlSelf->top__DOT__exu_instr = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__exu_instr = vlSelf->top__DOT__idu_instr;
        }
    } else {
        vlSelf->top__DOT__exu_instr = 0U;
    }
    if (((0U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_000))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_000 
            = (0U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if (((1U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_001))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_001 
            = (1U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if (((2U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_010))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_010 
            = (2U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if (((3U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_011))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_011 
            = (3U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if (((4U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_100))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_100 
            = (4U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if (((5U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_101))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_101 
            = (5U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if (((6U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_110))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_110 
            = (6U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if (((7U == (IData)(vlSelf->top__DOT__idu_funct3)) 
         ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_111))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_111 
            = (7U == (IData)(vlSelf->top__DOT__idu_funct3));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_funct3) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct3)))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT____Vtogcov__idu_funct3 = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct3)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct3)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__idu_funct3) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct3)))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT____Vtogcov__idu_funct3 = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct3)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct3)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__idu_funct3) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__idu_funct3)))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT____Vtogcov__idu_funct3 = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__idu_funct3)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->top__DOT__idu_funct3)));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__addiw_en 
        = ((IData)(vlSelf->top__DOT__idu_iwop_en) & 
           (0U == (IData)(vlSelf->top__DOT__idu_funct3)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__addw_en 
        = (((IData)(vlSelf->top__DOT__idu_rwop_en) 
            & (0U == (IData)(vlSelf->top__DOT__idu_funct3))) 
           & (~ ((IData)(vlSelf->top__DOT__idu_funct7) 
                 >> 5U)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__subw_en 
        = (((IData)(vlSelf->top__DOT__idu_rwop_en) 
            & (0U == (IData)(vlSelf->top__DOT__idu_funct3))) 
           & ((IData)(vlSelf->top__DOT__idu_funct7) 
              >> 5U));
    if (((IData)(vlSelf->top__DOT__exu_wb_spc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_wb_spc_en))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelf->top__DOT____Vtogcov__exu_wb_spc_en 
            = vlSelf->top__DOT__exu_wb_spc_en;
    }
    if (((IData)(vlSelf->top__DOT__exu_wb_alu_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_wb_alu_en))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelf->top__DOT____Vtogcov__exu_wb_alu_en 
            = vlSelf->top__DOT__exu_wb_alu_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_wb_alu_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_wb_alu_en = vlSelf->top__DOT__idu_inst__DOT__wb_alu_en;
        }
    } else {
        vlSelf->top__DOT__idu_wb_alu_en = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_snxt_pc) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_snxt_pc)))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_snxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_snxt_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__exu_snxt_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->top__DOT____Vtogcov__exu_snxt_pc = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__exu_snxt_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_snxt_pc 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_snxt_pc = 0ULL;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_snxt_pc = vlSelf->top__DOT__ifu_snxt_pc;
        }
    } else {
        vlSelf->top__DOT__idu_snxt_pc = 0ULL;
    }
    if (((IData)(vlSelf->top__DOT__exu_load_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__exu_load_en))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->top__DOT____Vtogcov__exu_load_en = vlSelf->top__DOT__exu_load_en;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
             & ((IData)(vlSelf->top__DOT__jump_en) 
                | (IData)(vlSelf->top__DOT__hazard_nop)))) {
            vlSelf->top__DOT__idu_load_en = 0U;
        } else if (vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) {
            vlSelf->top__DOT__idu_load_en = vlSelf->top__DOT__idu_inst__DOT__load_en;
        }
    } else {
        vlSelf->top__DOT__idu_load_en = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_alu_result) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__jump_pc)))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->top__DOT__exu_alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__jump_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT____Vtogcov__jump_pc = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__jump_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__exu_alu_result 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
}
