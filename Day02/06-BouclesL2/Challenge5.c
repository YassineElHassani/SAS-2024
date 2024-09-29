#include <stdio.h>

void main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);
}