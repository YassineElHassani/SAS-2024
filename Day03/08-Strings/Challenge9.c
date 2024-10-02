#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int len = strlen(str);
    int count = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] != ' ') {
            str[count] = str[i];
            count++;
        }
    }

    str[count] = '\0';
}

void main() {
    char str[20];

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    removeSpaces(str);
    
    printf("Result: %s", str);
}