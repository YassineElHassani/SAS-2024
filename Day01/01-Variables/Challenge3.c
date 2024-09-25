#include <stdio.h>

void main() {
    float kilometers, yards;

    printf("Distance in kilometers: ");
    scanf("%f", &kilometers);
    yards = kilometers * 1093.61;
    printf("Distance in Yards = %.2f", yards);

}