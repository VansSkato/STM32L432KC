################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSW/MCAL/MCU/Mcu.c 

OBJS += \
./BSW/MCAL/MCU/Mcu.o 

C_DEPS += \
./BSW/MCAL/MCU/Mcu.d 


# Each subdirectory must supply rules for building sources it contributes
BSW/MCAL/MCU/%.o BSW/MCAL/MCU/%.su BSW/MCAL/MCU/%.cyclo: ../BSW/MCAL/MCU/%.c BSW/MCAL/MCU/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_L432KC -DSTM32L4 -DSTM32 -DSTM32L432KCUx -c -I../Inc -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/BSW/MCAL/DIO" -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/BSW/MCAL/MCU" -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/BSW/MCAL/PORT" -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/BSW/MCAL/ADC" -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-BSW-2f-MCAL-2f-MCU

clean-BSW-2f-MCAL-2f-MCU:
	-$(RM) ./BSW/MCAL/MCU/Mcu.cyclo ./BSW/MCAL/MCU/Mcu.d ./BSW/MCAL/MCU/Mcu.o ./BSW/MCAL/MCU/Mcu.su

.PHONY: clean-BSW-2f-MCAL-2f-MCU

