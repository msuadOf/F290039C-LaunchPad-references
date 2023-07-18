################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
driverlib/%.obj: ../driverlib/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/Program/ti/ccs1220/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcrc --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template" --include_path="D:/Program/ti/ccs1220/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/driverlib/" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/device_support/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="driverlib/$(basename $(<F)).d_raw" --include_path="E:/TI/C2000/F280039C_LaunchPad/workplace_lab/F280039C_Template/Debug/syscfg" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


