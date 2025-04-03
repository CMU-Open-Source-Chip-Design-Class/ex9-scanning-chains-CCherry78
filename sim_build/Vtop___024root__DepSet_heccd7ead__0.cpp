// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ adder__DOT____VdfgTmp_h396f738f__0;
    adder__DOT____VdfgTmp_h396f738f__0 = 0;
    CData/*3:0*/ adder__DOT____VdfgTmp_hc2345a7c__0;
    adder__DOT____VdfgTmp_hc2345a7c__0 = 0;
    CData/*2:0*/ adder__DOT____VdfgTmp_h558af634__0;
    adder__DOT____VdfgTmp_h558af634__0 = 0;
    CData/*2:0*/ adder__DOT____VdfgTmp_he0986f04__0;
    adder__DOT____VdfgTmp_he0986f04__0 = 0;
    CData/*1:0*/ adder__DOT____VdfgTmp_h93ebafa5__0;
    adder__DOT____VdfgTmp_h93ebafa5__0 = 0;
    CData/*1:0*/ adder__DOT____VdfgTmp_hca6c6ab9__0;
    adder__DOT____VdfgTmp_hca6c6ab9__0 = 0;
    // Body
    vlSelf->adder__DOT__a_in = vlSelf->a_in;
    vlSelf->adder__DOT__b_in = vlSelf->b_in;
    vlSelf->adder__DOT__clk = vlSelf->clk;
    vlSelf->adder__DOT__scan_in = vlSelf->scan_in;
    vlSelf->adder__DOT__scan_en = vlSelf->scan_en;
    vlSelf->x_out = vlSelf->adder__DOT__x_out;
    vlSelf->scan_out = vlSelf->adder__DOT__scan_out;
    vlSelf->adder__DOT___00_ = (1U & ((IData)(vlSelf->adder__DOT__a_reg__05b0__05d) 
                                      + (IData)(vlSelf->adder__DOT__b_reg__05b0__05d)));
    adder__DOT____VdfgTmp_h93ebafa5__0 = (((IData)(vlSelf->adder__DOT__a_reg__05b1__05d) 
                                           << 1U) | (IData)(vlSelf->adder__DOT__a_reg__05b0__05d));
    adder__DOT____VdfgTmp_hca6c6ab9__0 = (((IData)(vlSelf->adder__DOT__b_reg__05b1__05d) 
                                           << 1U) | (IData)(vlSelf->adder__DOT__b_reg__05b0__05d));
    vlSelf->adder__DOT__b_reg__05b3__05d = vlSelf->scan_out;
    adder__DOT____VdfgTmp_h558af634__0 = (((IData)(vlSelf->adder__DOT__a_reg__05b2__05d) 
                                           << 2U) | (IData)(adder__DOT____VdfgTmp_h93ebafa5__0));
    vlSelf->adder__DOT___01_ = (1U & (((IData)(adder__DOT____VdfgTmp_h93ebafa5__0) 
                                       + (IData)(adder__DOT____VdfgTmp_hca6c6ab9__0)) 
                                      >> 1U));
    adder__DOT____VdfgTmp_he0986f04__0 = (((IData)(vlSelf->adder__DOT__b_reg__05b2__05d) 
                                           << 2U) | (IData)(adder__DOT____VdfgTmp_hca6c6ab9__0));
    adder__DOT____VdfgTmp_h396f738f__0 = (((IData)(vlSelf->adder__DOT__a_reg__05b3__05d) 
                                           << 3U) | (IData)(adder__DOT____VdfgTmp_h558af634__0));
    vlSelf->adder__DOT___02_ = (1U & (((IData)(adder__DOT____VdfgTmp_h558af634__0) 
                                       + (IData)(adder__DOT____VdfgTmp_he0986f04__0)) 
                                      >> 2U));
    adder__DOT____VdfgTmp_hc2345a7c__0 = (((IData)(vlSelf->adder__DOT__scan_out) 
                                           << 3U) | (IData)(adder__DOT____VdfgTmp_he0986f04__0));
    vlSelf->adder__DOT___04_ = (1U & (((IData)(adder__DOT____VdfgTmp_h396f738f__0) 
                                       + (IData)(adder__DOT____VdfgTmp_hc2345a7c__0)) 
                                      >> 4U));
    vlSelf->adder__DOT___03_ = (1U & (((IData)(adder__DOT____VdfgTmp_h396f738f__0) 
                                       + (IData)(adder__DOT____VdfgTmp_hc2345a7c__0)) 
                                      >> 3U));
    if (vlSelf->scan_en) {
        vlSelf->adder__DOT___16_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 4U));
        vlSelf->adder__DOT___15_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b0__05d));
        vlSelf->adder__DOT___14_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b1__05d));
        vlSelf->adder__DOT___13_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b2__05d));
        vlSelf->adder__DOT___12_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b3__05d));
        vlSelf->adder__DOT___11_ = (1U & (IData)(vlSelf->adder__DOT__b_reg__05b0__05d));
        vlSelf->adder__DOT___10_ = (1U & (IData)(vlSelf->adder__DOT__b_reg__05b1__05d));
        vlSelf->adder__DOT___05_ = (1U & (IData)(vlSelf->adder__DOT__b_reg__05b2__05d));
        vlSelf->adder__DOT___09_ = vlSelf->scan_in;
        vlSelf->adder__DOT___08_ = (1U & (IData)(vlSelf->adder__DOT__x_out));
        vlSelf->adder__DOT___07_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 1U));
        vlSelf->adder__DOT___17_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 3U));
        vlSelf->adder__DOT___06_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 2U));
    } else {
        vlSelf->adder__DOT___16_ = (1U & (IData)(vlSelf->a_in));
        vlSelf->adder__DOT___15_ = (1U & ((IData)(vlSelf->a_in) 
                                          >> 1U));
        vlSelf->adder__DOT___14_ = (1U & ((IData)(vlSelf->a_in) 
                                          >> 2U));
        vlSelf->adder__DOT___13_ = (1U & ((IData)(vlSelf->a_in) 
                                          >> 3U));
        vlSelf->adder__DOT___12_ = (1U & (IData)(vlSelf->b_in));
        vlSelf->adder__DOT___11_ = (1U & ((IData)(vlSelf->b_in) 
                                          >> 1U));
        vlSelf->adder__DOT___10_ = (1U & ((IData)(vlSelf->b_in) 
                                          >> 2U));
        vlSelf->adder__DOT___05_ = (1U & ((IData)(vlSelf->b_in) 
                                          >> 3U));
        vlSelf->adder__DOT___09_ = vlSelf->adder__DOT___00_;
        vlSelf->adder__DOT___08_ = (1U & (IData)(vlSelf->adder__DOT___01_));
        vlSelf->adder__DOT___07_ = (1U & (IData)(vlSelf->adder__DOT___02_));
        vlSelf->adder__DOT___17_ = (1U & (IData)(vlSelf->adder__DOT___04_));
        vlSelf->adder__DOT___06_ = (1U & (IData)(vlSelf->adder__DOT___03_));
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ adder__DOT____VdfgTmp_h396f738f__0;
    adder__DOT____VdfgTmp_h396f738f__0 = 0;
    CData/*3:0*/ adder__DOT____VdfgTmp_hc2345a7c__0;
    adder__DOT____VdfgTmp_hc2345a7c__0 = 0;
    CData/*2:0*/ adder__DOT____VdfgTmp_h558af634__0;
    adder__DOT____VdfgTmp_h558af634__0 = 0;
    CData/*2:0*/ adder__DOT____VdfgTmp_he0986f04__0;
    adder__DOT____VdfgTmp_he0986f04__0 = 0;
    CData/*1:0*/ adder__DOT____VdfgTmp_h93ebafa5__0;
    adder__DOT____VdfgTmp_h93ebafa5__0 = 0;
    CData/*1:0*/ adder__DOT____VdfgTmp_hca6c6ab9__0;
    adder__DOT____VdfgTmp_hca6c6ab9__0 = 0;
    // Body
    vlSelf->adder__DOT__a_reg__05b3__05d = vlSelf->adder__DOT___13_;
    vlSelf->adder__DOT__scan_out = vlSelf->adder__DOT___05_;
    vlSelf->adder__DOT__b_reg__05b2__05d = vlSelf->adder__DOT___10_;
    vlSelf->adder__DOT__a_reg__05b2__05d = vlSelf->adder__DOT___14_;
    vlSelf->adder__DOT__x_out = (((IData)(vlSelf->adder__DOT___17_) 
                                  << 4U) | (((IData)(vlSelf->adder__DOT___06_) 
                                             << 3U) 
                                            | (((IData)(vlSelf->adder__DOT___07_) 
                                                << 2U) 
                                               | (((IData)(vlSelf->adder__DOT___08_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->adder__DOT___09_)))));
    vlSelf->adder__DOT__b_reg__05b1__05d = vlSelf->adder__DOT___11_;
    vlSelf->adder__DOT__a_reg__05b1__05d = vlSelf->adder__DOT___15_;
    vlSelf->adder__DOT__b_reg__05b0__05d = vlSelf->adder__DOT___12_;
    vlSelf->adder__DOT__a_reg__05b0__05d = vlSelf->adder__DOT___16_;
    vlSelf->scan_out = vlSelf->adder__DOT__scan_out;
    vlSelf->x_out = vlSelf->adder__DOT__x_out;
    adder__DOT____VdfgTmp_hca6c6ab9__0 = (((IData)(vlSelf->adder__DOT__b_reg__05b1__05d) 
                                           << 1U) | (IData)(vlSelf->adder__DOT__b_reg__05b0__05d));
    vlSelf->adder__DOT___00_ = (1U & ((IData)(vlSelf->adder__DOT__a_reg__05b0__05d) 
                                      + (IData)(vlSelf->adder__DOT__b_reg__05b0__05d)));
    adder__DOT____VdfgTmp_h93ebafa5__0 = (((IData)(vlSelf->adder__DOT__a_reg__05b1__05d) 
                                           << 1U) | (IData)(vlSelf->adder__DOT__a_reg__05b0__05d));
    vlSelf->adder__DOT__b_reg__05b3__05d = vlSelf->scan_out;
    adder__DOT____VdfgTmp_he0986f04__0 = (((IData)(vlSelf->adder__DOT__b_reg__05b2__05d) 
                                           << 2U) | (IData)(adder__DOT____VdfgTmp_hca6c6ab9__0));
    vlSelf->adder__DOT___01_ = (1U & (((IData)(adder__DOT____VdfgTmp_h93ebafa5__0) 
                                       + (IData)(adder__DOT____VdfgTmp_hca6c6ab9__0)) 
                                      >> 1U));
    adder__DOT____VdfgTmp_h558af634__0 = (((IData)(vlSelf->adder__DOT__a_reg__05b2__05d) 
                                           << 2U) | (IData)(adder__DOT____VdfgTmp_h93ebafa5__0));
    adder__DOT____VdfgTmp_hc2345a7c__0 = (((IData)(vlSelf->adder__DOT__scan_out) 
                                           << 3U) | (IData)(adder__DOT____VdfgTmp_he0986f04__0));
    vlSelf->adder__DOT___02_ = (1U & (((IData)(adder__DOT____VdfgTmp_h558af634__0) 
                                       + (IData)(adder__DOT____VdfgTmp_he0986f04__0)) 
                                      >> 2U));
    adder__DOT____VdfgTmp_h396f738f__0 = (((IData)(vlSelf->adder__DOT__a_reg__05b3__05d) 
                                           << 3U) | (IData)(adder__DOT____VdfgTmp_h558af634__0));
    vlSelf->adder__DOT___04_ = (1U & (((IData)(adder__DOT____VdfgTmp_h396f738f__0) 
                                       + (IData)(adder__DOT____VdfgTmp_hc2345a7c__0)) 
                                      >> 4U));
    vlSelf->adder__DOT___03_ = (1U & (((IData)(adder__DOT____VdfgTmp_h396f738f__0) 
                                       + (IData)(adder__DOT____VdfgTmp_hc2345a7c__0)) 
                                      >> 3U));
    if (vlSelf->scan_en) {
        vlSelf->adder__DOT___12_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b3__05d));
        vlSelf->adder__DOT___05_ = (1U & (IData)(vlSelf->adder__DOT__b_reg__05b2__05d));
        vlSelf->adder__DOT___13_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b2__05d));
        vlSelf->adder__DOT___16_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 4U));
        vlSelf->adder__DOT___10_ = (1U & (IData)(vlSelf->adder__DOT__b_reg__05b1__05d));
        vlSelf->adder__DOT___14_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b1__05d));
        vlSelf->adder__DOT___11_ = (1U & (IData)(vlSelf->adder__DOT__b_reg__05b0__05d));
        vlSelf->adder__DOT___15_ = (1U & (IData)(vlSelf->adder__DOT__a_reg__05b0__05d));
        vlSelf->adder__DOT___09_ = vlSelf->scan_in;
        vlSelf->adder__DOT___08_ = (1U & (IData)(vlSelf->adder__DOT__x_out));
        vlSelf->adder__DOT___07_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 1U));
        vlSelf->adder__DOT___17_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 3U));
        vlSelf->adder__DOT___06_ = (1U & ((IData)(vlSelf->adder__DOT__x_out) 
                                          >> 2U));
    } else {
        vlSelf->adder__DOT___12_ = (1U & (IData)(vlSelf->b_in));
        vlSelf->adder__DOT___05_ = (1U & ((IData)(vlSelf->b_in) 
                                          >> 3U));
        vlSelf->adder__DOT___13_ = (1U & ((IData)(vlSelf->a_in) 
                                          >> 3U));
        vlSelf->adder__DOT___16_ = (1U & (IData)(vlSelf->a_in));
        vlSelf->adder__DOT___10_ = (1U & ((IData)(vlSelf->b_in) 
                                          >> 2U));
        vlSelf->adder__DOT___14_ = (1U & ((IData)(vlSelf->a_in) 
                                          >> 2U));
        vlSelf->adder__DOT___11_ = (1U & ((IData)(vlSelf->b_in) 
                                          >> 1U));
        vlSelf->adder__DOT___15_ = (1U & ((IData)(vlSelf->a_in) 
                                          >> 1U));
        vlSelf->adder__DOT___09_ = vlSelf->adder__DOT___00_;
        vlSelf->adder__DOT___08_ = (1U & (IData)(vlSelf->adder__DOT___01_));
        vlSelf->adder__DOT___07_ = (1U & (IData)(vlSelf->adder__DOT___02_));
        vlSelf->adder__DOT___17_ = (1U & (IData)(vlSelf->adder__DOT___04_));
        vlSelf->adder__DOT___06_ = (1U & (IData)(vlSelf->adder__DOT___03_));
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/ex9-scanning-chains-CCherry78/adder/adder_out.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/ex9-scanning-chains-CCherry78/adder/adder_out.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/ex9-scanning-chains-CCherry78/adder/adder_out.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a_in & 0xf0U))) {
        Verilated::overWidthError("a_in");}
    if (VL_UNLIKELY((vlSelf->b_in & 0xf0U))) {
        Verilated::overWidthError("b_in");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->scan_in & 0xfeU))) {
        Verilated::overWidthError("scan_in");}
    if (VL_UNLIKELY((vlSelf->scan_en & 0xfeU))) {
        Verilated::overWidthError("scan_en");}
}
#endif  // VL_DEBUG
