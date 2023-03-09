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
        bufp->chgIData(oldp+0,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[0]),24);
        bufp->chgIData(oldp+1,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[1]),24);
        bufp->chgIData(oldp+2,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[2]),24);
        bufp->chgIData(oldp+3,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[3]),24);
        bufp->chgIData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[4]),24);
        bufp->chgIData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[5]),24);
        bufp->chgIData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[6]),24);
        bufp->chgIData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[7]),24);
        bufp->chgIData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[8]),24);
        bufp->chgIData(oldp+9,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[9]),24);
        bufp->chgIData(oldp+10,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[10]),24);
        bufp->chgIData(oldp+11,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[11]),24);
        bufp->chgIData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[12]),24);
        bufp->chgIData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[13]),24);
        bufp->chgIData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[14]),24);
        bufp->chgIData(oldp+15,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[15]),24);
        bufp->chgIData(oldp+16,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[16]),24);
        bufp->chgIData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[17]),24);
        bufp->chgIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[18]),24);
        bufp->chgIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[19]),24);
        bufp->chgIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[20]),24);
        bufp->chgIData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[21]),24);
        bufp->chgIData(oldp+22,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[22]),24);
        bufp->chgIData(oldp+23,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[23]),24);
        bufp->chgIData(oldp+24,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[24]),24);
        bufp->chgIData(oldp+25,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[25]),24);
        bufp->chgIData(oldp+26,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[26]),24);
        bufp->chgIData(oldp+27,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[27]),24);
        bufp->chgIData(oldp+28,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[28]),24);
        bufp->chgIData(oldp+29,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[29]),24);
        bufp->chgIData(oldp+30,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[30]),24);
        bufp->chgIData(oldp+31,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__mem[31]),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                     >> 8U))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count) 
                                     >> 2U))));
        bufp->chgBit(oldp+34,(vlSelf->testbench__DOT__dut__DOT__tx_data_o));
        bufp->chgBit(oldp+35,(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r));
        bufp->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_a__DOT__q_r)))));
        bufp->chgBit(oldp+37,(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r));
        bufp->chgIData(oldp+38,(vlSelf->testbench__DOT__dut__DOT__axis_tx_data),24);
        bufp->chgBit(oldp+39,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__valid_o_l));
        bufp->chgBit(oldp+40,(vlSelf->testbench__DOT__dut__DOT__axis_tx_ready));
        bufp->chgIData(oldp+41,((0xffffffU & ((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                                               ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                                               : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l))),24);
        bufp->chgBit(oldp+42,(vlSelf->testbench__DOT__dut__DOT__axis_rx_valid));
        bufp->chgBit(oldp+43,(vlSelf->testbench__DOT__dut__DOT__axis_rx_last));
        bufp->chgBit(oldp+44,((1U & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__sync_b__DOT__q_r)))));
        bufp->chgIData(oldp+45,(vlSelf->testbench__DOT__dut__DOT__axis_tx_data),32);
        bufp->chgIData(oldp+46,(((IData)(vlSelf->testbench__DOT__dut__DOT__axis_rx_last)
                                  ? vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r
                                  : vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l)),32);
        bufp->chgSData(oldp+47,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__count),9);
        bufp->chgIData(oldp+48,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l),32);
        bufp->chgIData(oldp+49,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r),32);
        bufp->chgIData(oldp+50,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_l_shift),24);
        bufp->chgIData(oldp+51,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__tx_data_r_shift),24);
        bufp->chgCData(oldp+52,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift),3);
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__din_sync_shift) 
                                     >> 2U))));
        bufp->chgIData(oldp+54,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l_shift),24);
        bufp->chgIData(oldp+55,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r_shift),24);
        bufp->chgIData(oldp+56,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_l),32);
        bufp->chgIData(oldp+57,(vlSelf->testbench__DOT__dut__DOT__i2s2_inst__DOT__rx_data_r),32);
        bufp->chgIData(oldp+58,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__phase_l),32);
        bufp->chgCData(oldp+59,((vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__phase_l 
                                 >> 0x1bU)),5);
        bufp->chgCData(oldp+60,(vlSelf->testbench__DOT__dut__DOT__sinegen__DOT__LUT__DOT__read_addr_l),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+61,(vlSelf->testbench__DOT__reset_i));
        bufp->chgBit(oldp+62,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgCData(oldp+63,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
        bufp->chgBit(oldp+64,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgBit(oldp+65,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    }
    bufp->chgBit(oldp+66,(vlSelf->testbench__DOT__clk_i));
    bufp->chgBit(oldp+67,(vlSelf->testbench__DOT__dut__DOT__clk_o));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
