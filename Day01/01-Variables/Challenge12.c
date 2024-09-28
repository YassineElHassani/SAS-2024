#include <stdio.h>

void main(){
    int n, reverser;

    printf("Enter 4 digits: ");
    scanf("%d", &n);

    reverser = (((n % 10) * 1000) +
                ((n / 10) % 10 * 100) +
                ((n / 100) % 10 * 10) + 
                (n / 1000));

    printf("Reversed: %d\n", reverser);

}