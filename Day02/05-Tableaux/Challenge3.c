#include <stdio.h>

void main() {
    int numberOfElements, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];

    printf("Enter the %d elements below\n", numberOfElements);
    for(int i = 0; i < numberOfElements; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= numberOfElements; i++) {
        sum = sum + i;
        printf("%d", i);
        if (i < numberOfElements) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);
}