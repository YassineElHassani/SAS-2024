#include <stdio.h>

void main() {
    int numberOfElements, max = 0;

    printf("Enter number of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];
    
    for(int i = 1; i <= numberOfElements; i++) {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= numberOfElements; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum is: %d", max);
}