#include <stdio.h>

void main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z') {
        printf("This character is lowercase");
    } else if (character >= 'A' && character <= 'Z') {
        printf("This character is uppercase");
    } else {
        printf("This is not a character");
    }
}