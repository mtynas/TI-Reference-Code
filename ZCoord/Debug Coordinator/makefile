################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.9.2.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./OSAL_SampleLight.obj" \
"./OnBoard.obj" \
"./ZMain.obj" \
"./cx2538_setup.obj" \
"./cx2538_startup_ccs.obj" \
"./zcl_ha.obj" \
"./zcl_sampleapps_ui.obj" \
"./zcl_samplelight.obj" \
"./zcl_samplelight_data.obj" \
"../cx2538xf53_ccs.cmd" \
$(GEN_CMDS__FLAG) \
-l"C:\Development\Ti\zstack3.1\ZStackLib\Debug Coordinator\ZStackLib_Coord.lib" \
-l"C:\Development\Ti\zstack3.1\ZCoord\Libraries\TIMAC\bin\TIMAC-CC2538.a" \
-l"C:\Development\Ti\zstack3.1\ZCoord\Libraries\CC2538\bin\AllDevice.a" \
-l"C:\Development\Ti\zstack3.1\ZCoord\Libraries\CC2538\bin\Ecc.a" \
-l"C:\Development\Ti\zstack3.1\ZCoord\Libraries\CC2538\bin\Router.a" \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Libraries/TIMAC/bin/subdir_vars.mk
-include Libraries/CC2538/bin/subdir_vars.mk
-include subdir_rules.mk
-include Libraries/TIMAC/bin/subdir_rules.mk
-include Libraries/CC2538/bin/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
ZCoord.out \

EXE_OUTPUTS__QUOTED += \
"ZCoord.out" \

BIN_OUTPUTS += \
ZCoord.hex \

BIN_OUTPUTS__QUOTED += \
"ZCoord.hex" \


# All Target
all: ZCoord.out

# Tool invocations
ZCoord.out: $(OBJS) $(CMD_SRCS) $(A_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.9.2.LTS/bin/armcl" --cmd_file="C:\Development\Ti\zstack3.1\ZCoord\Config\Coordinator.cfg" --cmd_file="C:\Development\Ti\zstack3.1\ZCoord\Config\f8wConfig.cfg" --cmd_file="C:\Development\Ti\zstack3.1\ZCoord\Config\f8wCoord.cfg" --cmd_file="C:\Development\Ti\zstack3.1\ZCoord\Config\f8wRouter.cfg" --cmd_file="C:\Development\Ti\zstack3.1\ZCoord\Config\f8wZCL.cfg"  -mv7M3 --code_state=16 -me --define=ccs --define=DEBUG --define=CC2538_USE_ALTERNATE_INTERRUPT_MAP -g --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --wchar_t=16 --abi=eabi -z -m"ZCoord.map" --heap_size=0 --stack_size=256 -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.9.2.LTS/lib" -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.9.2.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="ZCoord_linkInfo.xml" --rom_model -o "ZCoord.out" $(ORDERED_OBJS) $(A_SRCS)
	@echo 'Finished building target: $@'
	@echo ' '

ZCoord.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.9.2.LTS/bin/armhex"  -o "ZCoord.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "OSAL_SampleLight.pp" "OnBoard.pp" "ZMain.pp" "cx2538_setup.pp" "cx2538_startup_ccs.pp" "zcl_ha.pp" "zcl_sampleapps_ui.pp" "zcl_samplelight.pp" "zcl_samplelight_data.pp" 
	-$(RM) "OSAL_SampleLight.obj" "OnBoard.obj" "ZMain.obj" "cx2538_setup.obj" "cx2538_startup_ccs.obj" "zcl_ha.obj" "zcl_sampleapps_ui.obj" "zcl_samplelight.obj" "zcl_samplelight_data.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

