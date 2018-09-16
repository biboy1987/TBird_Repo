#include "stdint.h"
#include "BT_GPTimer_Public.h"
#include "BT_LifeTimer_Public.h"
#include "BT_LifeTimer_Private.h"

static uint64_t BT_LifeTimer_LifeTime_u64 = 0;

static void BT_LifeTimer_S_UpdateLifeTime()
{
	BT_LifeTimer_LifeTime_u64 += (uint64_t)BT_GPTimer_GetTimer1Value();
	BT_GPTimer_ResetTimer1Value();
}

void BT_LifeTimer_Api_onReset()
{
	BT_LifeTimer_LifeTime_u64 = 0x0;
}

void BT_LifeTimer_Api_onCyclic()
{
	BT_LifeTimer_S_UpdateLifeTime();
}
