#include <reg52.h>
#include "LCD1602.h"

void main(void){
	LCD1602_init();
	LCD1602_Clear();
	
	LCD1602_Disp_ZF(0x80,"Time:",5);
	LCD1602_Disp_ZF(0x80+0x40,"Please Swipecard",16);
	
	LCD1602_chars(7, 0, "20");
	//LCD1602_write_com(0x85);
	//LCD1602_write_data('A');
	//LCD1602_write_data('B');

	while(1);
}

