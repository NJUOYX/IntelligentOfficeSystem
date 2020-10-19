#ifndef __DEBUG_H__
#define __DEBUG_H__
#include"pinfo.h"

#ifdef DEBUG
    #define debugf __debugf__
#else
    #define debugf __invaildf__
#endif

void __debugf__(const char *__restrict__ __format, ...);
void __invaildf__(const char *__restrict__ __format, ...);

#endif