// this file is going to be auto-generated after reading in the IP_SW and all of IP_Rule*Driver modules
// it will use the configuration flags provided in config file
// right now assuming that the code generator is given the info from Grayscale IP supplier of using 2 grip rules

// this file provides API functionality to application developer to perform HA-aware grayscale filtering on captured video


#ifndef __GRAYSCALEIP_FUNC_H__
#define __GRAYSCALEIP_FUNC_H__


#include "GrayscaleIP_Rule1Driver.h"
#include "GrayscaleIP_Rule2Driver.h"
// and so on if other grip rules are supported by this IP

#include "GrayscaleIP_config.h"
#include "GrayscaleIP_SW.h"

#define bool unsigned char


// API
void ConvToGray_func(unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);


// internal stuff

// driver instances for Grayscale_HA
#if NUM_GRAYSCALEIP_GRIPRULE1_INSTANCES != 0
    GrayscaleIPRule1DriverInstance GrayscaleIPRule1Driver[NUM_GRAYSCALEIP_GRIPRULE1_INSTANCES];
#endif

#if NUM_GRAYSCALEIP_GRIPRULE2_INSTANCES != 0
    GrayscaleIPRule2DriverInstance GrayscaleIPRule2Driver[NUM_GRAYSCALEIP_GRIPRULE2_INSTANCES];
#endif

// and so on if other grip rules are supported by this IP

#endif



















