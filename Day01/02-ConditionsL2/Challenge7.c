#include <stdio.h>

void main() {
    float annualIncome;
    int taxStatus;

    printf("Enter your annual income(in euros): ");
    scanf("%f", &annualIncome);
    printf("Choise your tax status\n");
    printf(" - 1 - Single\n");
    printf(" - 2 - Married\n");
    printf(" - 3 - Head of household\n");
    printf("Enter tax status: ");
    scanf("%d", &taxStatus);

    printf("===================================\n");

    if(annualIncome <= 20000) {
        if(taxStatus == 1) {
            printf("Taxes to be paid: €%.2f\n", 0.05 * (annualIncome - 1000));
        } else if(taxStatus == 2) {
            printf("Taxes to be paid: €%.2f\n", 0.05 * (annualIncome - 2000));
        } else if(taxStatus == 3) {
            printf("Taxes to be paid: €%.2f\n", 0.05 * (annualIncome - 3000));
        }
    } else if(annualIncome > 20000 && annualIncome <= 50000) {
        if(taxStatus == 1) {
            printf("Taxes to be paid: €%.2f\n", 0.10 * (annualIncome - 1000));
        } else if(taxStatus == 2) {
            printf("Taxes to be paid: €%.2f\n", 0.10 * (annualIncome - 2000));
        } else if(taxStatus == 3) {
            printf("taxes to be paid: €%.2f\n", 0.10 * (annualIncome - 3000));
        }
    } else if(annualIncome > 50000) {
        if(taxStatus == 1) {
            printf("Taxes to be paid: €%.2f\n", 0.20 * (annualIncome - 1000));
        } else if(taxStatus == 2) {
            printf("Taxes to be paid: €%.2f\n", 0.20 * (annualIncome - 2000));
        } else if(taxStatus == 3) {
            printf("Taxes to be paid: €%.2f\n", 0.20 * (annualIncome - 3000));
        }
    }

    printf("===================================\n");
}