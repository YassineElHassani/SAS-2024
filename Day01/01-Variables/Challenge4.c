#include <stdio.h>

int main() {
    float KiloPerHour, MeterPerSec;

    printf("km/h: ");
    scanf("%f", &KiloPerHour);
    MeterPerSec = KiloPerHour * 0.27778;
    printf("m/s = %.5f", MeterPerSec);

    return 0;
}