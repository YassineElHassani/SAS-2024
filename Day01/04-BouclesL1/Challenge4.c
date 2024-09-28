#include <stdio.h>

void main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", (i * 2) + 1);
        if (i < n) {
            printf(", ");
        }
    }
}