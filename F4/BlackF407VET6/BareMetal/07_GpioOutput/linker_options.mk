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

LDSCRIPT = $(MK_PATH)/STM32F407VETX_FLASH.ld
