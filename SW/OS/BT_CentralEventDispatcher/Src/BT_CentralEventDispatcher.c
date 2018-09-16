#include "BT_GPTimer_Public.h"
#include "BT_LifeTimer_Public.h"

void BT_CentralEventDispatcher_onReset(void)
{
	//Init 16bit timer
	BT_GPTimer_onReset();

}

void BT_CentralEventDispatcher_onCyclic(void)
{
	while(1)
	{
		BT_LifeTimer_Api_onCyclic();
	}
}


