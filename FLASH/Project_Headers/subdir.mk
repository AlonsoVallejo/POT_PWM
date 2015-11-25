################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Project_Headers/ADC.c" \
"../Project_Headers/tpm.c" \

C_SRCS += \
../Project_Headers/ADC.c \
../Project_Headers/tpm.c \

OBJS += \
./Project_Headers/ADC.o \
./Project_Headers/tpm.o \

C_DEPS += \
./Project_Headers/ADC.d \
./Project_Headers/tpm.d \

OBJS_QUOTED += \
"./Project_Headers/ADC.o" \
"./Project_Headers/tpm.o" \

C_DEPS_QUOTED += \
"./Project_Headers/ADC.d" \
"./Project_Headers/tpm.d" \

OBJS_OS_FORMAT += \
./Project_Headers/ADC.o \
./Project_Headers/tpm.o \


# Each subdirectory must supply rules for building sources it contributes
Project_Headers/ADC.o: ../Project_Headers/ADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/ADC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/ADC.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Headers/tpm.o: ../Project_Headers/tpm.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/tpm.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/tpm.o"
	@echo 'Finished building: $<'
	@echo ' '


