#include <stdio.h>

int multi(int a, int b) {
    int multi = a * b;
}

void main() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int result = multi(n1, n2);

    printf("Result of multi: %d\n", result);
}