#ifndef my_timers_h
#define my_timers_h

/*
 *  ВНИМАНИЕ !!! нужно переделать !!!
 *  	Решено. Для битовых полей обязательно свойство volatile
 *
 *  Битовые поля, отлично работающие на ATMEL, тут работают непонятно как :(
 *   	битовые поля в стиле ATMEL использовать НЕЛЬЗЯ !!!
 */

#include "main.h"
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef STM32F4

#define STM32_TIM1_ADDRESS                TIM1_BASE
#define STM32_TIM1                        (*((volatile sTimerAdvanced_t*)STM32_TIM1_ADDRESS))

#define STM32_TIM2_ADDRESS                TIM2_BASE
#define STM32_TIM2                        (*((volatile sTimer_t*)STM32_TIM2_ADDRESS))

#define STM32_TIM3_ADDRESS                TIM3_BASE
#define STM32_TIM3                        (*((volatile sTimer_t*)STM32_TIM3_ADDRESS))

#define STM32_TIM4_ADDRESS                TIM4_BASE
#define STM32_TIM4                        (*((volatile sTimer_t*)STM32_TIM4_ADDRESS))

#define STM32_TIM5_ADDRESS                TIM5_BASE
#define STM32_TIM5                        (*((volatile sTimer_t*)STM32_TIM5_ADDRESS))

#define STM32_TIM9_ADDRESS                TIM9_BASE
#define STM32_TIM9                        (*((volatile sTimer_t*)STM32_TIM9_ADDRESS))

#define STM32_TIM10_ADDRESS                TIM10_BASE
#define STM32_TIM10                        (*((volatile sTimer_t*)STM32_TIM10_ADDRESS))

#define STM32_TIM11_ADDRESS                TIM11_BASE
#define STM32_TIM11                        (*((volatile sTimer_t*)STM32_TIM11_ADDRESS))

#endif // STM32F4

#ifdef STM32G4

#define STM32_TIM1_ADDRESS                TIM1_BASE
#define STM32_TIM1                        (*((volatile sTimerAdvanced_t*)STM32_TIM1_ADDRESS))

#define STM32_TIM2_ADDRESS                TIM2_BASE
#define STM32_TIM2                        (*((volatile sTimer_t*)STM32_TIM2_ADDRESS))

#define STM32_TIM3_ADDRESS                TIM3_BASE
#define STM32_TIM3                        (*((volatile sTimer_t*)STM32_TIM3_ADDRESS))

#define STM32_TIM4_ADDRESS                TIM4_BASE
#define STM32_TIM4                        (*((volatile sTimer_t*)STM32_TIM4_ADDRESS))

#define STM32_TIM5_ADDRESS                TIM5_BASE
#define STM32_TIM5                        (*((volatile sTimer_t*)STM32_TIM5_ADDRESS))

#define STM32_TIM9_ADDRESS                TIM9_BASE
#define STM32_TIM9                        (*((volatile sTimer_t*)STM32_TIM9_ADDRESS))

#define STM32_TIM10_ADDRESS                TIM10_BASE
#define STM32_TIM10                        (*((volatile sTimer_t*)STM32_TIM10_ADDRESS))

#define STM32_TIM11_ADDRESS                TIM11_BASE
#define STM32_TIM11                        (*((volatile sTimer_t*)STM32_TIM11_ADDRESS))

#endif // STM32G4

typedef struct
{
	volatile 	uint16_t	cen			:1; // 0
	volatile 	uint16_t	udis		:1; // 1
	volatile 	uint16_t	urs			:1; // 2
	volatile 	uint16_t	opm			:1; // 3
	volatile 	uint16_t	dir			:1; // 4
	volatile 	uint16_t	cms			:2; // 5,6
	volatile 	uint16_t	arpe		:1; // 7
	volatile 	uint16_t	ckd			:2; // 8,9
	volatile 	uint16_t	reserved	:6; // 10-15
} sTimerAdvanced_cr1_t;

typedef struct
{
	volatile 	uint16_t	ccpc		:1; // 0
	volatile 	uint16_t	reserv1		:1; // 1
	volatile 	uint16_t	ccus		:1; // 2
	volatile 	uint16_t	ccds		:1; // 3
	volatile 	uint16_t	mms			:3; // 4-6
	volatile 	uint16_t	ti1s		:1; // 7
	volatile 	uint16_t	ois1		:1; // 8
	volatile 	uint16_t	ois1n		:1; // 9
	volatile 	uint16_t	ois2		:1; // 10
	volatile 	uint16_t	ois2n		:1; // 11
	volatile 	uint16_t	ois3		:1; // 12
	volatile 	uint16_t	ois3n		:1; // 13
	volatile 	uint16_t	ois4		:1; // 14
	volatile 	uint16_t	reserv3		:1; // 15
} sTimerAdvanced_cr2_t;


typedef struct
{
	volatile 	uint16_t	sms			:3; // 0-2
	volatile 	uint16_t	reserv1		:1; // 3
	volatile 	uint16_t	ts			:3; // 4-6
	volatile 	uint16_t	msm			:1; // 7
	volatile 	uint16_t	etf			:4; // 8-11
	volatile 	uint16_t	etps		:2; // 12-13
	volatile 	uint16_t	ece			:1; // 14
	volatile 	uint16_t	etp			:1; // 15
} sTimerAdvanced_smcr_t;

typedef struct
{
	volatile 	uint16_t	uie			:1; // 0
	volatile 	uint16_t	cc1ie		:1; // 1
	volatile 	uint16_t	cc2ie		:1; // 2
	volatile 	uint16_t	cc3ie		:1; // 3
	volatile 	uint16_t	cc4ie		:1; // 4
	volatile 	uint16_t	comie		:1; // 5
	volatile 	uint16_t	tie			:1; // 6
	volatile 	uint16_t	bie			:1; // 7
	volatile 	uint16_t	ude			:1; // 8
	volatile 	uint16_t	cc1de		:1; // 9
	volatile 	uint16_t	cc2de		:1; // 10
	volatile 	uint16_t	cc3de		:1; // 11
	volatile 	uint16_t	cc4de		:1; // 12
	volatile 	uint16_t	comde		:1; // 13
	volatile 	uint16_t	tde			:1; // 14
	volatile 	uint16_t	reserved	:1; // 15
} sTimerAdvanced_dier_t;

typedef struct
{
	volatile 	uint16_t	uif			:1; // 0
	volatile 	uint16_t	cc1if		:1; // 1
	volatile 	uint16_t	cc2if		:1; // 2
	volatile 	uint16_t	cc3if		:1; // 3
	volatile 	uint16_t	cc4if		:1; // 4
	volatile 	uint16_t	comif		:1; // 5
	volatile 	uint16_t	tif			:1; // 6
	volatile 	uint16_t	bif			:1; // 7
	volatile 	uint16_t	reserv8 	:1; // 8
	volatile 	uint16_t	cc1of		:1; // 9
	volatile 	uint16_t	cc2of		:1; // 10
	volatile 	uint16_t	cc3of		:1; // 11
	volatile 	uint16_t	cc4of		:1; // 12
	volatile 	uint16_t	reserved	:3; // 13-15
} sTimerAdvanced_sr_t;

typedef struct
{
	volatile 	uint16_t	ug			:1; // 0
	volatile 	uint16_t	cc1g		:1; // 1
	volatile 	uint16_t	cc2g		:1; // 2
	volatile 	uint16_t	cc3g		:1; // 3
	volatile 	uint16_t	cc4g		:1; // 4
	volatile 	uint16_t	comg		:1; // 5
	volatile 	uint16_t	tg		:1; // 6
	volatile 	uint16_t	bg		:1; // 7
	volatile 	uint16_t	reserved	:8; // 8-15
} sTimerAdvanced_egr_t;


typedef struct
{
	volatile 	uint16_t	cc1s		:2; // 0 1
	volatile 	uint16_t	oc1fe		:1; // 2
	volatile 	uint16_t	oc1pe		:1; // 3
	volatile 	uint16_t	oc1m		:3; // 4-6
	volatile 	uint16_t	oc1ce		:1; // 7
	volatile 	uint16_t	cc2s		:2; // 8 9
	volatile 	uint16_t	oc2fe		:1; // 10
	volatile 	uint16_t	oc2pe		:1; // 11
	volatile 	uint16_t	oc2m		:3; // 12-14
	volatile 	uint16_t	oc2ce		:1; // 15
} sTimerAdv_ccmr1ocm_t;

typedef struct
{
	volatile 	uint16_t	cc3s		:2; // 0 1
	volatile 	uint16_t	oc3fe		:1; // 2
	volatile 	uint16_t	oc3pe		:1; // 3
	volatile 	uint16_t	oc3m		:3; // 4-6
	volatile 	uint16_t	oc3ce		:1; // 7
	volatile 	uint16_t	cc4s		:2; // 8 9
	volatile 	uint16_t	oc4fe		:1; // 10
	volatile 	uint16_t	oc4pe		:1; // 11
	volatile 	uint16_t	oc4m		:3; // 12-14
	volatile 	uint16_t	oc4ce		:1; // 15
} sTimerAdv_ccmr2ocm_t;

typedef struct
{
	uint16_t	cc1s		:2; // 0 1
	uint16_t	ic1psc		:2; // 2 3
	uint16_t	ic1f		:4; // 4-7
	uint16_t	cc2s		:2; // 8 9
	uint16_t	ic2psc		:2; // 10 11
	uint16_t	ic2f		:4; // 12-15
} sTimerAdv_ccmr1icm_t;

typedef struct
{
	uint16_t	cc3s		:2; // 0 1
	uint16_t	ic3psc		:2; // 2 3
	uint16_t	ic3f		:4; // 4-7
	uint16_t	cc4s		:2; // 8 9
	uint16_t	ic4psc		:2; // 10 11
	uint16_t	ic4f		:4; // 12-15
} sTimerAdv_ccmr2icm_t;


typedef struct
{
	uint16_t	cc1e		:1; // 0
	uint16_t	cc1p		:1; // 1
	uint16_t	cc1ne		:1; // 2
	uint16_t	cc1np		:1; // 3
	uint16_t	cc2e		:1; // 0+4
	uint16_t	cc2p		:1; // 1+4
	uint16_t	cc2ne		:1; // 2+4
	uint16_t	cc2np		:1; // 3+4
	uint16_t	cc3e		:1; // 0+8
	uint16_t	cc3p		:1; // 1+8
	uint16_t	cc3ne		:1; // 2+8
	uint16_t	cc3np		:1; // 3+8
	uint16_t	cc4e		:1; // 0+12
	uint16_t	cc4p		:1; // 1+12
	uint16_t	reserv		:1; // 2+12
	uint16_t	cc4np		:1; // 3+12

} sTimerAdvanced_ccer_t;

typedef struct
{
	uint16_t	dt			:8; // 0-7
	uint16_t	lock		:2; // 8 9
	uint16_t	ossi		:1; // 10
	uint16_t	ossr		:1; // 11
	uint16_t	bke			:1; // 12
	uint16_t	bkp			:1; // 13
	uint16_t	aoe			:1; // 14
	uint16_t	moe			:1; // 15

} sTimerAdvanced_bdtr_t	;

typedef struct
{
	uint16_t	dba			:5; // 0
	uint16_t	reserv1		:3; // 0
	uint16_t	dbl			:5; // 0
	uint16_t	reserv2		:3; // 0
} sTimerAdvanced_dcr_t	;

typedef struct {
	union{
		uint16_t			cr1;	// 0x0000
		sTimerAdvanced_cr1_t	CR1;
	};
	int16_t		reserv_0x02;		// 0x02

	union{
		uint16_t			cr2;	// 0x0004
		sTimerAdvanced_cr2_t	CR2;
	};
	int16_t		reserv_0x06;		// 0x06

	union{
		int16_t				smcr;	// 0x08
		sTimerAdvanced_smcr_t	SMCR;
	};
	int16_t		reserv_0x0a;		// 0x0a

	union{
		int16_t				dier;	// 0x0c
		sTimerAdvanced_dier_t	DIER;	// 0x0c
	};
	uint16_t		reserv_0x0e;

	union{
		int16_t				sr;		// 0x10
		sTimerAdvanced_sr_t	SR;
	};
	uint16_t		reserv_0x12;

	union{
		int16_t				egr;	// 0x14
		sTimerAdvanced_egr_t	EGR;
	};
	uint16_t		reserv_0x16;

	union{
		int16_t				ccmr1;	// 0x18
		sTimerAdv_ccmr1ocm_t	CCMR1OCM;
		sTimerAdv_ccmr1icm_t	CCMR1ICM;
	};
	uint16_t		reserv_0x1a;

	union{
		int16_t				ccmr2;	// 0x1c
		sTimerAdv_ccmr2ocm_t	CCMR2OCM;
		sTimerAdv_ccmr2icm_t	CCMR2ICM;
	};
	uint16_t		reserv_0x1e;


	union{
		int16_t				ccer;	// 0x20
		sTimerAdvanced_ccer_t	CCER;
	};
	uint16_t		reserv_0x22;


	uint16_t				cnt;	// 0x24
	uint16_t		reserv_0x26;

	uint16_t				psc;	// 0x28
	uint16_t		reserv_0x2A;


	uint16_t				arr;	// 0x2C
	uint16_t		reserv_0x2E;

	uint16_t				rcr;	// 0x30
	uint16_t		reserv_0x32;

	uint16_t			ccr1;	// 0x34
	uint16_t		reserv_0x36;

	uint16_t			ccr2;	// 0x38
	uint16_t		reserv_0x3A;

	uint16_t		ccr3		;	// 0x3c
	uint16_t		reserv_0x3E;

	uint16_t		ccr4		;	// 0x40
	uint16_t		reserv_0x42;

	union{
		uint16_t		bdtr		;	// 0x44
		sTimerAdvanced_bdtr_t	BDTR;
	};
	uint16_t		reserv_0x46;

	union{
		uint16_t		dcr		;	// 0x48
		sTimerAdvanced_dcr_t	DCR;
	};
	uint16_t		reserv_0x4A;

	uint32_t		dmab;	// 0x4c
} sTimerAdvanced_t;

///////////////////////////////////////////////////////////////////////

typedef struct
{
	volatile uint32_t	CEN			:1; // 0
	volatile uint32_t	UDIS		:1; // 1
	volatile uint32_t	URS			:1; // 2
	volatile uint32_t	OPM			:1; // 3
	volatile uint32_t	DIR			:1; // 4
	volatile uint32_t	CMS			:2; // 5,6
	volatile uint32_t	ARPE		:1; // 7
	volatile uint32_t	CKD			:2; // 8,9
	volatile uint32_t	reserved	:22; // 10-31
} sTimer_cr1_t;

typedef struct
{
	volatile uint32_t	reserv1		:3; // 0...2
	volatile uint32_t	CCDS		:1; // 3
	volatile uint32_t	MMS			:3; // 4-6
	volatile uint32_t	TI1S		:1; // 7
	volatile uint32_t	reserved	:24; //
} sTimer_cr2_t;

typedef struct {
	union{
		uint32_t		cr1;	// 0x0000
		sTimer_cr1_t	CR1;
	};
	union{
		uint32_t		cr2;	// 0x0004
		sTimer_cr2_t	CR2;
	};

	union{
		uint16_t		smcr;	// 0x0008
		sTimerAdvanced_smcr_t	SMCR;
	};
	uint16_t reserv_0x0A;
	//int32_t		SMCR;	// 8

	union{
		uint16_t		dier;	// 0x000c
		sTimerAdvanced_dier_t	DIER;
	};
	uint16_t reserv_0x0D;
	//int32_t		DIER;	// c


	int32_t		SR;		// 10
	int32_t		EGR;	// 14
	int32_t		CCMR1;	// 18

	union{
		uint16_t		ccmr2;	// 0x001C
		sTimerAdv_ccmr2icm_t	CCMR2;
	};
	uint16_t reserv_0x1D;
	//int32_t		CCMR2;	//1c

	union{
		uint16_t		ccer;	// 0x0020
		sTimerAdvanced_ccer_t	CCER;
	};
	uint16_t reserv_0x22;
	//int32_t		CCER;	// 20

	int32_t		CNT;	// 24
	int32_t		PSC;	//28
	int32_t		ARR;	//2c
	int32_t		reserv1;	// 30
	int32_t		CCR1;		// 34
	int32_t		CCR2;		// 38
	int32_t		CCR3;		// 3c
	int32_t		CCR4;		// 40
	int32_t		reserv2;	// 44
	int32_t		DCR;	// 48
	int32_t		DMAR;	// 4c
} sTimer_t;


typedef struct
{
	uint32_t	cen			:1; // 0
	uint32_t	udis		:1; // 1
	uint32_t	urs			:1; // 2
	uint32_t	opm			:1; // 3
	uint32_t	reserv1		:1; // 4
	uint32_t	reserv2		:2; // 5,6
	uint32_t	arpe		:1; // 7
	uint32_t	reserv3		:2; // 8,9
	uint32_t	reserved	:22; // 10-31
} sTimerBasic_cr1_t;

typedef struct
{
	uint32_t	reserv1		:3; // 0...2
	uint32_t	reserv2		:1; // 3
	uint32_t	mms			:3; // 4-6
	uint32_t	reserv3		:1; // 7
	uint32_t	reserved	:24; //
} sTimerBasic_cr2_t;


typedef struct
{
	uint32_t	uie			:1; // 0
	uint32_t	reserv1		:7; // 1...7
	uint32_t	ude			:1; // 8
	uint32_t	reserved	:23; //
} sTimerBasic_dier_t;

typedef struct
{
	uint32_t	uif			:1; // 0
	uint32_t	reserved	:31; //
} sTimerBasic_sr_t;

typedef struct
{
	uint32_t	ug			:1; // 0
	uint32_t	reserved	:31; //
} sTimerBasic_egr_t;

typedef struct
{
	uint32_t	cnt			:16; // 0
	uint32_t	reserved	:16; //
} sTimerBasic_cnt_t;

typedef struct
{
	uint32_t	psc			:16; // 0
	uint32_t	reserved	:16; //
} sTimerBasic_psc_t;

typedef struct
{
	uint32_t	arr			:16; // 0
	uint32_t	reserved	:16; //
} sTimerBasic_arr_t;

typedef struct {
	union{
		uint32_t			cr1;	// 0x0000
		sTimerBasic_cr1_t	CR1;
	};
	union{
		uint32_t			cr2;	// 0x0004
		sTimerBasic_cr2_t	CR2;
	};

	int32_t		Reserv_0x08;		// 0x08
	union{
		int32_t				dier;	// 0x0c
		sTimerBasic_dier_t	DIER;	// 0x0c
	};

	union{
		int32_t				sr;		// 0x10
		sTimerBasic_sr_t	SR;
	};

	union{
		int32_t				egr;	// 0x14
		sTimerBasic_egr_t	EGR;
	};

	int32_t		Reserv_0x18;	// 18
	int32_t		Reserv_0x1C;	//1c
	int32_t		Reserv_0x20;	// 20

	union{
		int32_t				cnt;	// 0x24
		sTimerBasic_cnt_t	CNT;
	};

	union{
		int32_t				psc;	// 0x28
		sTimerBasic_psc_t	PSC;
	};

	union{
		int32_t				arr;	// 0x2c
		sTimerBasic_arr_t	ARR;
	};
} sTimerBasic_t;



#endif
