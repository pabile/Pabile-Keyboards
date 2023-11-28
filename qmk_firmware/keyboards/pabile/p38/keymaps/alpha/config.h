#pragma once

// 5. Generate and add unique keyboard ID
// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x09, 0xF5, 0x43, 0x0B, 0xC6, 0xF3, 0x57, 0x5D}

#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#define MIDI_ADVANCED

// for mobile
// #define USB_MAX_POWER_CONSUMPTION 80

// [Bug] RP2040 cannot wake from S3 Sleep #19663
// https://github.com/qmk/qmk_firmware/issues/19663
// #define USB_SUSPEND_WAKEUP_DELAY 200
// #define NO_SUSPEND_POWER_DOWN
// fix: https://github.com/qmk/qmk_firmware/pull/19780/files

#undef RGB_DI_PIN
#undef RGBLED_NUM
// #undef DRIVER_LED_TOTAL

#define RGB_DI_PIN GP16
#define RGBLED_NUM 1
#define RGBLIGHT_ANIMATIONS

#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 0

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200
