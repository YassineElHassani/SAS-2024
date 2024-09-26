#include <stdio.h>

void main() {
    int score, seniority, awards;

    printf("Enter your performance score: ");
    scanf("%d", &score);
    printf("Enter your seniority(in years): ");
    scanf("%d", &seniority);
    printf("Enter your awards received (0 for none, 1 for one, 2 for two or more): ");
    scanf("%d", &awards);

    if (score >= 90 && seniority >= 5) {
        printf("Excellent\n");
        if (awards == 1) {
            printf("Your performance have been boosted by %%10 :)");
        } else if (awards >= 2) {
            printf("Your performance have been boosted by %%20 :)");
        }
    } else if (score >= 75 && seniority >= 3) {
        printf("Good\n");
        if (awards == 1) {
            printf("Your performance have been boosted by %%10 :)");
        } else if (awards >= 2) {
            printf("Your performance have been boosted by %%20 :)");
        }
    } else if (score >= 70 && seniority < 3) {
        printf("Satisfactory\n");
        if (awards == 1) {
            printf("Your performance have been boosted by %%10 :)");
        } else if (awards >= 2) {
            printf("Your performance have been boosted by %%20 :)");
        }
    } else if (score < 50) {
        printf("Insufficient\n");
        if (awards == 1) {
            printf("Your performance have been boosted by %%10 :)");
        } else if (awards >= 2) {
            printf("Your performance have been boosted by %%20 :)");
        }
    }
}