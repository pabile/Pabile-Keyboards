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

#include "p6.h"

#ifdef RGB_MATRIX_ENABLE

/* RGB Positioning */
led_config_t g_led_config = { {
    { 0, 1, 2 },
    { 5, 4, 3 }
}, {
    { 224,  0 }, { 112,  0 }, { 0,  0},
    { 0, 64 },   { 112, 64 }, { 224, 64}

}, {
    4, 4, 4,
    4, 4, 4
} };

#endif
