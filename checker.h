#ifndef CHECKER_H
#define CHECKER_H

#include<stdio.h>
#include <stdbool.h>

battery_status battery_charge_rate(float value,float range);
battery_status battery_soc_check(float value,float min_range,float max_range);
battery_status battery_temperature_check(float value,float min_range,float max_range);
#endif
