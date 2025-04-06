/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen(lv_ui *ui)
{
    //Write codes screen
    ui->screen = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_label_3
    ui->screen_label_3 = lv_label_create(ui->screen);
    lv_obj_set_pos(ui->screen_label_3, 10, 83);
    lv_obj_set_size(ui->screen_label_3, 459, 214);
    lv_label_set_text(ui->screen_label_3, "");
    lv_label_set_long_mode(ui->screen_label_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label_3, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_label_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_label_2
    ui->screen_label_2 = lv_label_create(ui->screen);
    lv_obj_set_pos(ui->screen_label_2, 192, 231);
    lv_obj_set_size(ui->screen_label_2, 96, 20);
    lv_label_set_text(ui->screen_label_2, "思考中......");
    lv_label_set_long_mode(ui->screen_label_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label_2, &lv_font_MiSansBold_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_list_1
    ui->screen_list_1 = lv_list_create(ui->screen);
    lv_obj_set_pos(ui->screen_list_1, 10, 10);
    lv_obj_set_size(ui->screen_list_1, 146, 32);
    lv_obj_set_scrollbar_mode(ui->screen_list_1, LV_SCROLLBAR_MODE_OFF);
    ui->screen_list_1_item0 = lv_list_add_button(ui->screen_list_1, LV_SYMBOL_WIFI, "");

    //Write style state: LV_STATE_DEFAULT for &style_screen_list_1_main_main_default
    static lv_style_t style_screen_list_1_main_main_default;
    ui_init_style(&style_screen_list_1_main_main_default);

    lv_style_set_pad_top(&style_screen_list_1_main_main_default, 5);
    lv_style_set_pad_left(&style_screen_list_1_main_main_default, 5);
    lv_style_set_pad_right(&style_screen_list_1_main_main_default, 5);
    lv_style_set_pad_bottom(&style_screen_list_1_main_main_default, 5);
    lv_style_set_bg_opa(&style_screen_list_1_main_main_default, 255);
    lv_style_set_bg_color(&style_screen_list_1_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_list_1_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_list_1_main_main_default, 1);
    lv_style_set_border_opa(&style_screen_list_1_main_main_default, 255);
    lv_style_set_border_color(&style_screen_list_1_main_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_list_1_main_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_list_1_main_main_default, 8);
    lv_style_set_shadow_width(&style_screen_list_1_main_main_default, 0);
    lv_obj_add_style(ui->screen_list_1, &style_screen_list_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_list_1_main_scrollbar_default
    static lv_style_t style_screen_list_1_main_scrollbar_default;
    ui_init_style(&style_screen_list_1_main_scrollbar_default);

    lv_style_set_radius(&style_screen_list_1_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_list_1_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_list_1_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_list_1_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_list_1, &style_screen_list_1_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_list_1_extra_btns_main_default
    static lv_style_t style_screen_list_1_extra_btns_main_default;
    ui_init_style(&style_screen_list_1_extra_btns_main_default);

    lv_style_set_pad_top(&style_screen_list_1_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_screen_list_1_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_screen_list_1_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_screen_list_1_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_screen_list_1_extra_btns_main_default, 0);
    lv_style_set_text_color(&style_screen_list_1_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_list_1_extra_btns_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_list_1_extra_btns_main_default, 255);
    lv_style_set_radius(&style_screen_list_1_extra_btns_main_default, 3);
    lv_style_set_bg_opa(&style_screen_list_1_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_screen_list_1_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_list_1_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_list_1_item0, &style_screen_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_list_1_extra_texts_main_default
    static lv_style_t style_screen_list_1_extra_texts_main_default;
    ui_init_style(&style_screen_list_1_extra_texts_main_default);

    lv_style_set_pad_top(&style_screen_list_1_extra_texts_main_default, 5);
    lv_style_set_pad_left(&style_screen_list_1_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_screen_list_1_extra_texts_main_default, 5);
    lv_style_set_pad_bottom(&style_screen_list_1_extra_texts_main_default, 5);
    lv_style_set_border_width(&style_screen_list_1_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_screen_list_1_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_list_1_extra_texts_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_list_1_extra_texts_main_default, 255);
    lv_style_set_radius(&style_screen_list_1_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_screen_list_1_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_screen_list_1_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_screen_list_1_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_list_1_extra_texts_main_default, LV_GRAD_DIR_NONE);

    //Write codes screen_bar_1
    ui->screen_bar_1 = lv_bar_create(ui->screen);
    lv_obj_set_pos(ui->screen_bar_1, 50, 16);
    lv_obj_set_size(ui->screen_bar_1, 90, 20);
    lv_obj_set_style_anim_duration(ui->screen_bar_1, 1000, 0);
    lv_bar_set_mode(ui->screen_bar_1, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_bar_1, 0, 100);
    lv_bar_set_value(ui->screen_bar_1, 50, LV_ANIM_OFF);

    //Write style for screen_bar_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_bar_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_bar_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_bar_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_bar_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_bar_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_bar_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_bar_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_bar_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_bar_1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_label_1
    ui->screen_label_1 = lv_label_create(ui->screen);
    lv_obj_set_pos(ui->screen_label_1, 338, 10);
    lv_obj_set_size(ui->screen_label_1, 131, 60);
    lv_label_set_text(ui->screen_label_1, "  Github Phone");
    lv_label_set_long_mode(ui->screen_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_qrcode_1
    ui->screen_qrcode_1 = lv_qrcode_create(ui->screen);
    lv_obj_set_pos(ui->screen_qrcode_1, 415, 29);
    lv_obj_set_size(ui->screen_qrcode_1, 37, 37);
    lv_qrcode_set_size(ui->screen_qrcode_1, 37);
    lv_qrcode_set_dark_color(ui->screen_qrcode_1, lv_color_hex(0x2C3224));
    lv_qrcode_set_light_color(ui->screen_qrcode_1, lv_color_hex(0xffffff));
    const char * screen_qrcode_1_data = "https://www.nxp.com/";
    lv_qrcode_update(ui->screen_qrcode_1, screen_qrcode_1_data, 20);

    //Write codes screen_qrcode_2
    ui->screen_qrcode_2 = lv_qrcode_create(ui->screen);
    lv_obj_set_pos(ui->screen_qrcode_2, 358, 29);
    lv_obj_set_size(ui->screen_qrcode_2, 37, 37);
    lv_qrcode_set_size(ui->screen_qrcode_2, 37);
    lv_qrcode_set_dark_color(ui->screen_qrcode_2, lv_color_hex(0x2C3224));
    lv_qrcode_set_light_color(ui->screen_qrcode_2, lv_color_hex(0xffffff));
    const char * screen_qrcode_2_data = "https://www.nxp.com/";
    lv_qrcode_update(ui->screen_qrcode_2, screen_qrcode_2_data, 20);

    //Write codes screen_rlottie_1
    ui->screen_rlottie_1 = lv_rlottie_create_from_raw(ui->screen, 100, 100, (const void *)lottie_waiting);
    lv_obj_set_pos(ui->screen_rlottie_1, 190, 110);
    lv_obj_set_size(ui->screen_rlottie_1, 100, 100);

    //Write style for screen_rlottie_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_rlottie_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen);

}
