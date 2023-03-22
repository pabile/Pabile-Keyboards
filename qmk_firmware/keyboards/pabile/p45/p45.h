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

#include "quantum.h"

#define LAYOUT( \
	k00,k01,k02,k03,k04,k05,k06,k40,k41,k42,k43,k44,k45, \
	k10,k11,k12,k13,k14,k15,k16,k50,k51,k52,k53, \
	k20,k21,k22,k23,k24,k25,k26,k60,k61,k62,k63,k66, \
	k30,k31,k32,k33,k34,k35,k36,k46,k56 \
) \
{ \
    {k00,k01,k02,k03,k04,k05,k06}, \
	{k10,k11,k12,k13,k14,k15,k16}, \
	{k20,k21,k22,k23,k24,k25,k26}, \
	{k30,k31,k32,k33,k34,k35,k36}, \
	{k40,k41,k42,k43,k44,k45,k46}, \
	{k50,k51,k52,k53,        k56}, \
	{k60,k61,k62,k63,        k66} \
}

