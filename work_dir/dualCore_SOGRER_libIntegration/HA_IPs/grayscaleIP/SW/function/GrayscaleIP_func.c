// this file is going to be auto-generated after reading in the IP_SW and all of IP_Rule*Driver modules
// it will use the configuration flags provided in config file

// this file provides API functionality to application developer to perform HA-aware grayscale filtering on captured video



#include "GrayscaleIP_func.h"



void ConvToGray_func(unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime) {
#if NUM_GRAYSCALEIP_INSTANCES != 0
    static bool driverInit = 0;
    int i=0;
    if (driverInit == 0) {
        for (i=0; i<NUM_GRAYSCALEIP_INSTANCES; i++) {
            GrayscaleIPDriver[i].baseaddr = GRAYSCALEIP_INFO[i].baseaddr;
            if (GRAYSCALEIP_INFO[i].grip_rule == 1) {
                GrayscaleIPDriver[i].vdmaDriver GRAYSCALEIP_INFO[i].vdma_baseaddr;
            }
        }
               
        driverInit = 1;
    }
#endif

#if NUM_GRAYSCALEIP_INSTANCES == 0                      // no IP module in design so using SW implementation
    ConvToGray(ImgIn_BaseAddr, ImgOut_BaseAddr, width, height, horizontalActiveTime, verticalActiveTime);
#else
    int i;
    for (i=0; i<NUM_GRAYSCALEIP_INSTANCES; i++) {
        if (GrayscaleIP_Driver_isBusy(&GrayscaleIPDriver[i]) == 0) {      // a free IP instance found
            GrayscaleIP_Driver_start(&GrayscaleIPDriver[i], ImgIn_BaseAddr, ImgOut_BaseAddr, width, height, horizontalActiveTime, verticalActiveTime);
            while(GrayscaleIP_Driver_isBusy(&GrayscaleIPDriver[i]) == 1);
            return;
        }
    }    
    ConvToGray(ImgIn_BaseAddr, ImgOut_BaseAddr, width, height, horizontalActiveTime, verticalActiveTime); 
#endif
}




