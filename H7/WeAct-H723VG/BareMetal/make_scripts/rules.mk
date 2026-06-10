# rules.mk
# version 2026-06-09

# CSTANDARD = -std=c99
CSTANDARD = -std=c11 

mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
# $(info mkfile_path:$(mkfile_path) )
MK_PATH := $(subst /cygdrive/c/,C:/, $(MK_PATH))
# $(info MK_PATH=$(MK_PATH))

BUILD_DIR=build

EXTRA_TARGETS=

INCDIR := $(subst /cygdrive/c/,C:/, $(INCDIR))
SOURCES_TOTAL_C += $(SOURCES_C)
SOURCES_TOTAL_C += $(SOURCES_CONFIGURATION_C)
SOURCES_TOTAL_C += $(SOURCES_THIRD_PARTY_C)
SOURCES_TOTAL_C := $(subst /cygdrive/c/,C:/, $(SOURCES_TOTAL_C))

SOURCES_ASM := $(subst /cygdrive/c/,C:/, $(SOURCES_ASM))

LIBS  := $(subst /cygdrive/c/,C:/, $(LIBS))
LDSCRIPT := $(subst /cygdrive/c/,C:/, $(LDSCRIPT))

WORKSPACE_LOC := $(realpath  $(WORKSPACE_LOC))
WORKSPACE_LOC := $(subst /cygdrive/c/,C:/, $(WORKSPACE_LOC))

# include $(WORKSPACE_LOC)/make_scripts/toolchain.mk

AS_DEFS = 
AS_INCLUDES = 

MICROPROCESSOR +=  $(CPU)
MICROPROCESSOR +=  $(FPU) 
MICROPROCESSOR +=  $(FLOAT-ABI)

# include $(WORKSPACE_LOC)/make_scripts/compiler_options.mk
# include $(WORKSPACE_LOC)/make_scripts/linker_options.mk
include $(MK_PATH)/compiler_options.mk
include $(MK_PATH)/linker_options.mk

ASFLAGS += $(MCU)
ASFLAGS += $(AS_DEFS)
ASFLAGS += $(AS_INCLUDES)
ASFLAGS += $(OPT)
ASFLAGS += $(COMPILE_OPT)
ASFLAGS += -Wall
ASFLAGS += -fdata-sections
ASFLAGS += -ffunction-sections

# CPP_FLAGS += $(CSTANDARD) $(INCDIR)  $(OPT) $(COMPILE_OPT)
CFLAGS += $(CSTANDARD) $(INCDIR)  $(OPT) $(COMPILE_OPT)

# EXTRA_TARGETS += generate_definitions

ARTIFACTS += $(BUILD_DIR)/$(TARGET).bin
ARTIFACTS += $(BUILD_DIR)/$(TARGET).hex
ARTIFACTS += $(BUILD_DIR)/$(TARGET).elf

.PHONY: all

all: $(EXTRA_TARGETS) $(ARTIFACTS)

.PHONY: generate_definitions

generate_definitions:
	$(info GenerateDefinitions...)
	$(PREPROCESSOR_TOOL) $(CPP_FLAGS) $(WORKSPACE_LOC)/empty_source.c -dM -E> c_defines_generated.h
	$(SORTER_TOOL) -u c_defines_generated.h -o c_defines_generated.h

OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(SOURCES_TOTAL_C:.c=.o)))

vpath %.c $(sort $(dir $(SOURCES_TOTAL_C)))

# list of ASM program objects
OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(SOURCES_ASM:.S=.o)))
vpath %.S $(sort $(dir $(SOURCES_ASM)))

TOTAL_FILES := $(words $(OBJECTS))
$(info TOTAL_FILES:$(TOTAL_FILES) )

$(BUILD_DIR)/%.o: %.c Makefile | $(BUILD_DIR)
	$(eval CURRENT_CNT=$(shell echo $$(($(CURRENT_CNT)+1))))
	@echo Compiling $(CURRENT_CNT)/$(TOTAL_FILES) $@
# 	@$(CC) -c -MD $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@
	@$(CC) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/%.o: %.S Makefile | $(BUILD_DIR)
	$(AS) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS) Makefile
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	$(SZ) $@

$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(HEX) $< $@
	
$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(BIN) $< $@    


$(BUILD_DIR):
	mkdir -p $@

.PHONY: clean

clean:
	-rm -fR $(BUILD_DIR)

# dependencies
-include $(wildcard $(BUILD_DIR)/*.d)
