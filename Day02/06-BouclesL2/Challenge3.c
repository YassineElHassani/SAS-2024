#include <stdio.h>

void main() {
    int number;

    printf("Enter numbers: ");
    scanf("%d", &number);
    
    printf("Prime number : ");
    for(int i = 2; i <= number; i++) {
        int prime = 1;
        for(int j = 2; j < i / 2; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}