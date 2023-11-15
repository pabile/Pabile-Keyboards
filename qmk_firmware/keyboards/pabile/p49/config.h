#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6673
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pabile
#define PRODUCT         P49 Keyboard

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* key matrix size */
#define MATRIX_COLS 7 
#define MATRIX_ROWS 7 

/* pin-out */
#define MATRIX_COL_PINS { B4, E6, D7, C6, D4, B3, B2 } 
#define MATRIX_ROW_PINS { B5, B6, B1, F7, F6, F5, F4 } 
#define UNUSED_PINS 

/* encoders */
#define ENCODERS 1 
#define ENCODERS_PAD_A { D3 } 
#define ENCODERS_PAD_B { D2 } 

#define RGB_DI_PIN D1 
#define RGBLED_NUM 42 
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_ANIMATIONS 
