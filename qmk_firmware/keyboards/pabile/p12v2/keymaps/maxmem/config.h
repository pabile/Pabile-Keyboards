/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xCA, 0xAF, 0xA3, 0xFC, 0x9A, 0xEE, 0x12, 0x73}

#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

// #define MIDI_ADVANCED
// #define LED_NUM_LOCK_PIN GP25

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
