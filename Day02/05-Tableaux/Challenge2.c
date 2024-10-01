#include <stdio.h>

void main() {
    int numberOfElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);
    
    int arr[numberOfElements];

    for(int i = 0; i < numberOfElements; i++) {
        printf("Enter the elemnets: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < numberOfElements; i++) {
        printf("%d ", arr[i]);
        if(i < numberOfElements - 1) {
            printf(", ");
        }
    }
}