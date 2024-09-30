#include "main.h"

void addToStock() {
    char title[30], author[30];
    int quantity[100];
    float price[100];
    int t, a, p, q;
    
    printf("%s==> Enter the title of the bock: ", YELLOW);
    for(int t = 0; t <= 1; t++) {
        scanf("%s", &title[t]);
    }

    printf("==> Enter the author of the book: ");
    for(int a = 0; a <= 1; a++) {
        scanf("%s", &author[a]);
    }
    
    printf("==> Enter the book price: ");
    for(int p = 0; p <= 1; p++) {
        scanf("%f", &price[p]);
    }

    printf("==> Enter the quantity in stock: ");
    for(int q = 0; q <= 1; q++) {
        scanf("%d", &quantity[q]);
    }
    printf("%s", RESET);

    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("|            Title             |  %s\n", title[t]);
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("|            Author            |  %s\n", author[a]);
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("|            Price             |  $%.2f\n", price[p]);
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("|        Stock quantity        |  %d\n", quantity[q]);
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n");
}