#ifndef __GRAYSCALE_HWSW_FUNC_H__
#define __GRAYSCALE_HWSW_FUNC_H__

#include "SW/Grayscale_SW.h"
#include "Rule0/function.h"
#include "Rule1/function.h"

typedef int (*Grayscale_funcP)(unsigned long, unsigned long, unsigned short, unsigned short, unsigned short, unsigned short);
Grayscale_funcP funcs[2];

void Grayscale_funcInit(IntCntrl_t *InterruptController, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);
void Grayscale_func(unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);

#endif