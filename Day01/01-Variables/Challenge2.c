#include <stdio.h>

int main() {
    float celsius, kelvin;

    printf("Celsius Temperature: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("Kelvin = %.2f", kelvin);

    return 0;
}