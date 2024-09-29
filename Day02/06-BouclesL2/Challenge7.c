#include <stdio.h>

int fibonacci(int number) {
    if(number == 0) {
        return 0;
    } else if(number == 1) {
        return 1;
    } else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++) {
        printf("%d", fibonacci(i));
        if(i < number) {
            printf(", ");
        }
    }
    printf("\n");
}