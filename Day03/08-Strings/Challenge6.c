#include <stdio.h>
#include <string.h>

void main() {
    char str[10], character;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character you want to count: ");
    scanf("%c", &character);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == character) {
            count++;
        }
    }

    printf("The character %c appear %d times\n", character, count);
}