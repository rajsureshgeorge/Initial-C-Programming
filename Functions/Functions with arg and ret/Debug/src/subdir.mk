################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Functions\ with\ arg\ and\ ret.c 

OBJS += \
./src/Functions\ with\ arg\ and\ ret.o 

C_DEPS += \
./src/Functions\ with\ arg\ and\ ret.d 


# Each subdirectory must supply rules for building sources it contributes
src/Functions\ with\ arg\ and\ ret.o: ../src/Functions\ with\ arg\ and\ ret.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Functions with arg and ret.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


