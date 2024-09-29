#include <stdio.h>

void main() {
    int n, reverse;

    printf("Enter numbers: ");
    scanf("%d", &n);

    
    while(n != 0) {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }

    printf("Reversed: %d\n", reverse);
}