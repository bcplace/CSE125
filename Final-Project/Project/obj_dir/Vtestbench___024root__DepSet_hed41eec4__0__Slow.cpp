// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    // Body
    Vtestbench___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->testbench__DOT__dut__DOT__axis_tx_ready = 0U;
    vlSelf->testbench__DOT__dut__DOT__axis_rx_valid = 0U;
    vlSelf->testbench__DOT__dut__DOT__axis_rx_last = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l = 0U;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r = 0U;
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtestbench___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("testbench.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtestbench___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__dut__DOT____Vcellinp__shifter__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c) 
                 >> 3U));
    vlSelf->testbench__DOT__dut__DOT__tx_data_o = (
                                                   ((0x18U 
                                                     >= 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                                         >> 3U))) 
                                                    & (1U 
                                                       <= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                                           >> 3U)))) 
                                                   & ((0x100U 
                                                       & (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))
                                                       ? 
                                                      (vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift 
                                                       >> 0x17U)
                                                       : 
                                                      (vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift 
                                                       >> 0x17U)));
}

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.dut.clk_o)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.dut.clk_o)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__reset_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__keypad_row = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__dut__DOT__button_async_unsafe_i = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__dut__DOT__tx_data_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__rx_data_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__led_o = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__dut__DOT__axis_tx_data = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__axis_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__axis_tx_ready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__axis_tx_last = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__axis_rx_valid = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__axis_rx_ready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__axis_rx_last = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__clk_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__lowB = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__D = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__highE = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__E = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__row_sync = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__dut__DOT__col_sync = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__dut__DOT____Vcellinp__shifter__data_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift = VL_RAND_RESET_I(24);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_n = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__dut__DOT__clk_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
