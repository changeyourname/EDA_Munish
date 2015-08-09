// this is a template file which will be auto-generated by GRIP framework by using the IP-Xact description provided by this IP 
// The IP supplier can then fill in this template to generate his driver targeting a specific platform

// NOTE: for now it is simulated i.e it is a sample representation of the actual template file which doesnt contain all the registers of this IP


#include "VDMAIP_Driver_template.h"

// this function wrties to the memory mapped peripheral register @addr
void localWriteReg(unsigned int addr, unsigned int mask, unsigned int value) {
    // only write to reg if mask != 0
    if (mask | 0x0 != 0x0) {
        *((volatile unsigned int *)(addr)) = (*(volatile unsigned int *)(addr) & ~(mask)) | value;
    }
}


// this function reads from the memory mapped peripheral register @addr
unsigned int localReadReg(unsigned int addr) {
    return (unsigned int) *((volatile unsigned int *)(addr));
}


// updates the VDMA IP peripheral's memory mapped registers with content provided in mode 
void SetHAMode(RegMap mode, unsigned int baseaddr) {
    localWriteReg(baseaddr + mode.MM2S_DMACR.offset, mode.MM2S_DMACR.mask, mode.MM2S_DMACR.value);
    //      ...     //  NOTE: not shown here for simplicity
    localWriteReg(baseaddr + mode.S2MM_DMACR.offset, mode.S2MM_DMACR.mask, mode.S2MM_DMACR.value);
    localWriteReg(baseaddr + mode.S2MM_DMASR.offset, mode.S2MM_DMASR.mask, mode.S2MM_DMASR.value);
    //      ...     //  NOTE: not shown here for simplicity    
    localWriteReg(baseaddr + mode.MM2S_VSIZE.offset, mode.MM2S_VSIZE.mask, mode.MM2S_VSIZE.value);        
    localWriteReg(baseaddr + mode.MM2S_HSIZE.offset, mode.MM2S_HSIZE.mask, mode.MM2S_HSIZE.value);        
    localWriteReg(baseaddr + mode.MM2S_FRMDLY_STRIDE.offset, mode.MM2S_FRMDLY_STRIDE.mask, mode.MM2S_FRMDLY_STRIDE.value);        
    localWriteReg(baseaddr + mode.MM2S_START_ADDRESS1.offset, mode.MM2S_START_ADDRESS1.mask, mode.MM2S_START_ADDRESS1.value);        
    localWriteReg(baseaddr + mode.MM2S_START_ADDRESS2.offset, mode.MM2S_START_ADDRESS2.mask, mode.MM2S_START_ADDRESS2.value);        
    localWriteReg(baseaddr + mode.MM2S_START_ADDRESS3.offset, mode.MM2S_START_ADDRESS3.mask, mode.MM2S_START_ADDRESS3.value);        
    //      ...     //  NOTE: not shown here for simplicity
    localWriteReg(baseaddr + mode.S2MM_VSIZE.offset, mode.S2MM_VSIZE.mask, mode.S2MM_VSIZE.value);        
    localWriteReg(baseaddr + mode.S2MM_HSIZE.offset, mode.S2MM_HSIZE.mask, mode.S2MM_HSIZE.value);        
    localWriteReg(baseaddr + mode.S2MM_FRMDLY_STRIDE.offset, mode.S2MM_FRMDLY_STRIDE.mask, mode.S2MM_FRMDLY_STRIDE.value);        
    localWriteReg(baseaddr + mode.S2MM_START_ADDRESS1.offset, mode.S2MM_START_ADDRESS1.mask, mode.S2MM_START_ADDRESS1.value);        
    localWriteReg(baseaddr + mode.S2MM_START_ADDRESS2.offset, mode.S2MM_START_ADDRESS2.mask, mode.S2MM_START_ADDRESS2.value);        
    localWriteReg(baseaddr + mode.S2MM_START_ADDRESS3.offset, mode.S2MM_START_ADDRESS3.mask, mode.S2MM_START_ADDRESS3.value);        
    //      ...     //  NOTE: not shown here for simplicity                           
}



// the IP supplier should make necessary modifications to initialize the VDMA IP here
void VDMAIP_Driver_initialize(VDMAIPDriverInstance *InstancePtr) {
    // Initializng the IP module   
    SetHAMode(InitMode, baseaddr);    
}


// the IP supplier should make necessary modifications to trigger the VDMA IP to start processing here
void GrayscaleIP_Rule1Driver_start(VDMAIPDriverInstance *InstancePtr) {
    SetHAMode(StartMode, InstancePtr->baseaddr);
}


// the IP supplier should make necessary modifications to stop the VDMA IP processing here
void VDMAIP_Driver_stop(VDMAIPDriverInstance *InstancePtr) {
    SetHAMode(StopMode, InstancePtr->baseaddr);
}

// the IP supplier should make necessary modifications to inform about the Busy status here
bool VDMAIP_Driver_isBusy(VDMAIPDriverInstance *InstancePtr) {    
    return (bool) ((localReadReg(InstancePtr->baseaddr + BUSY_STATUS_REG_offset) >> BUSY_STATUS_REG_bit) & 1);
}









// NOTE: everything seems to be auto-generatable!!












