################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/app_ble.c \
../Src/app_entry.c \
../Src/hw_ipcc.c \
../Src/hw_lpm.c \
../Src/hw_timerserver.c \
../Src/p2p_server_app.c \
../Src/stm32wbxx_hal_msp.c \
../Src/stm32wbxx_it.c \
../Src/syscalls.c \
../Src/system_stm32wbxx.c 

CPP_SRCS += \
../Src/AS1105.cpp \
../Src/Box.cpp \
../Src/Face1.cpp \
../Src/Face2.cpp \
../Src/Face4.cpp \
../Src/Face8.cpp \
../Src/main.cpp 

OBJS += \
./Src/AS1105.o \
./Src/Box.o \
./Src/Face1.o \
./Src/Face2.o \
./Src/Face4.o \
./Src/Face8.o \
./Src/app_ble.o \
./Src/app_entry.o \
./Src/hw_ipcc.o \
./Src/hw_lpm.o \
./Src/hw_timerserver.o \
./Src/main.o \
./Src/p2p_server_app.o \
./Src/stm32wbxx_hal_msp.o \
./Src/stm32wbxx_it.o \
./Src/syscalls.o \
./Src/system_stm32wbxx.o 

C_DEPS += \
./Src/app_ble.d \
./Src/app_entry.d \
./Src/hw_ipcc.d \
./Src/hw_lpm.d \
./Src/hw_timerserver.d \
./Src/p2p_server_app.d \
./Src/stm32wbxx_hal_msp.d \
./Src/stm32wbxx_it.d \
./Src/syscalls.d \
./Src/system_stm32wbxx.d 

CPP_DEPS += \
./Src/AS1105.d \
./Src/Box.d \
./Src/Face1.d \
./Src/Face2.d \
./Src/Face4.d \
./Src/Face8.d \
./Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed="__attribute__((__packed__))"' -DUSE_HAL_DRIVER -DSTM32WB55xx '-DOPENTHREAD_CONFIG_FILE=<openthread_api_config_ftd.h>' -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/STM32WBxx_HAL_Driver/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/STM32WBxx_HAL_Driver/Inc/Legacy" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/CMSIS/Device/ST/STM32WBxx/Include" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/CMSIS/Include" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread/tl" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread/shci" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/utilities" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc/core" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Src/core" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Src/blesvc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc/blesvc"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed="__attribute__((__packed__))"' -DUSE_HAL_DRIVER -DSTM32WB55xx '-DOPENTHREAD_CONFIG_FILE=<openthread_api_config_ftd.h>' -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/STM32WBxx_HAL_Driver/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/STM32WBxx_HAL_Driver/Inc/Legacy" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/CMSIS/Device/ST/STM32WBxx/Include" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Drivers/CMSIS/Include" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread/tl" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/interface/patterns/ble_thread/shci" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/utilities" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc/core" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Src/core" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Src/blesvc" -I"/Users/ulyssevautier/Documents/Git/ody-box/sw/stm_workspace/ody_box/Middlewares/ST/STM32_WPAN/ble/core/Inc/blesvc"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


