#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    k00,k01,k02,k03,k04,k05,k06,k40,k41,k42, \
    k10,k11,k12,k13,k14,k15,k16,k43,k44,k45, \
    k20,k21,k22,k23,k24,k25,k26,k50,k51,k52, \
    k30,k31,k32,k33,k34,k35,k36,k53,k54,k55 \
) \
{ \
    {k00,k01,k02,k03,k04,k05,k06}, \
    {k10,k11,k12,k13,k14,k15,k16}, \
    {k20,k21,k22,k23,k24,k25,k26}, \
    {k30,k31,k32,k33,k34,k35,k36}, \
    {k40,k41,k42,k43,k44,k45,XXX}, \
    {k50,k51,k52,k53,k54,k55,XXX} \
}
