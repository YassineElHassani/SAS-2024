#include <stdio.h>

void main() {
    int numberOfElements, min = 1000;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];
    
    for(int i = 1; i <= numberOfElements; i++) {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= numberOfElements; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum is: %d", min);
}