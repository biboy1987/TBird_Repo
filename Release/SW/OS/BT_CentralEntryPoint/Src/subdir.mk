################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SW/OS/BT_CentralEntryPoint/Src/main.c 

OBJS += \
./SW/OS/BT_CentralEntryPoint/Src/main.o 

C_DEPS += \
./SW/OS/BT_CentralEntryPoint/Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
SW/OS/BT_CentralEntryPoint/Src/%.o: ../SW/OS/BT_CentralEntryPoint/Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega128 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


