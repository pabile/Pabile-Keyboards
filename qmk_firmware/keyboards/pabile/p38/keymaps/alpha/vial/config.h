#pragma once

// 5. Generate and add unique keyboard ID
// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x09, 0xF5, 0x43, 0x0B, 0xC6, 0xF3, 0x57, 0x5D}

#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#define MIDI_ADVANCED

// for mobile
#define USB_MAX_POWER_CONSUMPTION 100

// https://www.reddit.com/r/olkb/comments/10c55bk/comment/j4fb5no/?utm_source=reddit&utm_medium=web2x&context=3
#define RGB_DISABLE_WHEN_USB_SUSPENDED
