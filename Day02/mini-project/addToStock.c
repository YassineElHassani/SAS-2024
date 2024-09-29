#include "main.h"

void addToStock() {
    char title[30], author[20];
    int price, quantity;

    printf("%sEnter the title of the bock: ", YELLOW);
    scanf("%s", &title);
    printf("%sEnter the author of the book: ", YELLOW);
    scanf("%s", &author);
    printf("%sEnter the book price: ", YELLOW);
    scanf("%d", &price);
    printf("%sEnter the quantity in stock: ", YELLOW);
    scanf("%d", &quantity);
    
}