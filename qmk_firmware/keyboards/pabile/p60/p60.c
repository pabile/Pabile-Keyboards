#include "p60.h"

#ifdef RGB_MATRIX_ENABLE

#define NA NO_LED

/* RGB Positioning */
led_config_t g_led_config = { {
        {0, 1, 2, 3, 4, 5},
	{23,22,21,20,19,18},
	{24,25,26,27,28,29},
	{47,46,45,44,43,42},
	{48,49,50,51,52,53},

	{6, 7, 8, 9, 10,11},
	{17,16,15,14,13,12},
	{30,31,32,33,34,35},
	{41,40,39,38,37,36},
	{54,55,56,57,58,59}
}, {
        {0,0},   {20,0},  {41,0},  {61,0},  {81,0},  {102,0},
        {122,0}, {143,0}, {163,0}, {183,0}, {204,0}, {224,0},
	{224,16},{204,16},{183,16},{163,16},{143,16},{122,16},
        {102,16},{81,16}, {61,16}, {41,16}, {20,16}, {0,16},
	{0,32},  {20,32}, {41,32}, {61,32}, {81,32}, {102,32},
        {122,32},{143,32},{163,32},{183,32},{204,32},{224,32},
	{224,48},{204,48},{183,48},{163,48},{143,48},{122,48},
        {102,48},{81,48}, {61,48}, {41,48}, {20,48}, {0,48},
	{0,64},  {20,64}, {41,64}, {61,64}, {81,64}, {102,64},
        {122,64},{143,64},{163,64},{183,64},{204,64},{224,64}
}, {
        1, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 1,
	1, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 1,
	1, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 1,
	1, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 1,
	1, 1, 1, 1, 4, 4,
	4, 4, 1, 1, 1, 1
} };

#endif
