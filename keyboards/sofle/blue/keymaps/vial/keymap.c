/* Copyright 2020 Josef Adamcik + 2025 Raphael Stanzani
 * Default keymap. 
 * Must be adjusted in Vial, specificaly the LCS/RCS.
 */

// clang-format off
#include QMK_KEYBOARD_H


/* 
 * VIAL prefere combos no GUI, e não aqui....
// Define combo key sequences
enum combo_events {
    COMBO_F2,
    COMBO_F3,
    COMBO_F4,
    COMBO_CAPS,
    COMBO_CAPS_WORD,
    COMBO_AT,
    COMBO_HASH,
    COMBO_LBRACKET,
    COMBO_RBRACKET,
    COMBO_UNDERSCORE,
    COMBO_PIPE,
    COMBO_PLUS,
    COMBO_EQUALS,
    COMBO_SQUARE_BRACKET,
    COMBO_RAYCAST,
    COMBO_SPACE,
    COMBO_TOGGLE_LAYER1_NM,
    COMBO_TOGGLE_LAYER1_DOT,
    COMBO_NUMPAD,
    COMBO_LAYER3,
};

// Define the key combinations for each combo
const uint16_t PROGMEM combo_f2[] = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM combo_f3[] = {KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM combo_f4[] = {KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo_caps[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_caps_word[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_at[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo_hash[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_lbracket[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_rbracket[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM combo_underscore[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_pipe[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM combo_plus[] = {KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM combo_equals[] = {KC_0, KC_MINUS, COMBO_END};
const uint16_t PROGMEM combo_square_bracket[] = {KC_P, KC_RBRC, COMBO_END};
const uint16_t PROGMEM combo_raycast[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_space[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo_toggle_layer1_nm[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM combo_toggle_layer1_dot[] = {KC_DOT, KC_NUHS, COMBO_END};
const uint16_t PROGMEM combo_numpad[] = {LT(2,KC_ENT), LGUI_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_layer3[] = {RGUI_T(KC_BSPC), MO(2), COMBO_END};


// Map combos to their key sequences and result keys
combo_t key_combos[] = {
    [COMBO_F2] = COMBO(combo_f2, KC_F2),
    [COMBO_F3] = COMBO(combo_f3, KC_F3),
    [COMBO_F4] = COMBO(combo_f4, KC_F4),
    [COMBO_CAPS] = COMBO(combo_caps, KC_CAPS),
    [COMBO_CAPS_WORD] = COMBO(combo_caps_word, CW_TOGG),
    [COMBO_AT] = COMBO(combo_at, LALT(KC_2)),
    [COMBO_HASH] = COMBO(combo_hash, LALT(KC_3)),
    [COMBO_LBRACKET] = COMBO(combo_lbracket, LALT(KC_8)),
    [COMBO_RBRACKET] = COMBO(combo_rbracket, LALT(KC_9)),
    [COMBO_UNDERSCORE] = COMBO(combo_underscore, KC_INT1),
    [COMBO_PIPE] = COMBO(combo_pipe, LSFT(KC_INT1)),
    [COMBO_PLUS] = COMBO(combo_plus, LSFT(KC_EQUAL)),
    [COMBO_EQUALS] = COMBO(combo_equals, KC_EQUAL),
    [COMBO_SQUARE_BRACKET] = COMBO(combo_square_bracket, KC_LBRC),
    [COMBO_RAYCAST] = COMBO(combo_raycast, HYPR(KC_SPACE)),
    [COMBO_SPACE] = COMBO(combo_space, KC_SPACE),
    [COMBO_TOGGLE_LAYER1_NM] = COMBO(combo_toggle_layer1_nm, TG(1)),
    [COMBO_TOGGLE_LAYER1_DOT] = COMBO(combo_toggle_layer1_dot, TG(1)),
    [COMBO_NUMPAD] = COMBO(combo_numpad, LT(1,KC_NO)),
    [COMBO_LAYER3] = COMBO(combo_layer3, LT(3,KC_NO)),

};
*
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY - pendente atualizar
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, 
KC_LALT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, RALT_T(KC_SCLN), KC_QUOT, 
KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_SENT,
    LCTL_T(KC_LEFT), LT(3,KC_RGHT), HYPR_T(KC_NO), LGUI_T(KC_SPC), LT(2,KC_ENT), RGUI_T(KC_BSPC), MO(2), HYPR_T(KC_DEL), LT(3,KC_UP), KC_DOWN),

/*
 * Symbols - atualizar
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[1] =  LAYOUT(KC_NUBS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, LALT(KC_3), KC_INT1, LSFT(KC_8), LSFT(KC_9), LSFT(KC_INT1), KC_EQL, KC_TAB, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, LSFT(KC_7), KC_7, KC_8, KC_9, KC_COMM, KC_LBRC, KC_LALT, KC_F11, KC_F12, LALT(KC_0), LALT(KC_8), LALT(KC_9), LSFT(KC_EQL), KC_4, KC_5, KC_6, KC_DOT, KC_NUHS, KC_LSFT, KC_MINS, LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_SLSH, SC_SENT, KC_LCTL, KC_LALT, HYPR_T(KC_NO), KC_LGUI, KC_ENT, KC_BSPC, KC_SPC, RSFT(KC_0), KC_COMM, KC_DOT),
/* Navigation
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[2] = LAYOUT(KC_NO, KC_NO, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, RGUI(KC_BSPC), KC_TAB, KC_NO, LGUI(KC_W), KC_BRID, KC_BRIU, LGUI(KC_T), RGUI(KC_T), RCS(KC_UP), KC_UP, RGUI(KC_O), RCS(KC_LEFT), KC_DEL, KC_LALT, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, HYPR(KC_H), KC_LEFT, KC_DOWN, KC_RGHT, KC_RALT, KC_RGUI, KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B), KC_NO, KC_NO, RGUI(KC_W), KC_SPC, RGUI(KC_C), RGUI(KC_V), RGUI(KC_Z), KC_RSFT, RCS(KC_Q), KC_LALT, HYPR_T(KC_NO), KC_LGUI, KC_ENT, KC_BSPC, RGUI(KC_SPC), KC_TAB, KC_NO, KC_NO),
/* Config - atualizar
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RCS(KC_1), RCS(KC_2), RCS(KC_3), RCS(KC_4), RCS(KC_5), RCS(KC_6), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RCS(KC_W), RCS(KC_E), RCS(KC_R), RCS(KC_T), RCS(KC_Y), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RCS(KC_A), RCS(KC_S), RCS(KC_D), RCS(KC_F), RCS(KC_G), RCS(KC_H), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RCS(KC_Z), RCS(KC_X), RCS(KC_C), RCS(KC_V), RCS(KC_B), RCS(KC_N), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_UP, KC_DOWN),   ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [1] =  { ENCODER_CCW_CW(KC_NO, KC_NO),          ENCODER_CCW_CW(KC_NO, KC_NO)  },
    [2] =  { ENCODER_CCW_CW(KC_NO, KC_NO),          ENCODER_CCW_CW(RAG(KC_LEFT), RAG(KC_RIGHT)) },
    [3] = { ENCODER_CCW_CW(KC_NO, KC_NO),          ENCODER_CCW_CW(KC_NO, KC_NO) },
};