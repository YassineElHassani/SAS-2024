#include <stdio.h>

void main() {
    int age, medicalHistory, coverageType;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Choise your medical history below\n");
    printf(" - 0 - No problems\n");
    printf(" - 1 - Minor problems\n");
    printf(" - 2 - major problems\n");
    printf("Enter your medical history: ");
    scanf("%d", &medicalHistory);
    printf("Choise your coverage type below\n");
    printf(" - 1 - basic\n");
    printf(" - 2 - extensive\n");
    printf("Enter your coverage type: ");
    scanf("%d", &coverageType);

    printf("===================================\n");

    if(age < 30) {
        printf("Your health needs a 'Basic plan'\n");
    } else if(age >= 30) {
        if(medicalHistory == 0) {
            printf("Your health needs a 'Basic plan'\n");
        } else if(medicalHistory == 1) {
            printf("Your health needs a 'Extended plan'\n");
        } else if(medicalHistory == 2) {
            if(coverageType == 1) {
                printf("Your health needs a 'Basic plan'\n");
            } else if(coverageType == 2) {
                printf("Your health needs a 'Extended plan'\n");
            }
        }
    }
    
    printf("===================================\n");
}