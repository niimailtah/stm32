// system_clock.c
#include <stdint.h>
#include "stm32f4xx.h"
#include "system_clock.h"


/* ========================================================================== */
/* Clock Configuration Constants (Target: 96 MHz from 16 MHz HSI)             */
/* ========================================================================== */
/* PLL Parameters */
#define PLL_M               16U     /* HSI 16MHz / 16 = 1MHz VCO Input */
#define PLL_N               192U    /* 1MHz * 192 = 192MHz VCO Output  */
#define PLL_P               0U      /* 00 -> Divisor 2. 192MHz / 2 = 96MHz SYSCLK */
#define PLL_Q               4U      /* 192MHz / 4 = 48MHz USB Clock    */

/* Bus Prescalers */
#define APB1_PRESCALER_DIV2 4U      /* 100 binary -> APB1 divided by 2 (48 MHz) */

/* Flash Latency */
#define FLASH_LATENCY_3WS   3U      /* 3 Wait States required for 90-100 MHz at 3.3V */

/* ========================================================================== */
/* Function Implementation                                                      */
/* ========================================================================== */

void system_clock_init(void)
{
    /* 1. Enable the High-Speed Internal (HSI) clock */
    RCC->CR |= RCC_CR_HSION; /* Set HSION bit */
    
    /* Wait until HSI is ready (HSIRDY bit becomes 1) */
    while ((RCC->CR & RCC_CR_HSIRDY) == 0U)
    {
        /* Wait for internal oscillator to stabilize */
    }

    /* 2. Configure Flash Latency and Caches BEFORE increasing the clock speed */
    /* RM0383 Section 3.4.1: 90-100 MHz at 3.3V requires 3 Wait States. */
    FLASH->ACR = FLASH_ACR_PRFTEN | FLASH_ACR_ICEN | 
                 FLASH_ACR_DCEN   | (FLASH_LATENCY_3WS << FLASH_ACR_LATENCY_Pos);

    /* 3. Configure the Main PLL */
    /* Select HSI as PLL source (bit 22 = 0) and insert M, N, P, Q values */
    RCC->PLLCFGR = (PLL_Q << 24U) | 
                   (0U << 22U)    | /* PLLSRC = 0 (HSI selected) */
                   (PLL_P << 16U) | 
                   (PLL_N << 6U)  | 
                   (PLL_M << 0U);

    /* 4. Enable the Main PLL */
    RCC->CR |= RCC_CR_PLLON; /* Set PLLON bit */

    /* Wait until PLL is locked (PLLRDY bit becomes 1) */
    while ((RCC->CR & RCC_CR_PLLRDY) == 0U)
    {
        /* Wait for PLL to achieve hardware lock */
    }

    /* 5. Configure Bus Prescalers (AHB, APB1, APB2) */
    /* AHB  (HPRE)  = /1 (0000 -> 96 MHz)
     * APB1 (PPRE1) = /2 (100  -> 48 MHz) -> Cannot exceed 50 MHz
     * APB2 (PPRE2) = /1 (000  -> 96 MHz)
     */
    /* Clear prescaler bits first (bits 15:4), then set APB1 to /2 */
    RCC->CFGR &= ~((0xFU << 4U) | (0x7U << 10U) | (0x7U << 13U));
    RCC->CFGR |= (APB1_PRESCALER_DIV2 << 10U);

    /* 6. Switch System Clock (SYSCLK) source to the PLL */
    /* Set SW bits (1:0) to 10 binary (0x2) */
    RCC->CFGR |= RCC_CFGR_SW_PLL;

    /* Wait until the PLL is actively used as the system clock */
    /* Check SWS bits (3:2) for value 10 binary (0x2) */
    while ((RCC->CFGR & (3UL << RCC_CFGR_SWS_Pos)) != RCC_CFGR_SWS_PLL)
    {
        /* Wait for the clock switch to complete */
    }
}

// Set the core frequency to 100MHz
void SysClockConfig100MHz(void)
{
    #define PLL_M_100MHZ      4
    #define PLL_N_100MHZ      200
    #define PLL_P_100MHZ      4
    #define PLL_Q_100MHZ      9

    __IO uint32_t StartUpCounter = 0, HSEStatus = 0;
    
    RCC->CR |= ((uint32_t)RCC_CR_HSEON);
    do
    {
        HSEStatus = RCC->CR & RCC_CR_HSERDY;
        StartUpCounter++;
    } while ((HSEStatus == 0) && (StartUpCounter != 3000));

    if ((RCC->CR & RCC_CR_HSERDY) != RESET)
    {
        HSEStatus = (uint32_t)0x01;
    }
    else
    {
        HSEStatus = (uint32_t)0x00;
    }

    if (HSEStatus == (uint32_t)0x01)
    {
        RCC->APB1ENR |= RCC_APB1ENR_PWREN;
        PWR->CR &= (uint32_t)~(PWR_CR_VOS);

        RCC->CFGR |= RCC_CFGR_HPRE_DIV1;
        RCC->CFGR |= RCC_CFGR_PPRE2_DIV1;
        RCC->CFGR |= RCC_CFGR_PPRE1_DIV2;

        RCC->PLLCFGR = PLL_M_100MHZ        |
                       (PLL_N_100MHZ << 6) |
                       (((PLL_P_100MHZ >> 1) -1) << 16) |
                       (RCC_PLLCFGR_PLLSRC_HSE)         |
                       (PLL_Q_100MHZ << 24);
        
        RCC->CR |= RCC_CR_PLLON;

        while ((RCC->CR & RCC_CR_PLLRDY) == 0) {}

        /* Configure Flash prefetch, Instruction cache, Data cache and wait state */
        FLASH->ACR = FLASH_ACR_ICEN |FLASH_ACR_DCEN |FLASH_ACR_LATENCY_3WS;

        /* Select the main PLL as system clock source */
        RCC->CFGR &= (uint32_t)((uint32_t)~(RCC_CFGR_SW));
        RCC->CFGR |= RCC_CFGR_SW_PLL;

        /* Wait till the main PLL is used as system clock source */
        while ((RCC->CFGR & (uint32_t)RCC_CFGR_SWS ) != RCC_CFGR_SWS_PLL) {}
    }
    else
    {
        /* If HSE fails to start-up, the application will have wrong clock
           configuration. User can add here some code to deal with this error */
    }
}
