#include <stdio.h>

void main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    int search;
    printf("Searches for a specific element: ");
    scanf("%d", &search);

    int result = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            result = 1;
            break;
        }
    }

    if (result == 1) {
        printf("This element is %d", arr[search]);
    } else {
        printf("This element is not found\n");
    }
}