/*
 * ili9341.h
 *
 *  Created on: 2017年3月24日
 *      Author: han
 */

#ifndef ILI9341_H_
#define ILI9341_H_
#include "stm32l4xx_hal.h"
#define Bank1_LCD_C    ((uint32_t)0x60000000)	   //Disp Reg ADDR
#define Bank1_LCD_D    ((uint32_t)0x60020000)     //Disp Data ADDR       // A16 PD11

/*选定LCD指定寄存器*/
#define LCD_ILI9341_CMD(index)    ((*(uint16_t *) (Bank1_LCD_C)) = ((uint16_t)index))
/*往LCD GRAM写入数据*/
#define LCD_ILI9341_Parameter(val)       ((*(uint16_t *) (Bank1_LCD_D)) = ((uint16_t)(val)))

//#define LCD_ILI9341_CMD(index)       LCD_WR_REG(index)
//#define LCD_ILI9341_Parameter(val)	 LCD_WR_Data(val)

#define COLUMN		240
#define PAGE		320

// SRT 是string的缩写
#define STR_WIDTH		6		/* 字符宽度 */
#define STR_HEIGHT		12		/* 字符高度 */

#define BACKGROUND		BLACK

#define WHITE		 		 0xFFFF	/* 白色 */
#define BLACK        0x0000	/* 黑色 */
#define GREY         0xF7DE	/* 灰色 */
#define BLUE         0x001F	/* 蓝色 */
#define BLUE2        0x051F	/* 浅蓝色 */
#define RED          0xF800	/* 红色 */
#define MAGENTA      0xF81F	/* 红紫色，洋红色 */
#define GREEN        0x07E0	/* 绿色 */
#define CYAN         0x7FFF	/* 蓝绿色，青色 */
#define YELLOW       0xFFE0	/* 黄色 */

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
