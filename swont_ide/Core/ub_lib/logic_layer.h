#ifndef UB_LIB_LOGIC_LAYER_H_
#define UB_LIB_LOGIC_LAYER_H_
/**
  ******************************************************************************
  * @file    Logic_Layer.c
  * @brief   This file provides code for the processing of data received
  *          and calls to the API functions for executing of commands
  ******************************************************************************
  *@attention
  *This is a test
  ******************************************************************************
  */
/******************************************************************************
*   Includes                                                                  *
******************************************************************************/
#include "main.h"
#include "log.h"
#include "log_config.h"

/******************************************************************************
*   #defines                                                                  *
******************************************************************************/
#define MAX_VARS 13
#define BYTE_BUFLEN 	 1
#define LINE_BUFLEN 	 1024
#define CARRIAGE_RETURN  13 /* carriage return char \r */
#define LINE_FEED 		 10 /* linefeed char \n		   */

/******************************************************************************
*   Typedefs                                                                  *
******************************************************************************/
typedef struct
{
    uint8_t byte_buffer_rx[BYTE_BUFLEN];	// Store the rx byte from the USART2
    char line_rx_buffer[LINE_BUFLEN];		// Buffer to hold all the bytes from rx USART2
    int msglen;
    volatile int char_counter;				// Counter for line_rx_buffer
    char command_execute_flag;				/* Set = whole transmission is received, ready for processing \
											   Reset = still receiving*/
}input_vars;

/**
 * @enum CommandType
 * @brief Enumeratie van beschikbare commando types.
 */
typedef enum
{
	CMD_LINE,         /// Commando om een lijn te tekenen.
	CMD_RECTANGLE,    /// Commando om een rechthoek te tekenen.
	CMD_TEXT,         /// Commando om tekst te tekenen.
	CMD_BITMAP,       /// Commando om een bitmap te tonen.
	CMD_CLEAR_SCREEN, /// Commando om het scherm te wissen.
	CMD_FIGURE,	      /// Commando voor figuur te tekenen
	CMD_DEBUG,        /// Commando om het log level aan te passen
	CMD_UNKNOWN       /// Onbekend commando.
} CommandType;

/**
 * @enum CommandType
 * @brief Enumeratie van beschikbare commando types.
 */
typedef enum
{
	//Mandatory colours
	VGA_COLOUR_BLACK = 0x00,
	VGA_COLOUR_BLUE = 0x03,
	VGA_COLOUR_GREEN = 0x10,
	VGA_COLOUR_RED = 0xE0,
	VGA_COLOUR_WHITE = 0xFF,
	VGA_COLOUR_CYAN = 0x1F,
	VGA_COLOUR_MAGENTA = 0xE3,
	VGA_COLOUR_YELLOW = 0xFC,
	VGA_COLOUR_BROWN = 0x44,
	VGA_COLOUR_GREY = 0x92,
	VGA_COLOUR_LIGHT_RED = 0xE4,
	VGA_COLOUR_LIGHT_BLUE = 0x0F,
	VGA_COLOUR_LIGHT_GREEN = 0x3C,
	VGA_COLOUR_LIGHT_CYAN = 0x7F,
	VGA_COLOUR_LIGHT_MAGENTA = 0xCF,
	//Extra colours
	VGA_COLOUR_ORANGE = 0xE8,
	VGA_COLOUR_PINK = 0xE1,
	VGA_COLOUR_PURPLE = 0x62,
	VGA_COLOUR_LIGHT_YELLOW = 0xFE,
	VGA_COLOUR_LIGHT_ORANGE = 0xF1,
	//Unknown colour
	CMD_UNKNOWN_COLOR = -1
} ColorType;

typedef enum
{
	FONT_STYLE_NORMAAL = 0,
	FONT_STYLE_VET = 1,
	FONT_STYLE_CURSIEF = 2,
	UNKNOWN_FONT_STYLE = -1
} FontStyle;


/******************************************************************************
*   Globals vars                                                              *
******************************************************************************/
extern input_vars Input;
/******************************************************************************
*   Global function prototypes                                                *
******************************************************************************/
void LL_Receive(void);

void LL_Execute(void);

#endif /* UB_LIB_LOGIC_LAYER_H_ */
