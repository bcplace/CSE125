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
    CData/*0:0*/ testbench__DOT__dut__DOT__clk_o;
    CData/*0:0*/ testbench__DOT__rg__DOT__ctr_lo_r;
    CData/*3:0*/ testbench__DOT__rg__DOT__ctr_hi_r;
    CData/*0:0*/ testbench__DOT__rg__DOT__phase_lo_r;
    CData/*0:0*/ testbench__DOT__rg__DOT__phase_hi_r;
    CData/*2:0*/ testbench__DOT__dut__DOT__button_async_unsafe_i;
    CData/*0:0*/ testbench__DOT__dut__DOT__tx_main_clk_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__tx_lr_clk_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__tx_data_clk_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__tx_data_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__rx_main_clk_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__rx_lr_clk_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__rx_data_clk_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__rx_data_i;
    CData/*4:0*/ testbench__DOT__dut__DOT__led_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_tx_ready;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_rx_valid;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_rx_ready;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_rx_last;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_clk;
    CData/*0:0*/ testbench__DOT__dut__DOT__sync_a__DOT__q_r;
    CData/*0:0*/ testbench__DOT__dut__DOT__sync_b__DOT__q_r;
    CData/*0:0*/ testbench__DOT__dut__DOT__sinegen__DOT__valid_o_l;
    CData/*0:0*/ testbench__DOT__dut__DOT__sinegen__DOT__tx_valid_data;
    CData/*4:0*/ testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__read_addr_l;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__clk_i;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__reset_i;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__dut__DOT__clk_o;
    CData/*0:0*/ __VactContinue;
    IData/*23:0*/ testbench__DOT__dut__DOT__axis_rx_data;
    IData/*31:0*/ testbench__DOT__dut__DOT__sinegen__DOT__phase_l;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*23:0*/, 32> testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

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
