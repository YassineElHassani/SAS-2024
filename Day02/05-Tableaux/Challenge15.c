#include <stdio.h>

void main() {
    int numberOfElement;
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElement);

    int arr1[numberOfElement];

    for(int i = 0; i < numberOfElement; i++) {
        printf("Enter the elements of table1: ");
        scanf("%d", &arr1[i]);
    }

    int arr2[numberOfElement];

    for(int i = 0; i < numberOfElement; i++) {
        printf("Enter the elements of table2: ");
        scanf("%d", &arr2[i]);
    }

    int arr3[numberOfElement];
    
    for(int i = 0; i < numberOfElement; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
    
    printf("The sum of table1 + table2: ");
    for(int i = 0; i < numberOfElement; i++) {
        printf("%d", arr3[i]);
        if(i < numberOfElement - 1) {
            printf(", ");
        }
    }
    printf("\n");
}