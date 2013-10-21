################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/LinkedList/LinkedList.cpp \
../src/LinkedList/Node.cpp 

OBJS += \
./src/LinkedList/LinkedList.o \
./src/LinkedList/Node.o 

CPP_DEPS += \
./src/LinkedList/LinkedList.d \
./src/LinkedList/Node.d 


# Each subdirectory must supply rules for building sources it contributes
src/LinkedList/%.o: ../src/LinkedList/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


