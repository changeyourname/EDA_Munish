// this file is going to be auto-generated and later customized by IP supplier..it will get the info from GRIP informing this module of the presence of VDMA IP + Erode IP in the IP subsystem

// this module would then act as a driver for the IP subsystem providing low level functions like _init(), _start(), _stop(), _isBusy() etc using the corresponding
// functions of the individual drivers which are already generated


#ifndef __ERODE_RULE1_DRIVER_H__
#define __ERODE_RULE1_DRIVER_H__

// NOTE: the template generator using info from GRIP knows about the presence of VDMA IP and ErodeIP in the IP subsystem corresponding to this rule in the final architecture
// NOTE: the exact paths to these base IP drivers are to be configurable in the template generator
#include "../Base/ErodeIP_Driver.h"
#include "../../../../VDMAIP/SW/driver/Base/VDMAIP_Driver.h"

// NOTE: need the interrupt controller which is platform specific and will be provided in template generator..again this is configurable targeting a specific platform
#include "xscugic.h"


#define bool unsigned char


typedef struct {
    ErodeIP_DriverInstance _ErodeIP_DriverInstance;
    VDMAIP_DriverInstance _VDMAIP_DriverInstance;
} Erode_Rule1_DriverInstance;



typedef struct {
    ErodeIP_RegMap _ErodeIP_RegMap;
    VDMAIP_RegMap _VDMAIP_RegMap;
} Erode_Rule1_RegMap;



// API for ErodeIP_Driver to use if this rule is applied by GRIP
// NOTE: if any of the functions requires runtime info then their prototype should be matched with _SW() function..for multiple IPs having their own SW implementations then they all should be passed on in a specific order
// NOTE: specific for this case we know VDMAIP has no SW implementation of its own so we only have to pass ErodeIP_SW() arguments if needed
// NOTE: template driver functions would have no SW argument...this is the responsibility of IP supplier to pass these arguments incase they are needed at runtime

void Erode_Rule1Driver_initialize(Erode_Rule1_DriverInstance *InstancePtr, XScuGic *InterruptController, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);
void Erode_Rule1Driver_start(Erode_Rule1_DriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);
void Erode_Rule1Driver_stop(Erode_Rule1_DriverInstance *InstancePtr);
bool Erode_Rule1Driver_isBusy(Erode_Rule1_DriverInstance *InstancePtr);

// NOTE: for now _stop(), _isBusy() are not expected to take in any realtime info from SW so they have no arguments but if they need it in future then they should have same arguments as that of _initialize(), _start() methods to make the job of code-generator easier!!








#endif












