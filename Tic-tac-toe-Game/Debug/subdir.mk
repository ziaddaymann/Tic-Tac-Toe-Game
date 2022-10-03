################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Tic-tac-toe-Game.c \
../function.c 

C_DEPS += \
./Tic-tac-toe-Game.d \
./function.d 

OBJS += \
./Tic-tac-toe-Game.o \
./function.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Tic-tac-toe-Game.d ./Tic-tac-toe-Game.o ./function.d ./function.o

.PHONY: clean--2e-

