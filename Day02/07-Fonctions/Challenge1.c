#include <stdio.h>

int sum(int a, int b) {
    int sum = a + b;
}

void main() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int ruselt = sum(n1, n2);

    printf("Result of sum: %d\n", ruselt);
}