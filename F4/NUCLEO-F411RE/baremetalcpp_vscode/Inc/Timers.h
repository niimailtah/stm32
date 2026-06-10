#ifndef TIMERS_H
#define TIMERS_H

#include <stdint.h>
#include "GPIO.h"

#ifdef __cplusplus
extern "C" {
#endif

void TIMERS_init(void);
void delayOneSecond(void);

typedef struct
{
    volatile uint32_t CR1;      // 0x00
    volatile uint32_t CR2;      // 0x04
    volatile uint32_t SMCR;     // 0x08
    volatile uint32_t DIER;     // 0x0C
    volatile uint32_t SR;       // 0x10
    volatile uint32_t EGR;      // 0x14
    volatile uint32_t CCMR1;    // 0x18
    volatile uint32_t CCMR2;    // 0x1C
    volatile uint32_t CCER;     // 0x20
    volatile uint32_t CNT;      // 0x24
    volatile uint32_t PSC;      // 0x28
    volatile uint32_t ARR;      // 0x2C
    volatile uint32_t RCR;      // 0x30
    volatile uint32_t CCR1;     // 0x34
    volatile uint32_t CCR2;     // 0x38
    volatile uint32_t CCR3;     // 0x3C
    volatile uint32_t CCR4;     // 0x40
    volatile uint32_t BDTR;     // 0x44
    volatile uint32_t DCR;      // 0x48
    volatile uint32_t DMAR;     // 0x4C
    volatile uint32_t OR;       // 0x50
} TIM_TypeDef;



// Offset for APB1 peripheral bus
#define APB1PERIPH_OFFSET (0x00000000UL)
// Base address for APB1 peripherals
#define APB1PERIPH_BASE (PERIPH_BASE + APB1PERIPH_OFFSET)
// Offset for TIM2
#define TIM2_OFFSET (0x0000UL)
// Base address for TIM2
#define TIM2_BASE (APB1PERIPH_BASE + TIM2_OFFSET)
#define TIM2 ((TIM_TypeDef*)TIM2_BASE)
// Мы говорим компилятору: "Адрес 0x40000000 — это указатель на структуру TIM_TypeDef".

// Offset for APB1EN register
#define APB1EN_R_OFFSET (0x40UL)
// Address of APB1EN register
#define RCC_APB1EN_R (*(volatile uint32_t*)(RCC_BASE + APB1EN_R_OFFSET))

#define TIM2EN (1U<<0)
#define CR1_CEN (1U<<0)
#define SR_UIF (1U<<0)

#ifdef __cplusplus
}
#endif

#endif
