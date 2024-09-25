#include <stdio.h>

void main() {
    int day, month, year;
    char *months[] = {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };

    printf("Enter date DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("This is the date : %d-%s-%d", day, months[month + 1], year);

}