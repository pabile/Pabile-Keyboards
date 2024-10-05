/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x41, 0x16, 0xDB, 0xD0, 0x53, 0x0A, 0x46, 0xF5}

#define USB_SUSPEND_WAKEUP_DELAY 200

#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#define MIDI_ADVANCED

/* pin-out RP2040 */
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#define MATRIX_ROW_PINS { GP4, GP5 }
#define MATRIX_COL_PINS { GP22, GP20, GP23 }
#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B
#define ENCODERS_PAD_A { GP0, GP29, GP27 }
#define ENCODERS_PAD_B { GP1, GP28, GP26 }
#ifdef RGBLIGHT_ENABLE
#    undef RGB_DI_PIN
#    define RGB_DI_PIN GP21
#endif
#ifdef RGB_MATRIX_ENABLE
// #    undef WS2812_DI_PIN
// #    define WS2812_DI_PIN GP21
#    define RGB_DI_PIN GP21
#endif
