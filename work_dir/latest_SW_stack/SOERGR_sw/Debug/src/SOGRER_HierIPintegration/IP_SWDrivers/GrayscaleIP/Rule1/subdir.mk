################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/driver.c \
../src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/function.c 

OBJS += \
./src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/driver.o \
./src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/function.o 

C_DEPS += \
./src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/driver.d \
./src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/function.d 


# Each subdirectory must supply rules for building sources it contributes
src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/%.o: ../src/SOGRER_HierIPintegration/IP_SWDrivers/GrayscaleIP/Rule1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -I"/nfs/TUEIEDAprojects/SoCOptimization/munish/nonOS_zedDrivers/zynq_workspace/videoProcessing_prj_HierDri/SDK/SDK_Workspace/SOERGR_sw/src/inc" -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

