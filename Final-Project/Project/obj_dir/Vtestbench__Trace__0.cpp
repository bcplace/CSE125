// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c),4);
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                    >> 8U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                    >> 2U))));
        bufp->chgBit(oldp+3,(vlSelf->testbench__DOT__dut__DOT__tx_data_o));
        bufp->chgBit(oldp+4,(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r));
        bufp->chgBit(oldp+5,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r)))));
        bufp->chgBit(oldp+6,(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r));
        bufp->chgBit(oldp+7,(vlSelf->testbench__DOT__dut__DOT__axis_tx_ready));
        bufp->chgIData(oldp+8,((0xffffffU & ((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                                              ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                                              : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l))),24);
        bufp->chgBit(oldp+9,(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid));
        bufp->chgBit(oldp+10,(vlSelf->testbench__DOT__dut__DOT__axis_rx_last));
        bufp->chgIData(oldp+11,(((0x41U == (((IData)(vlSelf->testbench__DOT__dut__DOT__row_sync) 
                                             << 4U) 
                                            | (IData)(vlSelf->testbench__DOT__dut__DOT__col_sync)))
                                  ? 0xd8050fU : ((0x21U 
                                                  == 
                                                  (((IData)(vlSelf->testbench__DOT__dut__DOT__row_sync) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->testbench__DOT__dut__DOT__col_sync)))
                                                  ? 0x100e6b0U
                                                  : 
                                                 ((0x11U 
                                                   == 
                                                   (((IData)(vlSelf->testbench__DOT__dut__DOT__row_sync) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->testbench__DOT__dut__DOT__col_sync)))
                                                   ? 0x1205bc0U
                                                   : 
                                                  ((0x81U 
                                                    == 
                                                    (((IData)(vlSelf->testbench__DOT__dut__DOT__row_sync) 
                                                      << 4U) 
                                                     | (IData)(vlSelf->testbench__DOT__dut__DOT__col_sync)))
                                                    ? 0xc073f9U
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (((IData)(vlSelf->testbench__DOT__dut__DOT__row_sync) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->testbench__DOT__dut__DOT__col_sync)))
                                                     ? 0x156ec76U
                                                     : 0U)))))),32);
        bufp->chgCData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__row_sync),4);
        bufp->chgCData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__col_sync),4);
        bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r)))));
        bufp->chgIData(oldp+15,(((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                                  ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                                  : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l)),32);
        bufp->chgSData(oldp+16,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count),9);
        bufp->chgIData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l),32);
        bufp->chgIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r),32);
        bufp->chgIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift),24);
        bufp->chgIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift),24);
        bufp->chgCData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift),3);
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift) 
                                     >> 2U))));
        bufp->chgIData(oldp+23,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift),24);
        bufp->chgIData(oldp+24,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift),24);
        bufp->chgIData(oldp+25,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l),32);
        bufp->chgIData(oldp+26,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r),32);
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c) 
                                     >> 3U))));
    }
    bufp->chgBit(oldp+28,(vlSelf->testbench__DOT__reset_i));
    bufp->chgCData(oldp+29,(vlSelf->testbench__DOT__keypad_row),4);
    bufp->chgBit(oldp+30,(vlSelf->testbench__DOT__dut__DOT__clk_o));
    bufp->chgCData(oldp+31,(((8U & (IData)(vlSelf->testbench__DOT__keypad_row))
                              ? ((4U & (IData)(vlSelf->testbench__DOT__keypad_row))
                                  ? ((2U & (IData)(vlSelf->testbench__DOT__keypad_row))
                                      ? ((1U & (IData)(vlSelf->testbench__DOT__keypad_row))
                                          ? 0U : 1U)
                                      : ((1U & (IData)(vlSelf->testbench__DOT__keypad_row))
                                          ? 2U : 0U))
                                  : ((2U & (IData)(vlSelf->testbench__DOT__keypad_row))
                                      ? ((1U & (IData)(vlSelf->testbench__DOT__keypad_row))
                                          ? 4U : 0U)
                                      : 0U)) : ((4U 
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
                                                 : 0U))),4);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
