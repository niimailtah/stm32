# Makefile
# https://habr.com/ru/articles/1010484/
# https://habr.com/ru/articles/748162/

MK_PATH:=$(dir $(realpath $(lastword $(MAKEFILE_LIST))))
WORKSPACE_LOC:=$(MK_PATH)../
WORKSPACE_LOC:= $(realpath $(WORKSPACE_LOC))
MK_PATH:= $(realpath $(MK_PATH))
# @echo $(error MK_PATH=$(MK_PATH))
INCDIR += -I$(MK_PATH)
INCDIR += -I$(WORKSPACE_LOC)

# DEPENDENCIES_GRAPHVIZ=Y
TARGET=gpiooutput

# include $(MK_PATH)/config.mk

# ifeq ($(CLI),Y)
#     include $(MK_PATH)/cli_config.mk
# endif

# ifeq ($(DIAG),Y)
#     include $(MK_PATH)/diag_config.mk
# endif

# ifeq ($(TEST),Y)
#     include $(MK_PATH)/test_config.mk
# endif

PREFIX = arm-none-eabi-
# binaries
GCC_PATH="d:/tools/arm-gnu-toolchain-15.2.rel1-mingw-w64-x86_64-arm-none-eabi/bin/"
# $(info GCC_PATH=$(GCC_PATH))

PREPROCESSOR_TOOL =$(GCC_PATH)/$(PREFIX)cpp
CC = $(GCC_PATH)/$(PREFIX)gcc
CPP = $(GCC_PATH)/$(PREFIX)g++
AS = $(GCC_PATH)/$(PREFIX)gcc -x assembler-with-cpp
CP = $(GCC_PATH)/$(PREFIX)objcopy
SZ = $(GCC_PATH)/$(PREFIX)size

HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S

SOURCES_C += $(MK_PATH)/Src/main.c
SOURCES_C += $(MK_PATH)/Src/gpio.c
SOURCES_C += $(MK_PATH)/Src/syscalls.c
SOURCES_C += $(MK_PATH)/Src/sysmem.c
SOURCES_C += $(MK_PATH)/Src/system_stm32f4xx.c

SOURCES_ASM += $(MK_PATH)/Startup/startup_stm32f411retx.S

INCDIR += -I$(MK_PATH)/Inc
INCDIR += -I$(MK_PATH)/chip_headers/CMSIS/Device/ST/STM32F4xx/Include
INCDIR += -I$(MK_PATH)/chip_headers/CMSIS/Include

# compiler_options.mk
COMPILE_OPT += -mcpu=cortex-m4
COMPILE_OPT += -mthumb
COMPILE_OPT += -Wall
COMPILE_OPT += $(CSTANDARD)
COMPILE_OPT += $(INCDIR)
COMPILE_OPT += -DSTM32F411xE

# linker_options.mk
LINKER_FLAGS += -Xlinker --gc-sections 
LINKER_FLAGS += -Xlinker --print-memory-usage
ifeq ($(LIBC_NANO), Y)
    LINKER_FLAGS += --specs=nano.specs
endif

# ifeq ($(LIBC_NOSYS), Y)
	LINKER_FLAGS += --specs=nosys.specs
# endif

ifeq ($(LIBC_RDIMON), Y)
    LINKER_FLAGS +=  --specs=rdimon.specs
endif

# ifeq ($(LIBC), Y)
    LIBS += -lc
# endif

# ifeq ($(MATH_LIB), Y)
    LIBS += -lm
# endif

LDFLAGS += -t
LDFLAGS += -mcpu=cortex-m4
LDFLAGS += -T$(LDSCRIPT)
LDFLAGS += $(LIBS)
LDFLAGS += -Wl,--cref 
LDFLAGS += -Wl,--gc-sections 
LDFLAGS += -Wl,-Map=$(BUILD_DIR)/$(TARGET).map
LDFLAGS += $(LINKER_FLAGS)

LDSCRIPT = $(MK_PATH)/STM32F411RETx_FLASH.ld

# include $(WORKSPACE_LOC)/make_scripts/code_base.mk
include $(WORKSPACE_LOC)/make_scripts/rules.mk
