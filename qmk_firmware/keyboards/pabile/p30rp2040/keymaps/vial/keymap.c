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
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_MINS,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH
		)
};

