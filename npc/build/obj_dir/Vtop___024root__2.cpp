// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__8\n"); );
    // Body
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
        = (((((((((- (QData)((IData)((0U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U])))) 
                 | ((- (QData)((IData)((1U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                    & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]))))) 
                | ((- (QData)((IData)((2U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                   & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]))))) 
               | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]))))) 
              | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                 & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_div)) 
             | ((- (QData)((IData)((5U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_divu)) 
            | ((- (QData)((IData)((6U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_rem)) 
           | ((- (QData)((IData)((7U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
              & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_divu));
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2)))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
        = (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1 
           + vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2);
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__data_rs1) 
           + (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__data_rs1) 
           - (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__data_rs1) 
           << (0x1fU & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__data_rs1) 
           >> (0x1fU & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__exu_inst__DOT__data_rs1), 
                         (0x1fU & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
        = (vlSelf->top__DOT__exu_inst__DOT__data_rs1 
           - vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2);
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
        = (vlSelf->top__DOT__exu_inst__DOT__data_rs1 
           << (0x3fU & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
        = (QData)((IData)(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu_inst__DOT__data_rs1, vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
        = (QData)((IData)((vlSelf->top__DOT__exu_inst__DOT__data_rs1 
                           < vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
        = (vlSelf->top__DOT__exu_inst__DOT__data_rs1 
           ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2);
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
        = (vlSelf->top__DOT__exu_inst__DOT__data_rs1 
           >> (0x3fU & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exu_inst__DOT__data_rs1, 
                         (0x3fU & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)));
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
        = (vlSelf->top__DOT__exu_inst__DOT__data_rs1 
           | vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2);
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
        = (vlSelf->top__DOT__exu_inst__DOT__data_rs1 
           & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2);
    if ((1U & ((IData)(vlSelf->top__DOT__idu_inst__DOT__imm) 
               ^ (IData)(vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__idu_inst__DOT__imm)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__imm 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__idu_inst__DOT__addop_en) 
         ^ (IData)(vlSelf->top__DOT__idu_inst__DOT____Vtogcov__addop_en))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__addop_en 
            = vlSelf->top__DOT__idu_inst__DOT__addop_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_inst__DOT__rs2_en) 
         ^ (IData)(vlSelf->top__DOT__idu_inst__DOT____Vtogcov__rs2_en))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__rs2_en 
            = vlSelf->top__DOT__idu_inst__DOT__rs2_en;
    }
    if (((IData)(vlSelf->top__DOT__idu_inst__DOT__wb_alu_en) 
         ^ (IData)(vlSelf->top__DOT__idu_inst__DOT____Vtogcov__wb_alu_en))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__wb_alu_en 
            = vlSelf->top__DOT__idu_inst__DOT__wb_alu_en;
    }
    if (((IData)(vlSelf->top__DOT__need_rs2) ^ (IData)(vlSelf->top__DOT____Vtogcov__need_rs2))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->top__DOT____Vtogcov__need_rs2 = vlSelf->top__DOT__need_rs2;
    }
    vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2 
        = (((IData)(vlSelf->top__DOT__idu_index_rd) 
            == (0x1fU & (vlSelf->top__DOT__ifu_instr 
                         >> 0x14U))) & (IData)(vlSelf->top__DOT__need_rs2));
    if (((IData)(vlSelf->top__DOT__need_rs1) ^ (IData)(vlSelf->top__DOT____Vtogcov__need_rs1))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->top__DOT____Vtogcov__need_rs1 = vlSelf->top__DOT__need_rs1;
    }
    vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1 
        = (((IData)(vlSelf->top__DOT__idu_index_rd) 
            == (0x1fU & (vlSelf->top__DOT__ifu_instr 
                         >> 0xfU))) & (IData)(vlSelf->top__DOT__need_rs1));
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result)))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4069]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4070]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4071]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4072]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4073]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4074]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4075]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4076]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4077]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4078]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4079]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4080]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4081]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4082]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4083]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4084]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4085]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4086]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4087]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4088]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4089]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4090]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4091]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4092]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4093]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4094]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4095]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4096]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4097]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub))) {
        ++(vlSymsp->__Vcoverage[4098]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4099]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4100]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4101]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4102]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4103]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4104]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4105]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4106]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4107]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4108]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4109]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4110]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4111]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4112]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4113]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4114]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4115]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4116]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4117]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4118]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4119]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4120]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4121]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4122]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4123]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4124]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4125]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4126]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4133]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4134]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4135]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4136]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4137]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4138]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4139]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4142]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4143]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4144]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4145]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4146]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4147]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4148]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4149]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4150]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4151]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4152]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4153]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4156]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4159]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4160]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4161]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl))) {
        ++(vlSymsp->__Vcoverage[4162]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
        = ((((((- (IData)(((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__addiw_en) 
                           | (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__addw_en)))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add) 
              | ((- (IData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__subw_en))) 
                 & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub)) 
             | ((- (IData)((1U == (IData)(vlSelf->top__DOT__idu_funct3)))) 
                & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll)) 
            | ((- (IData)(((5U == (IData)(vlSelf->top__DOT__idu_funct3)) 
                           & (~ ((IData)(vlSelf->top__DOT__idu_funct7) 
                                 >> 5U))))) & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl)) 
           | ((- (IData)(((5U == (IData)(vlSelf->top__DOT__idu_funct3)) 
                          & ((IData)(vlSelf->top__DOT__idu_funct7) 
                             >> 5U)))) & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra));
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub)))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll)))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt)))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu)))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor)))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl)))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra)))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or)))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and)))) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3943]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3944]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3945]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3946]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3947]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3948]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3955]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3956]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3957]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3958]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3959]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3960]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
        = ((((((((((- (QData)((IData)((0U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                   & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub) 
                  | ((- (QData)((IData)((1U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                     & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll)) 
                 | ((- (QData)((IData)((2U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                    & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt)) 
                | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                   & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu)) 
               | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                  & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor)) 
              | ((- (QData)((IData)(((5U == (IData)(vlSelf->top__DOT__idu_funct3)) 
                                     & (~ ((IData)(vlSelf->top__DOT__idu_funct7) 
                                           >> 5U)))))) 
                 & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl)) 
             | ((- (QData)((IData)(((5U == (IData)(vlSelf->top__DOT__idu_funct3)) 
                                    & ((IData)(vlSelf->top__DOT__idu_funct7) 
                                       >> 5U))))) & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra)) 
            | ((- (QData)((IData)((6U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or)) 
           | ((- (QData)((IData)((7U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
              & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and));
    if (((IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2) 
         ^ (IData)(vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs2))) {
        ++(vlSymsp->__Vcoverage[4599]);
        vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs2 
            = vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2;
    }
    if (((IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1) 
         ^ (IData)(vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs1))) {
        ++(vlSymsp->__Vcoverage[4598]);
        vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs1 
            = vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1;
    }
    vlSelf->top__DOT__hazard_nop = ((IData)(vlSelf->top__DOT__idu_load_en) 
                                    & ((IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1) 
                                       | (IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2)));
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result)))) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_result = (
                                                   (((((- (QData)((IData)(vlSelf->top__DOT__idu_addop_en))) 
                                                       & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum) 
                                                      | ((- (QData)((IData)(vlSelf->top__DOT__idu_mop_en))) 
                                                         & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result)) 
                                                     | ((- (QData)((IData)(
                                                                           ((IData)(vlSelf->top__DOT__idu_iop_en) 
                                                                            | (IData)(vlSelf->top__DOT__idu_rop_en))))) 
                                                        & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result)) 
                                                    | ((- (QData)((IData)(vlSelf->top__DOT__idu_mwop_en))) 
                                                       & (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                                                                                >> 0x1fU))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result))))) 
                                                   | ((- (QData)((IData)(
                                                                         ((IData)(vlSelf->top__DOT__idu_iwop_en) 
                                                                          | (IData)(vlSelf->top__DOT__idu_rwop_en))))) 
                                                      & (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result)))));
    if (((IData)(vlSelf->top__DOT__hazard_nop) ^ (IData)(vlSelf->top__DOT____Vtogcov__hazard_stop))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->top__DOT____Vtogcov__hazard_stop = vlSelf->top__DOT__hazard_nop;
    }
    vlSelf->dnxt_pc = ((IData)(vlSelf->top__DOT__jump_en)
                        ? vlSelf->top__DOT__exu_alu_result
                        : ((IData)(vlSelf->top__DOT__hazard_nop)
                            ? vlSelf->pc : vlSelf->snxt_pc));
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result)))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->dnxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__dnxt_pc)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->dnxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 2U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 3U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 4U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 5U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 6U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 7U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 8U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 9U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xaU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xbU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xcU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xdU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xeU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xfU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffff7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffeffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffdffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffbffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffefffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffdfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffbfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffff7fffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffeffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffdffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffbffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffefffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffdfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffbfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xff7fffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfeffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfdffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfbffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xefffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xdfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xbfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
}
