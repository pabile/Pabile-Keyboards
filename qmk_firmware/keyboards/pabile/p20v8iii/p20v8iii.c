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

#include "p20v8iii.h"

#ifdef RGB_MATRIX_ENABLE

/* RGB Positioning */
led_config_t g_led_config = { {
    {  19, 18, 17, 16},
    {  12, 13, 14, 15},
    {  11, 10, 9,  8 },
    {  4,  5,  6,  7 },
    {  3,  2,  1,  0 }
}, {
    {0,64},   {75,64},  {150,64}, {224,64},
    {224,48}, {150,48}, {75,48},  {0,48},
    {0,32},   {75,32},  {150,32}, {224,32},
    {224,16}, {150,16}, {75,16},  {0,16},
    {0,0},    {75,0},   {150,0},  {224,0}
}, {
    1, 4, 1, 1,
    4, 4, 4, 1,
    1, 4, 4, 4,
    4, 4, 4, 1,
    1, 1, 1, 1
} };

#endif



