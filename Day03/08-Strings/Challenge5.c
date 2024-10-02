#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    int div = len / 2;
    char rev;

    for(int i = 0; i < div; i++) {
        rev = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = rev;
    }
}

void main() {
    char string[10];

    printf("Enter the string: ");
    scanf("%s", string);

    reverse(string);
    printf("Reversed string: %s\n", string);
}
