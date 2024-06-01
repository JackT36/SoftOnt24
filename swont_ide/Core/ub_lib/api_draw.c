/******************************************************************************
 *   Includes                                                                  *
 ******************************************************************************/
#include <stddef.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include "api_draw.h"
#include "logic_layer.h"
#include "bitmap.h"
/******************************************************************************
 *   #defines                                                                  *
 ******************************************************************************/
#define SHIFTING_MULTIPLY_FLOATLESS_CALC (8)
#define FIGURE_WEIGHT 2
/******************************************************************************
 *   Typedefs                                                                  *
 ******************************************************************************/

/******************************************************************************
 *   Globals vars                                                              *
 ******************************************************************************/
//extern Bitmap_s bitmaps;
/******************************************************************************
 *   Local vars                                                                *
 ******************************************************************************/

/******************************************************************************
 *   Local function prototypes                                                 *
 ******************************************************************************/
void DrawLine(int x1, int x2, int y1, int y2, int color);
void DrawBitmap(int x, int y, Bitmap_s bitmap);

/******************************************************************************
 *   Global functions                                                          *
 ******************************************************************************/
/**
 * @brief  Sets text on screen in the wanted colour and font
 * @param  x_lup Start location of the text x-axis
 * @param  y_lup Start location of the text y-axis
 * @param  color String to be displayed
 * @param  fontname Font name
 * @param  fontsize Size of characters
 * @param  fontstyle
 * @param  reserved Unused
 * @retval Error code
 */
int API_draw_text(int x_lup, int y_lup, int color, char *text, char *fontname,
		  int fontsize,
		  int fontstyle, int reserved)
{
    if((text == NULL) || (fontname == NULL))
    {
	LOGE("Font name and/or Text ti be displayed are not existing");
	return -1;
    }
    if((x_lup >= VGA_DISPLAY_X) || (y_lup >= VGA_DISPLAY_Y) || (y_lup < 0)
	    || (x_lup < 0))
    {
	LOGE("Out of bounce");
	return -1;
    }
    if(fontsize < 1)
    {
	LOGE("Fontsize to small");
	return -1;
    }
    if((fontstyle != 0) && (fontstyle != 1) && (fontstyle != 3))
    {
	LOGE("Font style not supported");
	return -1;
    }

    LOGW("Not implemented yet");
    return 1;
}

/**
 * @brief  Sets line on screen
 * @param  x1 Start location x
 * @param  y1 Start location y
 * @param  x2 End location x
 * @param  y2 End location y
 * @param  color Line colour
 * @param  weight Width of the line in pixels
 * @param  reserved Unused
 * @retval Error code
 */
int API_draw_line(int x1, int y1, int x2, int y2, int color, int weight,
		  int reserved)
{
    if(weight <= 0)
    {
        LOGE("Can not draw a line of 0 or less pixels");
        return -1;
    }
    if((x1 < 0) || (x2 < 0) || (y1 < 0) || (y2 < 0) ||
            (x1 >= VGA_DISPLAY_X) || (x2 >= VGA_DISPLAY_X) ||
            (y1 >= VGA_DISPLAY_Y) || (y2 >= VGA_DISPLAY_Y))
    {
        LOGE("Line start and end point must be on screen");
        return -1;
    }
//    int stepX = 0;
//    int stepY = 0;
//    int deltaX = x2 - x1;
//    int deltaY = y2 - y1;
//    deltaX = abs(deltaX);
//    deltaY = abs(deltaY);
//    if(deltaX >= deltaY)
//    {
//        stepX++;
//    }
//    else
//    {
//        stepY++;
//    }

//    for(int i = 0; i < weight; i++)
//    {
    DrawLine(x1, x2, y1, y2, color);
//    }
//    LOGI("Line from {%d;%d} to {%d;%d} of %d thick", x1, y1, x2, y2, weight);
    return 0;
}

/**
 * @brief  Sets rectangle on screen
 * @param  x Start location x
 * @param  y Start location y
 * @param  width Width of rectangle
 * @param  height Height of rectangle
 * @param  color Colour of rectangle
 * @param  filled Fill rectangle
 * @param  reserved0 Unused
 * @param  reserved1 Unused
 * @retval Error code
 */
int API_draw_rectangle(int x, int y, int width, int height, int color,
		       int filled,
		       int reserved0,
		       int reserved1)
{
    if((x < 0) || (y < 0) || (width < 0) || (height < 0) || (x >= VGA_DISPLAY_X)
	    || (y >= VGA_DISPLAY_Y) ||
	    (x + width >= VGA_DISPLAY_X) || (y + height >= VGA_DISPLAY_Y))
    {
	LOGE("Out of bounce");
	return -1;
    }

    if(filled)
    {
	for(int i = y; i < (y + height); i++)
	{
	    DrawLine(x, x + width, i, i, color);
	}
    }
    else
    {
	DrawLine(x, x + width, x, y, color);
	DrawLine(x, x, y, y + height, color);
	DrawLine(x + width, x + width, y, y + height, color);
	DrawLine(x, x + width + 1, y + height, y + height, color);
    }
    LOGI("Rectangle draw with width/height: {%d; %d} from {%d; %d} with color: 0x%x",
	 width,
	 height, x, y, color);
    return 0;
}

/**
 * @brief  Sets text on screen in the wanted colour and font
 * @param  x_lup Start location x
 * @param  y_lup Start location y
 * @param  bm_nr Bitmap number
 * @retval Error code
 */
int API_draw_bitmap(int x_lup, int y_lup, int bm_nr)
{
    size_t bitmapCount;
    if(bm_nr < 0 || bm_nr >= (bitmapCount = getBitmapCount()))
    {
	LOGE("Invalid bitmap number");
	return -1;
    }

    Bitmap_s bitmap = bitmaps[bm_nr];

    if(x_lup
	    < 0|| y_lup < 0 || x_lup + bitmap.width >= VGA_DISPLAY_X || y_lup + bitmap.height >= VGA_DISPLAY_Y)
    {
	LOGE("Start position out of bounds");
	return -1;
    }

    DrawBitmap(x_lup, y_lup, bitmap);

    LOGI("Bitmap %d drawn at {%d, %d}", bm_nr, x_lup, y_lup);
    return 0;
}

/**
 * @brief  Fill screen with a the wanted colour
 * @param  color Colour of screen
 * @retval Error code
 */
int API_clearscreen(uint8_t color)
{
    uint16_t xp, yp;
    for(yp = 0; yp < VGA_DISPLAY_Y; yp++)
    {
	for(xp = 0; xp < VGA_DISPLAY_X; xp++)
	{
	    VGA_SetPixel(xp, yp, color);
	}
    }
    LOGI("Screen filled with color: 0x%2x", color);
    return 0;
}

//Bonus Functions
/**
 * @brief  Draw figure by lines from given locations
 * @param  x_1 Start location x
 * @param  y_1 Start location y
 * @param  x_2 Second point for x location
 * @param  y_2 Second point for y location
 * @param  x_3 Third point for x location
 * @param  y_3 Third point for y location
 * @param  x_4 Fourth point for x location
 * @param  y_4 Fourth point for y location
 * @param  x_5 Fifth point for x location
 * @param  y_5 Fifth point for y location
 * @param  color Colour of lines
 * @param  closed. if figure coordinates return to start. (previously reserved)
 * @retval Error code
 */
int API_draw_figure(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3,
		    int x_4,
		    int y_4,
		    int x_5,
		    int y_5, int color, int closed)
{
    //call the draw line function with every x, y coordinates
    API_draw_line(x_1, y_1, x_2, y_2, color, FIGURE_WEIGHT, 0);
    API_draw_line(x_2, y_2, x_3, y_3, color, FIGURE_WEIGHT, 0);
    API_draw_line(x_3, y_3, x_4, y_4, color, FIGURE_WEIGHT, 0);
    API_draw_line(x_4, y_4, x_5, y_5, color, FIGURE_WEIGHT, 0);
    if(closed == 1)
    {
	API_draw_line(x_5, y_5, x_1, y_1, color, FIGURE_WEIGHT, 0);
    }
    return 0;
}

int API_draw_circle(int xCenterCircle, int yCenterCircle, int radius, int color,
		    int reserved)
{
    if(xCenterCircle >= 320 || yCenterCircle >= 240 || radius == 0)
	return -1;

    int16_t x = -radius;
    int16_t y = 0;
    int32_t error = 2 - (radius << 1);
    int32_t workingError;

    // Prototype: void SetPixel(uint8_t x, uint8_t y, bool turnOnPixel);
    VGA_SetPixel(xCenterCircle, yCenterCircle - radius, color);
    VGA_SetPixel(xCenterCircle, yCenterCircle + radius, color);

    if(reserved)
    {
	DrawLine(xCenterCircle, yCenterCircle - radius, xCenterCircle,
		 yCenterCircle + radius, color);
    }
    do
    {
	VGA_SetPixel(xCenterCircle - x, yCenterCircle - y, color);
	VGA_SetPixel(xCenterCircle - x, yCenterCircle + y, color);
	VGA_SetPixel(xCenterCircle + x, yCenterCircle - y, color);
	VGA_SetPixel(xCenterCircle + x, yCenterCircle + y, color);

	if(reserved)
	{
	    int16_t temp = y;
	    do
	    {
		VGA_SetPixel(xCenterCircle + x, yCenterCircle + temp, color);
		VGA_SetPixel(xCenterCircle + x, yCenterCircle - temp, color);
		VGA_SetPixel(xCenterCircle - x, yCenterCircle + temp, color);
		VGA_SetPixel(xCenterCircle - x, yCenterCircle - temp, color);
	    }
	    while(0 <= --temp);
	}
	workingError = error;
	if(workingError <= y)
	{
	    y++;
	    error += (y << 1) + 1;
	    if(-x == y && workingError <= x)
		workingError = 0;
	}
	if(workingError > x)
	{
	    x++;
	    error += (x << 1) + 1;
	}
    }
    while(x != 0);
    return 0;
}

/******************************************************************************
 *   Local functions                                                           *
 ******************************************************************************/
void DrawLine(int x1, int x2, int y1, int y2, int color)
{
    if(x1 > x2) // will be optimised out
    {
        int xHolder = x1;
        x1 = x2;
        x2 = xHolder;
    }
    if(y1 > y2) // will be optimised out
    {
        int yHolder = y1;
        y1 = y2;
        y2 = yHolder;
    }
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    int errorXY = 0;
    if(deltaX == 0)
    {
        errorXY = INT32_MIN;
    }
    else if(deltaY == 0)
    {
        errorXY = INT32_MAX;
    }
    else
    {
        errorXY = (deltaX<<SHIFTING_MULTIPLY_FLOATLESS_CALC) / deltaY;
    }
    int workingError = errorXY;
    while((x1 != x2) || (y1 != y2))
    {
        VGA_SetPixel(x1, y1, color);
        if(workingError == INT32_MAX)
        {
            x1++;
            continue;
        }
        else if(workingError == INT32_MIN)
        {
            y1++;
            continue;
        }
        if(workingError == (1<<SHIFTING_MULTIPLY_FLOATLESS_CALC))
        {
            x1++;
            y1++;
            workingError -= (1<<SHIFTING_MULTIPLY_FLOATLESS_CALC);
        }
        else if(workingError > (1<<SHIFTING_MULTIPLY_FLOATLESS_CALC))
        {
            x1++;
            workingError -= (1<<SHIFTING_MULTIPLY_FLOATLESS_CALC);
            continue;
        }
        else
        {
            y1++;
        }
        workingError += errorXY;
    }
    return;
}

void DrawBitmap(int x, int y, Bitmap_s bitmap)
{
    for(int j = 0; j < bitmap.height; j++)
    {
	for(int i = 0; i < bitmap.width; i++)
	{
	    int color = bitmap.bitmap[j * bitmap.width + i]; // Access the 2D array stored as a 1D array
	    //if (color != 0x00) //option for choosing transparent colour to not draw
	    //{
	    VGA_SetPixel(x + i, y + j, color);
	    //}
	}
    }
}
