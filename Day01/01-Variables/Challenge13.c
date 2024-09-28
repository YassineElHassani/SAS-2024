#include <stdio.h>

int main() {
    int binaryNum[32];
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Binary: ");
    
    int n = num;
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    
    printf("\n");

    return 0;
}