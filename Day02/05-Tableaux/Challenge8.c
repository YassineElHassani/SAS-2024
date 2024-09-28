#include <stdio.h>

void main() {
    int n = 5;
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[n];


    for(int i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }

    printf("The first table is : "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr1[i]); 
    } 
    
    printf("\nThe second table is : "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr2[i]); 
    } 

}