#include <stdio.h>

void main() {
    int annualIncome, taxStatus, deductions;

    printf("Enter your annual income(in euros): ");
    scanf("%d", &annualIncome);
    printf("Choise your tax status");
    printf(" - 1 - Single\n");
    printf(" - 2 - Married\n");
    printf(" - 3 - Head of household\n");
    printf("Enter tax status: ");
    scanf("%d", &annualIncome);
    printf("Enter your deducations(in euros): ");
    scanf("%d", &annualIncome);

    if(annualIncome <= 20000) {

    } else if(annualIncome > 20000 && annualIncome <= 50000) {

    } else if(annualIncome > 50000) {
        
    }
    
}