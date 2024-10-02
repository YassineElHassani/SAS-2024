#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char str[20];

    printf("Enter a string in appercase: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i]; i++) {
        str[i] = (char)tolower(str[i]);
    }

    printf("Result: %s\n", str);
}