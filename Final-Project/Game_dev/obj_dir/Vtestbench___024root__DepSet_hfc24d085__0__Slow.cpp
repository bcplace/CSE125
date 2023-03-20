// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h917d1307__0;
    // Body
    VL_WRITEF("%Ntestbench.cg with cycle_time_p          44\n",
              vlSymsp->name());
    __Vtemp_h917d1307__0[0U] = 0x2e686578U;
    __Vtemp_h917d1307__0[1U] = 0x6f746573U;
    __Vtemp_h917d1307__0[2U] = 0x6eU;
    VL_READMEM_N(true, 32, 23, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h917d1307__0)
                 ,  &(vlSelf->testbench__DOT__dut__DOT__notes_to_play)
                 , 0, ~0ULL);
    vlSelf->testbench__DOT__dut__DOT__counter_inst__DOT__addin_l = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
