// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/ex9-scanning-chains-CCherry78/adder/adder_out.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a_in = VL_RAND_RESET_I(4);
    vlSelf->b_in = VL_RAND_RESET_I(4);
    vlSelf->x_out = VL_RAND_RESET_I(5);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->scan_in = VL_RAND_RESET_I(1);
    vlSelf->scan_en = VL_RAND_RESET_I(1);
    vlSelf->scan_out = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__a_in = VL_RAND_RESET_I(4);
    vlSelf->adder__DOT__b_in = VL_RAND_RESET_I(4);
    vlSelf->adder__DOT__x_out = VL_RAND_RESET_I(5);
    vlSelf->adder__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__scan_in = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__scan_en = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__scan_out = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___00_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___01_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___02_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___03_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___04_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___05_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___06_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___07_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___08_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___09_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___10_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___11_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___12_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___13_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___14_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___15_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___16_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT___17_ = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__a_reg__05b0__05d = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__a_reg__05b1__05d = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__a_reg__05b2__05d = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__a_reg__05b3__05d = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__b_reg__05b0__05d = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__b_reg__05b1__05d = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__b_reg__05b2__05d = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__b_reg__05b3__05d = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
