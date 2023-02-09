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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6674
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pabile
#define PRODUCT         P43 Keyboard

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 7 

/* pin-out */
#define MATRIX_COL_PINS { GP8, GP13, GP14, GP6, GP5, GP2, GP1 }
#define MATRIX_ROW_PINS { GP10, GP12, GP11, GP9, GP4, GP7, GP3 }
 
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN GP0
#define RGBLED_NUM 43
#define RGBLIGHT_ANIMATIONS 
#define WS2812_PIO_USE_PIO1

#define USB_SUSPEND_WAKEUP_DELAY 200

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET 
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP23 
