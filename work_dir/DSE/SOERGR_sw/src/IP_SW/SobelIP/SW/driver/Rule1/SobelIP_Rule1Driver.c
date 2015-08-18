// this driver corresponds to Grayscale IP configuration corresponding to GRIP Rule 1 i.e Grayscale IP integrated with AXI-VDMA 
// it is generated by modifying the auto-generated template

#include "SobelIP_Rule1Driver.h"

SobelIPRule1RegMap SobelIPRule1InitMode = {
											.AP_CTRL = {.offset = 0x00, .mask = 0x00000000, .value = 0xffffffff},
											.GIE = {.offset = 0x04, .mask = 0x00000001, .value = 0x00000000},
											.IER = {.offset = 0x08, .mask = 0x00000001, .value = 0x00000000},
											.ISR = {.offset = 0x0c, .mask = 0x00000000, .value = 0xffffffff},
											.ROWS_DATA = {.offset = 0x14, .mask = 0x00000000, .value = 0xffffffff},
											.COLS_DATA = {.offset = 0x1c, .mask = 0x00000000, .value = 0xffffffff}
									      };


SobelIPRule1RegMap SobelIPRule1StartMode = {
											.AP_CTRL = {.offset = 0x00, .mask = 0x00000000, .value = 0xffffffff},
											.GIE = {.offset = 0x04, .mask = 0x00000000, .value = 0xffffffff},
											.IER = {.offset = 0x08, .mask = 0x00000000, .value = 0xffffffff},
											.ISR = {.offset = 0x0c, .mask = 0x00000000, .value = 0xffffffff},
											.ROWS_DATA = {.offset = 0x14, .mask = 0x00000000, .value = 0xffffffff},
											.COLS_DATA = {.offset = 0x1c, .mask = 0x00000000, .value = 0xffffffff}
										   };


SobelIPRule1RegMap SobelIPRule1StopMode = {
											.AP_CTRL = {.offset = 0x00, .mask = 0x00000001, .value = 0x00000000},
											.GIE = {.offset = 0x04, .mask = 0x00000000, .value = 0xffffffff},
											.IER = {.offset = 0x08, .mask = 0x00000000, .value = 0xffffffff},
											.ISR = {.offset = 0x0c, .mask = 0x00000000, .value = 0xffffffff},
											.ROWS_DATA = {.offset = 0x14, .mask = 0x00000000, .value = 0xffffffff},
											.COLS_DATA = {.offset = 0x1c, .mask = 0x00000000, .value = 0xffffffff}
										  };
												  


static void localWriteReg(unsigned int addr, unsigned int mask, unsigned int value) {
    // only write to reg if mask != 0
    if ((mask | 0x0) != 0x0) {
    *((volatile unsigned int *)(addr)) = (*(volatile unsigned int *)(addr) & ~(mask)) | value;
	}
}


static unsigned int localReadReg(unsigned int addr) {
    return (unsigned int) *((volatile unsigned int *)(addr));
}


// updates the Sobel IP peripheral's memory mapped registers with content provided in mode 
static void SetHAMode(SobelIPRule1RegMap mode, unsigned int baseaddr) {
	localWriteReg(baseaddr + mode.AP_CTRL.offset, mode.AP_CTRL.mask, mode.AP_CTRL.value);
	localWriteReg(baseaddr + mode.GIE.offset, mode.GIE.mask, mode.GIE.value);
	localWriteReg(baseaddr + mode.IER.offset, mode.IER.mask, mode.IER.value);
	localWriteReg(baseaddr + mode.ISR.offset, mode.ISR.mask, mode.ISR.value);
	localWriteReg(baseaddr + mode.ROWS_DATA.offset, mode.ROWS_DATA.mask, mode.ROWS_DATA.value);
	localWriteReg(baseaddr + mode.COLS_DATA.offset, mode.COLS_DATA.mask, mode.COLS_DATA.value);
}


void SobelIP_Rule1Driver_initialize(SobelIPRule1DriverInstance *InstancePtr, XScuGic *InterruptController, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr, unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime) {
    SobelIPRule1InitMode.ROWS_DATA.mask = 0xffffffff;
    SobelIPRule1InitMode.ROWS_DATA.value = verticalActiveTime;
    
    SobelIPRule1InitMode.COLS_DATA.mask = 0xffffffff;
    SobelIPRule1InitMode.COLS_DATA.value = horizontalActiveTime;
    // initializing the IP module
    SetHAMode(SobelIPRule1InitMode, InstancePtr->baseaddr);   

    localWriteReg(InstancePtr->baseaddr + 0x0, 0x00000081, 0x81);

    // for this rule we also need to initialize the connected VDMA as well
    SOBELIP_VDMA_Driver_initialize(&InstancePtr->vdmaDriver, InterruptController);
}



void SobelIP_Rule1Driver_start(SobelIPRule1DriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr, unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime) {
	SetHAMode(SobelIPRule1StartMode, InstancePtr->baseaddr);

    SOBELIP_VDMA_Driver_start(&InstancePtr->vdmaDriver, ImgIn_BaseAddr, ImgOut_BaseAddr, width, height, horizontalActiveTime, verticalActiveTime);    
}



void SobelIP_Rule1Driver_stop(SobelIPRule1DriverInstance *InstancePtr) {
	// stopping SobelIP
    SetHAMode(SobelIPRule1StopMode, InstancePtr->baseaddr);

	// stopping VDMA as well
	SOBELIP_VDMA_Driver_stop(&InstancePtr->vdmaDriver);
}



bool SobelIP_Rule1Driver_isBusy(SobelIPRule1DriverInstance *InstancePtr) {
	return SOBELIP_VDMA_Driver_isBusy(&InstancePtr->vdmaDriver);
}





