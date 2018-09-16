#ifndef __BT_GPTIMER_PUBLIC__
#define __BT_GPTIMER_PUBLIC__
#include "stdint.h"

void BT_GPTimer_onReset(void);
uint16_t BT_GPTimer_GetTimer1Value(void);
void BT_GPTimer_ResetTimer1Value(void);

#endif
