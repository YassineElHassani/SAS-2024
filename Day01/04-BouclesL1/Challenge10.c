#include <stdio.h>

void main() {
    int number, i, sumTotal;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        sumTotal = i + i;
    }
    printf("%d", sumTotal);
}