/*
Copyright 2020 Pabile

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
#define PRODUCT_ID      0x6630
#define DEVICE_VER      0x0000
#define MANUFACTURER    Pabile
#define PRODUCT         P30 Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* pin-out for PROMICRO */
#define MATRIX_ROW_PINS { C6, D7, E6, B1, B3, B2 }
#define MATRIX_COL_PINS { D3, D2, D4, F4, F5, F6, F7 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN B6 
#define RGBLIGHT_SLEEP 
#define RGBLED_NUM 30
#define RGBLIGHT_HUE_STEP 8 
#define RGBLIGHT_SAT_STEP 8 
#define RGBLIGHT_VAL_STEP 8 
#define RGBLIGHT_LIMIT_VAL 80
#define RGBLIGHT_ANIMATIONS 
#define RGBLIGHT_LED_MAP { 0,1,2,3,4,5,6,7,8,9,19,18,17,16,15,14,13,12,11,10,20,21,22,23,24,25,26,27,28,29 }