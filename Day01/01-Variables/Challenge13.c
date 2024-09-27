#include <stdio.h>

void main() {
    //int binaryValue;
    //int hexdecimalValue;
    //int remainder;
    //int i = 1;

    //printf("Enter the binary number: ");
    //scanf("%d", &binaryValue);

    //while (binaryValue != 0) {
        //remainder = binaryValue % 10;
        //hexdecimalValue = hexdecimalValue + remainder * i;
        //i = i * 2;
        //binaryValue = binaryValue / 10;
    //}
    //printf("Hexdecimal value: %lX", hexdecimalValue);

    int number;
    int count;
    int remainder[] = {};

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 0; number >= 0;i++) {
        remainder[i] = number % 2;
        number = number / 2;
        count++;
    }

    printf("Binary value: %d", count);
    
}