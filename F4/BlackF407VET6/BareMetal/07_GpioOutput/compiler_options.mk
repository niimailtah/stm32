# compiler_options.mk

COMPILE_OPT += -mcpu=cortex-m4
COMPILE_OPT += -mthumb
COMPILE_OPT += -Wall
COMPILE_OPT += $(CSTANDARD)
COMPILE_OPT += $(INCDIR)
COMPILE_OPT += -DSTM32F407xx
