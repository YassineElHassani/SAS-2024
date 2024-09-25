#include <stdio.h>
#include <math.h>

void main() {
    float a,b,c,solution1,solution2,solution3;

    printf("|| calculons les solutions possibles à une équation quadratique. ||\n");
    printf("Enter number a: ");
    scanf("%.2f", &a);
    printf("Enter number b: ");
    scanf("%.2f", &b);
    printf("Enter number c: ");
    scanf("%.2f", &c);

    float delta = pow(b, 2) - 4 * a * c;
    solution1 = (-b / 2 * a);
    solution2 = (-b + sqrt(delta) / (2 * a));
    solution3 = (-b - sqrt(delta) / (2 * a));

    if (delta == 0) {
        printf("Solution: %.2f", solution1);
    } else if (delta > 0) {
        printf("Solution: %.2f and Solution: %.2f", solution2,solution3);
    } else if (delta < 0 ){
        printf("There is no solution\n");
    }
    
}