#include "ver2.h"

#ifdef RGB_MATRIX_ENABLE
/* RGB Positioning */
led_config_t g_led_config = { {
    { 0, 1, 2 },
    { 5, 4, 3 },
	{ 6, 7, 8 }
}, {
    { 224,  0 }, { 112,  0 }, { 0,  0},
	{ 224,  32 }, { 112, 32 }, { 0,  32},
    { 0, 64 },   { 112, 64 }, { 224, 64}

}, {
    4, 4, 4,
    4, 4, 4,
	4, 4, 4
} };
#endif
