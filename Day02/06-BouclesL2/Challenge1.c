#include <stdio.h>

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", number, i, number * i);
    }
}