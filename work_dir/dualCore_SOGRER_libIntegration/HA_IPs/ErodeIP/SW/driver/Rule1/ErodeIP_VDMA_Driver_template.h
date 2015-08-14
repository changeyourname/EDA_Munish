// should be auto-generated


#ifndef __ERODEIP_VDMA_DRIVER_TEMPLATE_H__
#define __ERODEIP_VDMA_DRIVER_TEMPLATE_H__

#include "xscugic.h"

#define bool unsigned char


typedef struct {
    unsigned int baseaddr;
    bool busy;
    unsigned int intr_id;
} ERODEIP_VDMADriverInstance;


typedef struct {
    unsigned int offset;
    unsigned int value;
    unsigned int mask;
} ERODEIP_VDMARegType;




// register map for VDMA IP registers
typedef struct {
    // actual Xilinx AXI-VDMA IP has ~55 registers.....for now only a sample of registers are shown to provide an idea
    // only registers important for IP use are shown here...but in actual auto-generated file, all the registers will be present    
	ERODEIP_VDMARegType MM2S_DMACR;
    //      ...     //  NOTE: not shown here for simplicity
	ERODEIP_VDMARegType S2MM_DMACR;
	ERODEIP_VDMARegType S2MM_DMASR;
    //      ...     //  NOTE: not shown here for simplicity
	ERODEIP_VDMARegType MM2S_VSIZE;
	ERODEIP_VDMARegType MM2S_HSIZE;
	ERODEIP_VDMARegType MM2S_FRMDLY_STRIDE;
	ERODEIP_VDMARegType MM2S_START_ADDRESS1;
	ERODEIP_VDMARegType MM2S_START_ADDRESS2;
	ERODEIP_VDMARegType MM2S_START_ADDRESS3;
    //      ...     //  NOTE: not shown here for simplicity
	ERODEIP_VDMARegType S2MM_VSIZE;
	ERODEIP_VDMARegType S2MM_HSIZE;
	ERODEIP_VDMARegType S2MM_FRMDLY_STRIDE;
	ERODEIP_VDMARegType S2MM_START_ADDRESS1;
	ERODEIP_VDMARegType S2MM_START_ADDRESS2;
	ERODEIP_VDMARegType S2MM_START_ADDRESS3;
    //      ...     //  NOTE: not shown here for simplicity
} ERODEIP_VDMARegMap;


// API to configure VDMA_IP
void ERODEIP_VDMA_Driver_initialize(ERODEIP_VDMADriverInstance *InstancePtr, XScuGic *InterruptController);
void ERODEIP_VDMA_Driver_start(ERODEIP_VDMADriverInstance *InstancePtr);
void ERODEIP_VDMA_Driver_stop(ERODEIP_VDMADriverInstance *InstancePtr);
bool ERODEIP_VDMA_Driver_isBusy(ERODEIP_VDMADriverInstance *InstancePtr);
void ERODEIP_VDMA_Driver_ISR(void *baseaddr_p);




#endif 





    
    
    
    
    
    
    
    
