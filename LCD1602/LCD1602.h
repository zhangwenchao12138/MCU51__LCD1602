#ifndef __LCD1602_H__
#define __LCD1602_H__

#include<reg52.h>

sbit LCD1602_RS = P2^7;
sbit LCD1602_RW = P2^6;
sbit LCD1602_E  = P2^5;
#define  LCD1602_Data  P0

void delay_50us_1602(unsigned int t);
void LCD1602_write_com(unsigned char com);
void LCD1602_write_data(unsigned int dat);
void LCD1602_init(void);
void LCD1602_Clear(void);
/*******************************************
函数名称：Disp_ZF
功    能：控制液晶显示字符
参    数：addr--显示位置的首地址
          pt--指向显示数据的指针
          num--显示字符个数
返回值  ：无
********************************************/
void LCD1602_Disp_ZF(unsigned char addr,const unsigned char * pt,unsigned char num); 
void LCD1602_chars(unsigned char x,unsigned char y,unsigned char *s);
void LCD1602_Clear(void);
#endif
