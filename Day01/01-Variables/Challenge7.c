#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the theerd number: ");
    scanf("%d", &c);

    int sum1 = (a * 2.0);
    int sum2 = (b * 3.0);
    int sum3 = (c * 5.0);

    int sum = sum1 + sum2 + sum3;

    printf("The weighted average of three numbers: %d", sum);

    return 0;
}