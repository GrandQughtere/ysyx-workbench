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
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
        = (((((((((- (QData)((IData)((0U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U])))) 
                 | ((- (QData)((IData)((1U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                    & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]))))) 
                | ((- (QData)((IData)((2U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                   & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]))))) 
               | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]))))) 
              | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                 & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_div)) 
             | ((- (QData)((IData)((5U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu)) 
            | ((- (QData)((IData)((6U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_rem)) 
           | ((- (QData)((IData)((7U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
              & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu));
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3943]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3944]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3945]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3946]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3947]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3948]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result)))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result)))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_result = (
                                                   ((((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_en))) 
                                                      & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result) 
                                                     | ((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_en))) 
                                                        & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)) 
                                                    | ((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_en))) 
                                                       & (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                                                                                >> 0x1fU))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result))))) 
                                                   | ((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_en))) 
                                                      & (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result)))));
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result)))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__5(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__7(vlSelf);
        Vtop___024root___sequent__TOP__8(vlSelf);
    }
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
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
