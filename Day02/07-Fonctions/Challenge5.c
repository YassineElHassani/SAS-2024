#include <stdio.h>

int factorial(int n) {
    int facto = 1;
    for(int i = 1; i <= n; i++) {
        facto = facto * i;
    }
    return facto;
}

void main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = factorial(n);

    printf("The factorial of %d is: %d\n", n, result);

}