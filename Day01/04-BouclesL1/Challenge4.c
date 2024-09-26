#include <stdio.h>

void main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}