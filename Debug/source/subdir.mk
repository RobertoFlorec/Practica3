################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/GPIO.c \
../source/NVIC.c \
../source/main.c \
../source/pushButton.c 

OBJS += \
./source/GPIO.o \
./source/NVIC.o \
./source/main.o \
./source/pushButton.o 

C_DEPS += \
./source/GPIO.d \
./source/NVIC.d \
./source/main.d \
./source/pushButton.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCR_INTEGER_PRINTF -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DSDK_OS_BAREMETAL -DFSL_RTOS_BM -DCPU_MK64FN1M0VLL12 -DCPU_MK64FN1M0VLL12_cm4 -D__REDLIB__ -I"/Sistemas_Embebidos/Practica3/P3/source" -I"/Sistemas_Embebidos/Practica3/P3" -I"/Sistemas_Embebidos/Practica3/P3/startup" -I"/Sistemas_Embebidos/Practica3/P3/CMSIS" -I/Users/Roberto/mcuxpresso/SDKPackages/SDK_2/CMSIS/Include -I/Users/Roberto/mcuxpresso/SDKPackages/SDK_2/CMSIS -I/Users/Roberto/mcuxpresso/SDKPackages/SDK_2/devices/MK64F12 -I/Users/Roberto/mcuxpresso/SDKPackages/SDK_2/devices -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


