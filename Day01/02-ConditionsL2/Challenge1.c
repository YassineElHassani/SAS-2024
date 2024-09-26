#include <stdio.h>

void main() {
    int annualIncome, creditScore, loanTerm;

    printf("***********************************************\n");
    printf("Evaluates eligibility for a loan based on your:\n");
    printf("|    Enter your annual income: ");
    scanf("%d", &annualIncome);
    printf("|    Enter your credit score(out of 1000): ");
    scanf("%d", &creditScore);
    printf("|    Enter your loan term(in years): ");
    scanf("%d", &loanTerm);

    if (annualIncome >= 30000 && creditScore >= 700 && loanTerm <= 10) {
        printf("***********************************************\n");
        printf("Eligible :)\n");
    } else if (annualIncome >= 30000 && creditScore >= 650 && loanTerm <= 15) {
        printf("***********************************************\n");
        printf("Eligible with conditions\n");
    } else if (annualIncome < 30000 && creditScore < 650 && loanTerm > 15) {
        printf("***********************************************\n");
        printf("Not Eligible :(\n");
    }

}