#include<util/delay.h>


#define PINB *((volatile uint8_t *)0x23)
#define PORTB *((volatile uint8_t *)0x25)
#define DDRB *((volatile uint8_t *)0x24)



int main(int arcv, char *argv[])
{
	DDRB = 32; 
	while(1){
		if(PINB & (1<<4)){
			if(PINB & (1<<4)){
				PORTB = 32; 
				while(PINB & (1<<4)) _delay_ms(10);
			}
		}else{
			PORTB = 0;
		}
		_delay_ms(10);
	}






	return 0;
}
