#include <stdio.h>

void main() {
    int budget, destination, numberOfPeople;

    printf("Enter your budget: ");
    scanf("%d", &budget);
    printf("Choise your destnaition below\n");
    printf(" - 1 - beach \n");
    printf(" - 2 - mountain\n");
    printf(" - 3 - city\n");
    printf("Enter your destination: ");
    scanf("%d", &destination);
    printf("How many people will travel: ");
    scanf("%d", &numberOfPeople);

    if (budget >= 1000) {
        if (numberOfPeople > 2) {
            printf("We recomand Beach & City\n");
            printf("High-end trip\n");
        } else {
            printf("High-end trip\n");
        }
    } else if (budget >= 500 && budget <= 1000) {
        if (numberOfPeople <= 2) {
            printf("We recomand Mountain & City\n");
            printf("Average trip\n");
        } else {
            printf("Average trip\n");
        }
    } else if (budget < 500) {
        printf("We recomand City\n");
        printf("Economy trip\n");
    }
}