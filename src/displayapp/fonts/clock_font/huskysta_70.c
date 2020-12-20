#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 70 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifndef HUSKYSTA_70
#define HUSKYSTA_70 1
#endif

#if HUSKYSTA_70

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x0, 0x0, 0x0, 0x1b, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf9, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff,
    0xff, 0xfe, 0xaa, 0xaf, 0xff, 0xff, 0xf8, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xc0, 0x2, 0xff, 0xff,
    0xff, 0x40, 0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0,
    0x3f, 0xff, 0xff, 0xf0, 0x0, 0x3, 0xff, 0xff,
    0xff, 0x0, 0x7, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xf0, 0x0, 0xbf, 0xff, 0xff,
    0xd0, 0x0, 0xb, 0xff, 0xff, 0xfd, 0x0, 0xf,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xc0, 0x1, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x1f,
    0xff, 0xff, 0xfc, 0x0, 0x2f, 0xff, 0xff, 0xf4,
    0x0, 0x2, 0xff, 0xff, 0xff, 0x80, 0x3, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xf0,
    0x0, 0x7f, 0xff, 0xff, 0xf0, 0x0, 0x7, 0xff,
    0xff, 0xff, 0x0, 0xb, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xe0, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0,
    0x1f, 0xff, 0xff, 0xfc, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x2, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x2f, 0xff, 0xff, 0xf8, 0x0, 0x3f, 0xff, 0xff,
    0xf0, 0x0, 0x3, 0xff, 0xff, 0xff, 0x40, 0x3,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xf0, 0x0, 0xbf, 0xff, 0xff, 0xe0, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf4, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40,
    0x0, 0x0, 0x0,

    /* U+31 "1" */
    0x0, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0x40, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0x1a, 0xaa, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x7, 0xff, 0xff, 0xfe,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x7, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x7, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x7,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x2f, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xf8, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x3, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xf8, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xd0, 0x0, 0x0,

    /* U+32 "2" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xaa, 0xaa, 0xaa, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xea, 0xaa, 0xaa, 0xaa, 0x54,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xfe,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa9, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x2, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0,

    /* U+33 "3" */
    0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x6a, 0xaa, 0xaa, 0xaa, 0xaa, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x6a,
    0xaa, 0xaa, 0xbf, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4,
    0x0, 0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x6a, 0xa4,
    0x0, 0x1f, 0xff, 0xff, 0xf8, 0x0, 0x0, 0xff,
    0xf8, 0x0, 0x3f, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0xff, 0xf4, 0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0,
    0x2, 0xff, 0xf0, 0x0, 0x7f, 0xff, 0xff, 0xe0,
    0x0, 0x3, 0xff, 0xe0, 0x0, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x3, 0xff, 0xd0, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0xb, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x1a, 0xaa, 0xaa, 0xaf, 0xff, 0xff, 0xfe, 0xaa,
    0x90, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0xf4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0,

    /* U+35 "5" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xfe, 0xaa, 0xaa, 0xa9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xbf, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xea, 0xaa, 0xaa, 0xa4, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff,
    0xea, 0xaa, 0xaa, 0xaf, 0xff, 0x80, 0x7f, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x3, 0xff, 0xd0, 0x3f,
    0xff, 0xff, 0xf4, 0x0, 0x0, 0x2, 0xff, 0xf0,
    0xf, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0xff,
    0xf8, 0x7, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x3f, 0xfd, 0x2, 0xff, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x2f, 0xff, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40,
    0x0, 0x0,

    /* U+37 "7" */
    0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x1, 0xaa, 0xaa, 0xaa, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+38 "8" */
    0x0, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x3f, 0xff, 0xff,
    0xfa, 0xaa, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x1f,
    0xff, 0xff, 0xf8, 0x0, 0x3f, 0xff, 0xff, 0xf4,
    0x0, 0xf, 0xff, 0xff, 0xfd, 0x0, 0xf, 0xff,
    0xff, 0xfc, 0x0, 0x3, 0xff, 0xff, 0xff, 0x0,
    0x7, 0xff, 0xff, 0xfe, 0x0, 0x1, 0xff, 0xff,
    0xff, 0x80, 0x2, 0xff, 0xff, 0xff, 0x40, 0x0,
    0xbf, 0xff, 0xff, 0xd0, 0x0, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xea, 0xaa, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x3f,
    0xff, 0xff, 0xf0, 0x0, 0x7f, 0xff, 0xff, 0xf0,
    0x0, 0x1f, 0xff, 0xff, 0xfc, 0x0, 0x2f, 0xff,
    0xff, 0xf4, 0x0, 0xb, 0xff, 0xff, 0xfd, 0x0,
    0xf, 0xff, 0xff, 0xfc, 0x0, 0x3, 0xff, 0xff,
    0xff, 0x0, 0x7, 0xff, 0xff, 0xff, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xc0, 0x2, 0xff, 0xff, 0xff,
    0x40, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40,
    0x0, 0x0, 0x0,

    /* U+39 "9" */
    0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xfe, 0xaa, 0xaa, 0xaa, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x1, 0xff, 0xf0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x40, 0x0, 0xf, 0xff, 0xc0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xfd, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xe0, 0x0, 0x1, 0xff, 0xf0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x40, 0x0, 0xb, 0xff, 0xc0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x3, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x1, 0x6a,
    0xaa, 0xaa, 0xaf, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0x40, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4,
    0x0, 0x0, 0x0,

    /* U+3A ":" */
    0x0, 0x2f, 0xff, 0xff, 0xf4, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x7, 0xff, 0xff, 0xff, 0x0, 0x2f,
    0xff, 0xff, 0xf4, 0x0, 0xff, 0xff, 0xff, 0xc0,
    0x2, 0xaa, 0xaa, 0xa9, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff,
    0x0, 0x2f, 0xff, 0xff, 0xf8, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x3, 0xff, 0xff, 0xff, 0x0, 0x2f,
    0xff, 0xff, 0xf8, 0x0, 0x6a, 0xaa, 0xaa, 0x80,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 641, .box_w = 42, .box_h = 33, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 472, .box_w = 23, .box_h = 33, .ofs_x = 13, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 722, .box_w = 55, .box_h = 55, .ofs_x = -2, .ofs_y = -22},
    {.bitmap_index = 1294, .adv_w = 680, .box_w = 43, .box_h = 33, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 668, .box_w = 36, .box_h = 33, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 1946, .adv_w = 731, .box_w = 59, .box_h = 55, .ofs_x = -10, .ofs_y = -22},
    {.bitmap_index = 2758, .adv_w = 673, .box_w = 37, .box_h = 33, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 3064, .adv_w = 550, .box_w = 38, .box_h = 33, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 3378, .adv_w = 640, .box_w = 41, .box_h = 33, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 3717, .adv_w = 640, .box_w = 43, .box_h = 33, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4072, .adv_w = 326, .box_w = 19, .box_h = 17, .ofs_x = 6, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t huskysta_70 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 55,          /*The maximum line height required by the font*/
    .base_line = 22,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -9,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if HUSKYSTA_70*/

