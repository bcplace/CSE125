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
    Vtestbench___024root___eval_initial__TOP__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__dut__DOT__clk_o 
        = vlSelf->testbench__DOT__dut__DOT__clk_o;
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
        vlSelf->testbench__DOT__dut__DOT__clk_o = (1U 
                                                   & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__clk_o)));
    }
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__count;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__count = 0;
    CData/*0:0*/ __Vdly__testbench__DOT__dut__DOT__axis_tx_ready;
    __Vdly__testbench__DOT__dut__DOT__axis_tx_ready = 0;
    IData/*23:0*/ __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift = 0;
    IData/*23:0*/ __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift = 0;
    CData/*2:0*/ __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift = 0;
    IData/*23:0*/ __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift = 0;
    IData/*23:0*/ __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift = 0;
    CData/*0:0*/ __Vdly__testbench__DOT__dut__DOT__axis_rx_valid;
    __Vdly__testbench__DOT__dut__DOT__axis_rx_valid = 0;
    CData/*0:0*/ __Vdly__testbench__DOT__dut__DOT__axis_rx_last;
    __Vdly__testbench__DOT__dut__DOT__axis_rx_last = 0;
    CData/*3:0*/ __Vdly__testbench__DOT__dut__DOT__shifter__DOT__data_c;
    __Vdly__testbench__DOT__dut__DOT__shifter__DOT__data_c = 0;
    // Body
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift 
        = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__count 
        = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift 
        = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift 
        = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift;
    __Vdly__testbench__DOT__dut__DOT__shifter__DOT__data_c 
        = vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c;
    __Vdly__testbench__DOT__dut__DOT__axis_tx_ready 
        = vlSelf->testbench__DOT__dut__DOT__axis_tx_ready;
    __Vdly__testbench__DOT__dut__DOT__axis_rx_last 
        = vlSelf->testbench__DOT__dut__DOT__axis_rx_last;
    __Vdly__testbench__DOT__dut__DOT__axis_rx_valid 
        = vlSelf->testbench__DOT__dut__DOT__axis_rx_valid;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift 
        = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift 
        = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift;
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift 
        = ((6U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift) 
                  << 1U)) | (IData)(vlSelf->testbench__DOT__dut__DOT__rx_data_i));
    __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__count 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count)));
    if ((((3U == (7U & (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))) 
          & (0x18U >= (0x1fU & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                >> 3U)))) & (1U <= 
                                             (0x1fU 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                                 >> 3U))))) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                      >> 8U)))) {
            __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift 
                = ((0xfffffeU & (vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift 
                                 << 1U)) | (1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift) 
                                                  >> 2U)));
        }
        if ((0x100U & (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))) {
            __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift 
                = ((0xfffffeU & (vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift 
                                 << 1U)) | (1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift) 
                                                  >> 2U)));
        }
    }
    if ((7U == (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))) {
        __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift 
            = (0xffffffU & vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r);
        __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift 
            = (0xffffffU & vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l);
    } else if ((((7U == (7U & (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))) 
                 & (1U <= (0x1fU & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                    >> 3U)))) & (0x18U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                                     >> 3U))))) {
        if ((0x100U & (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))) {
            __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift 
                = (0xfffffeU & (vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift 
                                << 1U));
        }
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                      >> 8U)))) {
            __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift 
                = (0xfffffeU & (vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift 
                                << 1U));
        }
    }
    if (vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r) {
        __Vdly__testbench__DOT__dut__DOT__shifter__DOT__data_c = 0xeU;
        __Vdly__testbench__DOT__dut__DOT__axis_tx_ready = 0U;
        __Vdly__testbench__DOT__dut__DOT__axis_rx_last = 0U;
        __Vdly__testbench__DOT__dut__DOT__axis_rx_valid = 0U;
        vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r = 0U;
        vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l = 0U;
        vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r = 0U;
        vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l = 0U;
    } else {
        __Vdly__testbench__DOT__dut__DOT__shifter__DOT__data_c 
            = ((0xeU & ((IData)(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c) 
                        << 1U)) | (IData)(vlSelf->testbench__DOT__dut__DOT____Vcellinp__shifter__data_i));
        if ((((IData)(vlSelf->testbench__DOT__dut__DOT__axis_tx_ready) 
              & (IData)(vlSelf->testbench__DOT__dut__DOT__axis_tx_valid)) 
             & (IData)(vlSelf->testbench__DOT__dut__DOT__axis_tx_last))) {
            __Vdly__testbench__DOT__dut__DOT__axis_tx_ready = 0U;
        } else if ((0U == (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))) {
            __Vdly__testbench__DOT__dut__DOT__axis_tx_ready = 0U;
        } else if ((0x1c7U == (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count))) {
            __Vdly__testbench__DOT__dut__DOT__axis_tx_ready = 1U;
        }
        if (((0x1c7U == (IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count)) 
             & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid)))) {
            __Vdly__testbench__DOT__dut__DOT__axis_rx_last = 0U;
            __Vdly__testbench__DOT__dut__DOT__axis_rx_valid = 1U;
            vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r 
                = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift;
            vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l 
                = vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift;
        } else {
            if (((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid) 
                 & (IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_ready))) {
                __Vdly__testbench__DOT__dut__DOT__axis_rx_last 
                    = (1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)));
            }
            if ((((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid) 
                  & (IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_ready)) 
                 & (IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last))) {
                __Vdly__testbench__DOT__dut__DOT__axis_rx_valid = 0U;
            }
        }
        if (((IData)(vlSelf->testbench__DOT__dut__DOT__axis_tx_valid) 
             & (IData)(vlSelf->testbench__DOT__dut__DOT__axis_tx_ready))) {
            if (vlSelf->testbench__DOT__dut__DOT__axis_tx_last) {
                vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r 
                    = vlSelf->testbench__DOT__dut__DOT__axis_tx_data;
            }
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__axis_tx_last)))) {
                vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l 
                    = vlSelf->testbench__DOT__dut__DOT__axis_tx_data;
            }
        }
    }
    vlSelf->testbench__DOT__dut__DOT__row_sync = ((8U 
                                                   & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                      ? 2U
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                      ? 4U
                                                      : 0U)
                                                     : 0U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->testbench__DOT__keypad_row))
                                                      ? 8U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U));
    vlSelf->testbench__DOT__dut__DOT__col_sync = (0xfU 
                                                  & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c)));
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift 
        = __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift;
    vlSelf->testbench__DOT__dut__DOT__axis_rx_last 
        = __Vdly__testbench__DOT__dut__DOT__axis_rx_last;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift 
        = __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift 
        = __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift;
    vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c 
        = __Vdly__testbench__DOT__dut__DOT__shifter__DOT__data_c;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift 
        = __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift 
        = __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift;
    vlSelf->testbench__DOT__dut__DOT__axis_rx_valid 
        = __Vdly__testbench__DOT__dut__DOT__axis_rx_valid;
    vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count 
        = __Vdly__testbench__DOT__dut__DOT__i2s2_inst__DOT__count;
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
    vlSelf->testbench__DOT__dut__DOT__axis_tx_ready 
        = __Vdly__testbench__DOT__dut__DOT__axis_tx_ready;
    vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r 
        = (1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r)));
    vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r 
        = vlSelf->testbench__DOT__reset_i;
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
    VlTriggerVec<2> __VpreTriggered;
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
    if (vlSelf->__VactTriggered.at(1U)) {
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
