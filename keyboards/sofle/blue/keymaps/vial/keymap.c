/* Copyright 2020 Josef Adamcik + 2026 Raphael Stanzani
 * Default keymap. 
 * Must be adjusted in Vial, to add the combos.
 */
#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NAV,
    _NUM,
    _FN
};

#define HM_A LCTL_T(KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D LGUI_T(KC_D)
#define HM_F LSFT_T(KC_F)

#define HM_J RSFT_T(KC_J)
#define HM_K RGUI_T(KC_K)
#define HM_L RALT_T(KC_L)
#define HM_SCLN RCTL_T(KC_SCLN)

#define NAV_SPC LT(_NAV, KC_SPC)
#define NUM_ENT LT(_NUM, KC_ENT)
#define NUM_BSP LT(_NUM, KC_BSPC)
#define FN_VOLU LT(_FN, KC_VOLU)
#define FN_BRIU LT(_FN, KC_BRIU)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC,
        KC_MINS, HM_A,    HM_S,    HM_D,    HM_F,    KC_G,                                  KC_H,    HM_J,    HM_K,    HM_L,    HM_SCLN, KC_QUOT,
        CW_TOGG, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,    KC_NO,              KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT),
                          KC_VOLD, FN_VOLU, HYPR_T(KC_TAB), NAV_SPC, NUM_ENT, NUM_BSP, NAV_SPC, HYPR_T(KC_DEL), FN_BRIU, KC_BRID
    ),

    [_NAV] = LAYOUT(
        KC_NO,   KC_6,          KC_7,          KC_8,          KC_9,          KC_0,                           KC_1,          KC_2,          KC_3,          KC_4,            KC_5,             KC_NO,
        KC_ESC,  LGUI(KC_Q),    LGUI(KC_W),    LGUI(KC_S),    LGUI(KC_R),    LGUI(KC_T),                     LGUI(KC_T),    LGUI(KC_I),    KC_UP,         C(S(KC_LEFT)),   C(S(KC_RGHT)),   LGUI(KC_BSPC),
        LGUI(KC_A), KC_LCTL,    KC_LALT,       KC_LGUI,       KC_LSFT,       LGUI(KC_F),                     HYPR(KC_H),    KC_LEFT,       KC_DOWN,       KC_RGHT,         LGUI(KC_K),       LGUI(KC_L),
        C(S(KC_Q)), LGUI(KC_Z), LGUI(KC_X),    LGUI(KC_C),    LGUI(KC_V),    LGUI(KC_B), KC_TRNS, KC_TRNS,  KC_SPC,        LGUI(KC_M),    LGUI(KC_C),    LGUI(KC_V),      RGUI(KC_Z),       KC_ENT,
                           KC_MUTE, SGUI(KC_M), HYPR_T(KC_TAB), KC_SPC, KC_ENT, KC_BSPC, KC_SPC, HYPR(C(S(A(KC_UP)))), C(S(KC_DOWN)), LGUI(KC_H)
    ),

    [_NUM] = LAYOUT(
        KC_F12,  KC_F1,         KC_F2,         KC_F3,         KC_F4,         KC_F5,                          KC_F6,         KC_F7,         KC_F8,         KC_F9,          KC_F10,         KC_F11,
        KC_ESC,  S(KC_1),       S(KC_2),       S(KC_3),       S(KC_4),       S(KC_5),                        S(KC_7),       KC_7,          KC_8,          KC_9,           KC_EQL,         KC_LBRC,
        LALT(KC_2), KC_LCTL,    KC_LALT,       KC_LGUI,       KC_LSFT,       S(KC_NUHS),                     S(KC_EQL),     KC_4,          KC_5,          KC_6,           LALT(KC_EQL),   KC_NUHS,
        KC_NUBS, S(KC_6),       LALT(KC_3),    S(KC_8),       S(KC_9),       S(KC_0), KC_TRNS, KC_TRNS,     KC_0,          KC_1,          KC_2,          KC_3,           KC_SLSH,        KC_ENT,
                           KC_F2, KC_F4, KC_TAB, KC_SPC, KC_ENT, KC_BSPC, KC_SPC, S(KC_0), KC_COMM, KC_DOT
    ),

    [_FN] = LAYOUT(
        KC_NO,   KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                          KC_NO,         KC_NO,         KC_NO,         KC_NO,          KC_NO,          KC_NO,
        KC_ESC,  G(C(S(A(KC_1)))), G(C(S(A(KC_2)))), G(C(S(A(KC_3)))), G(C(S(A(KC_4)))), G(C(S(A(KC_5)))), C(S(KC_1)),    C(S(KC_W)),    C(S(KC_E)),    C(S(KC_R)),     C(S(KC_T)),     C(S(KC_3)),
        KC_NO,   G(C(S(A(KC_6)))), G(C(S(A(KC_7)))), G(C(S(A(KC_8)))), G(C(S(A(KC_9)))), G(C(S(A(KC_0)))), C(S(KC_2)),    C(S(KC_S)),    C(S(KC_D)),    C(S(KC_F)),     C(S(KC_G)),     C(S(KC_4)),
        QK_BOOT, KC_NO,         KC_MPRV,       KC_MPLY,       KC_MNXT,       KC_NO,   KC_TRNS, KC_TRNS,      C(S(KC_Z)),    C(S(KC_X)),    C(S(KC_C)),    C(S(KC_V)),     C(S(KC_B)),     C(S(KC_5)),
                           KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRIU, KC_BRID
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [_NAV]  = { ENCODER_CCW_CW(A(S(KC_DOWN)), A(S(KC_UP))), ENCODER_CCW_CW(A(S(KC_RGHT)), A(S(KC_LEFT))) },
    [_NUM]  = { ENCODER_CCW_CW(LALT(KC_DOWN), RALT(KC_UP)), ENCODER_CCW_CW(LALT(KC_RGHT), LALT(KC_LEFT)) },
    [_FN]   = { ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO) },
}; 
