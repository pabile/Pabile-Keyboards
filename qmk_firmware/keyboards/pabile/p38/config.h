/*
Copyright 2023 Pabile

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
#define MATRIX_ROWS 7
#define MATRIX_COLS 6 

/* pin-out */
#define MATRIX_ROW_PINS { GP29, GP15, GP26, GP10, GP8, GP4, GP9 }
#define MATRIX_COL_PINS { GP2,  GP1,  GP27, GP14, GP5, GP6 }
 
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN GP28
#define RGBLED_NUM 43
#define RGBLIGHT_ANIMATIONS 
#define WS2812_PIO_USE_PIO1

#define USB_SUSPEND_WAKEUP_DELAY 200

/* Encoders */
#define ENCODERS 2
#define ENCODERS_PAD_A { GP13, GP11 }
#define ENCODERS_PAD_B { GP12, GP7 }

