/* Copyright 2020 Pabile
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum custom_keycodes {
    DBLZERO = USER00,
    XCOPY,
    XPASTE,
    XCUT,
    CREDITS,
    CONTACT
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case DBLZERO:
        if (record->event.pressed) {
            tap_code(KC_P0);
            tap_code(KC_P0);
        }
        break;
    case XCOPY:
        if (record->event.pressed) {
            tap_code16(C(KC_C));
        }
        break;
    case XPASTE:
        if (record->event.pressed) {
            tap_code16(C(KC_V));
        }
        break;
    case XCUT:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
        }
        break;
    case CREDITS:
        if (record->event.pressed) {
           SEND_STRING("QMK and VIAL are the best things ever! Know more about this keypad at github.com/pabile/Pabile-Keyboards");
        }
        break;
    case CONTACT:
        if (record->event.pressed) {
           SEND_STRING("pabile@gmail.com");
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,         KC_U,         KC_I,    KC_O,    KC_P,
		KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,         KC_J,         KC_K,    KC_L,    LT(3,KC_MINS), KC_MUTE,
                KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,         KC_M,         KC_COMM, KC_DOT,  KC_SLSH,
		KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, LT(2,KC_BSPC), LT(1,KC_SPC), LT(4,KC_ENT), KC_DEL,  KC_RCTL, KC_ESC,        KC_MPLY),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif


void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = biton32(layer_state);
    switch (layer) {
        case 1:
            RGB_MATRIX_INDICATOR_SET_COLOR(1, 255, 255, 255);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(2, 255, 255, 255);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(3, 255, 255, 255);
            break;
        case 4:
            RGB_MATRIX_INDICATOR_SET_COLOR(4, 255, 255, 255);
            break;

        case 5:
            RGB_MATRIX_INDICATOR_SET_COLOR(5, 255, 255, 255);
            break;
        case 6:
            RGB_MATRIX_INDICATOR_SET_COLOR(6, 255, 255, 255);
            break;
        case 7:
            RGB_MATRIX_INDICATOR_SET_COLOR(7, 255, 255, 255);
            break;
        case 8:
            RGB_MATRIX_INDICATOR_SET_COLOR(8, 255, 255, 255);
            break;
        case 9:
            RGB_MATRIX_INDICATOR_SET_COLOR(9, 255, 255, 255);
            break;
    }
}

