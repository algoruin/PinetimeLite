#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 70 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifndef PRISMA_70
#define PRISMA_70 1
#endif

#if PRISMA_70

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x0, 0x0, 0x0, 0x0, 0x5, 0x55, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbe, 0x40, 0x0, 0x1b, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb9, 0x6, 0xff, 0xf9, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x3d, 0x1f, 0xe5, 0x55,
    0xbf, 0x47, 0xc0, 0x0, 0x0, 0x0, 0x1e, 0x1f,
    0x86, 0xff, 0xf9, 0x2f, 0xb, 0x40, 0x0, 0x0,
    0x7, 0x4b, 0x8b, 0xe5, 0x5, 0xbe, 0x2e, 0x2d,
    0x0, 0x0, 0x1, 0xd3, 0xc7, 0xd0, 0x0, 0x0,
    0x7d, 0x78, 0xb0, 0x0, 0x0, 0x38, 0xf2, 0xd0,
    0x2f, 0xff, 0x40, 0x78, 0xe2, 0xc0, 0x0, 0xe,
    0x2c, 0xf0, 0x3f, 0x55, 0x6f, 0x81, 0xe3, 0x8f,
    0x0, 0x1, 0xcb, 0x2c, 0x2e, 0x1b, 0xfe, 0x4b,
    0x43, 0x8d, 0x34, 0x0, 0x34, 0xd7, 0xb, 0x5f,
    0x95, 0x6f, 0x5e, 0xd, 0x71, 0xc0, 0xb, 0x28,
    0xd2, 0xcb, 0x40, 0x0, 0x2e, 0x34, 0x73, 0x8d,
    0x0, 0xd3, 0x2c, 0x72, 0xc0, 0x0, 0x0, 0x79,
    0xd3, 0x9c, 0xb0, 0x1c, 0xa3, 0x4d, 0x70, 0x0,
    0x0, 0x1, 0xd7, 0x1c, 0xe3, 0x2, 0x8d, 0x72,
    0xcd, 0x0, 0x0, 0x0, 0xb, 0x34, 0xd7, 0x34,
    0x34, 0xce, 0x36, 0xc0, 0x0, 0x0, 0x0, 0x35,
    0xca, 0x32, 0x83, 0x5c, 0xd7, 0x34, 0x0, 0x0,
    0x0, 0x2, 0x8c, 0x73, 0x5c, 0x32, 0x8c, 0xa3,
    0x0, 0x0, 0x0, 0x0, 0x1c, 0xd7, 0x34, 0xc3,
    0x28, 0xca, 0x30, 0x0, 0x0, 0x0, 0x1, 0xcd,
    0x32, 0x8c, 0x32, 0x8c, 0xa3, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xa3, 0x28, 0xc3, 0x28, 0xce, 0x30,
    0x0, 0x0, 0x0, 0x0, 0xca, 0x32, 0x8c, 0x32,
    0x8c, 0xe3, 0x0, 0x0, 0x0, 0x0, 0xc, 0xa3,
    0x28, 0xc3, 0x28, 0xce, 0x30, 0x0, 0x0, 0x0,
    0x0, 0xca, 0x32, 0x8c, 0x32, 0x8c, 0xe3, 0x0,
    0x0, 0x0, 0x0, 0xc, 0xa3, 0x28, 0xc3, 0x28,
    0xce, 0x30, 0x0, 0x0, 0x0, 0x0, 0xca, 0x32,
    0x8c, 0x32, 0x8c, 0xe3, 0x0, 0x0, 0x0, 0x0,
    0xc, 0xa3, 0x28, 0xc3, 0x28, 0xce, 0x30, 0x0,
    0x0, 0x0, 0x0, 0xca, 0x32, 0x8c, 0x32, 0x8c,
    0xe3, 0x0, 0x0, 0x0, 0x0, 0xc, 0xa3, 0x28,
    0xc3, 0x28, 0xce, 0x30, 0x0, 0x0, 0x0, 0x0,
    0xca, 0x32, 0x8c, 0x32, 0x8c, 0xe3, 0x0, 0x0,
    0x0, 0x0, 0xc, 0xa3, 0x28, 0xc3, 0x28, 0xce,
    0x30, 0x0, 0x0, 0x0, 0x0, 0xca, 0x32, 0x8c,
    0x32, 0x8c, 0xe3, 0x0, 0x0, 0x0, 0x0, 0xc,
    0xa3, 0x28, 0xc3, 0x28, 0xce, 0x30, 0x0, 0x0,
    0x0, 0x0, 0xca, 0x32, 0x8c, 0x32, 0x8c, 0xe3,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xa3, 0x28, 0xc3,
    0x28, 0xce, 0x30, 0x0, 0x0, 0x0, 0x0, 0xca,
    0x32, 0x8c, 0x32, 0x8c, 0xa3, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xa3, 0x28, 0xc3, 0x28, 0xca, 0x30,
    0x0, 0x0, 0x0, 0x1, 0xcd, 0x72, 0x8c, 0x32,
    0x8d, 0xa3, 0x40, 0x0, 0x0, 0x0, 0x28, 0xd7,
    0x34, 0xc3, 0x5c, 0xe7, 0x2c, 0x0, 0x0, 0x0,
    0x3, 0x4c, 0xa3, 0x5c, 0x35, 0xcb, 0x34, 0xd0,
    0x0, 0x0, 0x0, 0x71, 0xcd, 0x32, 0x82, 0x8d,
    0x32, 0x8b, 0x0, 0x0, 0x0, 0xd, 0x39, 0xc7,
    0x38, 0x1c, 0xa3, 0x8c, 0x3c, 0x0, 0x0, 0x3,
    0x87, 0x38, 0xa3, 0x0, 0xd7, 0xc, 0xb0, 0xf4,
    0x0, 0x1, 0xe0, 0xd7, 0xc, 0x70, 0xb, 0x38,
    0xb3, 0xc2, 0xe4, 0x1, 0xf8, 0x38, 0xd2, 0x8d,
    0x0, 0x35, 0xc3, 0xcf, 0x2, 0xff, 0xf8, 0xe,
    0x38, 0x71, 0xc0, 0x2, 0xcb, 0xe, 0x2d, 0x0,
    0x0, 0xb, 0x8f, 0xe, 0x34, 0x0, 0xe, 0x38,
    0x3c, 0x7e, 0x40, 0x1b, 0xd7, 0xc3, 0x8f, 0x0,
    0x0, 0x34, 0xe0, 0xb8, 0x6f, 0xff, 0x92, 0xe0,
    0xf2, 0xc0, 0x0, 0x1, 0xd3, 0xc1, 0xf9, 0x40,
    0x1b, 0xe0, 0x3c, 0x74, 0x0, 0x0, 0x7, 0x4f,
    0x40, 0xbf, 0xff, 0xe0, 0x1e, 0x2d, 0x0, 0x0,
    0x0, 0x1e, 0x1f, 0x40, 0x0, 0x0, 0x1f, 0x4b,
    0x40, 0x0, 0x0, 0x0, 0x3c, 0x2f, 0x90, 0x0,
    0x6f, 0x87, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xb8,
    0x1b, 0xff, 0xfe, 0x47, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbe, 0x40, 0x0, 0x1b, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5, 0x55, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+31 "1" */
    0x0, 0x0, 0x0, 0xb, 0x28, 0xca, 0x34, 0x0,
    0x0, 0x2, 0xec, 0xa3, 0x28, 0xd0, 0x0, 0x0,
    0x7d, 0x32, 0x8c, 0xa3, 0x40, 0x0, 0xb, 0x83,
    0xca, 0x32, 0x8d, 0x0, 0x1, 0xf0, 0xbb, 0x28,
    0xca, 0x34, 0x0, 0x3d, 0x1f, 0x4c, 0xa3, 0x28,
    0xd0, 0xb, 0x82, 0xe0, 0xf2, 0x8c, 0xa3, 0x41,
    0xf4, 0x7c, 0x2e, 0xca, 0x32, 0x8d, 0x2e, 0xf,
    0x47, 0xd3, 0x28, 0xca, 0x37, 0xd2, 0xe0, 0xb8,
    0x3c, 0xa3, 0x28, 0xd0, 0x7d, 0x1f, 0xb, 0xb2,
    0x8c, 0xa3, 0x47, 0x83, 0xd1, 0xf4, 0xca, 0x32,
    0x8d, 0x0, 0xb8, 0x2e, 0xf, 0x28, 0xca, 0x34,
    0xf, 0x47, 0xc2, 0xec, 0xa3, 0x28, 0xd0, 0x10,
    0xf4, 0x7d, 0x32, 0x8c, 0xa3, 0x40, 0x1e, 0xb,
    0x80, 0xca, 0x32, 0x8d, 0x0, 0x51, 0xf0, 0x3,
    0x28, 0xca, 0x34, 0x0, 0x3d, 0x0, 0xc, 0xa3,
    0x28, 0xd0, 0x1, 0x80, 0x0, 0x32, 0x8c, 0xa3,
    0x40, 0x0, 0x0, 0x0, 0xca, 0x32, 0x8d, 0x0,
    0x0, 0x0, 0x3, 0x28, 0xca, 0x34, 0x0, 0x0,
    0x0, 0xc, 0xa3, 0x28, 0xd0, 0x0, 0x0, 0x0,
    0x32, 0x8c, 0xa3, 0x40, 0x0, 0x0, 0x0, 0xca,
    0x32, 0x8d, 0x0, 0x0, 0x0, 0x3, 0x28, 0xca,
    0x34, 0x0, 0x0, 0x0, 0xc, 0xa3, 0x28, 0xd0,
    0x0, 0x0, 0x0, 0x32, 0x8c, 0xa3, 0x40, 0x0,
    0x0, 0x0, 0xca, 0x32, 0x8d, 0x0, 0x0, 0x0,
    0x3, 0x28, 0xca, 0x34, 0x0, 0x0, 0x0, 0xc,
    0xa3, 0x28, 0xd0, 0x0, 0x0, 0x0, 0x32, 0x8c,
    0xa3, 0x40, 0x0, 0x0, 0x0, 0xca, 0x32, 0x8d,
    0x0, 0x0, 0x0, 0x3, 0x28, 0xca, 0x34, 0x0,
    0x0, 0x0, 0xc, 0xa3, 0x28, 0xd0, 0x0, 0x0,
    0x0, 0x32, 0x8c, 0xa3, 0x40, 0x0, 0x0, 0x0,
    0xca, 0x32, 0x8d, 0x0, 0x0, 0x0, 0x3, 0x28,
    0xca, 0x34, 0x0, 0x0, 0x0, 0xc, 0xa3, 0x28,
    0xd0, 0x0, 0x0, 0x0, 0x32, 0x8c, 0xa3, 0x40,
    0x0, 0x0, 0x0, 0xca, 0x32, 0x8d, 0x0, 0x0,
    0x0, 0x3, 0x28, 0xca, 0x34, 0x0, 0x0, 0x0,
    0xc, 0xa3, 0x28, 0xd0, 0x0, 0x0, 0x0, 0x32,
    0x8c, 0xa3, 0x40, 0x0, 0x0, 0x0, 0xca, 0x32,
    0x8d, 0x0, 0x0, 0x0, 0x3, 0x28, 0xca, 0x34,
    0x0, 0x0, 0x0, 0xc, 0xa3, 0x28, 0xd0, 0x0,
    0x0, 0x0, 0x32, 0x8c, 0xa3, 0x40, 0x0, 0x0,
    0x0, 0xca, 0x32, 0x8d, 0x0, 0x0, 0x0, 0x3,
    0x28, 0xca, 0x34, 0x0, 0x0, 0x0, 0xc, 0xa3,
    0x28, 0xd0, 0x0, 0x0, 0x0, 0x32, 0x8c, 0xa3,
    0x40, 0x0, 0x0, 0x0, 0xca, 0x32, 0x8d, 0x0,
    0x0, 0x0, 0x3, 0x28, 0xca, 0x34, 0x0, 0x0,
    0x0, 0xc, 0xa3, 0x28, 0xd0, 0x0, 0x0, 0x0,
    0x32, 0x8c, 0xa3, 0x40,

    /* U+32 "2" */
    0x0, 0x0, 0x0, 0x0, 0x15, 0x54, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xf9, 0x0,
    0x1, 0xbe, 0x0, 0x0, 0x0, 0x0, 0x1, 0xf4,
    0x2b, 0xff, 0xe0, 0x7d, 0x0, 0x0, 0x0, 0x0,
    0xb4, 0x7f, 0x95, 0x5b, 0xf4, 0x78, 0x0, 0x0,
    0x0, 0x3c, 0x2e, 0x1b, 0xff, 0x92, 0xe0, 0xe0,
    0x0, 0x0, 0xb, 0xf, 0x1f, 0x94, 0x5b, 0xd2,
    0xc3, 0x80, 0x0, 0x2, 0xc7, 0x8f, 0x40, 0x0,
    0x7, 0xcb, 0x4e, 0x0, 0x0, 0x74, 0xe3, 0x80,
    0xbf, 0xf8, 0xb, 0x1c, 0x74, 0x0, 0xe, 0x38,
    0xe0, 0xbd, 0x55, 0xb8, 0x2c, 0xb2, 0xc0, 0x1,
    0xcb, 0x38, 0x3c, 0x6f, 0xf4, 0xb0, 0xb3, 0x8d,
    0x0, 0x34, 0xcb, 0xe, 0x3e, 0x46, 0xf2, 0xc3,
    0x8c, 0x70, 0x7, 0x28, 0xd3, 0x8e, 0x0, 0x2,
    0xcb, 0x1c, 0xa3, 0x40, 0xa3, 0x5c, 0xb3, 0x80,
    0x0, 0xb, 0x38, 0xe3, 0x28, 0xd, 0x33, 0x8d,
    0x70, 0x0, 0x0, 0x39, 0xc7, 0x31, 0xc0, 0xc7,
    0x35, 0xce, 0x0, 0x0, 0x1, 0xcd, 0x32, 0x4c,
    0xc, 0xa3, 0x28, 0xc0, 0x0, 0x0, 0xc, 0xa3,
    0x28, 0xc0, 0xca, 0x32, 0x8c, 0x0, 0x0, 0x0,
    0xdb, 0x35, 0x8c, 0xc, 0x93, 0x28, 0xc0, 0x0,
    0x0, 0xd, 0x73, 0x58, 0xd0, 0xca, 0x32, 0x8c,
    0x0, 0x0, 0x0, 0xcb, 0x35, 0x8c, 0xc, 0xa3,
    0x2c, 0xe0, 0x0, 0x0, 0x1c, 0xa3, 0x28, 0xc0,
    0xc7, 0x34, 0xc7, 0x0, 0x0, 0x3, 0x8d, 0x72,
    0x4c, 0xd, 0x32, 0xce, 0x3c, 0x0, 0x0, 0xb1,
    0xce, 0x31, 0xc0, 0x63, 0x4c, 0x70, 0xf0, 0x0,
    0x1d, 0x34, 0xc7, 0x28, 0x3, 0x1c, 0xb2, 0xc0,
    0x0, 0x3, 0x8f, 0x38, 0xa3, 0x40, 0x24, 0xd3,
    0x8b, 0x40, 0x0, 0xf2, 0xcb, 0xc, 0x70, 0x1,
    0xc7, 0x1e, 0x10, 0x0, 0x2c, 0x74, 0xd3, 0x8d,
    0x0, 0xa, 0x2c, 0x78, 0x0, 0x7, 0x4e, 0x38,
    0xb2, 0xc0, 0x0, 0x34, 0xf0, 0x40, 0x0, 0xe2,
    0xcb, 0x1c, 0x34, 0x0, 0x1, 0xd3, 0xc0, 0x0,
    0x2c, 0x71, 0xd3, 0x4e, 0x0, 0x0, 0x7, 0x48,
    0x0, 0x7, 0x4e, 0x38, 0xf2, 0xc0, 0x0, 0x0,
    0x1e, 0x0, 0x0, 0xe3, 0xcf, 0x2c, 0x70, 0x0,
    0x0, 0x0, 0x60, 0x0, 0x3c, 0xb1, 0xc3, 0x4d,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0x1d, 0x34,
    0xe3, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd3,
    0x8e, 0x2c, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x38, 0xb2, 0xc7, 0x1d, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0x1c, 0x70, 0xd3, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xd3, 0x4e, 0x38, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x38, 0xe3, 0xcb, 0x1c,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x2c, 0x71,
    0xd3, 0x40, 0x0, 0x0, 0x0, 0x0, 0x1, 0xc7,
    0x4d, 0x38, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x34, 0xe3, 0x8f, 0x2c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xe, 0x3c, 0xb2, 0xc7, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xcb, 0x1c, 0x74, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x75, 0xd3, 0x8e, 0x3c,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x5, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x40, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x55, 0x54, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0,

    /* U+33 "3" */
    0x0, 0x0, 0x0, 0x15, 0x54, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0x90, 0x0, 0x7, 0xf4,
    0x0, 0x0, 0x0, 0x3, 0xd0, 0xaf, 0xff, 0x90,
    0xb8, 0x0, 0x0, 0x0, 0x78, 0x7f, 0x95, 0x56,
    0xf8, 0x7c, 0x0, 0x0, 0xb, 0x4f, 0x86, 0xff,
    0xe4, 0x7d, 0x2c, 0x0, 0x0, 0xb1, 0xe1, 0xf9,
    0x45, 0xbe, 0x2e, 0x2c, 0x0, 0x7, 0x1d, 0x3e,
    0x0, 0x0, 0xf, 0x5e, 0x2c, 0x0, 0x34, 0xd3,
    0xc0, 0xbf, 0xf9, 0x7, 0x4e, 0x38, 0x0, 0xe,
    0x38, 0x2e, 0x55, 0x6f, 0x47, 0x5d, 0x34, 0x0,
    0x13, 0xc3, 0x86, 0xff, 0x8b, 0x47, 0x2c, 0xb0,
    0x0, 0xc, 0x38, 0xf9, 0x17, 0xd7, 0x4b, 0x38,
    0xd0, 0x0, 0x3, 0x8f, 0x0, 0x1, 0xd7, 0x4d,
    0x72, 0x80, 0x0, 0xc, 0xb0, 0x0, 0x1, 0xcb,
    0x2c, 0xd7, 0x0, 0x0, 0x3, 0x40, 0x0, 0x2,
    0xcd, 0x32, 0x8c, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0x3, 0x28, 0xd7, 0x34, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0x73, 0x5c, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x28, 0xca, 0x32, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa3, 0x28, 0xca, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0x5c, 0xd7, 0x24, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xb3, 0x5c, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb3, 0x5c, 0xa3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x5c, 0xb3,
    0x4c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x78, 0xd3,
    0x4c, 0x60, 0x0, 0x0, 0x0, 0x0, 0x1b, 0x8e,
    0x3c, 0xa3, 0x40, 0x0, 0x0, 0x1, 0xff, 0xe1,
    0xe2, 0xc3, 0x1c, 0x0, 0x0, 0x0, 0x1, 0x54,
    0x7d, 0x2d, 0x34, 0xd0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xc2, 0xe2, 0xc7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5b, 0xd2, 0xd7, 0x8e, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xe1, 0xd7, 0x6c, 0x0, 0x0,
    0x0, 0x7, 0xff, 0x81, 0xe2, 0xcf, 0x38, 0x0,
    0x0, 0x0, 0x0, 0x17, 0xe0, 0xd3, 0x8d, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xf1, 0xc7, 0x38,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe3, 0x8d,
    0x73, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc7,
    0x2c, 0xcb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0x8d, 0x73, 0x5c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0x34, 0xca, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xa3, 0x28, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x32, 0x8c, 0xa3, 0x0, 0x0, 0x10,
    0x0, 0x0, 0x1, 0xcd, 0x72, 0x8c, 0x0, 0x0,
    0xc0, 0x0, 0x0, 0xa, 0x35, 0xcd, 0x70, 0x0,
    0x13, 0x80, 0x0, 0x0, 0x35, 0xce, 0x35, 0xc0,
    0x0, 0xd3, 0x40, 0x0, 0x3, 0x8a, 0x34, 0xca,
    0x0, 0x22, 0xc7, 0x80, 0x0, 0x3c, 0x72, 0xca,
    0x34, 0x0, 0xe3, 0x87, 0xd0, 0xb, 0xc3, 0x8d,
    0x35, 0xc0, 0x24, 0xd3, 0x82, 0xff, 0xf4, 0x3c,
    0xe1, 0xca, 0x0, 0xb1, 0xd3, 0x80, 0x0, 0x7,
    0x8f, 0xd, 0x30, 0x14, 0xe2, 0xe2, 0xe4, 0x1,
    0xf8, 0xf0, 0xe3, 0x80, 0xb0, 0xe1, 0xf5, 0xbf,
    0xfe, 0x2e, 0xb, 0x2c, 0x0, 0xf1, 0xe0, 0xbe,
    0x55, 0x5b, 0xd0, 0xf1, 0xc0, 0x0, 0xf0, 0xf0,
    0x2f, 0xff, 0xe4, 0xf, 0x1d, 0x0, 0x0, 0xf0,
    0xf8, 0x0, 0x0, 0x2, 0xe1, 0xd0, 0x0, 0x0,
    0xf4, 0x7f, 0x50, 0x6, 0xf8, 0x2d, 0x0, 0x0,
    0x0, 0x7d, 0x1b, 0xff, 0xfe, 0xb, 0x80, 0x0,
    0x0, 0x0, 0x2f, 0x90, 0x0, 0x6, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf9, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x15, 0x54, 0x0,
    0x0, 0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd3, 0x1c, 0x71,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x28,
    0xe3, 0x8e, 0x3d, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0x1c, 0xb2, 0xcb, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe3, 0x4d, 0x34, 0xcd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0xb2,
    0xce, 0x3c, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x4c, 0x71, 0xc7, 0xcd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb3, 0x8e, 0x38, 0xfc, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x72, 0xcb,
    0x2d, 0xcd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x8d, 0x34, 0xd3, 0x5c, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x72, 0xcb, 0x2c, 0xb5, 0xcd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0x31, 0xc7, 0x1f,
    0x5c, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xca,
    0x38, 0xe3, 0x75, 0xcd, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x71, 0xc7, 0x2c, 0xb3, 0x5c, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0x34, 0xd3, 0x4f, 0x35,
    0xcd, 0x0, 0x0, 0x0, 0x0, 0x1, 0xcb, 0x2c,
    0xb2, 0xf3, 0x5c, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x34, 0xd7, 0x5c, 0x7b, 0x35, 0xcd, 0x0, 0x0,
    0x0, 0x0, 0xb, 0x28, 0xe3, 0x8d, 0x73, 0x5c,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0xd7, 0x1c, 0x71,
    0xd7, 0x35, 0xcd, 0x0, 0x0, 0x0, 0x0, 0x38,
    0xd3, 0x4d, 0x3d, 0x73, 0x5c, 0xd0, 0x0, 0x0,
    0x0, 0x7, 0x2c, 0xb2, 0xca, 0xd7, 0x35, 0xcd,
    0x0, 0x0, 0x0, 0x0, 0xd3, 0x4d, 0x31, 0xcd,
    0x73, 0x5c, 0xd0, 0x0, 0x0, 0x0, 0x2c, 0xa3,
    0x8e, 0x38, 0xd7, 0x35, 0xcd, 0x0, 0x0, 0x0,
    0x3, 0x5c, 0x71, 0xc7, 0xd, 0x73, 0x5c, 0xd0,
    0x0, 0x0, 0x0, 0xe3, 0x8d, 0x34, 0xd0, 0xd7,
    0x35, 0xcd, 0x0, 0x0, 0x0, 0x1c, 0x72, 0xcb,
    0x2c, 0xd, 0x73, 0x5c, 0xd0, 0x0, 0x0, 0x3,
    0x8d, 0x34, 0xc7, 0x0, 0xd7, 0x35, 0xcd, 0x0,
    0x0, 0x0, 0xb2, 0x8e, 0x38, 0xe0, 0xd, 0x73,
    0x5c, 0xd0, 0x0, 0x0, 0xd, 0x71, 0xc7, 0x1c,
    0x0, 0xd7, 0x35, 0xcd, 0x0, 0x0, 0x2, 0x8e,
    0x34, 0xd3, 0x40, 0xd, 0x73, 0x5c, 0xd0, 0x0,
    0x0, 0x71, 0xcb, 0x2c, 0xb0, 0x0, 0xd7, 0x35,
    0xcd, 0x0, 0x0, 0xe, 0x34, 0xd3, 0xc, 0x0,
    0xd, 0x73, 0x5c, 0xd0, 0x0, 0x2, 0xcb, 0x38,
    0xe3, 0x80, 0x0, 0xd7, 0x35, 0xcd, 0x0, 0x0,
    0x35, 0xc7, 0x1c, 0x70, 0x0, 0xd, 0x73, 0x5c,
    0xd0, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0x15, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x47,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd1, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x54, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xb3, 0x6c, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd7, 0x35,
    0xcd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd, 0x73, 0x5c, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd7, 0x35, 0xcd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0x73, 0x5c,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd7, 0x35, 0xcd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd, 0x73, 0x5c, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd7, 0x35, 0xcd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0x73, 0x5c, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd7, 0x35, 0xcd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0x73, 0x5c, 0xd0,
    0x0, 0x0,

    /* U+35 "5" */
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x1, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x40, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x5, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x33, 0x9d, 0xa7, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xca, 0x32, 0x8c, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0x28, 0xca, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xc, 0xa3, 0x28, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x32, 0x8c, 0xa3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xca, 0x32, 0x8c,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x28, 0xca,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xa3,
    0x28, 0xff, 0xe4, 0x0, 0x0, 0x0, 0x0, 0x32,
    0x8c, 0xa3, 0x55, 0xbf, 0x40, 0x0, 0x0, 0x0,
    0xca, 0x32, 0x8c, 0x0, 0xb, 0xc0, 0x0, 0x0,
    0x3, 0x28, 0xca, 0x3f, 0xf9, 0x2, 0xe0, 0x0,
    0x0, 0xc, 0xa3, 0x28, 0xd5, 0x6f, 0x81, 0xe0,
    0x0, 0x0, 0x32, 0x8c, 0xa3, 0x0, 0x7, 0xd0,
    0xf0, 0x0, 0x0, 0xca, 0x32, 0x8f, 0xfd, 0x1,
    0xe0, 0xe0, 0x0, 0x3, 0x28, 0xca, 0x35, 0x6f,
    0xc0, 0xe0, 0xe0, 0x0, 0xc, 0xa3, 0x28, 0xff,
    0x92, 0xe0, 0xe1, 0xc0, 0x0, 0x32, 0x8c, 0xa3,
    0x56, 0xf5, 0xe0, 0xe2, 0xc0, 0x0, 0xca, 0x32,
    0x8c, 0x0, 0xb8, 0xe1, 0xc3, 0x40, 0x3, 0x28,
    0xca, 0x3f, 0xe0, 0x78, 0xe2, 0xcb, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xf8, 0x34, 0xd3, 0x4c, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7c, 0x72, 0xca, 0x34,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x38, 0xe3, 0x5c,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x31, 0xca,
    0x35, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa3,
    0x5c, 0xd3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xcd, 0x72, 0x8c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x28, 0xca, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xa3, 0x28, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x73, 0x5c, 0xa3, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x8d, 0x73, 0x5c, 0x0, 0x0,
    0x60, 0x0, 0x0, 0xd, 0x72, 0x8d, 0x70, 0x0,
    0x0, 0xd0, 0x0, 0x0, 0xe2, 0x8d, 0x72, 0x80,
    0x0, 0x71, 0xd0, 0x0, 0xf, 0x1c, 0xb2, 0x8d,
    0x0, 0x4, 0xe1, 0xf4, 0x2, 0xf0, 0xe3, 0x4d,
    0x70, 0x0, 0x34, 0xe0, 0xbf, 0xfd, 0xf, 0x3c,
    0xb3, 0x80, 0xc, 0x74, 0xe0, 0x0, 0x1, 0xe2,
    0xc3, 0x5c, 0x0, 0x38, 0x74, 0xb9, 0x0, 0x7e,
    0x3c, 0x38, 0xe0, 0x8, 0x38, 0x78, 0x2f, 0xff,
    0x87, 0xc3, 0xcb, 0x0, 0x3c, 0x78, 0x2e, 0x41,
    0x56, 0xf4, 0x3c, 0xb0, 0x0, 0x38, 0x78, 0xb,
    0xff, 0xf9, 0x7, 0xc7, 0x40, 0x0, 0x3c, 0x3d,
    0x0, 0x0, 0x0, 0xb8, 0xb4, 0x0, 0x0, 0x3d,
    0x1f, 0x90, 0x1, 0xbe, 0xf, 0x0, 0x0, 0x0,
    0x2e, 0x6, 0xff, 0xff, 0x82, 0xe0, 0x0, 0x0,
    0x0, 0xb, 0xe0, 0x0, 0x1, 0xbd, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xfe, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5, 0x55, 0x0, 0x0,
    0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0xcb, 0x2c, 0xb2,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x34, 0xd7,
    0x4c, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb,
    0x28, 0xe3, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xc7, 0x1c, 0x72, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x38, 0xd3, 0x4d, 0x34, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0x2c, 0xb2, 0xcb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd3, 0x5c, 0x31,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0xa3,
    0x8e, 0x38, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x1c, 0x71, 0xcb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xe3, 0x4d, 0x34, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1c, 0xb2, 0xcb, 0x3c, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0x4d, 0x70, 0xc7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb2, 0x8e, 0x38,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x71,
    0xc7, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x8e, 0x34, 0xd3, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x72, 0xcb, 0x2c, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd, 0x35, 0xc3, 0x1c, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xca, 0x38, 0xe3, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x71, 0xc7, 0x1c,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0x38,
    0xd3, 0x4f, 0xe4, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xc7, 0x28, 0xb3, 0xdb, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x34, 0xd7, 0xc, 0x79, 0x1, 0xf4, 0x0,
    0x0, 0x0, 0xb, 0x28, 0xe3, 0x8f, 0xff, 0x81,
    0xf0, 0x0, 0x0, 0x1, 0xc7, 0x1c, 0x72, 0xc0,
    0x1b, 0x83, 0xc0, 0x0, 0x0, 0x38, 0xe3, 0x4d,
    0x3f, 0xf8, 0xb, 0x4b, 0x0, 0x0, 0x7, 0x1c,
    0xa2, 0xcf, 0x56, 0xfd, 0x1d, 0x2c, 0x0, 0x0,
    0xd3, 0x5c, 0x31, 0xff, 0xe4, 0xb8, 0x74, 0xb0,
    0x0, 0x2c, 0xa3, 0x4e, 0x39, 0x56, 0xf4, 0xf1,
    0xd3, 0x80, 0x3, 0x1c, 0x71, 0xcb, 0x0, 0x1,
    0xe3, 0xc7, 0x1c, 0x0, 0xa3, 0x8d, 0x34, 0xeb,
    0xfe, 0x3, 0xcf, 0x28, 0xe0, 0xc, 0x72, 0x8b,
    0x3f, 0x95, 0x6e, 0xe, 0x34, 0xd7, 0x2, 0xce,
    0x30, 0xc7, 0xc0, 0x0, 0x3c, 0x35, 0xca, 0x34,
    0x34, 0xca, 0x28, 0xe0, 0x0, 0x0, 0xf2, 0xcd,
    0x72, 0x83, 0x5c, 0xd3, 0x2c, 0x0, 0x0, 0x3,
    0x4c, 0xb3, 0x5c, 0x32, 0x8c, 0x73, 0x40, 0x0,
    0x0, 0x2c, 0xd7, 0x34, 0xc7, 0x35, 0xca, 0x30,
    0x0, 0x0, 0x0, 0xca, 0x32, 0x8c, 0x73, 0x5c,
    0xd7, 0x0, 0x0, 0x0, 0xc, 0xa3, 0x28, 0xc7,
    0x35, 0xcd, 0x70, 0x0, 0x0, 0x0, 0xca, 0x36,
    0x8c, 0x73, 0x4c, 0xe3, 0x0, 0x0, 0x0, 0xc,
    0xa3, 0x28, 0xc7, 0x28, 0xca, 0x34, 0x0, 0x0,
    0x1, 0xcd, 0x32, 0x8c, 0x32, 0x8d, 0x72, 0xc0,
    0x0, 0x0, 0x34, 0xcb, 0x35, 0xc3, 0x5c, 0xb3,
    0x4e, 0x0, 0x0, 0xb, 0x2c, 0xd3, 0x2c, 0x28,
    0xd3, 0x6c, 0x38, 0x0, 0x2, 0xc3, 0x5c, 0x73,
    0x81, 0xca, 0x2c, 0xe0, 0xf4, 0x2, 0xf0, 0xf3,
    0x8e, 0x30, 0xd, 0x30, 0xe3, 0x81, 0xff, 0xf4,
    0x3c, 0xb1, 0xcb, 0x0, 0x72, 0xc3, 0x8f, 0x0,
    0x0, 0x1f, 0x2c, 0x34, 0xd0, 0x3, 0x8e, 0x1e,
    0x2e, 0x40, 0x1f, 0x8b, 0x4b, 0x2c, 0x0, 0x1d,
    0x34, 0x3d, 0x6f, 0xff, 0x87, 0xc2, 0xc7, 0x0,
    0x0, 0xb1, 0xe0, 0xbe, 0x55, 0x5b, 0xe0, 0xb1,
    0xd0, 0x0, 0x2, 0xc7, 0x80, 0x7f, 0xff, 0x90,
    0x3c, 0x78, 0x0, 0x0, 0xb, 0x4f, 0x80, 0x0,
    0x0, 0x2e, 0x1e, 0x0, 0x0, 0x0, 0x2e, 0x1f,
    0x90, 0x1, 0x7f, 0x4b, 0x40, 0x0, 0x0, 0x0,
    0x7d, 0x1b, 0xff, 0xfe, 0x47, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xbe, 0x40, 0x0, 0x1b, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x55,
    0x0, 0x0, 0x0, 0x0,

    /* U+37 "7" */
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8d, 0x72,
    0x8d, 0x15, 0x55, 0x55, 0x55, 0x55, 0x57, 0x5c,
    0xa3, 0x5c, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x28, 0xd7, 0x28, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe, 0x35, 0xca, 0x34, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0x72, 0x8d, 0x70, 0xbf, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0xa3, 0x5c, 0xa0, 0x15, 0x55,
    0x55, 0x55, 0x55, 0x78, 0xd7, 0x28, 0xd0, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xf5, 0xca, 0x35, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb2, 0x8d, 0x73,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe3, 0x5c,
    0xe3, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xc7,
    0x38, 0xc7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xce, 0x31, 0xce, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x8c, 0x73, 0x8c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0x1c, 0xe3, 0x1c, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0x38, 0xc7, 0x38, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0x31, 0xce, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0x73, 0x8c, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xe3, 0x1c,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x38, 0xc7,
    0x34, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x31,
    0xcd, 0x32, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb3, 0x4c, 0xb3, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd3, 0x2c, 0xd3, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xcb, 0x34, 0xcb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xcd, 0x32, 0xcd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0x4c, 0xb3, 0x4c, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0x2c, 0xd3, 0x2c,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0x34, 0xcb,
    0x34, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0x32,
    0xcd, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c,
    0xb3, 0x5c, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x28, 0xd7, 0x28, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x35, 0xca, 0x35, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x72, 0x8d, 0x72, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa3, 0x5c, 0xa3, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd7, 0x28, 0xd7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xca, 0x35, 0xca,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x8d, 0x72,
    0x8d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x5c,
    0xa3, 0x5c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x28, 0xd7, 0x28, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0x35, 0xca, 0x34, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0x72, 0x8d, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1c, 0xa3, 0x5c, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x28, 0xd7, 0x28, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x35, 0xca, 0x35, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x72, 0x8d, 0x72,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa3, 0x5c,
    0xa3, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd7,
    0x28, 0xd7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xca, 0x35, 0xce, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x8d, 0x73, 0x8c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0x1c, 0xe3, 0x1c, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0x38, 0xc7, 0x38, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0x31, 0xce, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0x73, 0x8c, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xe3, 0x1c,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x38, 0xc7,
    0x38, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x31,
    0xce, 0x32, 0xc0, 0x0, 0x0, 0x0, 0x0,

    /* U+38 "8" */
    0x0, 0x0, 0x0, 0x5, 0x55, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x7e, 0x40, 0x0, 0x1f, 0x80,
    0x0, 0x0, 0x0, 0x2e, 0x6, 0xff, 0xf9, 0x1f,
    0x40, 0x0, 0x0, 0xf, 0xb, 0xe5, 0x56, 0xfd,
    0x1e, 0x0, 0x0, 0x3, 0xc7, 0xd2, 0xff, 0xe4,
    0xbc, 0x38, 0x0, 0x0, 0xe2, 0xe2, 0xf9, 0x56,
    0xf8, 0xb4, 0xe0, 0x0, 0x2c, 0xb5, 0xf0, 0x0,
    0x1, 0xf2, 0xd3, 0x40, 0x7, 0x2d, 0x78, 0x1b,
    0xfe, 0x42, 0xcb, 0x1c, 0x0, 0xd3, 0x5d, 0x1f,
    0x95, 0x6f, 0xb, 0x2c, 0xa0, 0x2c, 0xe3, 0x8b,
    0x8b, 0xfd, 0x2d, 0x2c, 0xd3, 0x3, 0x5c, 0xb1,
    0xd7, 0xd5, 0x7c, 0x70, 0xd7, 0x28, 0x72, 0x8d,
    0x35, 0xd0, 0x0, 0xb2, 0xcb, 0x35, 0xcb, 0x35,
    0xcb, 0x34, 0x0, 0x2, 0xcd, 0x32, 0x8c, 0xa3,
    0x28, 0xdb, 0x0, 0x0, 0xc, 0xa3, 0x5c, 0xdd,
    0x73, 0x4c, 0xe0, 0x0, 0x0, 0xd7, 0x35, 0xca,
    0xd7, 0x35, 0xcd, 0x0, 0x0, 0xa, 0x32, 0x8c,
    0xad, 0x73, 0x5c, 0xd0, 0x0, 0x0, 0xd3, 0x28,
    0xca, 0xd7, 0x35, 0xca, 0x0, 0x0, 0xd, 0x73,
    0x4c, 0xad, 0x32, 0x8d, 0x34, 0x0, 0x2, 0xca,
    0x35, 0xce, 0xa3, 0x5c, 0xa2, 0xc0, 0x0, 0x74,
    0xd7, 0x2c, 0xd7, 0x38, 0xc3, 0xb, 0x80, 0x6d,
    0x3c, 0xe3, 0x4c, 0x31, 0xcb, 0x2c, 0x1f, 0xff,
    0x9f, 0x1c, 0x71, 0xc3, 0x8e, 0x34, 0xb4, 0x1,
    0x5b, 0xe3, 0x8e, 0x38, 0x1c, 0x71, 0xc2, 0xf4,
    0x0, 0x6, 0xf2, 0xc7, 0x0, 0xe2, 0xcb, 0x42,
    0xff, 0xf9, 0x7, 0xb8, 0xe0, 0x7, 0x4f, 0x2e,
    0x0, 0x16, 0xfd, 0xb, 0x2c, 0x0, 0x2c, 0x3d,
    0x7e, 0x40, 0x0, 0xbc, 0x2b, 0x40, 0x0, 0xf0,
    0xb8, 0x6f, 0xfe, 0x40, 0xf0, 0xa0, 0x0, 0x1e,
    0xc1, 0xfe, 0x55, 0x6f, 0x82, 0xc3, 0x0, 0x3,
    0x5f, 0x41, 0xbf, 0xfe, 0x1f, 0xb, 0xc, 0x0,
    0xa3, 0x8f, 0x40, 0x1, 0x6e, 0x2d, 0x3c, 0x90,
    0x1c, 0xb2, 0xef, 0x90, 0x0, 0x3c, 0xb0, 0xd3,
    0x2, 0x8c, 0x74, 0xfb, 0xff, 0xd0, 0xb2, 0xcb,
    0x24, 0x32, 0x8e, 0x2c, 0x7d, 0x57, 0xc3, 0x8d,
    0x35, 0xc7, 0x35, 0xc7, 0x1d, 0x0, 0xb, 0xc,
    0xb3, 0x8c, 0xa3, 0x2c, 0xe3, 0x40, 0x0, 0x28,
    0xa3, 0x1c, 0xdd, 0x72, 0x8c, 0xb0, 0x0, 0x0,
    0xc7, 0x35, 0xc9, 0xd7, 0x35, 0xca, 0x0, 0x0,
    0xd, 0x73, 0x8c, 0xad, 0x73, 0x5c, 0xd0, 0x0,
    0x0, 0xa3, 0x28, 0xca, 0xd7, 0x35, 0xcd, 0x0,
    0x0, 0xd, 0x72, 0x8c, 0xad, 0x72, 0x8c, 0xb0,
    0x0, 0x0, 0xd7, 0x35, 0xce, 0xa3, 0x1c, 0xd3,
    0x40, 0x0, 0x2c, 0xa3, 0x1c, 0xdb, 0x34, 0xca,
    0x2c, 0x0, 0x7, 0x4d, 0x72, 0x8d, 0x72, 0xca,
    0x34, 0xb8, 0x6, 0xd2, 0xce, 0x35, 0xc3, 0x5c,
    0x35, 0xc1, 0xff, 0xe0, 0x72, 0xcb, 0x38, 0x2c,
    0xe2, 0xcb, 0x40, 0x0, 0x2d, 0x74, 0xd7, 0x40,
    0xd3, 0x4b, 0x1f, 0x40, 0x2f, 0x1d, 0x2c, 0xf0,
    0xb, 0x1d, 0x2e, 0x2f, 0xff, 0x4b, 0x4b, 0x1c,
    0x0, 0x3c, 0xb4, 0x7e, 0x55, 0x5b, 0xc1, 0xd3,
    0x80, 0x0, 0xe2, 0xd0, 0x6f, 0xff, 0x90, 0xb4,
    0xe0, 0x0, 0x3, 0x87, 0xc0, 0x0, 0x0, 0x7d,
    0x3c, 0x0, 0x0, 0xf, 0xb, 0xe4, 0x1, 0xbe,
    0x1e, 0x0, 0x0, 0x0, 0x2e, 0xb, 0xff, 0xfd,
    0x1f, 0x40, 0x0, 0x0, 0x0, 0x7e, 0x40, 0x0,
    0x1f, 0x80, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5,
    0x55, 0x0, 0x0, 0x0, 0x0,

    /* U+39 "9" */
    0x0, 0x0, 0x0, 0x0, 0x55, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xe4, 0x0,
    0x1, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x7, 0xd0,
    0x6f, 0xff, 0x90, 0xb8, 0x0, 0x0, 0x0, 0x2,
    0xd1, 0xfe, 0x55, 0x5b, 0xe0, 0xf0, 0x0, 0x0,
    0x0, 0xf0, 0xf8, 0x6f, 0xfe, 0x47, 0xd2, 0xd0,
    0x0, 0x0, 0x3c, 0x7c, 0x7e, 0x51, 0x6f, 0x8b,
    0x8b, 0x40, 0x0, 0xb, 0x1e, 0x3d, 0x0, 0x0,
    0xf, 0x4e, 0x2c, 0x0, 0x1, 0xc7, 0x4e, 0x2,
    0xff, 0xe4, 0x1e, 0x38, 0xb0, 0x0, 0x34, 0xe3,
    0x82, 0xf5, 0x56, 0xf4, 0x38, 0xd3, 0x40, 0xb,
    0x3c, 0xe1, 0xf1, 0xbf, 0xe2, 0xe0, 0xd7, 0x1c,
    0x0, 0xd7, 0x2c, 0x78, 0xf9, 0x17, 0xd7, 0x87,
    0x2c, 0xe0, 0x2c, 0xe3, 0x4e, 0x38, 0x0, 0x7,
    0x8d, 0x38, 0xc7, 0x3, 0x4c, 0xa2, 0x8e, 0x0,
    0x0, 0x1d, 0x71, 0xca, 0x34, 0x32, 0xcd, 0x72,
    0xc0, 0x0, 0x0, 0xb3, 0x8d, 0x73, 0x87, 0x38,
    0xca, 0x34, 0x0, 0x0, 0x3, 0x5c, 0xa3, 0x28,
    0x73, 0x5c, 0xd7, 0x0, 0x0, 0x0, 0x2c, 0xc7,
    0x35, 0xca, 0x32, 0xcd, 0x70, 0x0, 0x0, 0x1,
    0xcd, 0x73, 0x5c, 0xa3, 0x28, 0xca, 0x0, 0x0,
    0x0, 0x1c, 0xd7, 0x38, 0xca, 0x32, 0xcd, 0x70,
    0x0, 0x0, 0x1, 0xcd, 0x73, 0x4c, 0xa3, 0x1c,
    0xd7, 0x0, 0x0, 0x0, 0x28, 0xd7, 0x35, 0xc7,
    0x35, 0xca, 0x34, 0x0, 0x0, 0x3, 0x4c, 0xa3,
    0x5c, 0x72, 0x8d, 0x72, 0xc0, 0x0, 0x0, 0x72,
    0xcd, 0x32, 0x83, 0x1c, 0xa3, 0x8e, 0x0, 0x0,
    0xd, 0x35, 0xc7, 0x34, 0x38, 0xc7, 0xd, 0x78,
    0x0, 0x7, 0x8b, 0x38, 0xd3, 0x1, 0xca, 0x28,
    0x75, 0xf4, 0x6, 0xf0, 0xd7, 0x1c, 0xb0, 0xd,
    0x30, 0xe1, 0xe2, 0xff, 0xee, 0x28, 0xe3, 0x8d,
    0x0, 0xb2, 0xc7, 0x47, 0xe4, 0x2, 0xc7, 0x2c,
    0x72, 0xc0, 0x3, 0x8e, 0x1e, 0x6, 0xff, 0xf4,
    0xe3, 0x4d, 0x34, 0x0, 0x1d, 0x38, 0x7d, 0x0,
    0xf, 0x2c, 0xe2, 0xcb, 0x0, 0x0, 0xb0, 0xe0,
    0xbe, 0x40, 0xc3, 0x5c, 0x31, 0xc0, 0x0, 0x2,
    0xd3, 0xd0, 0x7f, 0xf8, 0xa3, 0x8e, 0x38, 0x0,
    0x0, 0xb, 0x47, 0xd0, 0xb, 0x1c, 0xb1, 0xcb,
    0x0, 0x0, 0x0, 0x1e, 0x7, 0xfa, 0xd3, 0x8d,
    0x34, 0xd0, 0x0, 0x0, 0x0, 0x3e, 0x1, 0xbc,
    0xb2, 0x8b, 0x28, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x97, 0xd, 0x70, 0xc7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xe2, 0x8e, 0x38, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1c, 0x72, 0xc7, 0x2c, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0x4e, 0x34, 0xd3,
    0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb2, 0xcb,
    0x2c, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc,
    0x35, 0xc3, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0x8e, 0x38, 0xe3, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x71, 0xc7, 0x1c, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0x38, 0xd3, 0x4d, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xcb, 0x2c, 0xb3,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x34, 0xd7,
    0xc, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0x38, 0xe3, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xc7, 0x1c, 0x72, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x34, 0xe3, 0x4d, 0x34, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0x2c, 0xb2, 0xce, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd3, 0x4d, 0x31,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x28, 0xe3,
    0x8e, 0x38, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x1c, 0x71, 0xcb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xe3, 0x8d, 0x34, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2c, 0xb2, 0xcb, 0x38, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0x4d, 0x34, 0xc7, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+3A ":" */
    0x11, 0x4, 0x41, 0xa3, 0x28, 0xcb, 0xa3, 0x28,
    0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb, 0xa3,
    0x28, 0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb,
    0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28,
    0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x4, 0x41,
    0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28,
    0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb, 0xa3,
    0x28, 0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb,
    0xa3, 0x28, 0xcb, 0xa3, 0x28, 0xcb, 0xa3, 0x28,
    0xcb, 0xa3, 0x28, 0xcb
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 729, .box_w = 42, .box_h = 57, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 599, .adv_w = 729, .box_w = 27, .box_h = 55, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 729, .box_w = 38, .box_h = 56, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 1503, .adv_w = 729, .box_w = 35, .box_h = 57, .ofs_x = 7, .ofs_y = -1},
    {.bitmap_index = 2002, .adv_w = 729, .box_w = 42, .box_h = 55, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2580, .adv_w = 729, .box_w = 35, .box_h = 56, .ofs_x = 7, .ofs_y = -1},
    {.bitmap_index = 3070, .adv_w = 729, .box_w = 38, .box_h = 56, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 3602, .adv_w = 729, .box_w = 36, .box_h = 55, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 4097, .adv_w = 729, .box_w = 34, .box_h = 57, .ofs_x = 8, .ofs_y = -1},
    {.bitmap_index = 4582, .adv_w = 729, .box_w = 38, .box_h = 56, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 5114, .adv_w = 253, .box_w = 12, .box_h = 36, .ofs_x = 4, .ofs_y = 0}
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
lv_font_t prisma_70 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 57,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -7,
    .underline_thickness = 4,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if PRISMA_70*/

