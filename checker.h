#ifndef COMMON_UTIL_H
#define COMMON_UTIL_H

#include<stdio.h>
#include <stdbool.h>

#define    min_tolerance  0
#define    min            1
#define    max_tolerance  2
#define    max            3

typedef enum
{
    error = 0,
    warning,
    normal
}battery_status;

#endif
