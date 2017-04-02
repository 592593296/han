/*
 * ili9341.h
 *
 *  Created on: 2017��3��24��
 *      Author: han
 */

#ifndef ILI9341_H_
#define ILI9341_H_
#include "stm32l4xx_hal.h"
#define Bank1_LCD_C    ((uint32_t)0x60000000)	   //Disp Reg ADDR
#define Bank1_LCD_D    ((uint32_t)0x60020000)     //Disp Data ADDR       // A16 PD11

/*ѡ��LCDָ���Ĵ���*/
#define LCD_ILI9341_CMD(index)    ((*(uint16_t *) (Bank1_LCD_C)) = ((uint16_t)index))
/*��LCD GRAMд������*/
#define LCD_ILI9341_Parameter(val)       ((*(uint16_t *) (Bank1_LCD_D)) = ((uint16_t)(val)))

//#define LCD_ILI9341_CMD(index)       LCD_WR_REG(index)
//#define LCD_ILI9341_Parameter(val)	 LCD_WR_Data(val)

#define COLUMN		240
#define PAGE		320

// SRT ��string����д
#define STR_WIDTH		6		/* �ַ���� */
#define STR_HEIGHT		12		/* �ַ��߶� */

#define BACKGROUND		BLACK

#define WHITE		 		 0xFFFF	/* ��ɫ */
#define BLACK        0x0000	/* ��ɫ */
#define GREY         0xF7DE	/* ��ɫ */
#define BLUE         0x001F	/* ��ɫ */
#define BLUE2        0x051F	/* ǳ��ɫ */
#define RED          0xF800	/* ��ɫ */
#define MAGENTA      0xF81F	/* ����ɫ�����ɫ */
#define GREEN        0x07E0	/* ��ɫ */
#define CYAN         0x7FFF	/* ����ɫ����ɫ */
#define YELLOW       0xFFE0	/* ��ɫ */

extern void LCD_Init(void);
//void Lcd_GramScan( uint16_t option );
extern void LCD_Clear(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint16_t color);
void LCD_SetCursor(uint16_t x, uint16_t y);
void LCD_OpenWindow(uint16_t x, uint16_t y, uint16_t width, uint16_t height);
extern void LCD_SetPoint(int x , int y , int color);
extern uint16_t LCD_GetPoint(int x , int y);
extern uint16_t LCD_RD_data(void);
extern void LCD_DisplayLine(uint16_t x , uint16_t y , uint16_t width, uint16_t height,uint16_t color);
#endif /* ILI9341_H_ */
