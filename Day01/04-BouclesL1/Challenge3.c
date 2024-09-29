#include <stdio.h>

void main() {
    int number, sum;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++) {
        sum = sum + i;
        printf("%d", i);
        if (i < number) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);
}