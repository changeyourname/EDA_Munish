// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2013.3
// Copyright (C) 2013 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XIMAGE_FILTER_H
#define XIMAGE_FILTER_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#include "ximage_filter_CONTROL_BUS.h"

/**************************** Type Definitions ******************************/
typedef struct {
    u16 DeviceId; // currently not used
    u32 Control_bus_BaseAddress;
} XImage_filter_Config;

typedef struct {
    u32 Control_bus_BaseAddress;
    u32 IsReady;
} XImage_filter;

/***************** Macros (Inline Functions) Definitions *********************/
#define XImage_filter_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

#define XImage_filter_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

/************************** Function Prototypes *****************************/
int XImage_filter_Initialize(XImage_filter *InstancePtr, XImage_filter_Config *ConfigPtr);

void XImage_filter_Start(XImage_filter *InstancePtr);
u32 XImage_filter_IsDone(XImage_filter *InstancePtr);
u32 XImage_filter_IsIdle(XImage_filter *InstancePtr);
u32 XImage_filter_IsReady(XImage_filter *InstancePtr);
void XImage_filter_EnableAutoRestart(XImage_filter *InstancePtr);
void XImage_filter_DisableAutoRestart(XImage_filter *InstancePtr);

void XImage_filter_SetRows(XImage_filter *InstancePtr, u32 Data);
u32 XImage_filter_GetRows(XImage_filter *InstancePtr);
void XImage_filter_SetCols(XImage_filter *InstancePtr, u32 Data);
u32 XImage_filter_GetCols(XImage_filter *InstancePtr);

void XImage_filter_InterruptGlobalEnable(XImage_filter *InstancePtr);
void XImage_filter_InterruptGlobalDisable(XImage_filter *InstancePtr);
void XImage_filter_InterruptEnable(XImage_filter *InstancePtr, u32 Mask);
void XImage_filter_InterruptDisable(XImage_filter *InstancePtr, u32 Mask);
void XImage_filter_InterruptClear(XImage_filter *InstancePtr, u32 Mask);
u32 XImage_filter_InterruptGetEnabled(XImage_filter *InstancePtr);
u32 XImage_filter_InterruptGetStatus(XImage_filter *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
