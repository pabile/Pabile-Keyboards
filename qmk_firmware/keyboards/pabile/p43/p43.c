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

#include "p43.h"

#ifdef RGB_MATRIX_ENABLE

/* RGB Positioning */
led_config_t g_led_config = { {
    {  11, 10, 9,  8,  7,  6,  5}, 
    {  12, 13, 14, 15, 16, 17, 18},
    {  33, 32, 31, 30, 29, 28, 27}, 
    {  34, 35, 36, 37, 38, 39, 40},
    {  4,  3,  2,  1,  0  },
    {  19, 20, 21, 22  },
    {  26, 25, 24, 23, 41, 42 }
}, {
    {0,0},  {21,0},  {41,0},  {62,0},  {82,0},   {102,0},  {123,0},  {143,0},  {163,0},  {184,0},  {204,0},  {224,0},
    {0,22}, {23,22}, {45,22}, {68,22}, {90,22},  {112,22}, {135,22}, {157,22}, {180,22}, {202,22}, {224,22},
    {0,42}, {23,42}, {45,42}, {68,42}, {90,42},  {112,42}, {135,42}, {157,42}, {180,42}, {202,42}, {224,42},
	{0,64}, {28,64}, {56,64}, {84,64}, {112,64}, {140,64}, {168,64}, {196,64}, {224,64}
}, {
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
    1, 1, 1, 4, 4, 1, 4, 4, 4
} };

#endif

