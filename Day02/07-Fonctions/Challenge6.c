#include <stdio.h>

int fibonacci(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = fibonacci(number);

    printf("The fibo of %d is: %d\n", number, result);

}