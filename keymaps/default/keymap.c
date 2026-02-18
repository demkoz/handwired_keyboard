// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_15x6(
        // Row 0: [0,0]..[0,14] (15)
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_PAUS,

        // Row 1: [1,14] potem [1,0]..[1,13] (15)
        KC_DEL,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,

        // Row 2: [2,0]..[2,14] (15)
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,

        // Ten wstawiony w JSON-ie klawisz: [5,6] (1)  -> na razie daję MENU
        KC_APP,

        // Row 3: [3,0]..[3,11], [3,13], [3,14] (14)
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGDN,

        // Row 4: [4,0]..[4,10], [4,12], [4,13], [4,14] (14)
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,

        // Row 5: [5,0], [5,1], [5,2], [5,5], [5,9], [5,10], [5,11], [5,12], [5,13], [5,14] (10)
        KC_LCTL, KC_LWIN, KC_LALT, KC_SPC,  KC_RALT, MO(_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FN] = LAYOUT_15x6(
        // Row 0
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SCRL, _______,

        // Row 1: Fn + Del = bootloader (bo Del jest na [1,14])
        QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        // Row 2
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        // [5,6]
        _______,

        // Row 3
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        // Row 4
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        // Row 5
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
