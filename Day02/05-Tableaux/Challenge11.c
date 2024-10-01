#include <stdio.h>

void main() {
    int numberOfElements;
    printf("Enter the numbers of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];

    for(int i = 0; i < numberOfElements; i++) {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    int preValue;
    printf("What is the value you want to remplace: ");
    scanf("%d", &preValue);

    int newValue;
    printf("Enter the new value: ");
    scanf("%d", &newValue);

    for(int i = 0; i < numberOfElements; i ++) {
        if(arr[i] == preValue) {
            arr[i] = newValue;
        }
    }

    printf("The new value: ");
    for(int i = 0; i < numberOfElements; i ++) {
        printf("%d", arr[i]);
        if(i < numberOfElements - 1) {
            printf(", ");
        }
    }
    printf("\n");
}