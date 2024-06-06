/******************************************************************************
 *   Includes                                                                  *
 ******************************************************************************/
#include <font.h>
#include <stddef.h>
#include <stdlib.h>
#include "api_draw.h"
#include "logic_layer.h"
#include "bitmap.h"
#include <string.h>

/******************************************************************************
 *   #defines                                                                  *
 ******************************************************************************/
#define MULTIPLY_FLOATLESS_CALC (256)
#define FIGURE_WEIGHT 2
#define FIRST_PRINTABLE_CHAR 32
#define LAST_PRINTABLE_CHAR 126
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

void DrawText(int xt, int yt, int color, const char *text, const Font_s *glyphs, const uint8_t *fontData, uint8_t char_height);
/******************************************************************************
 *   Global functions                                                          *
 ******************************************************************************/
/**
 * @brief  Sets text on screen in the wanted colour and font
 * @param  x_lup Start location of the text x-axis
 * @param  y_lup Start location of the text y-axis
 * @param  color String to be displayed
 * @param  fontname Font name Arial, Consolas
 * @param  fontsize Size of characters 1,2
 * @param  fontstyle Normal, cursive, bold
 * @param  reserved Unused
 * @retval Error code
 */
int API_draw_text(int x_lup, int y_lup, int color, char* text, char* fontname,
                  int fontsize,
                  int fontstyle, int reserved)
{
    if((text == NULL) || (fontname == NULL))
    {
	LOGE("Font name and/or Text to be displayed are not existing");
	return -1;
    }
    if((x_lup >= VGA_DISPLAY_X) || (y_lup >= VGA_DISPLAY_Y) || (y_lup < 0)
            || (x_lup < 0))
    {
        LOGE("Out of bounce");
        return -1;
    }
    if(fontsize < 1 )
    {
	LOGE("Fontsize too small");
	return -1;
    }
    if(fontsize > 2 )
    {
	LOGE("Fontsize too big");
	return -1;
    }
    if((fontstyle != 0) && (fontstyle != 1) && (fontstyle != 2))
    {
        LOGE("Font style not supported");
        return -1;
    }
    const Font_s *selectedFont = NULL;
    const uint8_t *fontData = NULL;
    if(strncmp(fontname, "arial", strlen ("arial")) == 0)
    {
    	if ((fontsize == 1) && (fontstyle == 2))
    	{
    		selectedFont = Arial_1_Cursive_dsc;
    		fontData = Arial_1_Cursive;
    	}
    	else if ((fontsize == 2) && (fontstyle == 2))
    	{
            selectedFont = Arial_2_Cursive_dsc;
            fontData = Arial_2_Cursive;
    	}
    	else if ((fontsize == 1) && (fontstyle == 0))
    	{
            selectedFont = Arial_1_Normal_dsc;
            fontData = Arial_1_Normal;
    	}
    	else if ((fontsize == 2) && (fontstyle == 0))
    	{
            selectedFont = Arial_2_Normal_dsc;
            fontData = Arial_2_Normal;
    	}
    	else if ((fontsize == 1) && (fontstyle == 1))
    	{
            selectedFont = Arial_1_Bold_dsc;
            fontData = Arial_1_Bold;
    	}
    	else if ((fontsize == 2) && (fontstyle == 1))
    	{
            selectedFont = Arial_2_Bold_dsc;
            fontData = Arial_2_Bold;
    	}
    }
    else if(strncmp(fontname, "consolas", strlen ("consolas")) == 0)
    {
    	if ((fontsize == 1) && (fontstyle == 2))
    	{
    		selectedFont = Consolas_1_Cursive_dsc;
    		fontData = Consolas_1_Cursive;
    	}
    	else if ((fontsize == 2) && (fontstyle == 2))
    	{
            selectedFont = Consolas_2_Cursive_dsc;
            fontData = Consolas_2_Cursive;
    	}
    	else if ((fontsize == 1) && (fontstyle == 0))
    	{
            selectedFont = Consolas_1_Normal_dsc;
            fontData = Consolas_1_Normal;
    	}
    	else if ((fontsize == 2) && (fontstyle == 0))
    	{
            selectedFont = Consolas_2_Normal_dsc;
            fontData = Consolas_2_Normal;
    	}
    	else if ((fontsize == 1) && (fontstyle == 1))
    	{
            selectedFont = Consolas_1_Bold_dsc;
            fontData = Consolas_1_Bold;
    	}
    	else if ((fontsize == 2) && (fontstyle == 1))
    	{
            selectedFont = Consolas_2_Bold_dsc;
            fontData = Consolas_2_Bold;
    	}
    }
    if (!selectedFont || !fontData)
    {
         LOGE("No suitable font found");
         return -1;
     }

    DrawText(x_lup, y_lup, color, text, selectedFont, fontData, selectedFont->h_px);
	LOGI("Text %s drawn at {%d, %d}", text, x_lup, y_lup);
	return 0;
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
    int stepX = 0;
    int stepY = 0;
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    if(deltaX >= deltaY)
    {
        stepX++;
    }
    else
    {
        stepY++;
    }
    for(int i = 0; i < weight; i++)
    {
        DrawLine(x1 + (stepX * i), x2 + (stepX * i), y1 + (stepY * i),
                 y2 + (stepY * i), color);
    }
    LOGI("Line from {%d;%d} to {%d;%d} of %d thick", x1, y1, x2, y2, weight);
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
    if(bm_nr < 0 || bm_nr >= 7)
    {
        LOGE("Invalid bitmap number");
        return -1;
    }

    Bitmap_s bitmap = bitmaps[bm_nr];

    if(x_lup
            < 0 || y_lup < 0 || x_lup + bitmap.width >= VGA_DISPLAY_X || y_lup + bitmap.height >= VGA_DISPLAY_Y)
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

int API_draw_circle(int x, int y, int radius, int color,
                    int reserved)
{
    if(x >= 320 || y >= 240 || radius == 0)
	return -1;

    int16_t xWorking = -radius;
    int16_t yWorking = 0;
    int32_t error = 2 - (radius<<1);
    int32_t workingError;

    // Prototype: void SetPixel(uint8_t x, uint8_t y, bool turnOnPixel);
    VGA_SetPixel(x, y - radius, color);
    VGA_SetPixel(x, y + radius, color);

    if(reserved)
    {
        DrawLine(x, x, y - radius, y + radius, color);
    }
    do
    {
        VGA_SetPixel(x - xWorking, y - yWorking, color);
        VGA_SetPixel(x - xWorking, y + yWorking, color);
        VGA_SetPixel(x + xWorking, y - yWorking, color);
        VGA_SetPixel(x + xWorking, y + yWorking, color);

        if(reserved)
        {
            int16_t temp = yWorking;
            do
            {
                VGA_SetPixel(x + xWorking, y + temp, color);
                VGA_SetPixel(x + xWorking, y - temp, color);
                VGA_SetPixel(x - xWorking, y + temp, color);
                VGA_SetPixel(x - xWorking, y - temp, color);
            }while(0 <= --temp);
        }
        workingError = error;
        if(workingError <= yWorking)
        {
            yWorking++;
            error += (yWorking<<1) + 1;
            if(-xWorking == yWorking && workingError <= xWorking)
                workingError = 0;
        }
        if(workingError > xWorking)
        {
            xWorking++;
            error += (xWorking<<1) + 1;
        }
    }while(xWorking != 0);
    return 0;
}

/******************************************************************************
 *   Local functions                                                           *
 ******************************************************************************/
void DrawLine(int x1, int x2, int y1, int y2, int color)
{
    int32_t deltaX = x2 - x1;
    int32_t deltaY = y2 - y1;
    int32_t xMod = 1;
    int32_t yMod = 1;
    int32_t errorXY;
    if(deltaX < 0)
    {
        xMod = -1;
    }
    if(deltaY < 0)
    {
        yMod = -1;
    }
    if(deltaX == 0)         // Vertical line
    {
        errorXY = INT32_MIN;
    }
    else if(deltaY == 0)    // Horizontal line
    {
        errorXY = INT32_MAX;
    }
    else
    {
        errorXY = abs(deltaX * MULTIPLY_FLOATLESS_CALC / deltaY);
    }
    int workingError = errorXY;
    while((x1 != x2) || (y1 != y2))
    {
        VGA_SetPixel(x1, y1, color);
        if(workingError == INT32_MAX)
        {
            x1 += xMod;
            continue;
        }
        else if(workingError == INT32_MIN)
        {
            y1 += yMod;
            continue;
        }
        else if(workingError == MULTIPLY_FLOATLESS_CALC)
        {
            x1 += xMod;
            y1 += yMod;
            workingError -= MULTIPLY_FLOATLESS_CALC;
        }
        else if(workingError > MULTIPLY_FLOATLESS_CALC)
        {
            x1 += xMod;
            workingError -= MULTIPLY_FLOATLESS_CALC;
            continue;
        }
        else
        {
            y1 += yMod;
        }
        workingError += errorXY;
    }
}

void DrawChar(int x, int y, const uint8_t *bitmap, int width, int height, int color)
{
    int pixelsPerByte = 8 / 2; // 4 pixels per byte for 2bpp
    int bytesPerRow = (width + pixelsPerByte - 1) / pixelsPerByte; // Number of bytes per row, rounded up

    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            int byteIndex = j * bytesPerRow + i / pixelsPerByte; // Find the right byte for this pixel
            int bitIndex = (i % pixelsPerByte) * 2; // bit index within the byte (0 is most significant set of 2 bits)
            uint8_t pixelData = bitmap[byteIndex];
            uint8_t pixel = (pixelData>>(6 - bitIndex)) & 0x3; //Get the specific 2 bits

            int pixelColor;
            if (pixel == 0)
            {
                // Do nothing, skip drawing the pixel for transparency
                continue;
            }
            else
            {
                pixelColor = color;
            }

            VGA_SetPixel(x + i, y + j, pixelColor);
        }
    }
}

void DrawText (int xt, int yt, int color, const char *text, const Font_s *glyphs, const uint8_t *fontData, uint8_t char_height)
{
    int cursor_x = xt;  // Startposition X

    while (*text)
    {
    	unsigned char c = *text++;
    	if (c < FIRST_PRINTABLE_CHAR  || c > LAST_PRINTABLE_CHAR) continue; //Skip unprintable characters
    	const Font_s *glyph = &glyphs[c - FIRST_PRINTABLE_CHAR ];
		const uint8_t *bitmap = fontData + glyph->glyph_index;

		if (cursor_x +glyph->w_px > SCREEN_SIZE_HORIZONTAL)
		{
            cursor_x = xt; // Reset X to startposition
            yt += char_height; // Move Y to the next line
		}
        DrawChar(cursor_x, yt, bitmap, glyph->w_px, char_height, color); // Width per character
    	cursor_x += glyph->w_px; // Move cursor horizontally
    }
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

