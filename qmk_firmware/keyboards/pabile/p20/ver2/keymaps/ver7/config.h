/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#undef PRODUCT
#define PRODUCT P20v7 Macro Pad

#undef DIODE_DIRECTION
#define DIODE_DIRECTION ROW2COL

#undef ENCODERS
#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B

/* encoders */
#define ENCODERS 4
#define ENCODERS_PAD_A { F7, B1, B3, D2 }
#define ENCODERS_PAD_B { F4, F5, F6, D3 }

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xA1, 0x3C, 0x27, 0x42, 0x2F, 0x08, 0x96, 0xE2}
// #define MIDI_ADVANCED

#define RGB_DI_PIN B6
#define RGBLED_NUM 16
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LED_MAP { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }
// #define BACKLIGHT_LEVEL_VAL 150
#define RGBLIGHT_LIMIT_VAL 80

#define USB_SUSPEND_WAKEUP_DELAY 200

// turn off backlight when pc off/sleep
#define RGBLIGHT_SLEEP
// #define RGB_DISABLE_WHEN_USB_SUSPENDED
