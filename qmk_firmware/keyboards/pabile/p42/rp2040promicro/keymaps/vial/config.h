/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xD7, 0xF6, 0x10, 0xC8, 0x9D, 0xB7, 0xE2, 0xB4}

#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define MIDI_ADVANCED

#define LED_CAPS_LOCK_PIN GP25

#define RGBLIGHT_LAYERS
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral

