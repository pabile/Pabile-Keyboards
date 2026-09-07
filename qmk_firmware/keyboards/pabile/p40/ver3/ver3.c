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

#include "ver3.h"

#ifdef RGB_MATRIX_ENABLE
/* RGB Positioning */
#define NA NO_LED

/* RGB Positioning */
led_config_t g_led_config = { {
    {0, 1, 2, 3, 4, 5, 6},
    {19,18,17,16,15,14,13},
    {20,21,22,23,24,25,26},
    {39,38,37,36,35,34,33},
    {7, 8, 9, 12,11,10,27},
	{28,29,32,31,30,NA,NA}
}, {
    {0,0},    {25,0},   {50,0},   {75,0},   {100,0},  {125,0},  {150,0},  {175,0},  {200,0}, {224,0},
	{224,22}, {200,22}, {175,22}, {150,22}, {125,22}, {100,22}, {75,22},  {50,22},  {25,22}, {0,22},
	{0,42},   {25,42},  {50,42},  {75,42},  {100,42}, {125,42}, {150,42}, {175,42}, {200,42}, {224,42},
	{224,64}, {200,64}, {175,64}, {150,64}, {125,64}, {100,64}, {75,64},  {50,64},  {25,64}, {0,64}
}, {
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        1, 1, 1, 1, 4, 4, 1, 1, 1, 1
} };

#endif
