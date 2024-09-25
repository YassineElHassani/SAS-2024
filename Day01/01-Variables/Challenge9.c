#include <stdio.h>
#include <math.h>

void main() {
    int x2,x1,y1,y2,z1,z2;

    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter y2: ");
    scanf("%d", &y2);
    printf("Enter z1: ");
    scanf("%d", &z1);
    printf("Enter z2: ");
    scanf("%d", &z2);

    int xpow = pow(x1 - x2, 2);
    int ypow = pow(y1 - y2, 2);
    int zpow = pow(z1 - z2, 2);

    int distance = sqrt(xpow + ypow + zpow);

    printf("Distance = %d", distance);
    
}