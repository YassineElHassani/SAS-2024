#include <stdio.h>

void main() {
    char character;

    printf("Enter character: ");
    scanf("%s", &character);

    switch (character) {
    case 'a':
        printf("Character Voyelle!");
        break;
    case 'e':
        printf("Character Voyelle!");
        break;
    case 'i':
        printf("Character Voyelle!");
        break;
    case 'o':
        printf("Character Voyelle!");
        break;
    case 'u':
        printf("Character Voyelle!");
        break;
    case 'y':
        printf("Character Voyelle!");
        break;
    default:
        printf("Character Non Voyelle");
        break;
    }
}