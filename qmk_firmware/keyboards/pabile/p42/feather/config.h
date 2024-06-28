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

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* pin-out for Feather 32U4 Bluefruit LE 
// rotated keypad?
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D1, D0, C6, D7, D6, C7, D3 }
*/
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1, F0 }
#define MATRIX_COL_PINS { D3, C7, D6, D7, C6, D0, D1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* 
https://docs.qmk.fm/#/feature_bluetooth?id=bluetooth-known-supported-hardware
#define BLUEFRUIT_LE_RST_PIN D4
#define BLUEFRUIT_LE_CS_PIN  B4
#define BLUEFRUIT_LE_IRQ_PIN E6
*/