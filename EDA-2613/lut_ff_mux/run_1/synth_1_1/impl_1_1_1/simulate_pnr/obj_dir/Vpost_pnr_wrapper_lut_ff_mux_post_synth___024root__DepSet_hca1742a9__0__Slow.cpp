// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpost_pnr_wrapper_lut_ff_mux_post_synth.h for the primary calling header

#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__pch.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_triggers__stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
