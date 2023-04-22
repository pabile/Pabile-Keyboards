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
#define PRODUCT_ID      0x6674
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pabile
#define PRODUCT         P45 Keyboard

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 7

/* pin-out */
#define MATRIX_COL_PINS { B4, E6, D7, C6, D4, B3, B2 }
#define MATRIX_ROW_PINS { B5, B6, B1, F7, F6, F5, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* encoders */
#define ENCODERS 1

#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D2 }

#define RGB_DI_PIN D1
#define RGBLED_NUM 44
#define RGBLIGHT_ANIMATIONS
