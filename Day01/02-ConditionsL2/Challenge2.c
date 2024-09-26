#include <stdio.h>

void main() {
    int driverAge, typeCar, accidentNumber, prime;

    printf("***********************************************\n");
    printf("** calculate the insurance premium for a car **\n");
    printf("|   Enter your age: ");
    scanf("%d", &driverAge);
    printf("***********************************************\n");
    printf("|   Enter your basic prime: ");
    scanf("%f", &prime);
    printf("***********************************************\n");
    printf("|            Chose your car type              |\n");
    printf("|     - 1 - for sport                         |\n");
    printf("|     - 2 - for utility                       |\n");
    printf("|     - 3 - for family                        |\n");
    printf("|   Enter your car type: ");
    scanf("%d", &typeCar);
    printf("***********************************************\n");
    printf("|   Number of accidents in the last 5 years: ");
    scanf("%d", &accidentNumber);

    int age1 = prime * 1.5;
    int age2 = prime;
    int age3 = prime * 1.2; 
    int sportCar = prime * 2;
    int utilityCar = prime * 1.2;
    int familyCar = prime * 1.1;
    float per = (prime / 10) * 30;

    if (driverAge < 25) {
        if (typeCar == 1) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age1 + sportCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age1 + sportCar);
            }
        } else if (typeCar == 2) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age1 + utilityCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age1 + utilityCar);
            }
        } else if (typeCar == 3) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age1 + familyCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age1 + familyCar);
            }
        } 
    } else if (driverAge >= 25 && driverAge <= 65) {
       if (typeCar == 1) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age2 + sportCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age2 + sportCar);
            }
        } else if (typeCar == 2) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age2 + utilityCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age2 + utilityCar);
            }
        } else if (typeCar == 3) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age2 + familyCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age2 + familyCar);
            }
        } 
    } else if (driverAge > 65) {
        if (typeCar == 1) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age3 + sportCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age3 + sportCar);
            }
        } else if (typeCar == 2) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age3 + utilityCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age3 + utilityCar);
            }
        } else if (typeCar == 3) {
            if (accidentNumber > 1) {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.2f\n", age3 + familyCar + per);
            } else {
                printf("***********************************************\n");
                printf("Your insurance for the car: %.d\n", age3 + familyCar);
            }
        } 
    }
}