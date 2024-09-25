#include <stdio.h>

void main() {
    char character;

    printf("Enter a character: ");
    scanf("%s", &character);

    if (character >= 65 && character <= 90) {
        printf("This character is uppercase!");
    } else {
        printf("This character is lowercase!");
    }
}