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
#define PRODUCT_ID      0x6667
#define DEVICE_VER      0x0002
#define MANUFACTURER    Pabile
#define PRODUCT         P20ver7

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* pin-out */
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { D1, D0, D4, B2 }
#define UNUSED_PINS
 
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
/* encoders */
#define ENCODERS 4
#define ENCODERS_PAD_A { F7, B1, B3, D2 }
#define ENCODERS_PAD_B { F4, F5, F6, D3 }

#define RGB_DI_PIN B6
#define RGBLED_NUM 16
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LED_MAP { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }
#define RGBLIGHT_LIMIT_VAL 80
