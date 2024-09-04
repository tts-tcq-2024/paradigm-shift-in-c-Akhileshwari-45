#include <stdio.h>
#include <assert.h>
 
// Separate the check for temperature out of range
int temp_in_range(float temp) {
    return (temp >= 0) && (temp <= 45);
}
 
// Function to check if temperature is within range
int check_temp(float temp) {
    int isInRange = temp_in_range(temp);
    if (!isInRange) {
        printf("temperature out of range\n");
    }
    return isInRange;
}
 
// Separate the check for SOC out of range
int soc_in_range(float soc) {
    return (soc >= 20) && (soc <= 80);
}
 
// Function to check if SOC is within range
int check_soc(float soc) {
    int isInRange = soc_in_range(soc);
    if (!isInRange) {
        printf("soc out of range\n");
    }
    return isInRange;
}
 
// Separate the check for chargeRate out of range
int charge_in_range(float charge) {
    return charge <= 0.8;
}
 
// Function to check if chargeRate is within range
int check_chargeRate(float charge) {
    int isInRange = charge_in_range(charge);
    if (!isInRange) {
        printf("chargeRate out of range\n");
    }
    return isInRange;
}
 
int evaluate_checks(int tempCheck, int socCheck, int chargeRateCheck) {
    return tempCheck * socCheck * chargeRateCheck;
}
 
 
// Combined function to check all parameters
int batteryIsOk(float temperature, float soc, float chargeRate) {
    int tempCheck = check_temp(temperature);
    int socCheck = check_soc(soc);
    int chargeRateCheck = check_chargeRate(chargeRate);
 
    return evaluate_checks(tempCheck, socCheck, chargeRateCheck);
}
 
int main() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 88, 0));
    assert(!batteryIsOk(25, 85, 0.7));
    assert(batteryIsOk(44, 26, 0.2));
    return 0;
}
