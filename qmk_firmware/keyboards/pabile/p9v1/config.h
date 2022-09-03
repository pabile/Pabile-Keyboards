/*
Copyright 2021 Pabile

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6671
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pabile
#define PRODUCT         P9v1 Macro Pad

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* pin-out */
#define MATRIX_ROW_PINS { C6, D7, E6 }
#define MATRIX_COL_PINS { D1, D0, D4 }
#define UNUSED_PINS
 
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* encoders */
#define ENCODERS 3

#define ENCODERS_PAD_B { F7, F5, F6 }
#define ENCODERS_PAD_A { F4, B1, B3 }

// flip encoder for tall
// #define ENCODER_DIRECTION_FLIP

#define RGB_DI_PIN B6 
#define RGBLIGHT_SLEEP 
#define RGBLED_NUM 6 
#define RGBLIGHT_HUE_STEP 8 
#define RGBLIGHT_SAT_STEP 8 
#define RGBLIGHT_VAL_STEP 8 
#define RGBLIGHT_LIMIT_VAL 250 
#define RGBLIGHT_ANIMATIONS 
#define RGBLIGHT_LED_MAP { 0,1,2,3,4,5 }