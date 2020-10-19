#ifndef __PINFO_H__
#define __PINFO_H__
//#include "lib.h"
#include<stdio.h>
#include"stdarg.h"

#define ERROR_LEVEL 1
#define WARN_LEVEL 2
#define INFO_LEVEL 3
#define DEBUG_LEVEL 4

#define CBLACK 30
#define CRED 31
#define CGREEN 32
#define CYELLOW 33
#define CBLUE 34
#define CPURPLE 35
#define CGREEN_D 36
#define CWHITE 37
#define BBLACK 40

#define FORMAT_BUFFER_SIZE 1024

typedef int Level;

extern int sys_level;
extern char formatBuffer[FORMAT_BUFFER_SIZE];

void setLogLevel(Level logLevel);

void errorf(const char *__restrict__ __format, ...);
void infof(const char *__restrict__ __format, ...);
void warnf(const char *__restrict__ __format, ...);

int printPermit(Level myLevel);

#define format_print(level,color)                                                                                                       \
    {                                                                                                                        \
        if (printPermit(level))                                                                                        \
        {                                                                                                                    \
            va_list arg;                                                                                                     \
            va_start(arg, __format);                                                                                         \
            snprintf(formatBuffer, FORMAT_BUFFER_SIZE, "\033[%dm %s/line %d:%s\033[0m", color, __FILE__, __LINE__, __format); \
            vprintf(formatBuffer,arg);                                                                                   \
        }                                                                                                                    \
    }
    
#endif//