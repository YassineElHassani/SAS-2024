#include <stdio.h>

void main() {
    int length, width;

    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    int surface = length * width;
    printf("Formula for the area of a rectangle: %d", surface);

}