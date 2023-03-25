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

#include "p17.h"

#ifdef RGB_MATRIX_ENABLE

/* RGB Positioning */
led_config_t g_led_config = { {
    {  0,  1,  2,  3  },
    {  7,  6,  5,  4  },
    {  8,  9,  10, 16 },
    {  13, 12, 11     },
    {  14, 15         }
}, {
    {0,0},    {75,0},   {150,0},  {224,0},
    {224,24}, {150,16}, {75,16}, {0,16},
    {0,32},   {75,32},  {150,32},
    {150,48}, {75,48},  {0,48},
         {37,64},       {150,64}, {224,56}
}, {
    1, 1, 1, 1,
    1, 4, 4, 4,
    4, 4, 4,
    4, 4, 4,
    1,    4, 1
} };

#endif

