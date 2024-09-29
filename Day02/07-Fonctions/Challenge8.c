#include <stdio.h>

int chekNumber(int n) {
    if(n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(chekNumber(num) == 1) {
        printf("This number is even\n");
    } else if(chekNumber(num) == 0) {
        printf("This number is odd\n");
    }
}