################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ddr_init.c \
../src/ff.c \
../src/image_mover.c \
../src/main.c \
../src/mmc.c \
../src/nand.c \
../src/nor.c \
../src/pcap.c \
../src/ps7_init.c \
../src/qspi.c \
../src/sd.c \
../src/uart.c 

LD_SRCS += \
../src/lscript.ld 

S_UPPER_SRCS += \
../src/fsbl_handoff.S 

OBJS += \
./src/ddr_init.o \
./src/ff.o \
./src/fsbl_handoff.o \
./src/image_mover.o \
./src/main.o \
./src/mmc.o \
./src/nand.o \
./src/nor.o \
./src/pcap.o \
./src/ps7_init.o \
./src/qspi.o \
./src/sd.o \
./src/uart.o 

C_DEPS += \
./src/ddr_init.d \
./src/ff.d \
./src/image_mover.d \
./src/main.d \
./src/mmc.d \
./src/nand.d \
./src/nor.d \
./src/pcap.d \
./src/ps7_init.d \
./src/qspi.d \
./src/sd.d \
./src/uart.d 

S_UPPER_DEPS += \
./src/fsbl_handoff.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: ARM gcc compiler
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../zynq_fsbl_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo Finished building: $<
	@echo ' '

src/%.o: ../src/%.S
	@echo Building file: $<
	@echo Invoking: ARM gcc compiler
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../zynq_fsbl_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo Finished building: $<
	@echo ' '

