#include <stdio.h>

void main() {
    int arr[5];
    
    printf("Enter five digits below\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if(i < 4) {
            printf(", ");
        }
    }
}