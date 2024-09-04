#include <stdio.h>
#include <assert.h>
int chargerate(float charge)
{
  if(charge > 0.8)
  {
     printf("Charge Rate out of range!\n");
    return 0;
  }
  return 1;
}
int socrange(float soc,float charge)
{
  int result = 1;
  if(soc<20 || soc>80)
  {
     printf("State of Charge out of range!\n");
    return 0;
  }
  result = chargerate(charge);
  return result;
}
int temprange(float temp,float soc,float charge)
{
  int result1 = 1;
  if(temp < 0 || temp > 45)
  {
     printf("Temperature out of range!\n");
    return 0;
  }
  result1 = socrange(soc,charge);
  return result1;
}
int batteryIsOk(float temperature, float soc, float chargeRate) {
  int result1= 1;
  result1 = temprange(temperature,soc,chargeRate);
  return result1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
