// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9849538a__0;
    // Body
    __Vtemp_h9849538a__0[0U] = 0x2e667374U;
    __Vtemp_h9849538a__0[1U] = 0x61746f72U;
    __Vtemp_h9849538a__0[2U] = 0x6572696cU;
    __Vtemp_h9849538a__0[3U] = 0x76U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_h9849538a__0));
    vlSymsp->_traceDumpOpen();
    vlSelf->testbench__DOT__reset_i = 0U;
    co_await vlSelf->__VdlySched.delay(0x30d40U, "testbench.sv", 
                                       37);
    vlSelf->testbench__DOT__reset_i = 1U;
    vlSelf->testbench__DOT__keypad_row = 0xfU;
    co_await vlSelf->__VdlySched.delay(0x493e0U, "testbench.sv", 
                                       40);
    vlSelf->testbench__DOT__keypad_row = 0xeU;
    co_await vlSelf->__VdlySched.delay(0x493e0U, "testbench.sv", 
                                       42);
    vlSelf->testbench__DOT__keypad_row = 0xdU;
    co_await vlSelf->__VdlySched.delay(0x493e0U, "testbench.sv", 
                                       44);
    vlSelf->testbench__DOT__keypad_row = 0xbU;
    co_await vlSelf->__VdlySched.delay(0x493e0U, "testbench.sv", 
                                       46);
    vlSelf->testbench__DOT__keypad_row = 8U;
    co_await vlSelf->__VdlySched.delay(0x493e0U, "testbench.sv", 
                                       48);
    VL_FINISH_MT("testbench.sv", 49, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->testbench__DOT__dut__DOT__clk_o) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__testbench__DOT__dut__DOT__clk_o)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__dut__DOT__clk_o 
        = vlSelf->testbench__DOT__dut__DOT__clk_o;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
