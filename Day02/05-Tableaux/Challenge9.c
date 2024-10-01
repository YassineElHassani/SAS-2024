#include <stdio.h>

void main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter nembers: ");
        scanf("%d", &arr[i]);
    }

    printf("reversed: ");
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[n - i - 1]);
        if(i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}