// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i 
        = vlSelf->testbench__DOT__clk_i;
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset_i 
        = vlSelf->testbench__DOT__reset_i;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x55f0U, 
                                           "../../provided_modules/nonsynth_clock_gen.sv", 
                                           11);
        vlSelf->testbench__DOT__clk_i = (1U & (~ (IData)(vlSelf->testbench__DOT__clk_i)));
    }
}

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__0\n"); );
    // Body
    if ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l)))) {
            if ((0x16U == (IData)(vlSelf->testbench__DOT__dut__DOT__ncounter))) {
                vlSelf->testbench__DOT__dut__DOT__nstate_l = 3U;
            }
            if ((0x1000000U & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l)) {
                vlSelf->testbench__DOT__dut__DOT__nstate_l = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l))) {
        if ((0x16U == (IData)(vlSelf->testbench__DOT__dut__DOT__ncounter))) {
            vlSelf->testbench__DOT__dut__DOT__nstate_l = 3U;
        }
        if ((0x1000000U & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l)) {
            vlSelf->testbench__DOT__dut__DOT__nstate_l = 2U;
        }
    } else if (vlSelf->testbench__DOT__startbutton_i) {
        vlSelf->testbench__DOT__dut__DOT__nstate_l = 1U;
    }
    vlSelf->testbench__DOT__dut__DOT__nstate_l = vlSelf->testbench__DOT__dut__DOT__cstate_l;
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(4U)) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_WRITEF("__________ ___________  _______________________________\n\\______   \\\\_   _____/ /   _____/\\_   _____/\\__    ___/\n |       _/ |    __)_  \\_____  \\  |    __)_   |    |   \n |    |   \\ |        \\ /        \\ |        \\  |    |  1->0 time = %10#\n |____|_  //_______  //_______  //_______  /  |____|   \n ASYNC  \\/         \\/         \\/         \\/            \n",
              32,(IData)(VL_TIME_UNITED_Q(1000)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    VL_WRITEF("__________ ___________  _______________________________\n\\______   \\\\_   _____/ /   _____/\\_   _____/\\__    ___/\n |       _/ |    __)_  \\_____  \\  |    __)_   |    |   \n |    |   \\ |        \\ /        \\ |        \\  |    |  0->1 time = %10#\n |____|_  //_______  //_______  //_______  /  |____|   \n ASYNC  \\/         \\/         \\/         \\/            \n",
              32,(IData)(VL_TIME_UNITED_Q(1000)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ __Vdly__testbench__DOT__rg__DOT__ctr_lo_r;
    __Vdly__testbench__DOT__rg__DOT__ctr_lo_r = 0;
    // Body
    __Vdly__testbench__DOT__rg__DOT__ctr_lo_r = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__rg__DOT__phase_lo_r)))) {
        __Vdly__testbench__DOT__rg__DOT__ctr_lo_r = 
            (3U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r)));
    }
    if ((2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__rg__DOT__phase_hi_r)))) {
            vlSelf->testbench__DOT__rg__DOT__ctr_hi_r 
                = (3U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
                         + (2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r))));
        }
    }
    vlSelf->testbench__DOT__rg__DOT__ctr_lo_r = __Vdly__testbench__DOT__rg__DOT__ctr_lo_r;
    vlSelf->testbench__DOT__rg__DOT__phase_lo_r = (2U 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    vlSelf->testbench__DOT__rg__DOT__phase_hi_r = (2U 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    vlSelf->testbench__DOT__reset_i = ((2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r)) 
                                       ^ (2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*4:0*/ __Vdly__testbench__DOT__dut__DOT__ncounter;
    __Vdly__testbench__DOT__dut__DOT__ncounter = 0;
    // Body
    __Vdly__testbench__DOT__dut__DOT__ncounter = vlSelf->testbench__DOT__dut__DOT__ncounter;
    vlSelf->testbench__DOT__dut__DOT__counter_reset = 0U;
    if ((0U == (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l))) {
        __Vdly__testbench__DOT__dut__DOT__ncounter = 0U;
        vlSelf->testbench__DOT__dut__DOT__counter_reset = 0U;
    } else if (((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l)) 
                & (vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
                   >> 0x18U))) {
        __Vdly__testbench__DOT__dut__DOT__ncounter 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dut__DOT__ncounter)));
    } else if ((((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l)) 
                 | (2U == (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l))) 
                & (vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
                   >> 0x18U))) {
        vlSelf->testbench__DOT__dut__DOT__counter_reset = 1U;
    }
    if (vlSelf->testbench__DOT__reset_i) {
        vlSelf->testbench__DOT__dut__DOT__cfstep_l = 0U;
        vlSelf->testbench__DOT__dut__DOT__cstate_l = 0U;
    } else {
        vlSelf->testbench__DOT__dut__DOT__cfstep_l 
            = vlSelf->testbench__DOT__dut__DOT__nfstep_l;
        vlSelf->testbench__DOT__dut__DOT__cstate_l 
            = vlSelf->testbench__DOT__dut__DOT__nstate_l;
    }
    vlSelf->testbench__DOT__dut__DOT__ncounter = __Vdly__testbench__DOT__dut__DOT__ncounter;
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1fffffcU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((2U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                      << 1U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (1U & ((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                       & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1fffff3U & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((8U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                      << 3U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (4U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                        << 2U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1ffffcfU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x20U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                         << 5U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x10U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                           << 4U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1ffff3fU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x80U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                         << 7U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x40U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                           << 6U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1fffcffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x200U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                          << 9U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x100U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                            << 8U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1fff3ffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x800U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                          << 0xbU) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x400U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                            << 0xaU) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1ffcfffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x2000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                           << 0xdU) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x1000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                             << 0xcU) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1ff3fffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x8000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                           << 0xfU) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x4000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                             << 0xeU) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1fcffffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x20000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                            << 0x11U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x10000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                              << 0x10U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1f3ffffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x80000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                            << 0x13U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x40000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                              << 0x12U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x1cfffffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x200000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                             << 0x15U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x100000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                               << 0x14U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0x13fffffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | ((0x800000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                             << 0x17U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)) 
              | (0x400000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                               << 0x16U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o))));
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
        = ((0xffffffU & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l) 
           | (0x1000000U & (((~ (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i)) 
                             << 0x18U) & vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o)));
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l) 
                  >> 1U)))) {
        vlSelf->testbench__DOT__dut__DOT__test = (1U 
                                                  & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l)));
    }
    if ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l)))) {
            vlSelf->testbench__DOT__dut__DOT__nfstep_l = 0U;
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__cstate_l))) {
        vlSelf->testbench__DOT__dut__DOT__nfstep_l 
            = ((0x16U >= (IData)(vlSelf->testbench__DOT__dut__DOT__ncounter))
                ? vlSelf->testbench__DOT__dut__DOT__notes_to_play
               [vlSelf->testbench__DOT__dut__DOT__ncounter]
                : 0U);
    }
    vlSelf->testbench__DOT__dut__DOT__nfstep_l = vlSelf->testbench__DOT__dut__DOT__cfstep_l;
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT____Vcellout__adder_inst__sum_o 
        = (0x3ffffffU & (vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__dffout_l 
                         + vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__addin_l));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__dut__DOT____Vcellinp__counter_inst__reset_i 
        = ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_reset) 
           | (IData)(vlSelf->testbench__DOT__reset_i));
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtestbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtestbench___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("testbench.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtestbench___024root___timing_resume(vlSelf);
                Vtestbench___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("testbench.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtestbench___024root___eval_nba(vlSelf);
        }
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(4U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
