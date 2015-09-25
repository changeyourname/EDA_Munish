// contains common types/structures that are to be used by various IP drivers

#ifndef __COMMON_H__
#define __COMMON_H__

typedef struct {
    unsigned int offset;
    unsigned int mask;
    unsigned int value;
} RegType;

#endif
