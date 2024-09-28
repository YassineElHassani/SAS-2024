#include <stdio.h>

void main() {
    int base, hauteur, aire, perimetre;

    printf("Entree: \n");
    printf("Base: ");
    scanf("%d", &base);
    printf("Hauteur: ");
    scanf("%d", &hauteur);

    aire = (base * hauteur) / 2;
    perimetre = 3 * base;

    printf("Sortie: \n");
    printf("Aire: %d\n", aire);
    printf("Perimetre: %d\n", perimetre);
}