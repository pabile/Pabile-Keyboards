/*
Copyright 2023 Pabile

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum custom_keycodes {
    DBLZERO = USER00,
    XCOPY,
    XPASTE,
    XCUT
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
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
        KC_P7,   KC_P8,   KC_P9,   KC_TAB, 
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
        KC_P1,   KC_P2,   KC_P3,   KC_DEL, 
        KC_P0,   DBLZERO, KC_PDOT, KC_PENT)
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif


// https://www.reddit.com/r/olkb/comments/nulc6l/qmk_led_layer_specific_rgb_lighting_underglow/
// https://www.reddit.com/r/olkb/comments/kpro3p/how_to_use_layer_indicators_with_rgb_matrix_for/
void rgb_matrix_indicators_user(void) {
    uint8_t layer = biton32(layer_state);
    switch (layer) {
        case 0:
            rgb_matrix_set_color_all(255, 0, 138); //Light up all the keys in blue
            break;
        case 1:
            rgb_matrix_set_color_all(255, 0, 0);
            break;
        case 2:
            rgb_matrix_set_color_all(255, 170, 0);
            break;
        case 3:
            rgb_matrix_set_color_all(0,125,255);
            break;
        case 4:
            rgb_matrix_set_color_all(255,255,255);
            break;
        case 5:
            rgb_matrix_set_color_all(255,0,255);
            break;
        case 6:
            rgb_matrix_set_color_all(128,0,0);
            break;
        case 7:
            rgb_matrix_set_color_all(128,0,128);
            break;
        case 8:
            rgb_matrix_set_color_all(0,128,128);
            break;
    }
}


