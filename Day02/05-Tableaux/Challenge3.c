#include <stdio.h>

void main() {
    int numberOfElements, i, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];

    for(i = 0; i < numberOfElements; i++) {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    
    sum = 0;
    for(i = 0; i < numberOfElements; i++) {
        printf("%d", arr[i]);
        sum += arr[i];
        if (i < numberOfElements - 1) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);
}