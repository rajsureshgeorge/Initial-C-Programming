################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/functions\ with\ argument.c 

OBJS += \
./src/functions\ with\ argument.o 

C_DEPS += \
./src/functions\ with\ argument.d 


# Each subdirectory must supply rules for building sources it contributes
src/functions\ with\ argument.o: ../src/functions\ with\ argument.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/functions with argument.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


