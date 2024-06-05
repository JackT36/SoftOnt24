#ifndef FONT_H
#define FONT_H
/******************************************************************************
*   Includes                                                                  *
******************************************************************************/
#include <stdint.h>
#include <stddef.h>
/******************************************************************************
*   #defines                                                                  *
******************************************************************************/
#define Arial_1_Cursive_12px
#define Arial_2_Cursive_18px
#define Arial_1_Normal_12px
#define Arial_2_Normal_18px
#define Arial_1_Bold_12px
#define Arial_2_Bold_18px
/******************************************************************************
*   Typedefs                                                                  *
******************************************************************************/
typedef struct
{
    uint8_t w_px;        // Width of the character in pixel
    uint8_t h_px;		// Height of the character in pixel
    uint16_t glyph_index; // Index of the character in a bitmap array
} Font_s;

/******************************************************************************
*   Globals vars                                                              *
******************************************************************************/
#ifdef Arial_1_Cursive_12px
extern const Font_s Arial_1_Cursive_dsc[];
extern const uint8_t Arial_1_Cursive[];
#endif
#ifdef Arial_2_Cursive_18px
extern const Font_s Arial_2_Cursive_dsc[];
extern const uint8_t Arial_2_Cursive[];
#endif
#ifdef Arial_1_Normal_12px
extern const Font_s Arial_1_Normal_dsc[];
extern const uint8_t Arial_1_Normal[];
#endif
#ifdef Arial_2_Normal_18px
extern const Font_s Arial_2_Normal_dsc[];
extern const uint8_t Arial_2_Normal[];
#endif
#ifdef Arial_1_Bold_12px
extern const Font_s Arial_1_Bold_dsc[];
extern const uint8_t Arial_1_Bold[];
#endif
#ifdef Arial_2_Bold_18px
extern const Font_s Arial_2_Bold_dsc[];
extern const uint8_t Arial_2_Bold[];
#endif
/******************************************************************************
*   Global function prototypes                                                *
******************************************************************************/

#endif //FONT_H
