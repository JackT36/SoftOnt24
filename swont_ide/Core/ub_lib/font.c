/******************************************************************************
 *   Includes                                                                  *
 ******************************************************************************/
#include "font.h"
#include <stdint.h>
/******************************************************************************
 *   #defines                                                                  *
 ******************************************************************************/
//extern const uint16_t Arial_1_Cursive[];
/******************************************************************************
 *   Typedefs                                                                  *
 ******************************************************************************/

/******************************************************************************
 *   Globals vars                                                              *
 ******************************************************************************/

/***********************************************************************************
 * italic.ttf 12 px Font in U+0020 ( ) .. U+007e (~)  range with 1 bpp
***********************************************************************************/

/*Store the image of the letters */
#ifdef Arial_1_Cursive_12px
const uint16_t Arial_1_Cursive[] =
{
  /*Unicode: U+0020 ( ) , Width: 4 */
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....


  /*Unicode: U+0021 (!) , Width: 4 */
  0x30,  //..%%
  0x30,  //..%%
  0x20,  //..%.
  0x20,  //..%.
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x40,  //.%..
  0x00,  //....
  0x00,  //....
  0x00,  //....


  /*Unicode: U+0022 (") , Width: 5 */
  0x50,  //.%.%.
  0x50,  //.%.%.
  0x10,  //...%.
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+0023 (#) , Width: 6 */
  0x10,  //...%..
  0x14,  //...%.%
  0x34,  //..%%.%
  0x34,  //..%%.%
  0x20,  //..%...
  0x28,  //..%.%.
  0x7c,  //.%%%%%
  0x00,  //......
  0x10,  //...%..
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0024 ($) , Width: 7 */
  0x08,  //....%..
  0x3c,  //..%%%%.
  0x20,  //..%....
  0x20,  //..%....
  0x18,  //...%%..
  0x1c,  //...%%%.
  0x14,  //...%.%.
  0xdc,  //%%.%%%.
  0x20,  //..%....
  0x20,  //..%....
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0025 (%) , Width: 11 */
  0x38, 0x80,  //..%%%...%..
  0x09, 0x00,  //....%..%...
  0x49, 0x00,  //.%..%..%...
  0x02, 0x00,  //......%....
  0x04, 0x00,  //.....%.....
  0x00, 0x00,  //...........
  0x02, 0x40,  //......%..%.
  0x12, 0x40,  //...%..%..%.
  0x21, 0x80,  //..%....%%..
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........


  /*Unicode: U+0026 (&) , Width: 9 */
  0x0c, 0x00,  //....%%...
  0x12, 0x00,  //...%..%..
  0x32, 0x00,  //..%%..%..
  0x14, 0x00,  //...%.%...
  0x19, 0x00,  //...%%..%.
  0x48, 0x00,  //.%..%....
  0x06, 0x00,  //.....%%..
  0x46, 0x00,  //.%...%%..
  0x7b, 0x00,  //.%%%%.%%.
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0027 (') , Width: 2 */
  0x40,  //.%
  0x40,  //.%
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..


  /*Unicode: U+0028 (() , Width: 5 */
  0x00,  //.....
  0x20,  //..%..
  0x20,  //..%..
  0x40,  //.%...
  0x40,  //.%...
  0x40,  //.%...
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+0029 ()) , Width: 4 */
  0x20,  //..%.
  0x20,  //..%.
  0x10,  //...%
  0x10,  //...%
  0x10,  //...%
  0x30,  //..%%
  0x30,  //..%%
  0x20,  //..%.
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....


  /*Unicode: U+002a (*) , Width: 5 */
  0x40,  //.%...
  0x30,  //..%%.
  0x50,  //.%.%.
  0x28,  //..%.%
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+002b (+) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x10,  //...%..
  0x10,  //...%..
  0x18,  //...%%.
  0x10,  //...%..
  0x10,  //...%..
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+002c (,) , Width: 2 */
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..


  /*Unicode: U+002d (-) , Width: 4 */
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0xf0,  //%%%%
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....
  0x00,  //....


  /*Unicode: U+002e (.) , Width: 3 */
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x40,  //.%.
  0x00,  //...
  0x00,  //...
  0x00,  //...


  /*Unicode: U+002f (/) , Width: 5 */
  0x00,  //.....
  0x10,  //...%.
  0x20,  //..%..
  0x20,  //..%..
  0x00,  //.....
  0x40,  //.%...
  0x00,  //.....
  0x00,  //.....
  0x80,  //%....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+0030 (0) , Width: 7 */
  0x18,  //...%%..
  0x04,  //.....%.
  0x06,  //.....%%
  0x46,  //.%...%%
  0x44,  //.%...%.
  0x04,  //.....%.
  0x04,  //.....%.
  0x48,  //.%..%..
  0x78,  //.%%%%..
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0031 (1) , Width: 6 */
  0x08,  //....%.
  0x18,  //...%%.
  0x00,  //......
  0x10,  //...%..
  0x10,  //...%..
  0x10,  //...%..
  0x10,  //...%..
  0x30,  //..%%..
  0x78,  //.%%%%.
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0032 (2) , Width: 6 */
  0x38,  //..%%%.
  0x24,  //..%..%
  0x04,  //.....%
  0x04,  //.....%
  0x00,  //......
  0x10,  //...%..
  0x60,  //.%%...
  0xc0,  //%%....
  0xf8,  //%%%%%.
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0033 (3) , Width: 6 */
  0x38,  //..%%%.
  0x24,  //..%..%
  0x04,  //.....%
  0x04,  //.....%
  0x18,  //...%%.
  0x0c,  //....%%
  0x04,  //.....%
  0x88,  //%...%.
  0x78,  //.%%%%.
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0034 (4) , Width: 6 */
  0x04,  //.....%
  0x0c,  //....%%
  0x1c,  //...%%%
  0x20,  //..%...
  0x08,  //....%.
  0x88,  //%...%.
  0xfc,  //%%%%%%
  0x10,  //...%..
  0x38,  //..%%%.
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0035 (5) , Width: 7 */
  0x3e,  //..%%%%%
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......
  0x18,  //...%%..
  0x0c,  //....%%.
  0x04,  //.....%.
  0x08,  //....%..
  0x78,  //.%%%%..
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0036 (6) , Width: 7 */
  0x0c,  //....%%.
  0x22,  //..%...%
  0x20,  //..%....
  0x40,  //.%.....
  0x6c,  //.%%.%%.
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x70,  //.%%%...
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0037 (7) , Width: 6 */
  0x7c,  //.%%%%%
  0x08,  //....%.
  0x08,  //....%.
  0x00,  //......
  0x00,  //......
  0x20,  //..%...
  0x20,  //..%...
  0x40,  //.%....
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0038 (8) , Width: 7 */
  0x1c,  //...%%%.
  0x26,  //..%..%%
  0x06,  //.....%%
  0x24,  //..%..%.
  0x38,  //..%%%..
  0x0c,  //....%%.
  0x84,  //%....%.
  0x84,  //%....%.
  0x70,  //.%%%...
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0039 (9) , Width: 6 */
  0x18,  //...%%.
  0x24,  //..%..%
  0x44,  //.%...%
  0x44,  //.%...%
  0x6c,  //.%%.%%
  0x0c,  //....%%
  0x08,  //....%.
  0x08,  //....%.
  0x70,  //.%%%..
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+003a (:) , Width: 3 */
  0x00,  //...
  0x00,  //...
  0x20,  //..%
  0x20,  //..%
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x40,  //.%.
  0x00,  //...
  0x00,  //...
  0x00,  //...


  /*Unicode: U+003b (;) , Width: 3 */
  0x00,  //...
  0x00,  //...
  0x20,  //..%
  0x20,  //..%
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x40,  //.%.
  0x00,  //...
  0x00,  //...
  0x00,  //...


  /*Unicode: U+003c (<) , Width: 5 */
  0x00,  //.....
  0x00,  //.....
  0x08,  //....%
  0x20,  //..%..
  0x40,  //.%...
  0x60,  //.%%..
  0x10,  //...%.
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+003d (=) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x7c,  //.%%%%%
  0x00,  //......
  0x7c,  //.%%%%%
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+003e (>) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x20,  //..%...
  0x10,  //...%..
  0x04,  //.....%
  0x10,  //...%..
  0x20,  //..%...
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+003f (?) , Width: 6 */
  0x70,  //.%%%..
  0x48,  //.%..%.
  0x08,  //....%.
  0x18,  //...%%.
  0x00,  //......
  0x40,  //.%....
  0x40,  //.%....
  0x00,  //......
  0x40,  //.%....
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0040 (@) , Width: 11 */
  0x07, 0x00,  //.....%%%...
  0x10, 0x40,  //...%.....%.
  0x26, 0x00,  //..%..%%....
  0x41, 0x00,  //.%.....%...
  0x41, 0x00,  //.%.....%...
  0x50, 0x00,  //.%.%.......
  0x10, 0x00,  //...%.......
  0x40, 0x00,  //.%.........
  0x40, 0x00,  //.%.........
  0x20, 0x00,  //..%........
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........


  /*Unicode: U+0041 (A) , Width: 9 */
  0x04, 0x00,  //.....%...
  0x0c, 0x00,  //....%%...
  0x0e, 0x00,  //....%%%..
  0x16, 0x00,  //...%.%%..
  0x06, 0x00,  //.....%%..
  0x3e, 0x00,  //..%%%%%..
  0x02, 0x00,  //......%..
  0x02, 0x00,  //......%..
  0xc7, 0x00,  //%%...%%%.
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0042 (B) , Width: 8 */
  0x3c,  //..%%%%..
  0x32,  //..%%..%.
  0x32,  //..%%..%.
  0x22,  //..%...%.
  0x24,  //..%..%..
  0x22,  //..%...%.
  0x22,  //..%...%.
  0x42,  //.%....%.
  0xf8,  //%%%%%...
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+0043 (C) , Width: 9 */
  0x0f, 0x00,  //....%%%%.
  0x01, 0x00,  //.......%.
  0x20, 0x00,  //..%......
  0x40, 0x00,  //.%.......
  0x40, 0x00,  //.%.......
  0x40, 0x00,  //.%.......
  0x40, 0x00,  //.%.......
  0x60, 0x00,  //.%%......
  0x3c, 0x00,  //..%%%%...
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0044 (D) , Width: 9 */
  0x3e, 0x00,  //..%%%%%..
  0x33, 0x00,  //..%%..%%.
  0x31, 0x00,  //..%%...%.
  0x20, 0x00,  //..%......
  0x21, 0x00,  //..%....%.
  0x21, 0x00,  //..%....%.
  0x21, 0x00,  //..%....%.
  0x42, 0x00,  //.%....%..
  0xf8, 0x00,  //%%%%%....
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0045 (E) , Width: 8 */
  0x3e,  //..%%%%%.
  0x30,  //..%%....
  0x30,  //..%%....
  0x20,  //..%.....
  0x20,  //..%.....
  0x20,  //..%.....
  0x20,  //..%.....
  0x42,  //.%....%.
  0xfe,  //%%%%%%%.
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+0046 (F) , Width: 8 */
  0x3e,  //..%%%%%.
  0x30,  //..%%....
  0x30,  //..%%....
  0x20,  //..%.....
  0x20,  //..%.....
  0x20,  //..%.....
  0x20,  //..%.....
  0x40,  //.%......
  0xf0,  //%%%%....
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+0047 (G) , Width: 9 */
  0x0f, 0x00,  //....%%%%.
  0x11, 0x00,  //...%...%.
  0x20, 0x00,  //..%......
  0x40, 0x00,  //.%.......
  0x40, 0x00,  //.%.......
  0x42, 0x00,  //.%....%..
  0x42, 0x00,  //.%....%..
  0x62, 0x00,  //.%%...%..
  0x3e, 0x00,  //..%%%%%..
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0048 (H) , Width: 11 */
  0x39, 0xc0,  //..%%%..%%%.
  0x30, 0x80,  //..%%....%..
  0x30, 0x80,  //..%%....%..
  0x21, 0x00,  //..%....%...
  0x23, 0x00,  //..%...%%...
  0x21, 0x00,  //..%....%...
  0x21, 0x00,  //..%....%...
  0x42, 0x00,  //.%....%....
  0xe7, 0x00,  //%%%..%%%...
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........


  /*Unicode: U+0049 (I) , Width: 6 */
  0x38,  //..%%%.
  0x30,  //..%%..
  0x30,  //..%%..
  0x20,  //..%...
  0x20,  //..%...
  0x20,  //..%...
  0x20,  //..%...
  0x40,  //.%....
  0xe0,  //%%%...
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+004a (J) , Width: 6 */
  0x38,  //..%%%.
  0x30,  //..%%..
  0x30,  //..%%..
  0x20,  //..%...
  0x20,  //..%...
  0x20,  //..%...
  0x00,  //......
  0x40,  //.%....
  0x40,  //.%....
  0x40,  //.%....
  0x80,  //%.....
  0x80,  //%.....


  /*Unicode: U+004b (K) , Width: 9 */
  0x39, 0x80,  //..%%%..%%
  0x33, 0x00,  //..%%..%%.
  0x36, 0x00,  //..%%.%%..
  0x2c, 0x00,  //..%.%%...
  0x38, 0x00,  //..%%%....
  0x2c, 0x00,  //..%.%%...
  0x24, 0x00,  //..%..%...
  0x46, 0x00,  //.%...%%..
  0xe2, 0x00,  //%%%...%..
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+004c (L) , Width: 7 */
  0x38,  //..%%%..
  0x30,  //..%%...
  0x30,  //..%%...
  0x20,  //..%....
  0x20,  //..%....
  0x20,  //..%....
  0x20,  //..%....
  0x42,  //.%....%
  0xfe,  //%%%%%%%
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+004d (M) , Width: 11 */
  0x30, 0x00,  //..%%.......
  0x30, 0x40,  //..%%.....%.
  0x20, 0xc0,  //..%.....%%.
  0x28, 0x40,  //..%.%....%.
  0x08, 0x40,  //....%....%.
  0x0a, 0x40,  //....%.%..%.
  0x0a, 0xc0,  //....%.%.%%.
  0x44, 0xc0,  //.%...%..%%.
  0xe0, 0xc0,  //%%%.....%%.
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........


  /*Unicode: U+004e (N) , Width: 10 */
  0x30, 0xc0,  //..%%....%%
  0x30, 0x80,  //..%%....%.
  0x28, 0x00,  //..%.%.....
  0x28, 0x00,  //..%.%.....
  0x04, 0x00,  //.....%....
  0x04, 0x00,  //.....%....
  0x06, 0x00,  //.....%%...
  0x42, 0x00,  //.%....%...
  0xe2, 0x00,  //%%%...%...
  0x00, 0x00,  //..........
  0x00, 0x00,  //..........
  0x00, 0x00,  //..........


  /*Unicode: U+004f (O) , Width: 9 */
  0x0e, 0x00,  //....%%%..
  0x01, 0x00,  //.......%.
  0x20, 0x80,  //..%.....%
  0x40, 0x80,  //.%......%
  0x40, 0x80,  //.%......%
  0x41, 0x00,  //.%.....%.
  0x41, 0x00,  //.%.....%.
  0x42, 0x00,  //.%....%..
  0x3c, 0x00,  //..%%%%...
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0050 (P) , Width: 8 */
  0x3c,  //..%%%%..
  0x32,  //..%%..%.
  0x32,  //..%%..%.
  0x22,  //..%...%.
  0x22,  //..%...%.
  0x30,  //..%%....
  0x20,  //..%.....
  0x40,  //.%......
  0xf0,  //%%%%....
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+0051 (Q) , Width: 9 */
  0x0e, 0x00,  //....%%%..
  0x01, 0x00,  //.......%.
  0x20, 0x80,  //..%.....%
  0x40, 0x80,  //.%......%
  0x40, 0x80,  //.%......%
  0x41, 0x00,  //.%.....%.
  0x41, 0x00,  //.%.....%.
  0x42, 0x00,  //.%....%..
  0x3c, 0x00,  //..%%%%...
  0x10, 0x00,  //...%.....
  0x18, 0x00,  //...%%....
  0x0e, 0x00,  //....%%%..


  /*Unicode: U+0052 (R) , Width: 8 */
  0x3c,  //..%%%%..
  0x32,  //..%%..%.
  0x22,  //..%...%.
  0x22,  //..%...%.
  0x20,  //..%.....
  0x28,  //..%.%...
  0x44,  //.%...%..
  0x44,  //.%...%..
  0xe6,  //%%%..%%.
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+0053 (S) , Width: 7 */
  0x1c,  //...%%%.
  0x22,  //..%...%
  0x20,  //..%....
  0x20,  //..%....
  0x18,  //...%%..
  0x0c,  //....%%.
  0x04,  //.....%.
  0x84,  //%....%.
  0x70,  //.%%%...
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0054 (T) , Width: 9 */
  0x3f, 0x00,  //..%%%%%%.
  0x08, 0x00,  //....%....
  0x08, 0x00,  //....%....
  0x00, 0x00,  //.........
  0x10, 0x00,  //...%.....
  0x10, 0x00,  //...%.....
  0x10, 0x00,  //...%.....
  0x10, 0x00,  //...%.....
  0x38, 0x00,  //..%%%....
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0055 (U) , Width: 9 */
  0x63, 0x80,  //.%%...%%%
  0x60, 0x00,  //.%%......
  0x40, 0x00,  //.%.......
  0x40, 0x00,  //.%.......
  0x40, 0x00,  //.%.......
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x44, 0x00,  //.%...%...
  0x78, 0x00,  //.%%%%....
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0056 (V) , Width: 8 */
  0x63,  //.%%...%%
  0x40,  //.%......
  0x40,  //.%......
  0x64,  //.%%..%..
  0x60,  //.%%.....
  0x68,  //.%%.%...
  0x70,  //.%%%....
  0x30,  //..%%....
  0x20,  //..%.....
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+0057 (W) , Width: 10 */
  0x62, 0x00,  //.%%...%...
  0x42, 0x00,  //.%....%...
  0x46, 0x00,  //.%...%%...
  0x64, 0x00,  //.%%..%....
  0x68, 0x00,  //.%%.%.....
  0x60, 0x00,  //.%%.......
  0x60, 0x80,  //.%%.....%.
  0x61, 0x00,  //.%%....%..
  0x61, 0x00,  //.%%....%..
  0x00, 0x00,  //..........
  0x00, 0x00,  //..........
  0x00, 0x00,  //..........


  /*Unicode: U+0058 (X) , Width: 9 */
  0x33, 0x80,  //..%%..%%%
  0x30, 0x00,  //..%%.....
  0x14, 0x00,  //...%.%...
  0x1c, 0x00,  //...%%%...
  0x08, 0x00,  //....%....
  0x18, 0x00,  //...%%....
  0x24, 0x00,  //..%..%...
  0x04, 0x00,  //.....%...
  0xc6, 0x00,  //%%...%%..
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0059 (Y) , Width: 8 */
  0x67,  //.%%..%%%
  0x40,  //.%......
  0x64,  //.%%..%..
  0x68,  //.%%.%...
  0x30,  //..%%....
  0x30,  //..%%....
  0x20,  //..%.....
  0x20,  //..%.....
  0x70,  //.%%%....
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+005a (Z) , Width: 8 */
  0x3e,  //..%%%%%.
  0x02,  //......%.
  0x04,  //.....%..
  0x08,  //....%...
  0x18,  //...%%...
  0x30,  //..%%....
  0x60,  //.%%.....
  0x42,  //.%....%.
  0xfc,  //%%%%%%..
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+005b ([) , Width: 4 */
  0x30,  //..%%
  0x20,  //..%.
  0x20,  //..%.
  0x20,  //..%.
  0x20,  //..%.
  0x40,  //.%..
  0x40,  //.%..
  0x40,  //.%..
  0x00,  //....
  0xc0,  //%%..
  0x00,  //....
  0x00,  //....


  /*Unicode: U+005c (\) , Width: 2 */
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..


  /*Unicode: U+005d (]) , Width: 5 */
  0x10,  //...%.
  0x10,  //...%.
  0x10,  //...%.
  0x30,  //..%%.
  0x20,  //..%..
  0x20,  //..%..
  0x20,  //..%..
  0x20,  //..%..
  0x00,  //.....
  0x40,  //.%...
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+005e (^) , Width: 6 */
  0x10,  //...%..
  0x10,  //...%..
  0x28,  //..%.%.
  0x00,  //......
  0x40,  //.%....
  0x40,  //.%....
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+005f (_) , Width: 5 */
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+0060 (`) , Width: 3 */
  0x40,  //.%.
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...
  0x00,  //...


  /*Unicode: U+0061 (a) , Width: 7 */
  0x00,  //.......
  0x00,  //.......
  0x1e,  //...%%%%
  0x24,  //..%..%.
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x0c,  //....%%.
  0x88,  //%...%..
  0x7e,  //.%%%%%%
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0062 (b) , Width: 6 */
  0x30,  //..%%..
  0x20,  //..%...
  0x2c,  //..%.%%
  0x34,  //..%%.%
  0x24,  //..%..%
  0x44,  //.%...%
  0x44,  //.%...%
  0x4c,  //.%..%%
  0x78,  //.%%%%.
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0063 (c) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x18,  //...%%.
  0x24,  //..%..%
  0x40,  //.%....
  0x40,  //.%....
  0x00,  //......
  0x40,  //.%....
  0x70,  //.%%%..
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0064 (d) , Width: 7 */
  0x06,  //.....%%
  0x02,  //......%
  0x1e,  //...%%%%
  0x24,  //..%..%.
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x0c,  //....%%.
  0x48,  //.%..%..
  0x66,  //.%%..%%
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0065 (e) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x30,  //..%%..
  0x48,  //.%..%.
  0x98,  //%..%%.
  0xf0,  //%%%%..
  0x80,  //%.....
  0x80,  //%.....
  0x70,  //.%%%..
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0066 (f) , Width: 6 */
  0x3c,  //..%%%%
  0x20,  //..%...
  0x70,  //.%%%..
  0x20,  //..%...
  0x20,  //..%...
  0x00,  //......
  0x40,  //.%....
  0x40,  //.%....
  0x40,  //.%....
  0x00,  //......
  0x80,  //%.....
  0x00,  //......


  /*Unicode: U+0067 (g) , Width: 8 */
  0x00,  //........
  0x00,  //........
  0x1e,  //...%%%%.
  0x24,  //..%..%..
  0x04,  //.....%..
  0x00,  //........
  0x30,  //..%%....
  0x60,  //.%%.....
  0x78,  //.%%%%...
  0x80,  //%.......
  0x88,  //%...%...
  0x70,  //.%%%....


  /*Unicode: U+0068 (h) , Width: 7 */
  0x30,  //..%%...
  0x20,  //..%....
  0x2c,  //..%.%%.
  0x36,  //..%%.%%
  0x24,  //..%..%.
  0x04,  //.....%.
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x46,  //.%...%%
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0069 (i) , Width: 4 */
  0x30,  //..%%
  0x00,  //....
  0x60,  //.%%.
  0x20,  //..%.
  0x20,  //..%.
  0x00,  //....
  0x40,  //.%..
  0x40,  //.%..
  0x60,  //.%%.
  0x00,  //....
  0x00,  //....
  0x00,  //....


  /*Unicode: U+006a (j) , Width: 4 */
  0x30,  //..%%
  0x00,  //....
  0x60,  //.%%.
  0x20,  //..%.
  0x20,  //..%.
  0x00,  //....
  0x40,  //.%..
  0x40,  //.%..
  0x40,  //.%..
  0x00,  //....
  0x80,  //%...
  0x00,  //....


  /*Unicode: U+006b (k) , Width: 8 */
  0x30,  //..%%....
  0x20,  //..%.....
  0x26,  //..%..%%.
  0x24,  //..%..%..
  0x20,  //..%.....
  0x30,  //..%%....
  0x48,  //.%..%...
  0x48,  //.%..%...
  0x44,  //.%...%..
  0x00,  //........
  0x00,  //........
  0x00,  //........


  /*Unicode: U+006c (l) , Width: 4 */
  0x30,  //..%%
  0x20,  //..%.
  0x20,  //..%.
  0x20,  //..%.
  0x20,  //..%.
  0x00,  //....
  0x40,  //.%..
  0x40,  //.%..
  0x60,  //.%%.
  0x00,  //....
  0x00,  //....
  0x00,  //....


  /*Unicode: U+006d (m) , Width: 11 */
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........
  0x6c, 0xc0,  //.%%.%%..%%.
  0x36, 0x40,  //..%%.%%..%.
  0x24, 0x40,  //..%..%...%.
  0x04, 0xc0,  //.....%..%%.
  0x44, 0xc0,  //.%...%..%%.
  0x44, 0xc0,  //.%...%..%%.
  0x40, 0xc0,  //.%......%%.
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........
  0x00, 0x00,  //...........


  /*Unicode: U+006e (n) , Width: 7 */
  0x00,  //.......
  0x00,  //.......
  0x6c,  //.%%.%%.
  0x36,  //..%%.%%
  0x24,  //..%..%.
  0x04,  //.....%.
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x46,  //.%...%%
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+006f (o) , Width: 7 */
  0x00,  //.......
  0x00,  //.......
  0x18,  //...%%..
  0x24,  //..%..%.
  0x46,  //.%...%%
  0x46,  //.%...%%
  0x04,  //.....%.
  0x44,  //.%...%.
  0x70,  //.%%%...
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0070 (p) , Width: 7 */
  0x00,  //.......
  0x00,  //.......
  0x6c,  //.%%.%%.
  0x36,  //..%%.%%
  0x26,  //..%..%%
  0x06,  //.....%%
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x70,  //.%%%...
  0x00,  //.......
  0x80,  //%......
  0xc0,  //%%.....


  /*Unicode: U+0071 (q) , Width: 7 */
  0x00,  //.......
  0x00,  //.......
  0x1e,  //...%%%%
  0x24,  //..%..%.
  0x44,  //.%...%.
  0x44,  //.%...%.
  0x0c,  //....%%.
  0x48,  //.%..%..
  0x64,  //.%%..%.
  0x04,  //.....%.
  0x04,  //.....%.
  0x00,  //.......


  /*Unicode: U+0072 (r) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x6c,  //.%%.%%
  0x34,  //..%%.%
  0x20,  //..%...
  0x00,  //......
  0x40,  //.%....
  0x40,  //.%....
  0x40,  //.%....
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0073 (s) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x30,  //..%%..
  0x40,  //.%....
  0x60,  //.%%...
  0x30,  //..%%..
  0x18,  //...%%.
  0x08,  //....%.
  0x70,  //.%%%..
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0074 (t) , Width: 4 */
  0x00,  //....
  0x00,  //....
  0xf0,  //%%%%
  0x40,  //.%..
  0x40,  //.%..
  0x80,  //%...
  0x80,  //%...
  0x80,  //%...
  0x60,  //.%%.
  0x00,  //....
  0x00,  //....
  0x00,  //....


  /*Unicode: U+0075 (u) , Width: 7 */
  0x00,  //.......
  0x00,  //.......
  0x66,  //.%%..%%
  0x26,  //..%..%%
  0x24,  //..%..%.
  0x04,  //.....%.
  0x44,  //.%...%.
  0x4c,  //.%..%%.
  0x7e,  //.%%%%%%
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0076 (v) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0xc4,  //%%...%
  0x44,  //.%...%
  0x04,  //.....%
  0x20,  //..%...
  0x20,  //..%...
  0x20,  //..%...
  0x30,  //..%%..
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+0077 (w) , Width: 9 */
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x80, 0x80,  //%.......%
  0x0c, 0x80,  //....%%..%
  0x0c, 0x80,  //....%%..%
  0x14, 0x00,  //...%.%...
  0x14, 0x00,  //...%.%...
  0x44, 0x00,  //.%...%...
  0x44, 0x00,  //.%...%...
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........
  0x00, 0x00,  //.........


  /*Unicode: U+0078 (x) , Width: 7 */
  0x00,  //.......
  0x00,  //.......
  0x26,  //..%..%%
  0x24,  //..%..%.
  0x30,  //..%%...
  0x10,  //...%...
  0x30,  //..%%...
  0x48,  //.%..%..
  0xcc,  //%%..%%.
  0x00,  //.......
  0x00,  //.......
  0x00,  //.......


  /*Unicode: U+0079 (y) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0xc4,  //%%...%
  0x44,  //.%...%
  0x04,  //.....%
  0x20,  //..%...
  0x20,  //..%...
  0x30,  //..%%..
  0x30,  //..%%..
  0x20,  //..%...
  0x60,  //.%%...
  0x80,  //%.....


  /*Unicode: U+007a (z) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x3c,  //..%%%%
  0x08,  //....%.
  0x10,  //...%..
  0x30,  //..%%..
  0x20,  //..%...
  0x00,  //......
  0xf8,  //%%%%%.
  0x00,  //......
  0x00,  //......
  0x00,  //......


  /*Unicode: U+007b ({) , Width: 5 */
  0x30,  //..%%.
  0x30,  //..%%.
  0x30,  //..%%.
  0x30,  //..%%.
  0x20,  //..%..
  0x60,  //.%%..
  0x30,  //..%%.
  0x30,  //..%%.
  0x30,  //..%%.
  0x30,  //..%%.
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+007c (|) , Width: 1 */
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%
  0x80,  //%


  /*Unicode: U+007d (}) , Width: 5 */
  0x20,  //..%..
  0x20,  //..%..
  0x20,  //..%..
  0x20,  //..%..
  0x10,  //...%.
  0x30,  //..%%.
  0x30,  //..%%.
  0x20,  //..%..
  0x20,  //..%..
  0x20,  //..%..
  0x00,  //.....
  0x00,  //.....


  /*Unicode: U+007e (~) , Width: 6 */
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x14,  //...%.%
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......
  0x00,  //......


};

//Font_s font [] =
//{
//	{12,12, Arial_1_Cursive}
//};

const Font_s Arial_1_Cursive_dsc[] =
{
  {.w_px = 4,	.glyph_index = 0},	/*Unicode: U+0020 ( )*/
  {.w_px = 4,	.glyph_index = 12},	/*Unicode: U+0021 (!)*/
  {.w_px = 5,	.glyph_index = 24},	/*Unicode: U+0022 (")*/
  {.w_px = 6,	.glyph_index = 36},	/*Unicode: U+0023 (#)*/
  {.w_px = 7,	.glyph_index = 48},	/*Unicode: U+0024 ($)*/
  {.w_px = 11,	.glyph_index = 60},	/*Unicode: U+0025 (%)*/
  {.w_px = 9,	.glyph_index = 84},	/*Unicode: U+0026 (&)*/
  {.w_px = 2,	.glyph_index = 108},	/*Unicode: U+0027 (')*/
  {.w_px = 5,	.glyph_index = 120},	/*Unicode: U+0028 (()*/
  {.w_px = 4,	.glyph_index = 132},	/*Unicode: U+0029 ())*/
  {.w_px = 5,	.glyph_index = 144},	/*Unicode: U+002a (*)*/
  {.w_px = 6,	.glyph_index = 156},	/*Unicode: U+002b (+)*/
  {.w_px = 2,	.glyph_index = 168},	/*Unicode: U+002c (,)*/
  {.w_px = 4,	.glyph_index = 180},	/*Unicode: U+002d (-)*/
  {.w_px = 3,	.glyph_index = 192},	/*Unicode: U+002e (.)*/
  {.w_px = 5,	.glyph_index = 204},	/*Unicode: U+002f (/)*/
  {.w_px = 7,	.glyph_index = 216},	/*Unicode: U+0030 (0)*/
  {.w_px = 6,	.glyph_index = 228},	/*Unicode: U+0031 (1)*/
  {.w_px = 6,	.glyph_index = 240},	/*Unicode: U+0032 (2)*/
  {.w_px = 6,	.glyph_index = 252},	/*Unicode: U+0033 (3)*/
  {.w_px = 6,	.glyph_index = 264},	/*Unicode: U+0034 (4)*/
  {.w_px = 7,	.glyph_index = 276},	/*Unicode: U+0035 (5)*/
  {.w_px = 7,	.glyph_index = 288},	/*Unicode: U+0036 (6)*/
  {.w_px = 6,	.glyph_index = 300},	/*Unicode: U+0037 (7)*/
  {.w_px = 7,	.glyph_index = 312},	/*Unicode: U+0038 (8)*/
  {.w_px = 6,	.glyph_index = 324},	/*Unicode: U+0039 (9)*/
  {.w_px = 3,	.glyph_index = 336},	/*Unicode: U+003a (:)*/
  {.w_px = 3,	.glyph_index = 348},	/*Unicode: U+003b (;)*/
  {.w_px = 5,	.glyph_index = 360},	/*Unicode: U+003c (<)*/
  {.w_px = 6,	.glyph_index = 372},	/*Unicode: U+003d (=)*/
  {.w_px = 6,	.glyph_index = 384},	/*Unicode: U+003e (>)*/
  {.w_px = 6,	.glyph_index = 396},	/*Unicode: U+003f (?)*/
  {.w_px = 11,	.glyph_index = 408},	/*Unicode: U+0040 (@)*/
  {.w_px = 9,	.glyph_index = 432},	/*Unicode: U+0041 (A)*/
  {.w_px = 8,	.glyph_index = 456},	/*Unicode: U+0042 (B)*/
  {.w_px = 9,	.glyph_index = 468},	/*Unicode: U+0043 (C)*/
  {.w_px = 9,	.glyph_index = 492},	/*Unicode: U+0044 (D)*/
  {.w_px = 8,	.glyph_index = 516},	/*Unicode: U+0045 (E)*/
  {.w_px = 8,	.glyph_index = 528},	/*Unicode: U+0046 (F)*/
  {.w_px = 9,	.glyph_index = 540},	/*Unicode: U+0047 (G)*/
  {.w_px = 11,	.glyph_index = 564},	/*Unicode: U+0048 (H)*/
  {.w_px = 6,	.glyph_index = 588},	/*Unicode: U+0049 (I)*/
  {.w_px = 6,	.glyph_index = 600},	/*Unicode: U+004a (J)*/
  {.w_px = 9,	.glyph_index = 612},	/*Unicode: U+004b (K)*/
  {.w_px = 7,	.glyph_index = 636},	/*Unicode: U+004c (L)*/
  {.w_px = 11,	.glyph_index = 648},	/*Unicode: U+004d (M)*/
  {.w_px = 10,	.glyph_index = 672},	/*Unicode: U+004e (N)*/
  {.w_px = 9,	.glyph_index = 696},	/*Unicode: U+004f (O)*/
  {.w_px = 8,	.glyph_index = 720},	/*Unicode: U+0050 (P)*/
  {.w_px = 9,	.glyph_index = 732},	/*Unicode: U+0051 (Q)*/
  {.w_px = 8,	.glyph_index = 756},	/*Unicode: U+0052 (R)*/
  {.w_px = 7,	.glyph_index = 768},	/*Unicode: U+0053 (S)*/
  {.w_px = 9,	.glyph_index = 780},	/*Unicode: U+0054 (T)*/
  {.w_px = 9,	.glyph_index = 804},	/*Unicode: U+0055 (U)*/
  {.w_px = 8,	.glyph_index = 828},	/*Unicode: U+0056 (V)*/
  {.w_px = 10,	.glyph_index = 840},	/*Unicode: U+0057 (W)*/
  {.w_px = 9,	.glyph_index = 864},	/*Unicode: U+0058 (X)*/
  {.w_px = 8,	.glyph_index = 888},	/*Unicode: U+0059 (Y)*/
  {.w_px = 8,	.glyph_index = 900},	/*Unicode: U+005a (Z)*/
  {.w_px = 4,	.glyph_index = 912},	/*Unicode: U+005b ([)*/
  {.w_px = 2,	.glyph_index = 924},	/*Unicode: U+005c (\)*/
  {.w_px = 5,	.glyph_index = 936},	/*Unicode: U+005d (])*/
  {.w_px = 6,	.glyph_index = 948},	/*Unicode: U+005e (^)*/
  {.w_px = 5,	.glyph_index = 960},	/*Unicode: U+005f (_)*/
  {.w_px = 3,	.glyph_index = 972},	/*Unicode: U+0060 (`)*/
  {.w_px = 7,	.glyph_index = 984},	/*Unicode: U+0061 (a)*/
  {.w_px = 6,	.glyph_index = 996},	/*Unicode: U+0062 (b)*/
  {.w_px = 6,	.glyph_index = 1008},	/*Unicode: U+0063 (c)*/
  {.w_px = 7,	.glyph_index = 1020},	/*Unicode: U+0064 (d)*/
  {.w_px = 6,	.glyph_index = 1032},	/*Unicode: U+0065 (e)*/
  {.w_px = 6,	.glyph_index = 1044},	/*Unicode: U+0066 (f)*/
  {.w_px = 8,	.glyph_index = 1056},	/*Unicode: U+0067 (g)*/
  {.w_px = 7,	.glyph_index = 1068},	/*Unicode: U+0068 (h)*/
  {.w_px = 4,	.glyph_index = 1080},	/*Unicode: U+0069 (i)*/
  {.w_px = 4,	.glyph_index = 1092},	/*Unicode: U+006a (j)*/
  {.w_px = 8,	.glyph_index = 1104},	/*Unicode: U+006b (k)*/
  {.w_px = 4,	.glyph_index = 1116},	/*Unicode: U+006c (l)*/
  {.w_px = 11,	.glyph_index = 1128},	/*Unicode: U+006d (m)*/
  {.w_px = 7,	.glyph_index = 1152},	/*Unicode: U+006e (n)*/
  {.w_px = 7,	.glyph_index = 1164},	/*Unicode: U+006f (o)*/
  {.w_px = 7,	.glyph_index = 1176},	/*Unicode: U+0070 (p)*/
  {.w_px = 7,	.glyph_index = 1188},	/*Unicode: U+0071 (q)*/
  {.w_px = 6,	.glyph_index = 1200},	/*Unicode: U+0072 (r)*/
  {.w_px = 6,	.glyph_index = 1212},	/*Unicode: U+0073 (s)*/
  {.w_px = 4,	.glyph_index = 1224},	/*Unicode: U+0074 (t)*/
  {.w_px = 7,	.glyph_index = 1236},	/*Unicode: U+0075 (u)*/
  {.w_px = 6,	.glyph_index = 1248},	/*Unicode: U+0076 (v)*/
  {.w_px = 9,	.glyph_index = 1260},	/*Unicode: U+0077 (w)*/
  {.w_px = 7,	.glyph_index = 1284},	/*Unicode: U+0078 (x)*/
  {.w_px = 6,	.glyph_index = 1296},	/*Unicode: U+0079 (y)*/
  {.w_px = 6,	.glyph_index = 1308},	/*Unicode: U+007a (z)*/
  {.w_px = 5,	.glyph_index = 1320},	/*Unicode: U+007b ({)*/
  {.w_px = 1,	.glyph_index = 1332},	/*Unicode: U+007c (|)*/
  {.w_px = 5,	.glyph_index = 1344},	/*Unicode: U+007d (})*/
  {.w_px = 6,	.glyph_index = 1356},	/*Unicode: U+007e (~)*/
};
/******************************************************************************
 *   Local vars                                                                *
 ******************************************************************************/

/******************************************************************************
 *   Local function prototypes                                                 *
 ******************************************************************************/

/******************************************************************************
 *   Global functions                                                          *
 ******************************************************************************/

/******************************************************************************
 *   Local functions                                                           *
 ******************************************************************************/
#endif
