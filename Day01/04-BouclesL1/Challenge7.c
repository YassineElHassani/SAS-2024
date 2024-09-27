#include <stdio.h>

void main() {
    int numbers, reverse = 0, remainder;

    printf("Enter numbers: ");
    scanf("%d", &numbers);

    while (numbers != 0) {
        remainder = numbers % 10;
        reverse = reverse * 10 + remainder;
        numbers = numbers / 10;
    }

    printf("%d", reverse);
}