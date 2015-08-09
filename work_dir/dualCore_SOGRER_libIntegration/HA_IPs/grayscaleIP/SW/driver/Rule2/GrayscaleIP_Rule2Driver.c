// TODO: Implement this driver!!



#include "GrayscaleIP_Driver_template.h"


void localWriteReg(unsigned int addr, unsigned int mask, unsigned int value) {
    // only write to reg if mask != 0
    if (mask | 0x0 != 0x0) {
    *((volatile unsigned int *)(addr)) = (*(volatile unsigned int *)(addr) & ~(mask)) | value;
	}
}


unsigned int localReadReg(unsigned int addr) {
    return (unsigned int) *((volatile unsigned int *)(addr));
}


// updates the Grayscale IP peripheral's memory mapped registers with content provided in mode 
void SetHAMode(RegMap mode, unsigned int baseaddr) {
	localWriteReg(baseaddr + mode.AP_CTRL.offset, mode.AP_CTRL.mask, mode.AP_CTRL.value);
	localWriteReg(baseaddr + mode.GIE.offset, mode.GIE.mask, mode.GIE.value);
	localWriteReg(baseaddr + mode.IER.offset, mode.IER.mask, mode.IER.value);
	localWriteReg(baseaddr + mode.ISR.offset, mode.ISR.mask, mode.ISR.value);
	localWriteReg(baseaddr + mode.ROWS_DATA.offset, mode.ROWS_DATA.mask, mode.ROWS_DATA.value);
	localWriteReg(baseaddr + mode.COLS_DATA.offset, mode.COLS_DATA.mask, mode.COLS_DATA.value);
}

// the IP supplier should make necessary modifications to initialize the Grayscale IP here
void GrayscaleIP_Driver_initialize(GrayscaleIPDriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime) {
    SetHAMode(InitMode, InstancePtr->baseaddr);          
}


// the IP supplier should make necessary modifications to trigger the Grayscale IP to start processing here
void GrayscaleIP_Driver_start(GrayscaleIPDriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime) {
    SetHAMode(StartMode, InstancePtr->baseaddr);
}


// the IP supplier should make necessary modifications to stop the Grayscale IP processing here
void GrayscaleIP_Driver_stop(GrayscaleIPDriverInstance *InstancePtr) {
    SetHAMode(StopMode, InstancePtr->baseaddr);
}

// the IP supplier should make necessary modifications to inform about the Busy status here
bool GrayscaleIP_Driver_isBusy(GrayscaleIPDriverInstance *InstancePtr) {    
    return (bool) ((localReadReg(InstancePtr->baseaddr + BUSY_STATUS_REG_offset) >> BUSY_STATUS_REG_bit) & 1);
}









