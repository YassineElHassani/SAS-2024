#include <stdio.h>

void main() {
    int firstNumber, secondNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    if (firstNumber == secondNumber) {
        //int x3 = (firstNumber + secondNumber) * 3;
        printf("Total x3: %d", (firstNumber + secondNumber) * 3);
    } else {
        printf("Total: %d", firstNumber + secondNumber);
    }
}