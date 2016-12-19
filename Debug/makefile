################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /Applications/ti/ccsv6/tools/compiler/gcc-arm-none-eabi-4_9-2015q3

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.o" \
"./tm4c123gh6pm_startup_ccs_gcc.o" \
"./ERRH/ERRH.o" \
"./HAL/SPID.o" \
"./HAL/SRHL.o" \
"./HAL/TIMD.o" \
"./HAL/board.o" \
"./cmsis/cmsis_nvic.o" \
"./cmsis/system_LM4F.o" \
"./simplelink/source/device.o" \
"./simplelink/source/driver.o" \
"./simplelink/source/flowcont.o" \
"./simplelink/source/fs.o" \
"./simplelink/source/netapp.o" \
"./simplelink/source/netcfg.o" \
"./simplelink/source/nonos.o" \
"./simplelink/source/socket.o" \
"./simplelink/source/spawn.o" \
"./simplelink/source/wlan.o" \
-Wl,-T"../tm4c123gh6pm.lds" \
$(GEN_CMDS__FLAG) \
-Wl,--start-group \
-lc \
-Wl,--end-group \

-include ../makefile.init

RM := rm -rf
RMDIR := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include ERRH/subdir_vars.mk
-include HAL/subdir_vars.mk
-include cmsis/subdir_vars.mk
-include simplelink/source/subdir_vars.mk
-include subdir_rules.mk
-include ERRH/subdir_rules.mk
-include HAL/subdir_rules.mk
-include cmsis/subdir_rules.mk
-include simplelink/source/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
SimpleWiFi.out \

EXE_OUTPUTS__QUOTED += \
"SimpleWiFi.out" \

BIN_OUTPUTS += \
SimpleWiFi.hex \

BIN_OUTPUTS__QUOTED += \
"SimpleWiFi.hex" \


# All Target
all: SimpleWiFi.out secondary-outputs

# Tool invocations
SimpleWiFi.out: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU Linker'
	"/Applications/ti/ccsv6/tools/compiler/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc" -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DPART_TM4C123GH6PM -O0 -funsigned-char -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -specs="nosys.specs" -Wl,-Map,"SimpleWiFi.map" -o"SimpleWiFi.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

SimpleWiFi.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: GNU Objcopy Utility'
	"/Applications/ti/ccsv6/tools/compiler/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-objcopy"  $(EXE_OUTPUTS__QUOTED) "SimpleWiFi.hex"
	@echo 'Finished building: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.o" "tm4c123gh6pm_startup_ccs_gcc.o" "ERRH/ERRH.o" "HAL/SPID.o" "HAL/SRHL.o" "HAL/TIMD.o" "HAL/board.o" "cmsis/cmsis_nvic.o" "cmsis/system_LM4F.o" "simplelink/source/device.o" "simplelink/source/driver.o" "simplelink/source/flowcont.o" "simplelink/source/fs.o" "simplelink/source/netapp.o" "simplelink/source/netcfg.o" "simplelink/source/nonos.o" "simplelink/source/socket.o" "simplelink/source/spawn.o" "simplelink/source/wlan.o" 
	-$(RM) "main.d" "tm4c123gh6pm_startup_ccs_gcc.d" "ERRH/ERRH.d" "HAL/SPID.d" "HAL/SRHL.d" "HAL/TIMD.d" "HAL/board.d" "cmsis/cmsis_nvic.d" "cmsis/system_LM4F.d" "simplelink/source/device.d" "simplelink/source/driver.d" "simplelink/source/flowcont.d" "simplelink/source/fs.d" "simplelink/source/netapp.d" "simplelink/source/netcfg.d" "simplelink/source/nonos.d" "simplelink/source/socket.d" "simplelink/source/spawn.d" "simplelink/source/wlan.d" 
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-arm-none-eabi-size SimpleWiFi.out
	-@echo ' '

secondary-outputs: $(BIN_OUTPUTS)

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets

