#include <stdio.h>

void main() {
    int choice;
    printf("*****************************\n");
    printf("** convert a given year to **\n");
    printf(" - 1 - Months\n");
    printf(" - 2 - Days\n");
    printf(" - 3 - Hours\n");
    printf(" - 4 - Minutes\n");
    printf(" - 5 - Seconds\n");
    printf("*****************************\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("*****************************\n");

    if (choice == 1) {
        int year;
        printf("Enter how many years to convert: ");
        scanf("%d", &year);
        int convToMon = year * 12;
        printf("%d Years converted to: %d month", year, convToMon);
    } else if (choice == 2) {
        int day;
        printf("Enter how many years to convert: ");
        scanf("%d", &day);
        int convToDay = day * 365;
        printf("%d Years converted to: %d day", day, convToDay);
    } else if (choice == 3) {
        int hour;
        printf("Enter how many years to convert: ");
        scanf("%d", &hour);
        int convToHor = hour * 8760;
        printf("%d Years converted to: %d hour", hour, convToHor);
    } else if (choice == 4) {
        int minute;
        printf("Enter how many years to convert: ");
        scanf("%d", &minute);
        int convToMin = minute * 525600;
        printf("%d Years converted to: %d minute", minute, convToMin);
    } else if (choice == 5) {
        int second;
        printf("Enter how many years to convert: ");
        scanf("%d", &second);
        int convToSec = second * 31556952;
        printf("%d Years converted to: %d second", second, convToSec);
    }
}