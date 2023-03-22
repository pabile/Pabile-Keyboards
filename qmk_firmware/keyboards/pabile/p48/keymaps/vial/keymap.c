#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_1,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,         KC_U,   KC_I,    KC_O,   KC_P, KC_5,
    KC_2,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,         KC_J,   KC_K,    KC_L,   LT(3,KC_MINS), KC_6,
    KC_3,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,         KC_M,   KC_COMM, KC_DOT, LT(4,KC_SLSH), KC_7,
    KC_4,    KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, LT(2,KC_BSPC), LT(1,KC_SPC), KC_ENT, KC_APP,  KC_DEL, KC_ESC, KC_8)
};
