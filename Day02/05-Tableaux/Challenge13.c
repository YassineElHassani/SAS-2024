#include <stdio.h>

void main() {
    int numberOfElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];
    printf("Enter the %d elements below\n", numberOfElements);
    for(int i = 0; i < numberOfElements; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All the odd elements: ");
    for(int i = 0; i < numberOfElements; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d", arr[i]);
            if(i < numberOfElements - 2) {
                printf(", ");
            }
        }
    }
    printf("\n");
} 