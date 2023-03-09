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
    tracep->declBit(c+62,"clk_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"reset_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+68,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+62,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+62,"clk_12mhz_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+57,"reset_n_async_unsafe_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+69,"button_async_unsafe_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,1);
    tracep->declBit(c+63,"tx_main_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"tx_lr_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"tx_data_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"tx_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"rx_main_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"rx_lr_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"rx_data_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"rx_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+71,"led_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,1);
    tracep->declBit(c+36,"reset_n_sync_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"reset_sync_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"reset_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"axis_tx_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+72,"axis_tx_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"axis_tx_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"axis_tx_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"axis_rx_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+41,"axis_rx_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"axis_rx_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"axis_rx_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"clk_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"axis_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+75,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+63,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2s2_inst ");
    tracep->declBit(c+63,"axis_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"axis_resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"tx_axis_c_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+72,"tx_axis_c_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"tx_axis_c_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"tx_axis_c_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"rx_axis_p_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+41,"rx_axis_p_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"rx_axis_p_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"rx_axis_p_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"tx_mclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"tx_lrck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"tx_sclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"tx_sdout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"rx_mclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"rx_lrck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"rx_sclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"rx_sdin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+76,"EOF_COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 8,0);
    tracep->declBit(c+33,"lrck",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"sclk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"mclk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"tx_data_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"tx_data_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"tx_data_l_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+49,"tx_data_r_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+50,"din_sync_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+51,"din_sync",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"rx_data_l_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+53,"rx_data_r_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+54,"rx_data_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"rx_data_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inv ");
    tracep->declBus(c+36,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+37,"b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sinegen ");
    tracep->declBit(c+63,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"sample_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"sine_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+66,"phase_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,"frequency_step",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,"sine_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+72,"valid_o_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("LUT ");
    tracep->declBus(c+78,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+79,"depth_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+80,"filename_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+63,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+38,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+73,"wr_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+82,"wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+83,"wr_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+64,"rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 23,0);
    }
    tracep->declBus(c+56,"read_addr_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sync_a ");
    tracep->declBus(c+84,"reset_val_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+63,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+73,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+57,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+36,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+36,"q_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sync_b ");
    tracep->declBus(c+84,"reset_val_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+63,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+73,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+37,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+38,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+38,"q_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rg ");
    tracep->declBus(c+85,"num_clocks_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+85,"reset_cycles_lo_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+68,"reset_cycles_hi_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+62,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+57,"async_reset_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+58,"ctr_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+59,"ctr_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 3,0);
    tracep->declBus(c+60,"phase_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+61,"phase_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBit(c+60,"in_phase_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"in_phase_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
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
    bufp->fullIData(oldp+1,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[0]),24);
    bufp->fullIData(oldp+2,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[1]),24);
    bufp->fullIData(oldp+3,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[2]),24);
    bufp->fullIData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[3]),24);
    bufp->fullIData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[4]),24);
    bufp->fullIData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[5]),24);
    bufp->fullIData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[6]),24);
    bufp->fullIData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[7]),24);
    bufp->fullIData(oldp+9,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[8]),24);
    bufp->fullIData(oldp+10,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[9]),24);
    bufp->fullIData(oldp+11,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[10]),24);
    bufp->fullIData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[11]),24);
    bufp->fullIData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[12]),24);
    bufp->fullIData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[13]),24);
    bufp->fullIData(oldp+15,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[14]),24);
    bufp->fullIData(oldp+16,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[15]),24);
    bufp->fullIData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[16]),24);
    bufp->fullIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[17]),24);
    bufp->fullIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[18]),24);
    bufp->fullIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[19]),24);
    bufp->fullIData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[20]),24);
    bufp->fullIData(oldp+22,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[21]),24);
    bufp->fullIData(oldp+23,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[22]),24);
    bufp->fullIData(oldp+24,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[23]),24);
    bufp->fullIData(oldp+25,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[24]),24);
    bufp->fullIData(oldp+26,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[25]),24);
    bufp->fullIData(oldp+27,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[26]),24);
    bufp->fullIData(oldp+28,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[27]),24);
    bufp->fullIData(oldp+29,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[28]),24);
    bufp->fullIData(oldp+30,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[29]),24);
    bufp->fullIData(oldp+31,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[30]),24);
    bufp->fullIData(oldp+32,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[31]),24);
    bufp->fullBit(oldp+33,(vlSelf->testbench__DOT__dut__DOT__tx_lr_clk_o));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                  >> 2U))));
    bufp->fullBit(oldp+35,(vlSelf->testbench__DOT__dut__DOT__tx_data_o));
    bufp->fullBit(oldp+36,(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r));
    bufp->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r)))));
    bufp->fullBit(oldp+38,(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r));
    bufp->fullBit(oldp+39,(vlSelf->testbench__DOT__dut__DOT__axis_tx_ready));
    bufp->fullIData(oldp+40,((0xffffffU & ((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                                            ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                                            : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l))),24);
    bufp->fullBit(oldp+41,(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid));
    bufp->fullBit(oldp+42,(vlSelf->testbench__DOT__dut__DOT__axis_rx_last));
    bufp->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r)))));
    bufp->fullIData(oldp+44,(((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                               ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                               : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l)),32);
    bufp->fullSData(oldp+45,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count),9);
    bufp->fullIData(oldp+46,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l),32);
    bufp->fullIData(oldp+47,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r),32);
    bufp->fullIData(oldp+48,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift),24);
    bufp->fullIData(oldp+49,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift),24);
    bufp->fullCData(oldp+50,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift),3);
    bufp->fullBit(oldp+51,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift) 
                                  >> 2U))));
    bufp->fullIData(oldp+52,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift),24);
    bufp->fullIData(oldp+53,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift),24);
    bufp->fullIData(oldp+54,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l),32);
    bufp->fullIData(oldp+55,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r),32);
    bufp->fullCData(oldp+56,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__read_addr_l),5);
    bufp->fullBit(oldp+57,(vlSelf->testbench__DOT__reset_i));
    bufp->fullBit(oldp+58,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullCData(oldp+59,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
    bufp->fullBit(oldp+60,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullBit(oldp+61,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    bufp->fullBit(oldp+62,(vlSelf->testbench__DOT__clk_i));
    bufp->fullBit(oldp+63,(vlSelf->testbench__DOT__dut__DOT__clk_o));
    bufp->fullIData(oldp+64,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem
                             [vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__read_addr_l]),24);
    bufp->fullIData(oldp+65,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem
                             [vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__read_addr_l]),32);
    bufp->fullIData(oldp+66,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__phase_l),32);
    bufp->fullCData(oldp+67,((vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__phase_l 
                              >> 0x1bU)),5);
    bufp->fullIData(oldp+68,(0xaU),32);
    bufp->fullCData(oldp+69,(vlSelf->testbench__DOT__dut__DOT__button_async_unsafe_i),3);
    bufp->fullBit(oldp+70,(vlSelf->testbench__DOT__dut__DOT__rx_data_i));
    bufp->fullCData(oldp+71,(vlSelf->testbench__DOT__dut__DOT__led_o),5);
    bufp->fullBit(oldp+72,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__valid_o_l));
    bufp->fullBit(oldp+73,(0U));
    bufp->fullBit(oldp+74,(vlSelf->testbench__DOT__dut__DOT__axis_rx_ready));
    bufp->fullIData(oldp+75,(0x2cU),32);
    bufp->fullSData(oldp+76,(0x1c7U),9);
    bufp->fullIData(oldp+77,(0x8000000U),32);
    bufp->fullIData(oldp+78,(0x18U),32);
    bufp->fullIData(oldp+79,(0x20U),32);
    bufp->fullQData(oldp+80,(0x73696e652e686578ULL),64);
    bufp->fullIData(oldp+82,(0U),24);
    bufp->fullCData(oldp+83,(0U),5);
    bufp->fullBit(oldp+84,(0U));
    bufp->fullIData(oldp+85,(1U),32);
}
