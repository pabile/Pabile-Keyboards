#pragma once

#include "quantum.h"

#define LAYOUT( \
	k00,k01,k02,k03,k04,k05,k40,k41,k42,k43, \
	k10,k11,k12,k13,k14,k15,k50,k51,k52,k53, \
	k20,k21,k22,k23,k24,k25,k60,k61,k62,k63  \
) \
{ \
    {k00,k01,k02,k03,k04,k05}, \
	{k10,k11,k12,k13,k14,k15}, \
	{k20,k21,k22,k23,k24,k25}, \
	{k40,k41,k42,k43        }, \
	{k50,k51,k52,k53        }, \
	{k60,k61,k62,k63        } \
}

