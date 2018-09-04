#include <avr/io.h>
#include <avr/delay.h>

void main()
{

    DDRB = 0xFF;         //PB as output
    DDRD = 0xFF;         //PB as output


    while(1)
    {
    	static char shifter_u8 = 0;

    	if (shifter_u8 <= 3)
    	{
    		PORTB = 1<<shifter_u8+4;
    		PORTD = 0;
    	}
    	else if (shifter_u8 > 3 && shifter_u8 < 8)
		{
    		PORTB = 0;
    		PORTD = 1<<shifter_u8;
		}
    	else
		{
    		shifter_u8 = 0;
		}

    	shifter_u8++;
    	_delay_ms(1000);

    };
}
