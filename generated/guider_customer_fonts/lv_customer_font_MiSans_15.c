/*******************************************************************************
 * Size: 15 px
 * Bpp: 4
 * Opts: undefined
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_CUSTOMER_FONT_MISANS_15
#define LV_CUSTOMER_FONT_MISANS_15 1
#endif

#if LV_CUSTOMER_FONT_MISANS_15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+6D4B "测" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9,
    0x20, 0x0, 0x0, 0x0, 0x0, 0xd1, 0xa, 0xe2,
    0xef, 0xff, 0xf0, 0x0, 0xd1, 0x0, 0x97, 0xe2,
    0x21, 0xf0, 0xd1, 0xd1, 0x0, 0x0, 0xe1, 0xf0,
    0xf0, 0xd1, 0xd1, 0x3b, 0x0, 0xe1, 0xf0, 0xf0,
    0xd1, 0xd1, 0xa, 0xd1, 0xe1, 0xf0, 0xf0, 0xd1,
    0xd1, 0x0, 0x81, 0xe1, 0xf0, 0xf0, 0xd1, 0xd1,
    0x0, 0x0, 0xe1, 0xf0, 0xf0, 0xd1, 0xd1, 0x0,
    0xb3, 0xe1, 0xf0, 0xf0, 0xd1, 0xd1, 0x0, 0xf0,
    0xa3, 0xd0, 0xa0, 0xd1, 0xd1, 0x4, 0xc0, 0x7,
    0xf5, 0x0, 0x70, 0xd1, 0x8, 0x80, 0x1e, 0x4e,
    0x40, 0x0, 0xd1, 0xc, 0x31, 0xd8, 0x3, 0xe2,
    0x1, 0xf0, 0xe, 0x9, 0x90, 0x0, 0x40, 0xef,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+8BD5 "试" */
    0x3, 0x30, 0x0, 0x0, 0x6, 0xa5, 0x30, 0x0,
    0x7e, 0x20, 0x0, 0x0, 0x6b, 0x4e, 0x30, 0x0,
    0xad, 0x0, 0x0, 0x5, 0xb0, 0x43, 0x0, 0x0,
    0x83, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x2, 0x22, 0x26, 0xd2, 0x22, 0x4, 0xdd, 0x20,
    0x0, 0x0, 0x3d, 0x0, 0x0, 0x27, 0xe3, 0x4,
    0x44, 0x43, 0xe0, 0x0, 0x0, 0xe, 0x30, 0xcd,
    0xec, 0x4f, 0x0, 0x0, 0x0, 0xe3, 0x0, 0x6b,
    0x0, 0xf0, 0x0, 0x0, 0xe, 0x30, 0x6, 0xb0,
    0xd, 0x30, 0x0, 0x0, 0xe4, 0xc1, 0x6b, 0x0,
    0xa6, 0xb, 0x10, 0xe, 0xe9, 0x6, 0xc7, 0x67,
    0xa0, 0xe0, 0x1, 0xfa, 0x3e, 0xfd, 0xa5, 0x2f,
    0x8b, 0x0, 0x7, 0x1, 0x30, 0x0, 0x0, 0x8f,
    0x50
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 70, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 240, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 112, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x6d2b, 0x8bb5
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 35766, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_customer_font_MiSans_15 = {
#else
lv_font_t lv_customer_font_MiSans_15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_CUSTOMER_FONT_MISANS_15*/

