/*
Copyright 2022 Pabile

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

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* pin-out PRO MICRO ATMEGA32U4
#define MATRIX_ROW_PINS { C6, D7, E6, B1, B3, B2 }
#define MATRIX_COL_PINS { D3, D2, D4, F4, F5, F6, F7}
*/

/* pin-out PRO MICRO RP2040 */
#define MATRIX_ROW_PINS { GP5, GP6, GP7, GP22, GP20, GP23 }
#define MATRIX_COL_PINS { GP0, GP1, GP4, GP29, GP28, GP27, GP26}

/* #define RGB_DI_PIN B6 */
#define RGB_DI_PIN GP21
#define DRIVER_LED_TOTAL 40
#define RGBLED_NUM 40

#define RGBLIGHT_SLEEP
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 250
#define RGBLIGHT_ANIMATIONS


