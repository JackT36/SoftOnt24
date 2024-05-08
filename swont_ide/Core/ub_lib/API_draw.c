/******************************************************************************
*   Includes                                                                  *
******************************************************************************/
#include "API_draw.h"

/******************************************************************************
*   #defines                                                                  *
******************************************************************************/

/******************************************************************************
*   Typedefs                                                                  *
******************************************************************************/

/******************************************************************************
*   Globals vars                                                              *
******************************************************************************/

/******************************************************************************
*   Local vars                                                                *
******************************************************************************/

/******************************************************************************
*   Local function prototypes                                                 *
******************************************************************************/

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
int API_draw_text(int x_lup, int y_lup, int color, char* text, char* fontname,
                  int fontsize, int fontstyle, int reserved)
{
    return 1;
}
/**
  * @brief  Sets line on screen
  * @param  x_1 Start location x
  * @param  y_1 Start location y
  * @param  x_2 End location x
  * @param  y2 End location y
  * @param  color Line colour
  * @param  weight With of the line in pixels
  * @param  reserved Unused
  * @retval Error code
  */
int API_draw_line(int x_1, int y_1, int x_2, int y2, int color, int weight, int reserved)
{
    if(weight <= 0)
        return -1;
    if((x_1 < 0) || (x_2 < 0) || (y_1 < 0) || (y2 < 0))
        return -1;

    if(x_1 > x_2)
    {
        uint8_t x1Holder = x_1;
        x_1 = x_2;
        x_2 = x1Holder;
    }
    if(y_1 > y2)
    {
        uint8_t y1Holder = y_1;
        y_1 = y2;
        y2 = y1Holder;
    }

    if(x_1 == x_2)
    {
        do
        {
            VGA_SetPixel(x_1, y_1++, color);
        }while(y_1 != y2);
        return 0;
    }
    if(y_1 == y2)
    {
        do
        {
            VGA_SetPixel(x_1++, y_1, color);
        }while(x_1 != x_2);
        return 0;
    }
    int32_t deltaX = (int32_t)x_2 - (int32_t)x_1;
    int32_t deltaY = (int32_t)y2 - (int32_t)y_1;
    int32_t error = 0;
    if(deltaX == deltaY)
    {
        do
        {
            VGA_SetPixel(x_1++, y_1++, color);
        }while(y_1 != y2);
        return 0;
    }
    if(deltaX > deltaY)
    {
        error = (deltaY<<10) / deltaX;
    }
    else if(deltaX < deltaY)
    {
        error = -(deltaX<<10) / deltaY;
    }
    // no fpu so try to keep a way of decimals for the most part
    int32_t errorReset = error;
    do
    {
        VGA_SetPixel(x_1, y_1, color);
        if(error > 0)
        {
            error += errorReset;
            x_1++;
            if(error > 1024)
            {
                y_1++;
                error -= 1024;
            }
            if(x_1 == VGA_DISPLAY_X) return 0;
        }
        else if(error < 0)
        {
            error += errorReset;
            y_1++;
            if(error <= -1024)
            {
                x_1++;
                error += 1024;
            }
            if(y_1 == VGA_DISPLAY_Y) return 0;
        }
        else
        {
            error = errorReset;
            y_1++;
            x_1++;
            if((y_1 == VGA_DISPLAY_X) || (x_1 == VGA_DISPLAY_Y)) return 0;
        }
    }while((x_1 != x_2) || (y_1 != y2));
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
int API_draw_rectangle(int x, int y, int width, int height, int color, int filled,
                       int reserved0, int reserved1)
{
    return 1;
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
    return 1;
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
    return 0;
}

/******************************************************************************
*   Local functions                                                           *
******************************************************************************/
