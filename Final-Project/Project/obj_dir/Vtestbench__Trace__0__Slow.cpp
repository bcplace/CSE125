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
    tracep->declBit(c+44,"clk_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"reset_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+47,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+44,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+44,"clk_12mhz_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+45,"reset_n_async_unsafe_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+48,"button_async_unsafe_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,1);
    tracep->declBit(c+49,"tx_main_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"tx_lr_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"tx_data_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"tx_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"rx_main_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"rx_lr_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"rx_data_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"rx_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"led_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,1);
    tracep->declBit(c+41,"reset_n_sync_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"reset_sync_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"reset_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"axis_tx_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+33,"axis_tx_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"axis_tx_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"axis_tx_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"axis_rx_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+61,"axis_rx_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"axis_rx_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"axis_rx_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"clk_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"axis_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("inv ");
    tracep->declBus(c+41,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+42,"b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sinegen ");
    tracep->declBit(c+44,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"sine_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+34,"phase_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,"frequency_step",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"sine_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+33,"valid_o_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"tx_valid_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("LUT ");
    tracep->declBus(c+68,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+69,"depth_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+70,"filename_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+44,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+43,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+59,"wr_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+72,"wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+73,"wr_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+35,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+46,"rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 23,0);
    }
    tracep->declBus(c+36,"read_addr_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sync_a ");
    tracep->declBus(c+74,"reset_val_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+64,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+59,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+45,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+41,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+41,"q_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sync_b ");
    tracep->declBus(c+74,"reset_val_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+64,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+59,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+42,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+43,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+43,"q_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rg ");
    tracep->declBus(c+75,"num_clocks_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+75,"reset_cycles_lo_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+47,"reset_cycles_hi_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+44,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+45,"async_reset_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"ctr_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+38,"ctr_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 3,0);
    tracep->declBus(c+39,"phase_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+40,"phase_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBit(c+39,"in_phase_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"in_phase_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
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
    bufp->fullBit(oldp+33,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__valid_o_l));
    bufp->fullIData(oldp+34,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__phase_l),32);
    bufp->fullCData(oldp+35,((vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__phase_l 
                              >> 0x1bU)),5);
    bufp->fullCData(oldp+36,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__read_addr_l),5);
    bufp->fullBit(oldp+37,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullCData(oldp+38,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
    bufp->fullBit(oldp+39,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullBit(oldp+40,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    bufp->fullBit(oldp+41,(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r));
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r)))));
    bufp->fullBit(oldp+43,(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r));
    bufp->fullBit(oldp+44,(vlSelf->testbench__DOT__clk_i));
    bufp->fullBit(oldp+45,(vlSelf->testbench__DOT__reset_i));
    bufp->fullIData(oldp+46,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem
                             [vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__read_addr_l]),24);
    bufp->fullIData(oldp+47,(0xaU),32);
    bufp->fullCData(oldp+48,(vlSelf->testbench__DOT__dut__DOT__button_async_unsafe_i),3);
    bufp->fullBit(oldp+49,(vlSelf->testbench__DOT__dut__DOT__tx_main_clk_o));
    bufp->fullBit(oldp+50,(vlSelf->testbench__DOT__dut__DOT__tx_lr_clk_o));
    bufp->fullBit(oldp+51,(vlSelf->testbench__DOT__dut__DOT__tx_data_clk_o));
    bufp->fullBit(oldp+52,(vlSelf->testbench__DOT__dut__DOT__tx_data_o));
    bufp->fullBit(oldp+53,(vlSelf->testbench__DOT__dut__DOT__rx_main_clk_o));
    bufp->fullBit(oldp+54,(vlSelf->testbench__DOT__dut__DOT__rx_lr_clk_o));
    bufp->fullBit(oldp+55,(vlSelf->testbench__DOT__dut__DOT__rx_data_clk_o));
    bufp->fullBit(oldp+56,(vlSelf->testbench__DOT__dut__DOT__rx_data_i));
    bufp->fullCData(oldp+57,(vlSelf->testbench__DOT__dut__DOT__led_o),5);
    bufp->fullBit(oldp+58,(vlSelf->testbench__DOT__dut__DOT__axis_tx_ready));
    bufp->fullBit(oldp+59,(0U));
    bufp->fullIData(oldp+60,(vlSelf->testbench__DOT__dut__DOT__axis_rx_data),24);
    bufp->fullBit(oldp+61,(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid));
    bufp->fullBit(oldp+62,(vlSelf->testbench__DOT__dut__DOT__axis_rx_ready));
    bufp->fullBit(oldp+63,(vlSelf->testbench__DOT__dut__DOT__axis_rx_last));
    bufp->fullBit(oldp+64,(vlSelf->testbench__DOT__dut__DOT__clk_o));
    bufp->fullBit(oldp+65,(vlSelf->testbench__DOT__dut__DOT__axis_clk));
    bufp->fullIData(oldp+66,(0x8000000U),32);
    bufp->fullBit(oldp+67,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__tx_valid_data));
    bufp->fullIData(oldp+68,(0x18U),32);
    bufp->fullIData(oldp+69,(0x20U),32);
    bufp->fullQData(oldp+70,(0x73696e652e686578ULL),64);
    bufp->fullIData(oldp+72,(0U),24);
    bufp->fullCData(oldp+73,(0U),5);
    bufp->fullBit(oldp+74,(0U));
    bufp->fullIData(oldp+75,(1U),32);
}
