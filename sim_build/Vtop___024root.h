// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(a_in,3,0);
    VL_IN8(b_in,3,0);
    VL_OUT8(x_out,4,0);
    VL_IN8(scan_in,0,0);
    VL_IN8(scan_en,0,0);
    VL_OUT8(scan_out,0,0);
    CData/*3:0*/ adder__DOT__a_in;
    CData/*3:0*/ adder__DOT__b_in;
    CData/*4:0*/ adder__DOT__x_out;
    CData/*0:0*/ adder__DOT__clk;
    CData/*0:0*/ adder__DOT__scan_in;
    CData/*0:0*/ adder__DOT__scan_en;
    CData/*0:0*/ adder__DOT__scan_out;
    CData/*0:0*/ adder__DOT___00_;
    CData/*0:0*/ adder__DOT___01_;
    CData/*0:0*/ adder__DOT___02_;
    CData/*0:0*/ adder__DOT___03_;
    CData/*0:0*/ adder__DOT___04_;
    CData/*0:0*/ adder__DOT___05_;
    CData/*0:0*/ adder__DOT___06_;
    CData/*0:0*/ adder__DOT___07_;
    CData/*0:0*/ adder__DOT___08_;
    CData/*0:0*/ adder__DOT___09_;
    CData/*0:0*/ adder__DOT___10_;
    CData/*0:0*/ adder__DOT___11_;
    CData/*0:0*/ adder__DOT___12_;
    CData/*0:0*/ adder__DOT___13_;
    CData/*0:0*/ adder__DOT___14_;
    CData/*0:0*/ adder__DOT___15_;
    CData/*0:0*/ adder__DOT___16_;
    CData/*0:0*/ adder__DOT___17_;
    CData/*0:0*/ adder__DOT__a_reg__05b0__05d;
    CData/*0:0*/ adder__DOT__a_reg__05b1__05d;
    CData/*0:0*/ adder__DOT__a_reg__05b2__05d;
    CData/*0:0*/ adder__DOT__a_reg__05b3__05d;
    CData/*0:0*/ adder__DOT__b_reg__05b0__05d;
    CData/*0:0*/ adder__DOT__b_reg__05b1__05d;
    CData/*0:0*/ adder__DOT__b_reg__05b2__05d;
    CData/*0:0*/ adder__DOT__b_reg__05b3__05d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
