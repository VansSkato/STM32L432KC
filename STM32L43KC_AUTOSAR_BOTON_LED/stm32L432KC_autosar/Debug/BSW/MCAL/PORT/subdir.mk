################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSW/MCAL/PORT/port.c 

OBJS += \
./BSW/MCAL/PORT/port.o 

C_DEPS += \
./BSW/MCAL/PORT/port.d 


# Each subdirectory must supply rules for building sources it contributes
BSW/MCAL/PORT/%.o BSW/MCAL/PORT/%.su BSW/MCAL/PORT/%.cyclo: ../BSW/MCAL/PORT/%.c BSW/MCAL/PORT/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_L432KC -DSTM32L4 -DSTM32 -DSTM32L432KCUx -c -I../Inc -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/BSW/MCAL/DIO" -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/BSW/MCAL/MCU" -I"C:/Users/emili/STM32CubeIDE/workspace_1.19.0/stm32L432KC_autosar/BSW/MCAL/PORT" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-BSW-2f-MCAL-2f-PORT

clean-BSW-2f-MCAL-2f-PORT:
	-$(RM) ./BSW/MCAL/PORT/port.cyclo ./BSW/MCAL/PORT/port.d ./BSW/MCAL/PORT/port.o ./BSW/MCAL/PORT/port.su

.PHONY: clean-BSW-2f-MCAL-2f-PORT

