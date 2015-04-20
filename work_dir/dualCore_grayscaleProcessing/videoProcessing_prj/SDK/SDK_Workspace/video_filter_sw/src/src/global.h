
// header containing the declarations for all the global variables to be used in this application project

#ifndef __GLOBAL_H__
#define __GLOBAL_H__


extern void delay_ms(u32 ms_count);
extern char inbyte(void);

/******************************************************************************/
/************************** Macros Definitions ********************************/
/******************************************************************************/
#define HDMI_CALL_INTERVAL_MS	10			/* Interval between two         */
											/* iterations of the main loop  */
#define DBG_MSG                 xil_printf

/* Define a data memory space which is visible to both CPUs, the OCM is ideal
 * since it is the lowest latency memory which is visible to both ARM cores.
 */
#define SHARED_OCM_MEMORY_BASE   0xFFFF0000
/* Declare a value stored in OCM space which is visible to both CPUs. */
#define SEMAPHORE_VALUE      (*(volatile unsigned long *)(SHARED_OCM_MEMORY_BASE))
// share the currentResolution variable so that it is visible to CPU1 as well
#define shared_currentResolution (*(volatile unsigned char *)(SHARED_OCM_MEMORY_BASE + 100))

// just for debugging purposes to see each alternate frame is being processed by other core correctly and no frame is missing!!
//#define debug_var (*(volatile unsigned char *)(SHARED_OCM_MEMORY_BASE + 50))

extern short int FRAME_INTR;

extern int semaphore_cpu0_signal();
extern int semaphore_cpu0_wait();



#endif

