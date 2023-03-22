/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xB0, 0x1D, 0xE4, 0xB1, 0x2C, 0x58, 0x3C, 0x59}

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#undef FORCE_NKRO
#define FORCE_NKRO

#define MIDI_ADVANCED

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET 
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP23
