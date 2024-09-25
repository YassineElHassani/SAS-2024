#include <stdio.h>
#include <math.h>

void main() {
    int a,b,c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the theerd number: ");
    scanf("%d", &c);

    float x = pow(a * b * c, 1/3);
    printf("Moyenne geometric: %f", x);

}