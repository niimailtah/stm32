# sources.mk

SOURCES_C += $(MK_PATH)/Src/main.c
SOURCES_C += $(MK_PATH)/Src/gpio.c
SOURCES_C += $(MK_PATH)/Src/syscalls.c
SOURCES_C += $(MK_PATH)/Src/sysmem.c
SOURCES_C += $(MK_PATH)/Src/system_stm32h7xx.c

SOURCES_ASM += $(MK_PATH)/Startup/startup_stm32h743vitx.S

INCDIR += -I$(MK_PATH)/Inc
INCDIR += -I$(WORKSPACE_LOC)/CMSIS/Device/ST/STM32H7xx/Include
INCDIR += -I$(WORKSPACE_LOC)/CMSIS/Include
