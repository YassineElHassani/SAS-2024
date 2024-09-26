#include <stdio.h>

void main() {
    int userType, contracType;
    float electricity;

    printf("Electricity consumption (in kWh): ");
    scanf("%f", &electricity);
    printf("Choise your type: \n");
    printf(" - 1 - residential\n");
    printf(" - 2 - commercial\n");
    printf("Enter your type: ");
    scanf("%d", &userType);
    printf("Choise your contract type: \n");
    printf(" - 1 - standard\n");
    printf(" - 2 - reduced\n");
    printf("Enter your type: ");
    scanf("%d", &contracType);

    if (userType == 1) {
        if (contracType == 1) {
            if (electricity > 500) {
                float bill = (electricity * 0.20) / 100, percentage = bill * 1;
                printf("Yourel ectricity bill: %.2f", (electricity * 0.20) + percentage);
            } else {
                printf("Yourel ectricity bill: %.2f", electricity * 0.20);
            }
        } else if (contracType == 2) {
            if (electricity > 500) {
                float bill = (electricity * 0.15) / 100, percentage = bill * 1;
                printf("Yourel ectricity bill: %.2f", (electricity * 0.15) + percentage);
            } else {
                printf("Yourel ectricity bill: %.2f", electricity * 0.15);
            }
        }
    } else if (userType == 2) {
        if (contracType == 1) {
            if (electricity > 500) {
                float bill = (electricity * 0.30) / 100, percentage = bill * 1;
                printf("Yourel ectricity bill: %.2f", (electricity * 0.30) + percentage);
            } else {
                printf("Yourel ectricity bill: %.2f", electricity * 0.30);
            }
        } else if (contracType == 2) {
            if (electricity > 500) {
                float bill = (electricity * 0.25) / 100, percentage = bill * 1;
                printf("Yourel ectricity bill: %.2f", (electricity * 0.25) + percentage);
            } else {
                printf("Yourel ectricity bill: %.2f", electricity * 0.25);
            }
        }
    }
}