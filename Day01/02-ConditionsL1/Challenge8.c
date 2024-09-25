#include <stdio.h>

void main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade < 10) {
        printf("You failed :(");
    } else if (grade >= 10 && grade <= 12) {
        printf("You have a passable grade");
    } else if (grade >= 12 && grade <= 14) {
        printf("Your mention fairly well");
    } else if (grade >= 14 && grade <= 16) {
        printf("You have good grade");
    } else if (grade > 16) {
        printf("very good grade :)");
    }
}