/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 * Modification for Vial support by Drew Petersen
 * Modification by Raphael Stanzani.
 */

// clang-format off
#pragma once

// Vial Support
#define VIAL_KEYBOARD_UID { 0x05, 0xCD, 0x9F, 0x8A, 0xF4, 0xDF, 0xDE, 0xB2 }

// The four corners
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5, 3, 8 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0, 0, 0 }

// Split configuration
#define MASTER_RIGHT

// Caps Word configuration
#define CAPS_WORD_TOGGLE_KEY
//#define CAPS_WORD_INVERT_ON_SHIFT
#define CAPS_WORD_IDLE_TIMEOUT 5000  // 5 seconds

// Auto Shift configuration
#define AUTO_SHIFT_TIMEOUT 145

// Tap/hold tuning
// Base tapping term is 170ms in info.json ("tapping.term").
// QUICK_TAP_TERM adjusts how fast taps are recognized distinctly.
#define QUICK_TAP_TERM 120

#ifndef FLOW_TAP_TERM
#    define FLOW_TAP_TERM 135
#endif

#ifndef CHORDAL_HOLD
#    define CHORDAL_HOLD
#endif

// Extra delay for tap_code; note qmk.tap_keycode_delay is set in info.json as 10
#define TAP_CODE_DELAY 10
