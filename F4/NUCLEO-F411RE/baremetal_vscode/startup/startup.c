#include <stdint.h>

extern uint32_t _estack;
extern uint32_t _sidata;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

int main(void);
void Reset_Handler(void);
void Default_Handler(void);

void NMI_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void HardFault_Handler(void)	__attribute__((weak, alias("Default_Handler")));

__attribute__((section(".isr_vector")))
const void* vector_table[] =
{
	&_estack,
	Reset_Handler,
	NMI_Handler,
	HardFault_Handler
};

void Reset_Handler(void) {
	uint32_t* src = &_sidata;  //откуда копируем source (FLASH), куда копируем distination (RAM)
	uint32_t* dst = &_sdata;

	while (dst < &_edata) {
		*dst++ = *src++;
		//Это эквивалентно этому
		//*dst = *src;
		//dst++;
		//src++;
	}

	dst = &_sbss;

	while (dst < &_ebss) {
		*dst++ = 0;
	}

	main();

	while(1){}  //На всякий случай это должно прописываться, чтобы в случае, если вернулись из main(), то у программы было понятное поведение
}

void Default_Handler(void) {
	while (1) {}
}