/***************************************************************************//**
 *   @file   main.c

*******************************************************************************/

/******************************************************************************/
/***************************** Include Files **********************************/
/******************************************************************************/
#include <stdio.h>
#include "cf_hdmi.h"
#include "xscugic.h"
#include "xil_mmu.h"
#include "sw_functions.h"
#include "global.h"


int semaphore_cpu1_signal()
{
	SEMAPHORE_VALUE = 0;

	return 0;
}

int semaphore_cpu1_wait()
{
	while (SEMAPHORE_VALUE == 0) {};

	return 0;
}



/***************************************************************************//**
 * @brief Main function.
 *
 * @return Returns 0.
*******************************************************************************/
int main()
{

	/* Disable caching on shared OCM data by setting the appropriate TLB
     * attributes for the shared data space in OCM.
     *
     * S=b1
     * TEX=b100
     * AP=b11
     * Domain=b1111
     * C=b0
     * B=b0
     */
	Xil_SetTlbAttributes(SHARED_OCM_MEMORY_BASE, 0x14de2);

	while (1)
	{
		// wait for interrupt from cpu0 to start capturing + processing the frame
		semaphore_cpu1_wait();

		// storing the current frame onto cpu0 memory space
		DDRVideoWr(640, 480, detailedTiming[shared_currentResolution][H_ACTIVE_TIME], detailedTiming[shared_currentResolution][V_ACTIVE_TIME]);

		//printf("DEBUG_CPU1: current frame captured by CPU1....now processing it! \n\r");
		//debug_var = 1;

		// grayscaling the captured image and writing to a separate memory region in ddr
		ConvToGrayHLS(VIDEO_BASEADDR, PROC_VIDEO_BASEADDR, detailedTiming[shared_currentResolution][H_ACTIVE_TIME]);

		semaphore_cpu1_signal();
	}

	return(0);
}