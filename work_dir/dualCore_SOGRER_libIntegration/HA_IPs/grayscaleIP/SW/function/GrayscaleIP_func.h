// this file is going to be auto-generated after reading in the IP_SW and all of IP_Rule*Driver modules
// it will use the configuration flags provided in config file

// this file provides API functionality to application developer to perform HA-aware grayscale filtering on captured video

#ifndef __GRAYSCALEIP_FUNC_H__
#define __GRAYSCALEIP_FUNC_H__

#if GRIP_RULE == 1
#include "GrayscaleIP_Rule1Driver.h"
#elif GRIP_RULE == 2
#include "GraycaleIP_Rule2Driver.h"
//#elif ....so on.... for each of the grip rule supported by the IP supplier
#endif

#include "GrayscaleIP_config.h"
#include "GrayscaleIP_SW.h"





// API
void ConvToGray_func(unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);


// internal stuff

// driver instances for Grayscale_HA
#if NUM_GRAYSCALE_HA != 0
    GrayscaleIPDriverInstance GrayscaleIPDriver[NUM_GRAYSCALE_HA];
#endif























