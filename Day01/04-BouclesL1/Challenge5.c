#include <stdio.h>

void main() {
    int base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent == 0) {
        printf("%d^%d = 1", base, exponent);
    } else {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        printf("%d^%d=%d",base, exponent, result);
    }
}