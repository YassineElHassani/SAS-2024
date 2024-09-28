#include <stdio.h>

void main() {
    int number, i, j, space;
    int star = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 0; i < number; i++) {
        space = number - i - 1;
        for(j = 0; j < space; j++) {
            printf(" ");
        }
        for(j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n");
        star = star + 2;
    }
}