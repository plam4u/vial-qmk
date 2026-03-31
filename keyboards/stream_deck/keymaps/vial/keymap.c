// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#if defined(ENCODER_MAP_ENABLE)

// Important! The encoder map needs to have the same number of layers as your main keymap.

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_BOOT,      _______,   TG(1),   TG(2),   TG(3),             KC_MUTE,
        KC_A   ,      KC_1   ,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_I   ,      KC_J   ,    KC_K,    KC_L,    KC_M,    KC_N,    KC_O,    KC_P,
        KC_Q   ,      KC_R   ,    KC_S,    KC_T,    KC_U,    KC_V,    KC_W,    KC_X
    ),
    [1] = LAYOUT(
        QK_BOOT,      DF(0)  , _______,   TG(2),   TG(3),             KC_MUTE,
        KC_A   ,      KC_2   ,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_I   ,      KC_J   ,    KC_K,    KC_L,    KC_M,    KC_N,    KC_O,    KC_P,
        KC_Q   ,      KC_R   ,    KC_S,    KC_T,    KC_U,    KC_V,    KC_W,    KC_X
    ),
    [2] = LAYOUT(
        QK_BOOT,      DF(0)  ,   TG(1), _______,   TG(3),             KC_MUTE,
        KC_A   ,      KC_3   ,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_I   ,      KC_J   ,    KC_K,    KC_L,    KC_M,    KC_N,    KC_O,    KC_P,
        KC_Q   ,      KC_R   ,    KC_S,    KC_T,    KC_U,    KC_V,    KC_W,    KC_X
    ),
    [3] = LAYOUT(
        QK_BOOT,      DF(0)  ,   TG(1),   TG(2), _______,             KC_MUTE,
        KC_A   ,      KC_4   ,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_I   ,      KC_J   ,    KC_K,    KC_L,    KC_M,    KC_N,    KC_O,    KC_P,
        KC_Q   ,      KC_R   ,    KC_S,    KC_T,    KC_U,    KC_V,    KC_W,    KC_X
    )
};

