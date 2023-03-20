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
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->testbench__DOT__dut__DOT__cstate_l = 0U;
    vlSelf->testbench__DOT__dut__DOT__nstate_l = 0U;
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__addin_l = 0U;
}

VL_ATTR_COLD void Vtestbench___024root___eval_final__TOP(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
    // Body
    Vtestbench___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root___eval_final__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final__TOP\n"); );
    // Body
    VL_WRITEF("END OF TESTBENCH --------------------------\n");
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
    vlSelf->testbench__DOT__rg__DOT__phase_lo_r = (2U 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    vlSelf->testbench__DOT__rg__DOT__phase_hi_r = (2U 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o 
        = (0x3ffffffU & (vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
                         + vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__addin_l));
    vlSelf->testbench__DOT__reset_i = ((2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r)) 
                                       ^ (2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i 
        = ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_reset) 
           | (IData)(vlSelf->testbench__DOT__reset_i));
}

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge testbench.clk_i)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge testbench.reset_i)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge testbench.reset_i)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge testbench.clk_i)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge testbench.clk_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge testbench.reset_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge testbench.reset_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge testbench.clk_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelf->testbench__DOT__startbutton_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__rg__DOT__ctr_lo_r = 0;
    vlSelf->testbench__DOT__rg__DOT__ctr_hi_r = 0;
    vlSelf->testbench__DOT__rg__DOT__phase_lo_r = 0;
    vlSelf->testbench__DOT__rg__DOT__phase_hi_r = 0;
    vlSelf->testbench__DOT__dut__DOT__cstate_l = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__dut__DOT__nstate_l = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__dut__DOT__ncounter = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 23; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__notes_to_play[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__dut__DOT__cfstep_l = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__nfstep_l = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__counter_reset = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__test = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l = VL_RAND_RESET_I(25);
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__addin_l = VL_RAND_RESET_I(25);
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o = VL_RAND_RESET_I(26);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
