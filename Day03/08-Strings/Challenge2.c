#include <stdio.h>

void main() {
    char character[30];
    int count;

    printf("Enter a character: ");
    scanf("%s", &character);


    for(int i = 0; character[i] != '\0'; i++) {
        count++;
    }

    printf("The length of character is: %d\n", count);
}