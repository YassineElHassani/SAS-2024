#include <stdio.h>
#include <string.h>

void main() {
    char str1[10], str2[10];

    printf("Enter the first string: ");
    scanf("%s ", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("%s\n", str1);
}