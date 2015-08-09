// TODO: Implement this driver!!


#ifndef __GRAYSCALEIP_RULE2DRIVER_TEMPLATE_H__
#define __GRAYSCALEIP_RULE2DRIVER_TEMPLATE_H__



#define bool unsigned char


typedef struct {
    unsigned int baseaddr;
} GrayscaleIPRule2DriverInstance;


typedef struct {
    unsigned int offset;
    unsigned int value;
    unsigned int mask;
} RegType;



// register map for Grayscale IP peripheral registers
typedef struct {
    RegType AP_CTRL;
    RegType GIE;
    RegType IER;
    RegType ISR;
    RegType ROWS_DATA;
    RegType COLS_DATA;
} RegMap;

    
    
void localWriteReg(unsigned int addr, unsigned int mask, unsigned int value);
unsigned int localReadReg(unsigned int addr);
void SetHAMode(RegMap mode, unsigned int baseaddr);




// the IP supplier should modify the contents of below register map to initialize the Grayscale IP peripheral
// the modified content will be written to the Grayscale IP's registers when initialize method is called by using SetHAMode
// the format is {offset, mask, value} --- if a register is not to be written then simply make mask 0x0
RegMap InitMode;
InitMode.AP_CTRL = {0x00, 0xffffffff, 0xffffffff};
InitMode.GIE = {0x04, 0xffffffff, 0xffffffff};
InitMode.IER = {0x08, 0xffffffff, 0xffffffff};
InitMode.ISR = {0x0c, 0xffffffff, 0xffffffff};
InitMode.ROWS_DATA = {0x14, 0xffffffff, 0xffffffff};
InitMode.COLS_DATA = {0x1c, 0xffffffff, 0xffffffff};

// the IP supplier should modify the contents of below register map to trigger the Grayscale IP peripheral to start processing
// the modified content will be written to the Grayscale IP's registers when start method is called by using SetHAMode
// the format is {offset, mask, value} --- if a register is not to be written then simply make mask 0x0
RegMap StartMode;
StartMode.AP_CTRL = {0x00, 0xffffffff, 0xffffffff};
StartMode.GIE = {0x04, 0xffffffff, 0xffffffff};
StartMode.IER = {0x08, 0xffffffff, 0xffffffff};
StartMode.ISR = {0x0c, 0xffffffff, 0xffffffff};
StartMode.ROWS_DATA = {0x14, 0xffffffff, 0xffffffff};
StartMode.COLS_DATA = {0x1c, 0xffffffff, 0xffffffff};

// the IP supplier should modify the contents of below register map to stop the Grayscale IP peripheral's current processing
// the modified content will be written to the Grayscale IP's registers when stop method is called by using SetHAMode
// the format is {offset, mask, value} --- if a register is not to be written then simply make mask 0x0
RegMap StopMode;
StopMode.AP_CTRL = {0x00, 0xffffffff, 0xffffffff};
StopMode.GIE = {0x04, 0xffffffff, 0xffffffff};
StopMode.IER = {0x08, 0xffffffff, 0xffffffff};
StopMode.ISR = {0x0c, 0xffffffff, 0xffffffff};
StopMode.ROWS_DATA = {0x14, 0xffffffff, 0xffffffff};
StopMode.COLS_DATA = {0x1c, 0xffffffff, 0xffffffff};




// the IP supplier should modify the contents of below register to be able to monitor the status of IP processing
#define BUSY_STATUS_REG_offset 0xff
#define BUSY_STATUS_REG_bit 31          // little endian convention [31:0]



// API for GrayscaleIP_Driver to use if this rule is applied by GRIP
void GrayscaleIP_Rule2Driver_initialize(GrayscaleIPRule2DriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);
void GrayscaleIP_Rule2Driver_start(GrayscaleIPRule2DriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);
void GrayscaleIP_Rule2Driver_stop(GrayscaleIPRule2DriverInstance *InstancePtr);
bool GrayscaleIP_Rule2Driver_isBusy(GrayscaleIPRule2DriverInstance *InstancePtr);






#endif




// NOTE: everything seems to be auto-generatable!!











