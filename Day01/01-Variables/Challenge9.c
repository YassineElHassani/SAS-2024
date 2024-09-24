#include <stdio.h>
#include <math.h>

int main() {
    int x,y,z;

    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the theerd number: ");
    scanf("%d", &z);

    int add = sqrt(pow((x+2 - x+1) + (y+2 - y+1) + (z+2 - z+1)));
}