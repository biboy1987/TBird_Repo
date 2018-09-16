################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include SW/OS/main/Src/subdir.mk
-include SW/OS/BT_CentralEventDispatcher/Src/subdir.mk
-include SW/HAL/TimerDriver/BT_LifeTimer/Src/subdir.mk
-include SW/HAL/TimerDriver/BT_GPTimer/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
first_AVR_via_Eclipse.lss \

FLASH_IMAGE += \
first_AVR_via_Eclipse.hex \

EEPROM_IMAGE += \
first_AVR_via_Eclipse.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: first_AVR_via_Eclipse.elf secondary-outputs

# Tool invocations
first_AVR_via_Eclipse.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,first_AVR_via_Eclipse.map -mmcu=atmega128 -o "first_AVR_via_Eclipse.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

first_AVR_via_Eclipse.lss: first_AVR_via_Eclipse.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S first_AVR_via_Eclipse.elf  >"first_AVR_via_Eclipse.lss"
	@echo 'Finished building: $@'
	@echo ' '

first_AVR_via_Eclipse.hex: first_AVR_via_Eclipse.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex first_AVR_via_Eclipse.elf  "first_AVR_via_Eclipse.hex"
	@echo 'Finished building: $@'
	@echo ' '

first_AVR_via_Eclipse.eep: first_AVR_via_Eclipse.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex first_AVR_via_Eclipse.elf  "first_AVR_via_Eclipse.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: first_AVR_via_Eclipse.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega128 first_AVR_via_Eclipse.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) first_AVR_via_Eclipse.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
