#include "main.h"

int main(void)
 {
	MCU_init();

	while(1)
	{
		turnOnLED();
		delayOneSecond();
		turnOffLED();
		delayOneSecond();
	}
}