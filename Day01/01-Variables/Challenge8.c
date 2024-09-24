#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the theerd number: ");
    scanf("%d", &c);

    int x = pow(a * b * c, 1/3);
    printf("Moyenne geometric: %d", x);

    return 0;
}