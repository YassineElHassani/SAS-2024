#include <stdio.h>

void main() {
    int n;

    printf("Entree: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Ce n'est pas un nombre premier\n");
            break;
        } else {
            printf("C'est un nombre premier\n");
            break;
        }
    }

    
}