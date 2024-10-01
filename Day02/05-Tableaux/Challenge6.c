#include <stdio.h>

void main() {
    int numberOfElements, multiplication;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int arr[numberOfElements];
    
    for(int i = 1; i <= numberOfElements; i++) {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the multiplication factor: ");
    scanf("%d", &multiplication);

    for(int i = 1; i <= numberOfElements; i++) {
        printf("%d * %d = %d\n", arr[i], multiplication, arr[i] * multiplication);
    }
}