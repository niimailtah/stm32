#include "config.h"

void MCU_init(void)
{
    GPIO_init();
    TIMERS_init();
}
