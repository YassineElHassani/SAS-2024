#include <stdio.h>

int main() {
    long number;
    int count = 0;

    printf("Enter numbers: ");
    scanf("%d", &number);

    while (number != 0) {
        number = number / 10;
        count++;
    }

    printf("%d", count); 
}