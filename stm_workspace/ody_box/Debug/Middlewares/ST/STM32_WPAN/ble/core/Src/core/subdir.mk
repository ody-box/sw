################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_gap_aci.c \
../Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_gatt_aci.c \
../Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_hal_aci.c \
../Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_hci_le.c \
../Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_l2cap_aci.c \
../Middlewares/ST/STM32_WPAN/ble/core/Src/core/osal.c 

OBJS += \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_gap_aci.o \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_gatt_aci.o \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_hal_aci.o \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_hci_le.o \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_l2cap_aci.o \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/osal.o 

C_DEPS += \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_gap_aci.d \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_gatt_aci.d \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_hal_aci.d \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_hci_le.d \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/ble_l2cap_aci.d \
./Middlewares/ST/STM32_WPAN/ble/core/Src/core/osal.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/ST/STM32_WPAN/ble/core/Src/core/%.o: ../Middlewares/ST/STM32_WPAN/ble/core/Src/core/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed="__attribute__((__packed__))"' -DUSE_HAL_DRIVER -DSTM32WB55xx '-DOPENTHREAD_CONFIG_FILE=<openthread_api_config_ftd.h>' -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/STM32WBxx_HAL_Driver/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/STM32WBxx_HAL_Driver/Inc/Legacy" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/CMSIS/Device/ST/STM32WBxx/Include" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/CMSIS/Include" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread/tl" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread/shci" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/utilities" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc/core" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Src/core" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Src/blesvc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc/blesvc"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


