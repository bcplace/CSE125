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
    tracep->declBit(c+50,"clk_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"reset_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"startbutton_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+29,"fstep_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,"second",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+54,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+50,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+50,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+24,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+51,"startbutton_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+29,"fstep_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"second",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    {
        const char* __VenumItemNames[]
        = {"init", "playnote", "pause", "done"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(1, "statemachine.state", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+31,"cstate_l",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,"nstate_l",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,"ncounter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    for (int i = 0; i < 23; ++i) {
        tracep->declBus(c+1+i*1,"notes_to_play",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+34,"endofnotes",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+29,"cfstep_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"nfstep_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"playcounterout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+37,"pausecounterout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+38,"playcounterup",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+39,"pausecounterup",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+40,"playcounter_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+41,"pausecounter_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->pushNamePrefix("pausecounter_inst ");
    tracep->declBus(c+55,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+52,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+39,"up_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+56,"down_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+37,"counter_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+42,"dffin_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+37,"dffout_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+43,"addin_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+44,"ofv",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+55,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+37,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+43,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+45,"sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("playcounter_inst ");
    tracep->declBus(c+55,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+53,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+38,"up_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+56,"down_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+36,"counter_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+46,"dffin_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+36,"dffout_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+47,"addin_l",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+48,"ofv",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+55,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+36,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+47,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+49,"sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("rg ");
    tracep->declBus(c+57,"num_clocks_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+58,"reset_cycles_lo_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+58,"reset_cycles_hi_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+24,"async_reset_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"ctr_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 1,0);
    tracep->declBus(c+26,"ctr_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 1,0);
    tracep->declBus(c+27,"phase_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+28,"phase_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBit(c+27,"in_phase_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"in_phase_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->testbench__DOT__dut__DOT__notes_to_play[22]),32);
    bufp->fullBit(oldp+24,(vlSelf->testbench__DOT__reset_i));
    bufp->fullCData(oldp+25,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r),2);
    bufp->fullCData(oldp+26,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),2);
    bufp->fullBit(oldp+27,((2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r))));
    bufp->fullBit(oldp+28,((2U == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    bufp->fullIData(oldp+29,(vlSelf->testbench__DOT__dut__DOT__cfstep_l),32);
    bufp->fullBit(oldp+30,((1U & (vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT__dffout_l 
                                  >> 0x18U))));
    bufp->fullCData(oldp+31,(vlSelf->testbench__DOT__dut__DOT__cstate_l),2);
    bufp->fullCData(oldp+32,(vlSelf->testbench__DOT__dut__DOT__nstate_l),2);
    bufp->fullCData(oldp+33,(vlSelf->testbench__DOT__dut__DOT__ncounter),5);
    bufp->fullBit(oldp+34,((0x16U == (IData)(vlSelf->testbench__DOT__dut__DOT__ncounter))));
    bufp->fullIData(oldp+35,(vlSelf->testbench__DOT__dut__DOT__nfstep_l),32);
    bufp->fullIData(oldp+36,(vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT__dffout_l),25);
    bufp->fullIData(oldp+37,(vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT__dffout_l),25);
    bufp->fullBit(oldp+38,(vlSelf->testbench__DOT__dut__DOT__playcounterup));
    bufp->fullBit(oldp+39,(vlSelf->testbench__DOT__dut__DOT__pausecounterup));
    bufp->fullBit(oldp+40,(vlSelf->testbench__DOT__dut__DOT__playcounter_reset));
    bufp->fullBit(oldp+41,(vlSelf->testbench__DOT__dut__DOT__pausecounter_reset));
    bufp->fullIData(oldp+42,((0x1ffffffU & vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT____Vcellout__adder_inst__sum_o)),25);
    bufp->fullIData(oldp+43,(vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT__addin_l),25);
    bufp->fullBit(oldp+44,((1U & (vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT____Vcellout__adder_inst__sum_o 
                                  >> 0x19U))));
    bufp->fullIData(oldp+45,(vlSelf->testbench__DOT__dut__DOT__pausecounter_inst__DOT____Vcellout__adder_inst__sum_o),26);
    bufp->fullIData(oldp+46,((0x1ffffffU & vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT____Vcellout__adder_inst__sum_o)),25);
    bufp->fullIData(oldp+47,(vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT__addin_l),25);
    bufp->fullBit(oldp+48,((1U & (vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT____Vcellout__adder_inst__sum_o 
                                  >> 0x19U))));
    bufp->fullIData(oldp+49,(vlSelf->testbench__DOT__dut__DOT__playcounter_inst__DOT____Vcellout__adder_inst__sum_o),26);
    bufp->fullBit(oldp+50,(vlSelf->testbench__DOT__clk_i));
    bufp->fullBit(oldp+51,(vlSelf->testbench__DOT__startbutton_i));
    bufp->fullBit(oldp+52,(vlSelf->testbench__DOT__dut__DOT____Vcellinp__pausecounter_inst__reset_i));
    bufp->fullBit(oldp+53,(vlSelf->testbench__DOT__dut__DOT____Vcellinp__playcounter_inst__reset_i));
    bufp->fullIData(oldp+54,(0x2cU),32);
    bufp->fullIData(oldp+55,(0x19U),32);
    bufp->fullBit(oldp+56,(0U));
    bufp->fullIData(oldp+57,(1U),32);
    bufp->fullIData(oldp+58,(2U),32);
}
