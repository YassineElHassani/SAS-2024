#include <stdio.h>

void main() {
    int age, yearsOfConstrubations, totalSaved;

    printf("===== Retirement Plan with Savings =====\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your years of construbation: ");
    scanf("%d", &yearsOfConstrubations);
    printf("Total amount saved (in euros): ");
    scanf("%d", &totalSaved);

    printf("===================================\n");

    if(age >= 65 && yearsOfConstrubations >= 30 && totalSaved >= 100000) {
        printf("Full plan with high pension\nYour bonus: (€%.2f)\n", (totalSaved * 0.05) * 5);
    } else if(age >= 65 && yearsOfConstrubations >= 20 && totalSaved >= 50000) {
        printf("Partial plan with average pension\n");
    } else if(age < 65) {
        printf("Savings plan not yet available\n");
    }

    printf("===================================\n");
}