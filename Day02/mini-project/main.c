#include "main.h"

void main() {
    int choise;
    interface();

    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                    - 1 - Add a book to stock                                                          |\n");
    printf("|                                    - 2 - Show all available books                                                     |\n");
    printf("|                                    - 3 - Search for a book by its title                                               |\n");
    printf("|                                    - 4 - Update the quantity of a book                                                |\n");
    printf("|                                    - 5 - Remove a book from stock                                                     |\n");
    printf("|                                    - 6 - Show total number of books in stock                                          |\n");
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n");
    printf("%s==> Enter your choise: ", YELLOW);
    scanf("%d", &choise);
    printf("%s", RESET);
    
    if(choise == 1) {
        addToStock();
    } else if(choise == 2) {
        availableBooks();
    } else if(choise == 3) {
        searchForBooks();
    } else if(choise == 4) {
        updateQuantity();
    } else if(choise == 5) {
        removeBook();
    } else if(choise == 6) {
        totalBooks();
    } else {
        main();
    }




}