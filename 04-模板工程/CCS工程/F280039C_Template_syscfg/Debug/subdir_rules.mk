################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-882849617: ../c2000.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"D:/Program/ti/sysconfig_1.16.2/sysconfig_cli.bat" -s "D:/Program/ti/ccs1220/C2000Ware_4_03_00_00/.metadata/sdk.json" -d "F28003x" --script "E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/c2000.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-882849617 ../c2000.syscfg
syscfg/board.h: build-882849617
syscfg/board.cmd.genlibs: build-882849617
syscfg/board.opt: build-882849617
syscfg/pinmux.csv: build-882849617
syscfg/epwm.dot: build-882849617
syscfg/c2000ware_libraries.cmd.genlibs: build-882849617
syscfg/c2000ware_libraries.opt: build-882849617
syscfg/c2000ware_libraries.c: build-882849617
syscfg/c2000ware_libraries.h: build-882849617
syscfg/clocktree.h: build-882849617
syscfg/: build-882849617

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/Program/ti/ccs1220/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcrc --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template" --include_path="D:/Program/ti/ccs1220/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/driverlib/" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/device_support/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/Debug/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/Program/ti/ccs1220/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcrc --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template" --include_path="D:/Program/ti/ccs1220/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/driverlib/" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/device_support/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


