#include <stdio.h>

void main() {
    int n;

    printf("Entree: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int verification = (n % i == 0);
    }

    if (n % 2 && n - 1) {
        printf("C'est un nombre premier\n");
    } else {
        printf("Ce n'est pas un nombre premier\n");
    }
}