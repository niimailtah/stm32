# STM32F103VET6

## Summury

Kernel: Cortex-M3 32-bit RISC;
Operating frequency: 72MHz, 1.25 DMIPS/MHz;
Working voltage: 2-3.6V
Package: LQFP100; I/O port: 80;
Storage resources: 512kB Flash, 64kB RAM(103V storage maximum with E suffix);
Interface resources: 3xSPL, 5xUSART, 2xI2S, 2xI2C, 1xFSMC, 1XLCD, 1xSDIO, 1xUSB, 1xCAN;
A/d conversion: 3xAD (12-bit, 1us, time-sharing 16 channels), 2xDA(12-bit);

CAN chip, JTA1050
MAX485 chip
SP3232EEN chip


## Pinout
Из комментария на ali
key2-pb15, key3-pb1, led2-pb13 (success), led3-pb14 (success),  pb10,11-rs485,  pb8,9-can

из схемы ("вырви глаз")
pa9,10-rs232 ???
