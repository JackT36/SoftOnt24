#ifndef SWONT_IDE_API_DRAW_H
#define SWONT_IDE_API_DRAW_H
/**
 ******************************************************************************
 * @file    API_draw.c
 * @brief   This file provides code for the drawing of anything more complex
 *          on a vga screen then a single pixel
 ******************************************************************************
 */
/******************************************************************************
 *   Includes                                                                  *
 ******************************************************************************/
#include "stdint.h"
#include "vga_io_driver.h"
#include "font.h"

/******************************************************************************
 *   #defines                                                                  *
 ******************************************************************************/
#define SCREEN_SIZE_HORIZONTAL  (VGA_DISPLAY_X)
#define SCREEN_SIZE_VERTICAL    (VGA_DISPLAY_Y)
/******************************************************************************
 *   Typedefs                                                                  *
 ******************************************************************************/

/******************************************************************************
 *   Globals vars                                                              *
 ******************************************************************************/

/******************************************************************************
 *   Global function prototypes                                                *
 ******************************************************************************/
int API_draw_text(int x_lup, int y_lup, int color, char* text, char* fontname,
		  int fontsize, int fontstyle, int reserved); // fontsize:1 small, 2 big

int API_draw_line(int x1, int y1, int x2, int y2, int color, int weight, int reserved);

int API_draw_rectangle(int x, int y, int width, int height, int color, int filled,
		       int reserved0, int reserved1);

int API_draw_bitmap(int x_lup, int y_lup, int bm_nr);

int API_clearscreen(uint8_t color);

int API_draw_figure(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3, int x_4,
		    int y_4, int x_5, int y_5, int color, int closed);

int API_draw_circle(int x, int y, int radius, int color, int reserved);

#endif //SWONT_IDE_API_DRAW_H
