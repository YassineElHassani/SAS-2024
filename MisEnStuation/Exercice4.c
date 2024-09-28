#include <stdio.h>

void main() {
    float arr[5];
    float min, max;

    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &arr[i]);
    }

    min = max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f\n", max); 
}