#include <stdio.h>

int min(int a, int b){
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

void main() {
    int n1, n2;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int result = min(n1, n2);

    printf("The min num: %d\n", result);

}