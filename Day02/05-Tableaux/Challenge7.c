#include <stdio.h>

void main() {
    int numberOfElements, minToMax;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];
    printf("Enter the %d elements below\n");
    for(int i = 0; i < numberOfElements; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < numberOfElements; i++) {
        for(int j = i + 1; j < numberOfElements; j++) {
            if(arr[i] > arr[j]) {
                minToMax = arr[i];
                arr[i] = arr[j];
                arr[j] = minToMax;
            }
        }
    }

    for(int i = 0; i < numberOfElements; i++) {
        printf("%d", arr[i]);
        if(i < numberOfElements - 1) {
            printf(" < ");
        }
    }

}