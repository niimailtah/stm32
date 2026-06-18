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
TARGET=adc

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

include $(MK_PATH)/sources.mk
# include $(WORKSPACE_LOC)/make_scripts/code_base.mk
include $(WORKSPACE_LOC)/make_scripts/rules.mk
