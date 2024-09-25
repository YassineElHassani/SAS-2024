#include <stdio.h>

void main() {
    float KiloPerHour, MeterPerSec;

    printf("km/h: ");
    scanf("%f", &KiloPerHour);
    MeterPerSec = KiloPerHour * 0.27778;
    printf("m/s = %.5f", MeterPerSec);

}