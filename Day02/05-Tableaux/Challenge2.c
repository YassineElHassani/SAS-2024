#include <stdio.h>

void main() {
    int numberOfElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);
    
    int arr[numberOfElements];

    printf("Enter the %d elemnets below\n", numberOfElements);
    for(int i = 0; i < numberOfElements; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < numberOfElements; i++) {
        printf("%d ", arr[i]);
        if(i < numberOfElements - 1) {
            printf(", ");
        }
    }
}