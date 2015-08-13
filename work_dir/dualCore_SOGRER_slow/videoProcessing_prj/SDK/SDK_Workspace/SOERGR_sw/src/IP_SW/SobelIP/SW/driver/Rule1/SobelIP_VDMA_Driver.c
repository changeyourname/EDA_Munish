// this driver corresponds to VDMA IP
// it is generated by modifying the auto-generated template

#include "SobelIP_VDMA_Driver.h"


// TODO: don't know how to initialize it properly...just resetting the vdma by seeing application code from Benjamin and hoping its in initialized state at startup
SOBELIP_VDMARegMap SOBELIP_VDMAInitMode = {
								.MM2S_DMACR = {.offset = 0x00, .mask = 0x00000004, .value = 0x00000004},
								//      ...     //  NOTE: not shown here for simplicity
								.S2MM_DMACR = {.offset = 0x30, .mask = 0x00000004, .value = 0x00000004},
								.S2MM_DMASR = {.offset = 0x34, .mask = 0x00000000, .value = 0xffffffff},
								//      ...     //  NOTE: not shown here for simplicity
								.MM2S_VSIZE = {.offset = 0x50, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_HSIZE = {.offset = 0x54, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_FRMDLY_STRIDE  = {.offset = 0x58, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS1 = {.offset = 0x5c, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS2 = {.offset = 0x60, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS3 = {.offset = 0x64, .mask = 0x00000000, .value = 0xffffffff},
								//      ...     //  NOTE: not shown here for simplicity
								.S2MM_VSIZE = {.offset = 0xa0, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_HSIZE = {.offset = 0xa4, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_FRMDLY_STRIDE  = {.offset = 0xa8, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS1 = {.offset = 0xac, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS2 = {.offset = 0xb0, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS3 = {.offset = 0xb4, .mask = 0x00000000, .value = 0xffffffff}
								//      ...     //  NOTE: not shown here for simplicity
							  };


SOBELIP_VDMARegMap SOBELIP_VDMAStartMode = {
								.MM2S_DMACR = {.offset = 0x00, .mask = 0xffffffff, .value = 0x00011003},
								//      ...     //  NOTE: not shown here for simplicity
								.S2MM_DMACR = {.offset = 0x30, .mask = 0xffffffff, .value = 0x00011003},
								.S2MM_DMASR = {.offset = 0x34, .mask = 0x00000000, .value = 0xffffffff},
								//      ...     //  NOTE: not shown here for simplicity
								.MM2S_VSIZE = {.offset = 0x50, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_HSIZE = {.offset = 0x54, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_FRMDLY_STRIDE  = {.offset = 0x58, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS1 = {.offset = 0x5c, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS2 = {.offset = 0x60, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS3 = {.offset = 0x64, .mask = 0x00000000, .value = 0xffffffff},
								//      ...     //  NOTE: not shown here for simplicity
								.S2MM_VSIZE = {.offset = 0xa0, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_HSIZE = {.offset = 0xa4, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_FRMDLY_STRIDE  = {.offset = 0xa8, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS1 = {.offset = 0xac, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS2 = {.offset = 0xb0, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS3 = {.offset = 0xb4, .mask = 0x00000000, .value = 0xffffffff}
								//      ...     //  NOTE: not shown here for simplicity
							  };


SOBELIP_VDMARegMap SOBELIP_VDMAStopMode = {
								.MM2S_DMACR = {.offset = 0x00, .mask = 0x00000001, .value = 0x00000000},
								//      ...     //  NOTE: not shown here for simplicity
								.S2MM_DMACR = {.offset = 0x30, .mask = 0x00000001, .value = 0x00000000},
								.S2MM_DMASR = {.offset = 0x34, .mask = 0x00000000, .value = 0xffffffff},
								//      ...     //  NOTE: not shown here for simplicity
								.MM2S_VSIZE = {.offset = 0x50, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_HSIZE = {.offset = 0x54, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_FRMDLY_STRIDE  = {.offset = 0x58, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS1 = {.offset = 0x5c, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS2 = {.offset = 0x60, .mask = 0x00000000, .value = 0xffffffff},
								.MM2S_START_ADDRESS3 = {.offset = 0x64, .mask = 0x00000000, .value = 0xffffffff},
								//      ...     //  NOTE: not shown here for simplicity
								.S2MM_VSIZE = {.offset = 0xA0, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_HSIZE = {.offset = 0xA4, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_FRMDLY_STRIDE  = {.offset = 0xA8, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS1 = {.offset = 0xAc, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS2 = {.offset = 0xB0, .mask = 0x00000000, .value = 0xffffffff},
								.S2MM_START_ADDRESS3 = {.offset = 0xB4, .mask = 0x00000000, .value = 0xffffffff}
								//      ...     //  NOTE: not shown here for simplicity
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


// updates the VDMA IP peripheral's memory mapped registers with content provided in mode 
static void SetHAMode(SOBELIP_VDMARegMap mode, unsigned int baseaddr) {
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




void SOBELIP_VDMA_Driver_initialize(SOBELIP_VDMADriverInstance *InstancePtr, XScuGic *InterruptController) {
	SetHAMode(SOBELIP_VDMAInitMode, InstancePtr->baseaddr);

    // registering this IP's ISR with the Interrupt Controller passed on by the application developer
	int Status = XScuGic_Connect(InterruptController, InstancePtr->intr_id, (Xil_ExceptionHandler) SOBELIP_VDMA_Driver_ISR, (void *) InstancePtr);
	if (Status != XST_SUCCESS) {
		Xil_AssertVoid(0);
	}
	XScuGic_Enable(InterruptController, InstancePtr->intr_id);
}




void SOBELIP_VDMA_Driver_start(SOBELIP_VDMADriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime) {
    SetHAMode(SOBELIP_VDMAStartMode, InstancePtr->baseaddr);

	// MEM2DEV
	localWriteReg(InstancePtr->baseaddr + 0x5c, 0xffffffff, ImgIn_BaseAddr);
	localWriteReg(InstancePtr->baseaddr + 0x60, 0xffffffff, ImgIn_BaseAddr);
	localWriteReg(InstancePtr->baseaddr + 0x64, 0xffffffff, ImgIn_BaseAddr);
	localWriteReg(InstancePtr->baseaddr + 0x58, 0xffffffff, horizontalActiveTime*4);
	localWriteReg(InstancePtr->baseaddr + 0x54, 0xffffffff, horizontalActiveTime*4);
	localWriteReg(InstancePtr->baseaddr + 0x50, 0xffffffff, verticalActiveTime);

	// DEV2MEM
	localWriteReg(InstancePtr->baseaddr + 0xac, 0xffffffff, ImgOut_BaseAddr);
	localWriteReg(InstancePtr->baseaddr + 0xb0, 0xffffffff, ImgOut_BaseAddr);
	localWriteReg(InstancePtr->baseaddr + 0xb4, 0xffffffff, ImgOut_BaseAddr);
	localWriteReg(InstancePtr->baseaddr + 0xa8, 0xffffffff, horizontalActiveTime*4);
	localWriteReg(InstancePtr->baseaddr + 0xa4, 0xffffffff, horizontalActiveTime*4);
	localWriteReg(InstancePtr->baseaddr + 0xa0, 0xffffffff, verticalActiveTime);

	InstancePtr->busy = 1;
}



void SOBELIP_VDMA_Driver_stop(SOBELIP_VDMADriverInstance *InstancePtr) {
    SetHAMode(SOBELIP_VDMAStopMode, InstancePtr->baseaddr);
}


bool SOBELIP_VDMA_Driver_isBusy(SOBELIP_VDMADriverInstance *InstancePtr) {    
    return InstancePtr->busy;
}


void SOBELIP_VDMA_Driver_ISR(void *baseaddr_p) {
	SOBELIP_VDMADriverInstance *InstancePtr = (SOBELIP_VDMADriverInstance *) baseaddr_p;
	localWriteReg(InstancePtr->baseaddr + 0x30, 0x00000004, 0x00000004);

	InstancePtr->busy = 0;
}










// NOTE: everything seems to be auto-generatable!!












