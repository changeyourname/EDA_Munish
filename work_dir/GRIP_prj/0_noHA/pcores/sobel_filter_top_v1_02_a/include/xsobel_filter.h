// ==============================================================
// File generated by AutoESL - High-Level Synthesis System (C, C++, SystemC)
// Version: 2012.1
// Copyright (C) 2012 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XSOBEL_FILTER_H
#define XSOBEL_FILTER_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#include "xsobel_filter_CONTROL_BUS.h"

/**************************** Type Definitions ******************************/
typedef struct {
    u16 DeviceId; // currently not used
    u32 Control_bus_BaseAddress;
} XSobel_filter_Config;

typedef struct {
    u32 Control_bus_BaseAddress;
    u32 IsReady;
} XSobel_filter;

/***************** Macros (Inline Functions) Definitions *********************/
#define XSobel_filter_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

#define XSobel_filter_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

/************************** Function Prototypes *****************************/
int XSobel_filter_Initialize(XSobel_filter *InstancePtr, XSobel_filter_Config *ConfigPtr);

void XSobel_filter_Start(XSobel_filter *InstancePtr);
u32 XSobel_filter_IsDone(XSobel_filter *InstancePtr);
u32 XSobel_filter_IsIdle(XSobel_filter *InstancePtr);

void XSobel_filter_SetRows(XSobel_filter *InstancePtr, u32 Data);
u32 XSobel_filter_GetRows(XSobel_filter *InstancePtr);
void XSobel_filter_SetCols(XSobel_filter *InstancePtr, u32 Data);
u32 XSobel_filter_GetCols(XSobel_filter *InstancePtr);

void XSobel_filter_InterruptGlobalEnable(XSobel_filter *InstancePtr);
void XSobel_filter_InterruptGlobalDisable(XSobel_filter *InstancePtr);
void XSobel_filter_InterruptEnable(XSobel_filter *InstancePtr, u32 Mask);
void XSobel_filter_InterruptDisable(XSobel_filter *InstancePtr, u32 Mask);
void XSobel_filter_InterruptClear(XSobel_filter *InstancePtr, u32 Mask);
u32 XSobel_filter_InterruptGetEnabled(XSobel_filter *InstancePtr);
u32 XSobel_filter_InterruptGetStatus(XSobel_filter *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
