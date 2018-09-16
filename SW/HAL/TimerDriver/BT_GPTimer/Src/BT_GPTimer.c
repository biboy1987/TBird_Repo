#include "avr/io.h"
#include "stdint.h"
#include "BT_GPTimer_Private.h"
#include "BT_GPTimer_Public.h"

static void BT_GPTimer_InitTimer1()
{
	// Timer1 to 'Normal' mode
	TCCR1A = TCCR1A & (~((uint8_t)(1 << WGM10)));
	TCCR1A = TCCR1A & (~((uint8_t)(1 << WGM11)));
	TCCR1B = TCCR1B & (~((uint8_t)(1 << WGM12)));
	TCCR1B = TCCR1B & (~((uint8_t)(1 << WGM13)));
}

void BT_GPTimer_onReset()
{
	BT_GPTimer_InitTimer1();
}

void BT_GPTimer_ResetTimer1Value()
{
	TCNT1 = 0x0000;
}


// Brief: Get the Timer1 register's value which 2^4 * 1000000 / sec
uint16_t BT_GPTimer_GetTimer1Value()
{
	return ((uint16_t)TCNT1);
}
