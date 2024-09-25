#include <stdio.h>

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("This number is positive");
    } else if (number < 0) {
        printf("This number is negative");
    } else {
        printf("this number is equal to zero");
    }

}