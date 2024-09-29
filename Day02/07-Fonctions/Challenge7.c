#include <stdio.h>
#include <string.h>

char strReverse(char *string) {
    int first = 0;
    int last = strlen(string) - 1;
    char reverser;

    while(first < last) {
        reverser = string[first];
        string[first] = string[last];
        string[last] = reverser;
        first++;
        last--;
    }
}

void main() {
    char str[50];

    printf("Enter a word: ");
    scanf("%s", str);

    strReverse(str);

    printf("Reverse: %s\n", str);
}