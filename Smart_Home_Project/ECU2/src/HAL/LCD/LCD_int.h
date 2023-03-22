/*
 * LCD_int.h
 *
 *  Created on: Feb 19, 2023
 *      Author: ahmed57
 */

#ifndef LCD_LCD_INT_H_
#define LCD_LCD_INT_H_

#include "LCD_cfg.h"


void H_LCD_void_sendData(u8 copy_u8data );
void H_LCD_void_sendCommand(u8 copy_u8command);
void H_LCD_void_sendString( char * pstr);
void H_LCD_void_sendIntNum(s32 copy_s32Num);
void H_LCD_void_gotoXY(u8 copy_u8Row,u8 copy_u8Col);
void H_LCD_void_creatCustomChar (const u8 * ArrPattern,u8 copy_u8charCode);
void H_LCD_void_displayCustomChar(u8 copy_u8charCode);
void H_LCD_void_Init(void);
void H_LCD_void_Clear_Display();

#endif /* LCD_LCD_INT_H_ */