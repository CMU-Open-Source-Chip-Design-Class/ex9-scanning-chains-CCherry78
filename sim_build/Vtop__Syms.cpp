// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_adder);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_adder.configure(this, name(), "adder", "adder", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_adder);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"a_in", &(TOP.a_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"b_in", &(TOP.b_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scan_en", &(TOP.scan_en), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scan_in", &(TOP.scan_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scan_out", &(TOP.scan_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"x_out", &(TOP.x_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,4,0);
        __Vscope_adder.varInsert(__Vfinal,"_00_", &(TOP.adder__DOT___00_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_01_", &(TOP.adder__DOT___01_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_02_", &(TOP.adder__DOT___02_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_03_", &(TOP.adder__DOT___03_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_04_", &(TOP.adder__DOT___04_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_05_", &(TOP.adder__DOT___05_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_06_", &(TOP.adder__DOT___06_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_07_", &(TOP.adder__DOT___07_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_08_", &(TOP.adder__DOT___08_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_09_", &(TOP.adder__DOT___09_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_10_", &(TOP.adder__DOT___10_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_11_", &(TOP.adder__DOT___11_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_12_", &(TOP.adder__DOT___12_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_13_", &(TOP.adder__DOT___13_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_14_", &(TOP.adder__DOT___14_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_15_", &(TOP.adder__DOT___15_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_16_", &(TOP.adder__DOT___16_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"_17_", &(TOP.adder__DOT___17_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"a_in", &(TOP.adder__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_adder.varInsert(__Vfinal,"\\a_reg[0] ", &(TOP.adder__DOT__a_reg__05b0__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"\\a_reg[1] ", &(TOP.adder__DOT__a_reg__05b1__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"\\a_reg[2] ", &(TOP.adder__DOT__a_reg__05b2__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"\\a_reg[3] ", &(TOP.adder__DOT__a_reg__05b3__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"b_in", &(TOP.adder__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_adder.varInsert(__Vfinal,"\\b_reg[0] ", &(TOP.adder__DOT__b_reg__05b0__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"\\b_reg[1] ", &(TOP.adder__DOT__b_reg__05b1__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"\\b_reg[2] ", &(TOP.adder__DOT__b_reg__05b2__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"\\b_reg[3] ", &(TOP.adder__DOT__b_reg__05b3__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"clk", &(TOP.adder__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"scan_en", &(TOP.adder__DOT__scan_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"scan_in", &(TOP.adder__DOT__scan_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"scan_out", &(TOP.adder__DOT__scan_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_adder.varInsert(__Vfinal,"x_out", &(TOP.adder__DOT__x_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
    }
}
