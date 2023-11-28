/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x41, 0x79, 0x1D, 0xB9, 0x39, 0x81, 0x99, 0x96}

#define DYNAMIC_KEYMAP_LAYER_COUNT 32
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#undef FORCE_NKRO
#define FORCE_NKRO

#define MIDI_ADVANCED

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP23

#define LED_NUM_LOCK_PIN GP25
