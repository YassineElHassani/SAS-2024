#include <stdio.h>

int max(int a, int b) {
    if(a < b) {
        return b;
    } else {
        return a;
    }
}

void main() {
    int n1, n2;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int result = max(n1, n2);

    printf("The max num: %d\n", result);

}