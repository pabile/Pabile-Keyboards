#pragma once

#include "quantum.h"

#define LAYOUT( \
	k00,k01,k02,k03,k04,k05,k06,k40,k41,k42,k43,k44, \
	k10, k11,k12,k13,k14,k15,k16,k50,k51,k52,   k53, \
	k20,  k21,k22,k23,k24,k25,k26,k60,k61,k62,  k63, \
	k30, k31,k32, k33,   k34,   k35,        k36,k46,k56 \
) \
{ \
    {k00,k01,k02,k03,k04,k05,k06}, \
	{k10,k11,k12,k13,k14,k15,k16}, \
	{k20,k21,k22,k23,k24,k25,k26}, \
	{k30,k31,k32,k33,k34,k35,k36}, \
	{k40,k41,k42,k43,k44,    k46}, \
	{k50,k51,k52,k53,        k56}, \
	{k60,k61,k62,k63,           } \
}
