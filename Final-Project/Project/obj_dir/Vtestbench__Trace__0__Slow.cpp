// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("testbench ");
    tracep->declBit(c+33,"clk_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+29,"reset_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+30,"keypad_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+33,"clk_12mhz_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+29,"reset_n_async_unsafe_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+34,"button_async_unsafe_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,1);
    tracep->declBus(c+30,"kpyd_row_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"kpyd_col_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+31,"tx_main_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"tx_lr_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"tx_data_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"tx_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"rx_main_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"rx_lr_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"rx_data_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"rx_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"led_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,1);
    tracep->declBit(c+5,"reset_n_sync_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"reset_sync_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"reset_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"axis_tx_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+38,"axis_tx_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"axis_tx_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"axis_tx_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"axis_rx_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+10,"axis_rx_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"axis_rx_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"axis_rx_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"clk_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"axis_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+32,"kpyd2ssd_row_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,"shift_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,"kpyd2ssd_col_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,"lowB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+42,"D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+43,"highE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+44,"E",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+12,"frequency_step",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"row_sync",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,"col_sync",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+45,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+31,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2s2_inst ");
    tracep->declBit(c+31,"axis_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"axis_resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"tx_axis_c_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"tx_axis_c_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"tx_axis_c_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"tx_axis_c_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"rx_axis_p_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+10,"rx_axis_p_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"rx_axis_p_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"rx_axis_p_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"tx_mclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"tx_lrck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"tx_sclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"tx_sdout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"rx_mclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"rx_lrck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"rx_sclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"rx_sdin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+47,"EOF_COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 8,0);
    tracep->declBit(c+2,"lrck",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"sclk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"mclk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"tx_data_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"tx_data_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"tx_data_l_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+21,"tx_data_r_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+22,"din_sync_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+23,"din_sync",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"rx_data_l_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+25,"rx_data_r_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+26,"rx_data_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"rx_data_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inv ");
    tracep->declBus(c+5,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+6,"b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shifter ");
    tracep->declBus(c+48,"depth_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+49,"reset_val_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+31,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+7,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+28,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+1,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"data_c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,"data_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sync_a ");
    tracep->declBus(c+51,"reset_val_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+31,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+52,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+29,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+5,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+5,"q_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sync_b ");
    tracep->declBus(c+51,"reset_val_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+31,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+52,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+6,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+7,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+7,"q_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtestbench___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c),4);
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                 >> 8U))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                 >> 2U))));
    bufp->fullBit(oldp+4,(vlSelf->testbench__DOT__dut__DOT__tx_data_o));
    bufp->fullBit(oldp+5,(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r));
    bufp->fullBit(oldp+6,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r)))));
    bufp->fullBit(oldp+7,(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r));
    bufp->fullBit(oldp+8,(vlSelf->testbench__DOT__dut__DOT__axis_tx_ready));
    bufp->fullIData(oldp+9,((0xffffffU & ((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                                           ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                                           : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l))),24);
    bufp->fullBit(oldp+10,(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid));
    bufp->fullBit(oldp+11,(vlSelf->testbench__DOT__dut__DOT__axis_rx_last));
    bufp->fullIData(oldp+12,(((0x41U == (((IData)(vlSelf->testbench__DOT__dut__DOT__row_sync) 
                                          << 4U) | (IData)(vlSelf->testbench__DOT__dut__DOT__col_sync)))
                               ? 0xd8050fU : ((0x21U 
                                               == (
                                                   ((IData)(vlSelf->testbench__DOT__dut__DOT__row_sync) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->testbench__DOT__dut__DOT__col_sync)))
                                               ? 0x100e6b0U
                                               : ((0x11U 
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
    bufp->fullCData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__row_sync),4);
    bufp->fullCData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__col_sync),4);
    bufp->fullBit(oldp+15,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r)))));
    bufp->fullIData(oldp+16,(((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                               ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                               : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l)),32);
    bufp->fullSData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count),9);
    bufp->fullIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l),32);
    bufp->fullIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r),32);
    bufp->fullIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift),24);
    bufp->fullIData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift),24);
    bufp->fullCData(oldp+22,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift),3);
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift) 
                                  >> 2U))));
    bufp->fullIData(oldp+24,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift),24);
    bufp->fullIData(oldp+25,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift),24);
    bufp->fullIData(oldp+26,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l),32);
    bufp->fullIData(oldp+27,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r),32);
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_c) 
                                  >> 3U))));
    bufp->fullBit(oldp+29,(vlSelf->testbench__DOT__reset_i));
    bufp->fullCData(oldp+30,(vlSelf->testbench__DOT__keypad_row),4);
    bufp->fullBit(oldp+31,(vlSelf->testbench__DOT__dut__DOT__clk_o));
    bufp->fullCData(oldp+32,(((8U & (IData)(vlSelf->testbench__DOT__keypad_row))
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
    bufp->fullBit(oldp+33,(vlSelf->testbench__DOT__clk_i));
    bufp->fullCData(oldp+34,(vlSelf->testbench__DOT__dut__DOT__button_async_unsafe_i),3);
    bufp->fullBit(oldp+35,(vlSelf->testbench__DOT__dut__DOT__rx_data_i));
    bufp->fullCData(oldp+36,(vlSelf->testbench__DOT__dut__DOT__led_o),5);
    bufp->fullIData(oldp+37,(vlSelf->testbench__DOT__dut__DOT__axis_tx_data),24);
    bufp->fullBit(oldp+38,(vlSelf->testbench__DOT__dut__DOT__axis_tx_valid));
    bufp->fullBit(oldp+39,(vlSelf->testbench__DOT__dut__DOT__axis_tx_last));
    bufp->fullBit(oldp+40,(vlSelf->testbench__DOT__dut__DOT__axis_rx_ready));
    bufp->fullIData(oldp+41,(vlSelf->testbench__DOT__dut__DOT__lowB),24);
    bufp->fullIData(oldp+42,(vlSelf->testbench__DOT__dut__DOT__D),24);
    bufp->fullIData(oldp+43,(vlSelf->testbench__DOT__dut__DOT__highE),24);
    bufp->fullIData(oldp+44,(vlSelf->testbench__DOT__dut__DOT__E),24);
    bufp->fullIData(oldp+45,(0x2cU),32);
    bufp->fullIData(oldp+46,(vlSelf->testbench__DOT__dut__DOT__axis_tx_data),32);
    bufp->fullSData(oldp+47,(0x1c7U),9);
    bufp->fullIData(oldp+48,(4U),32);
    bufp->fullCData(oldp+49,(0xeU),4);
    bufp->fullCData(oldp+50,(vlSelf->testbench__DOT__dut__DOT__shifter__DOT__data_n),4);
    bufp->fullBit(oldp+51,(0U));
    bufp->fullBit(oldp+52,(0U));
}
