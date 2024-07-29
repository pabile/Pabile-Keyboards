#pragma once

// 5. Generate and add unique keyboard ID
// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x01, 0x65, 0x44, 0x91, 0x8A, 0xC9, 0x6A, 0xD1}

#define MIDI_ADVANCED

#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#undef RGB_DI_PIN
#define MATRIX_ROW_PINS { GP4, GP5, GP9, GP22, GP1, GP20, GP23 }
#define MATRIX_COL_PINS { GP26, GP27, GP29, GP28, GP6, GP7 }
#define RGB_DI_PIN GP0
