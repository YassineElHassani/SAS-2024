#include <stdio.h>

void main() {
    int totalDaysVacation, totalDaysUsed, statuChoise;

    printf("***************************************************\n");
    printf("*****  Determine the remaining vacation days  *****\n");
    printf("Enter your total number of vacation days granted: ");
    scanf("%d", &totalDaysVacation);
    printf("Enter number of vacation days used: ");
    scanf("%d", &totalDaysUsed);
    printf("|             Choise Employee status              |\n");
    printf("|  - 1 - part-time                                |\n");
    printf("|  - 2 - full-time                                |\n");
    printf("Enter your choise: ");
    scanf("%d", &statuChoise);

    int fullTime = totalDaysVacation - totalDaysUsed;
    int partTime = (totalDaysVacation / 2) - totalDaysUsed;

    if (statuChoise == 1) {
        printf("Days Remaining: %d\n", fullTime);
        if (fullTime < 0) {
            printf("Warnning you days have been exceed!!");
        }
    } else if (statuChoise == 2) {
        printf("Days Remaining: %d\n", partTime);
        if (partTime < 0) {
            printf("Warnning you days have been exceed!!");
        }
    }
}