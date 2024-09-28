#include <stdio.h>

void main() {
    int numberOfElements;
    printf("Enter the number of the elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];
    printf("Enter the %d elements below\n", numberOfElements);
    for(int i = 0; i < numberOfElements; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < numberOfElements; i++) {
        sum = sum + arr[i];
    }

    int avrege = (sum / numberOfElements);
    printf("The avrege of all elements: %d\n", avrege);
}