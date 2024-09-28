#include <stdio.h>

void main() {
    int numberOfElement;
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElement);

    int arr1[numberOfElement];
    printf("Enter the %d elements of table1 below\n", numberOfElement);
    for(int i = 0; i < numberOfElement; i++) {
        scanf("%d", &arr1[i]);
    }

    int arr2[numberOfElement];
    printf("Enter the %d elements of table2 below\n", numberOfElement);
    for(int i = 0; i < numberOfElement; i++) {
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