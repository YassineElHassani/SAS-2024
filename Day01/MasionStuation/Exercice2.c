#include <stdio.h>

void main() {
    float temperature;

    printf("Entree: ");
    scanf("%f", &temperature);

    if (temperature >= 38) {
        printf("Vous avez de la fievre.");
    } else {
        printf("Votre temperature est normal.");
    }
}