/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x01, 0x65, 0x44, 0x91, 0x8A, 0xC9, 0x6A, 0xD1}

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#undef FORCE_NKRO
#define FORCE_NKRO

#define MIDI_ADVANCED

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET 
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP23
