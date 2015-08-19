/*
 * sw_functions.h
 *
 *  Created on: Feb 12, 2014
 *      Author: ga73koz
 */

#ifndef SW_FUNCTIONS_H_
#define SW_FUNCTIONS_H_

void ConvToGray(unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height,
		unsigned short horizontalActiveTime);

void EdgeDetection(unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,
		unsigned short width, unsigned short height, unsigned short h_ActiveTime);

void Erode(unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,
		unsigned short width, unsigned short height, unsigned short h_ActiveTime);

extern void processFrame(unsigned int dataMem_BASEADDR);			// to let the template engine know about the function signature/prototype of data processing method which will be used to generate SoCProc_support files

#endif /* SW_FUNCTIONS_H_ */