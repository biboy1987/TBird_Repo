#include <avr/io.h>
#include <util/delay.h>
#include "BT_CentralEventDispatcher_Public.h"

int main()
{
	BT_CentralEventDispatcher_onReset();
	BT_CentralEventDispatcher_onCyclic();
}
