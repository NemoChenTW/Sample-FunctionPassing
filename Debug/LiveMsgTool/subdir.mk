################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../LiveMsgTool/LiveMsgTool.cpp 

OBJS += \
./LiveMsgTool/LiveMsgTool.o 

CPP_DEPS += \
./LiveMsgTool/LiveMsgTool.d 


# Each subdirectory must supply rules for building sources it contributes
LiveMsgTool/%.o: ../LiveMsgTool/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


