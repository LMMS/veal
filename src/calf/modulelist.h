    PER_MODULE_ITEM(filter, false, "filter")
    PER_MODULE_ITEM(flanger, false, "flanger")
    PER_MODULE_ITEM(reverb, false, "reverb")
    PER_MODULE_ITEM(monosynth, true, "monosynth")
    PER_MODULE_ITEM(vintage_delay, false, "vintagedelay")
    PER_MODULE_ITEM(organ, true, "organ")
    PER_MODULE_ITEM(rotary_speaker, false, "rotaryspeaker")
    PER_MODULE_ITEM(phaser, false, "phaser")
#ifdef ENABLE_EXPERIMENTAL
    PER_SMALL_MODULE_ITEM(lp_filter, "lowpass12")
    PER_SMALL_MODULE_ITEM(hp_filter, "highpass12")
    PER_SMALL_MODULE_ITEM(bp_filter, "bandpass6")
    PER_SMALL_MODULE_ITEM(br_filter, "notch6")
    PER_SMALL_MODULE_ITEM(onepole_lp_filter, "lowpass6")
    PER_SMALL_MODULE_ITEM(onepole_hp_filter, "highpass6")
    PER_SMALL_MODULE_ITEM(onepole_ap_filter, "allpass")
    PER_SMALL_MODULE_ITEM(min, "min")
    PER_SMALL_MODULE_ITEM(max, "max")
    PER_SMALL_MODULE_ITEM(minus, "minus")
    PER_SMALL_MODULE_ITEM(mul, "mul")
    PER_SMALL_MODULE_ITEM(neg, "neg")
    PER_SMALL_MODULE_ITEM(min_c, "min_c")
    PER_SMALL_MODULE_ITEM(max_c, "max_c")
    PER_SMALL_MODULE_ITEM(minus_c, "minus_c")
    PER_SMALL_MODULE_ITEM(mul_c, "mul_c")
    PER_SMALL_MODULE_ITEM(neg_c, "neg_c")
    PER_SMALL_MODULE_ITEM(level2edge_c, "level2edge_c")
    PER_SMALL_MODULE_ITEM(map_lin2exp, "lin2exp")
    PER_SMALL_MODULE_ITEM(square_osc, "square_osc")
    PER_SMALL_MODULE_ITEM(saw_osc, "saw_osc")
    PER_SMALL_MODULE_ITEM(square_lfo, "square_lfo")
    PER_SMALL_MODULE_ITEM(saw_lfo, "saw_lfo")
    PER_SMALL_MODULE_ITEM(pulse_lfo, "pulse_lfo")
    PER_SMALL_MODULE_ITEM(print_a, "print_a")
    PER_SMALL_MODULE_ITEM(print_c, "print_c")
    PER_SMALL_MODULE_ITEM(print_e, "print_e")
    PER_SMALL_MODULE_ITEM(print_em, "print_em")
    PER_SMALL_MODULE_ITEM(copy_em, "copy_em")
    PER_SMALL_MODULE_ITEM(quadpower_a, "quadpower_a")
    PER_SMALL_MODULE_ITEM(quadpower_c, "quadpower_c")
    PER_SMALL_MODULE_ITEM(crossfader2_a, "crossfader2_a")
    PER_SMALL_MODULE_ITEM(crossfader2_c, "crossfader2_c")
    PER_SMALL_MODULE_ITEM(linear_inertia_c, "linear_inertia_c")
    PER_SMALL_MODULE_ITEM(exp_inertia_c, "exp_inertia_c")
    PER_SMALL_MODULE_ITEM(sample_hold_edge_c, "sample_hold_edge_c")
    PER_SMALL_MODULE_ITEM(sample_hold_level_c, "sample_hold_level_c")
    PER_SMALL_MODULE_ITEM(bit_and_c, "bit_and_c")
    PER_SMALL_MODULE_ITEM(bit_or_c, "bit_or_c")
    PER_SMALL_MODULE_ITEM(bit_xor_c, "bit_xor_c")
    PER_SMALL_MODULE_ITEM(logical_and_c, "logical_and_c")
    PER_SMALL_MODULE_ITEM(logical_or_c, "logical_or_c")
    PER_SMALL_MODULE_ITEM(logical_xor_c, "logical_xor_c")
    PER_SMALL_MODULE_ITEM(logical_not_c, "logical_not_c")
    PER_SMALL_MODULE_ITEM(flipflop_c, "flipflop_c")
    PER_SMALL_MODULE_ITEM(schmitt_c, "schmitt_c")
    PER_SMALL_MODULE_ITEM(between_c, "between_c")
    PER_SMALL_MODULE_ITEM(less_c, "less_c")
    PER_SMALL_MODULE_ITEM(clip_c, "clip_c")
    PER_SMALL_MODULE_ITEM(timer_c, "timer_c")
    PER_SMALL_MODULE_ITEM(prio_mux_c, "prio_mux_c")
#endif
#undef PER_MODULE_ITEM
#undef PER_SMALL_MODULE_ITEM
