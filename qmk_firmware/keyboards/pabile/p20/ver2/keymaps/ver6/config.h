/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xA1, 0x3C, 0x27, 0x42, 0x2F, 0x08, 0x96, 0xE2}

#define WS2812_DI_PIN B6
#define RGBLIGHT_LED_COUNT 16

// #define RGB_DI_PIN B6
// #define RGBLED_NUM 16

#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LED_MAP { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }
#define RGBLIGHT_SLEEP

#define MIDI_ADVANCED
#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define USB_SUSPEND_WAKEUP_DELAY 200

/* encoders */
#define ENCODERS 4
#define ENCODERS_PAD_A { D2, F7, B1, B3 }
#define ENCODERS_PAD_B { D3, F4, F5, F6 }
#define ENCODER_DIRECTION_FLIP
