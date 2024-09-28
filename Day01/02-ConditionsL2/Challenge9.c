#include <stdio.h>

void main() {
    int typeOfPosition, overtimeHours, baseSalary;

    printf("-- calculate an employee's salary --\n");
    printf("Enter your base salary (in euros): ");
    scanf("%d", &baseSalary);
    printf("Enter your number of overtime hours: ");
    scanf("%d", &overtimeHours);
    printf("choise your type of position below\n");
    printf(" - 1 - junior\n");
    printf(" - 2 - senior\n");
    printf("Enter your type of position: ");
    scanf("%d", &typeOfPosition);

    printf("===================================\n");

    float sallaryPerHour = (baseSalary / 40), prime = sallaryPerHour + (sallaryPerHour * 1.5);

    if(typeOfPosition == 1) {
        if(overtimeHours >= 1) {
            printf("Your bonus sallary: €%.2f\n", prime + (baseSalary * 0.10));
        } else {
            printf("Your bonus sallary: €%.2f\n", baseSalary * 0.10);
        }
    } else if(typeOfPosition == 2) {
        if(overtimeHours >= 1) {
            printf("Your bonus sallary: €%.2f\n", prime + (baseSalary * 0.20));
        } else {
            printf("Your bonus sallary: €%.2f\n", baseSalary * 0.20);
        }
    }
    
    printf("===================================\n");
}