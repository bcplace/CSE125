// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtestbench__Syms;

class Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk_i;
    CData/*0:0*/ testbench__DOT__reset_i;
    CData/*0:0*/ testbench__DOT__startbutton_i;
    CData/*1:0*/ testbench__DOT__rg__DOT__ctr_lo_r;
    CData/*1:0*/ testbench__DOT__rg__DOT__ctr_hi_r;
    CData/*0:0*/ testbench__DOT__rg__DOT__phase_lo_r;
    CData/*0:0*/ testbench__DOT__rg__DOT__phase_hi_r;
    CData/*1:0*/ testbench__DOT__dut__DOT__cstate_l;
    CData/*1:0*/ testbench__DOT__dut__DOT__nstate_l;
    CData/*4:0*/ testbench__DOT__dut__DOT__ncounter;
    CData/*0:0*/ testbench__DOT__dut__DOT__playcounterup;
    CData/*0:0*/ testbench__DOT__dut__DOT__pausecounterup;
    CData/*0:0*/ testbench__DOT__dut__DOT__playcounter_reset;
    CData/*0:0*/ testbench__DOT__dut__DOT__pausecounter_reset;
    CData/*0:0*/ testbench__DOT__dut__DOT____Vcellinp__playcounter_inst__reset_i;
    CData/*0:0*/ testbench__DOT__dut__DOT____Vcellinp__pausecounter_inst__reset_i;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__clk_i;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__reset_i;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ testbench__DOT__dut__DOT__cfstep_l;
    IData/*31:0*/ testbench__DOT__dut__DOT__nfstep_l;
    IData/*24:0*/ testbench__DOT__dut__DOT__playcounter_inst__DOT__dffout_l;
    IData/*24:0*/ testbench__DOT__dut__DOT__playcounter_inst__DOT__addin_l;
    IData/*25:0*/ testbench__DOT__dut__DOT__playcounter_inst__DOT____Vcellout__adder_inst__sum_o;
    IData/*24:0*/ testbench__DOT__dut__DOT__pausecounter_inst__DOT__dffout_l;
    IData/*24:0*/ testbench__DOT__dut__DOT__pausecounter_inst__DOT__addin_l;
    IData/*25:0*/ testbench__DOT__dut__DOT__pausecounter_inst__DOT____Vcellout__adder_inst__sum_o;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 23> testbench__DOT__dut__DOT__notes_to_play;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
