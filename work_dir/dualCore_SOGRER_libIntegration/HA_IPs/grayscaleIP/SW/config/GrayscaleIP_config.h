// configurations for using GrayscaleIP functionality in the system
// will be modified later by GRIP based on the final generated SoC architecture

#ifndef __GRAYSCALEIP_CONFIG_H__
#define __GRAYSCALEIP_CONFIG_H__

// this info is provided by IP supplier
#define NUM_GRIP_RULES 2


// these actual details would later be filled in or overwritten by GRIP when a final design architecture is achieved
// for now assuming the SoC has 2 IP instances
#define NUM_GRAYSCALEIP_INSTANCES 2

typedef struct {
    unsigned int baseaddr;
    unsigned int grip_rule;
    unsigned int vdma_baseaddr;
} IP_info;

//if NUM_GRAYSCALEIP_INSTANCES != 0
IP_info GRAYSCALEIP_INFO[NUM_GRAYSCALEIP_INSTANCES];
GRAYSCALEIP_INFO[0] = {0xffffffff, 1, 0xffffffff};
GRAYSCALEIP_INFO[1] = {0xffffffff, 1, 0xffffffff};
// and similarly for other instances if they are available















