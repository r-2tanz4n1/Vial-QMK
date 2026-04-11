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

#define MASTER_RIGHT

#define CAPS_WORD_TOGGLE_KEY
//#define CAPS_WORD_INVERT_ON_SHIFT
#define CAPS_WORD_IDLE_TIMEOUT 5000  // 5 seconds.

//Auto shift
#define AUTO_SHIFT_TIMEOUT 145
//Para conseguir repetir as teclas:
#define AUTO_SHIFT_REPEAT



// Trouxe do config do qmk normal:
#define QUICK_TAP_TERM 120

#define FLOW_TAP_TERM 135
#define CHORDAL_HOLD

#define TAP_CODE_DELAY 10

/* tirar mouse
#define MOUSEKEY_DELAY 100
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_MAX_SPEED 8

#define MOUSEKEY_WHEEL_DELAY 100
#define MOUSEKEY_WHEEL_INTERVAL 16
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
*/