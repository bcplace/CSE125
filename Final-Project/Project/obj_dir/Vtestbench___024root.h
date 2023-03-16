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
    CData/*0:0*/ testbench__DOT__dut__DOT__clk_o;
    CData/*0:0*/ testbench__DOT__clk_i;
    CData/*0:0*/ testbench__DOT__reset_i;
    CData/*3:0*/ testbench__DOT__keypad_row;
    CData/*2:0*/ testbench__DOT__dut__DOT__button_async_unsafe_i;
    CData/*0:0*/ testbench__DOT__dut__DOT__tx_data_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__rx_data_i;
    CData/*4:0*/ testbench__DOT__dut__DOT__led_o;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_tx_valid;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_tx_ready;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_tx_last;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_rx_valid;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_rx_ready;
    CData/*0:0*/ testbench__DOT__dut__DOT__axis_rx_last;
    CData/*3:0*/ testbench__DOT__dut__DOT__row_sync;
    CData/*3:0*/ testbench__DOT__dut__DOT__col_sync;
    CData/*0:0*/ testbench__DOT__dut__DOT____Vcellinp__shifter__data_i;
    CData/*0:0*/ testbench__DOT__dut__DOT__sync_a__DOT__q_r;
    CData/*0:0*/ testbench__DOT__dut__DOT__sync_b__DOT__q_r;
    CData/*2:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift;
    CData/*3:0*/ testbench__DOT__dut__DOT__shifter__DOT__data_c;
    CData/*3:0*/ testbench__DOT__dut__DOT__shifter__DOT__data_n;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__dut__DOT__clk_o;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__count;
    IData/*23:0*/ testbench__DOT__dut__DOT__axis_tx_data;
    IData/*23:0*/ testbench__DOT__dut__DOT__lowB;
    IData/*23:0*/ testbench__DOT__dut__DOT__D;
    IData/*23:0*/ testbench__DOT__dut__DOT__highE;
    IData/*23:0*/ testbench__DOT__dut__DOT__E;
    IData/*31:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l;
    IData/*31:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r;
    IData/*23:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift;
    IData/*23:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift;
    IData/*23:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift;
    IData/*23:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift;
    IData/*31:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l;
    IData/*31:0*/ testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
