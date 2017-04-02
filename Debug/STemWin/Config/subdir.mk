################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STemWin/Config/GUIConf.c \
../STemWin/Config/GUI_X.c \
../STemWin/Config/LCDConf_FlexColor_Template.c 

OBJS += \
./STemWin/Config/GUIConf.o \
./STemWin/Config/GUI_X.o \
./STemWin/Config/LCDConf_FlexColor_Template.o 

C_DEPS += \
./STemWin/Config/GUIConf.d \
./STemWin/Config/GUI_X.d \
./STemWin/Config/LCDConf_FlexColor_Template.d 


# Each subdirectory must supply rules for building sources it contributes
STemWin/Config/%.o: ../STemWin/Config/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -D__weak=__attribute__((weak)) -D__packed=__attribute__((__packed__)) -DUSE_HAL_DRIVER -DSTM32L476xx -I"F:/f1/AC6/workspace/project/read/read/lcd" -I"F:/f1/AC6/workspace/project/read/read/Inc" -I"F:/f1/AC6/workspace/project/read/read/STemWin/Config" -I"F:/f1/AC6/workspace/project/read/read/STemWin/inc" -I"F:/f1/AC6/workspace/project/read/read/Drivers/STM32L4xx_HAL_Driver/Inc" -I"F:/f1/AC6/workspace/project/read/read/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy" -I"F:/f1/AC6/workspace/project/read/read/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"F:/f1/AC6/workspace/project/read/read/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


