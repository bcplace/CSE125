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
        bufp->chgIData(oldp+0,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[22]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+23,(vlSelf->testbench__DOT__reset_i));
        bufp->chgCData(oldp+24,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r),2);
        bufp->chgCData(oldp+25,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),2);
        bufp->chgBit(oldp+26,((2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r))));
        bufp->chgBit(oldp+27,((2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+28,(vlSelf->testbench__DOT__dut__DOT__cfstep_l),32);
        bufp->chgBit(oldp+29,((1U & (vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT__dffout_l 
                                     >> 0x18U))));
        bufp->chgCData(oldp+30,(vlSelf->testbench__DOT__dut__DOT__cstate_l),2);
        bufp->chgCData(oldp+31,(vlSelf->testbench__DOT__dut__DOT__nstate_l),2);
        bufp->chgCData(oldp+32,(vlSelf->testbench__DOT__dut__DOT__ncounter),5);
        bufp->chgBit(oldp+33,((0x16U == (IData)(vlSelf->testbench__DOT__dut__DOT__ncounter))));
        bufp->chgIData(oldp+34,(vlSelf->testbench__DOT__dut__DOT__nfstep_l),32);
        bufp->chgIData(oldp+35,(vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT__dffout_l),25);
        bufp->chgIData(oldp+36,(vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT__dffout_l),25);
        bufp->chgBit(oldp+37,(vlSelf->testbench__DOT__dut__DOT__playcounterup));
        bufp->chgBit(oldp+38,(vlSelf->testbench__DOT__dut__DOT__pausecounterup));
        bufp->chgBit(oldp+39,(vlSelf->testbench__DOT__dut__DOT__playcounter_reset));
        bufp->chgBit(oldp+40,(vlSelf->testbench__DOT__dut__DOT__pausecounter_reset));
        bufp->chgIData(oldp+41,((0x1ffffffU & vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT____Vcellout__adder_inst__sum_o)),25);
        bufp->chgIData(oldp+42,(vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT__addin_l),25);
        bufp->chgBit(oldp+43,((1U & (vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT____Vcellout__adder_inst__sum_o 
                                     >> 0x19U))));
        bufp->chgIData(oldp+44,(vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT____Vcellout__adder_inst__sum_o),26);
        bufp->chgIData(oldp+45,((0x1ffffffU & vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT____Vcellout__adder_inst__sum_o)),25);
        bufp->chgIData(oldp+46,(vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT__addin_l),25);
        bufp->chgBit(oldp+47,((1U & (vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT____Vcellout__adder_inst__sum_o 
                                     >> 0x19U))));
        bufp->chgIData(oldp+48,(vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT____Vcellout__adder_inst__sum_o),26);
    }
    bufp->chgBit(oldp+49,(vlSelf->testbench__DOT__clk_i));
    bufp->chgBit(oldp+50,(vlSelf->testbench__DOT__startbutton_i));
    bufp->chgBit(oldp+51,(vlSelf->testbench__DOT__dut__DOT____Vcellinp__pausecounter_inst__reset_i));
    bufp->chgBit(oldp+52,(vlSelf->testbench__DOT__dut__DOT____Vcellinp__playcounter_inst__reset_i));
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
