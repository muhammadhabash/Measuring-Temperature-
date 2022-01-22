#include "./MCAL/Timers/Timers.h"
#include "./MCAL/ADC/ADC_private.h"
#include "./HAL/LCD/LCD.h"
#include "./HAL/LM35/LM35.h"

int main(void){
	
    uint8_t  u8_temperature;
	ADC_init();
	LCD_init();
	LCD_printString("Temperature:");
	while (1){
		u8_temperature = temperature();
		LCD_printDigits(u8_temperature);
		TIMER0_msdelay(500);
		LCD_cursorMove(LEFT);
		LCD_cursorMove(LEFT);
    }
}

