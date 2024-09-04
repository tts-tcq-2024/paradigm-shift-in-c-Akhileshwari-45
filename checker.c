#include <stdio.h>
#include <assert.h>


int batteryIsOk(float temperature, float soc, float chargeRate) {
  int result = 1;
  if(temperature < 0 || temperature > 45)
  {
    printf("Tempertaure is out of range\n");
    result = 0;
  }
  if(soc < 20 || soc > 80)
  {
    printf("State of charge is out of range\n");
    result = 0;
  }
  if(chargeRate > 0.8)
  {
    printf("Charge Rate is out of range\n");
    result = 0;
  }
  return result;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == 1);
  assert(batteryIsOk(50, 85, 0) == 0);
}
