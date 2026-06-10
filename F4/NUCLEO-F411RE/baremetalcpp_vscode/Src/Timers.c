#include "Timers.h"

void TIM2_init(void);

void TIMERS_init(void)
{
    TIM2_init();
}

void TIM2_init(void)
{
    RCC_APB1EN_R |= TIM2EN;
    // *(volatile uint32_t*)0x4002101C |= (1 << 0); 

    TIM2->SR &= ~(CR1_CEN);
    // И мы теперь пишем не так*(volatile uint32_t*)0x40000028 = 7999; // настройка prescaler
    TIM2->PSC = 8000 - 1; // А так
    TIM2->ARR = 1000 - 1;
    TIM2->CNT = 0;

    TIM2->CR1 |= CR1_CEN;
}

void delayOneSecond(void)
{
    while((TIM2->SR & (SR_UIF)) == 0){}  // Задержка будет длиться в течение одной секунды
    TIM2->SR &= ~(SR_UIF);
}
