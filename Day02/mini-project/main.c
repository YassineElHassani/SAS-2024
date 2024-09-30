#include "main.h"


// Declaration of table
struct Book books[100];
int book_table = 0;

// ASCII Art interface
void interface() {

    printf("%s  _________ __                 __                _____                                                             __   \n", BLUE);
    printf(" /   _____//  |_  ____   ____ |  | __           /     \\ _____    ____ _____     ____   ____   _____   ____   _____/  |_ \n");
    printf(" \\_____  \\\\   __\\/  _ \\_/ ___\\|  |/ /  ______  /  \\ /  \\\\__  \\  /    \\\\__  \\   / ___\\_/ __ \\ /     \\_/ __ \\ /    \\   __\\ \n");
    printf(" %s/        \\|  | (  <_> )  \\___|    <  /_____/ /    Y    \\/ __ \\|   |  \\/ __ \\_/ /_/  >  ___/|  Y Y  \\  ___/|   |  \\  |  \n", RED);
    printf("/_______  /|__|  \\____/ \\___  >__|_ \\         \\____|__  (____  /___|  (____  /\\___  / \\___  >__|_|  /\\___  >___|  /__|  \n");
    printf("        \\/                  \\/     \\/                 \\/     \\/     \\/     \\/ _____/      \\/      \\/     \\/     \\/     \n");
    printf("                          __________               __              __                                                   \n");
    printf("                          \\______   \\ ____   ____ |  | __  _______/  |_  ___________   ____                             \n");
    printf(" %s ______   ______   ______ |    |  _//  _ \\ /  _ \\|  |/ / /  ___/\\   __\\/  _ \\_  __ \\_/ __ \\   ______   ______   ______ \n", GREEN);
    printf(" /_____/  /_____/  /_____/ |    |   (  <_> |  <_> )    <  \\___ \\  |  | (  <_> )  | \\/\\  ___/  /_____/  /_____/  /_____/ \n");
    printf("                           |______  /\\____/ \\____/|__|_ \\/____  > |__|  \\____/|__|    \\___  >                           \n");
    printf("                                  \\/                   \\/     \\/                          \\/                            %s\n", RESET);
    printf("\n");
    
}

//Add a book to stock
void addToStock() {
    if (book_table < 100) {
        printf("%s==> Enter the title of the book: ", YELLOW);
        scanf("%s", books[book_table].title);

        printf("==> Enter the author of the book: ");
        scanf("%s", books[book_table].author);

        printf("==> Enter the book price: ");
        scanf("%f", &books[book_table].price);

        printf("==> Enter the quantity in stock: ");
        scanf("%d", &books[book_table].quantity);
        printf("%s", RESET);

        printf("%s\nBook added successfully!\n%s", GREEN, RESET);

        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("|            Title             |  %s\n", books[book_table].title);
        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("|            Author            |  %s\n", books[book_table].author);
        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("|            Price             |  $%.2f\n", books[book_table].price);
        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("|        Stock quantity        |  %d\n", books[book_table].quantity);
        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");

        book_table++;
    } else {
        printf("%s==> Stock is full, cannot add more books!%s\n", RED, RESET);
    }
}

//Show all available books
void availableBooks() {
    if (book_table == 0) {
        printf("%s==> No books are available in the stock!%s\n", RED, RESET);
        return;
    }

    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("|            Title             |            Author            |       Price       |    Stock quantity    |\n");
    printf("-------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < book_table; i++) {
        printf("| %-28s | %-27s | $%-15.2f | %-20d |\n", books[i].title, books[i].author, books[i].price, books[i].quantity);
    }

    printf("-------------------------------------------------------------------------------------------------------------------------\n");
}

//Search for a book by its title
void searchForBooks() {
    char search[100];
    int found = 0;

    printf("%s==> Enter the title of the book you searching for: %s", YELLOW, RESET);
    scanf(" %[^\n]", search);

    for (int i = 0; i < book_table; i++) {
        if (strcasecmp(books[i].title, search) == 0) {
            found = 1;
            printf("-------------------------------------------------------------------------------------------------------------------------\n");
            printf("|            Title             |            Author            |       Price       |    Stock quantity    |\n");
            printf("-------------------------------------------------------------------------------------------------------------------------\n");
            printf("| %-28s | %-27s | $%-15.2f | %-20d |\n", books[i].title, books[i].author, books[i].price, books[i].quantity);
            printf("-------------------------------------------------------------------------------------------------------------------------\n");
            break;
        }
    }

    if (!found) {
        printf("%s==> The book '%s' is not available in stock.%s\n", RED, search, RESET);
    }

    printf("%s", RESET);
}

//Update the quantity of a book
void updateQuantity() {
    char search[100];
    int found = 0;
    int new_quantity;

    printf("%s==> Enter the title of the book you want to update: ", YELLOW);
    scanf(" %[^\n]", search);

    for (int i = 0; i < book_table; i++) {
        if (strcasecmp(books[i].title, search) == 0) {
            found = 1;
            printf("%s==> Current quantity of '%s': %d\n", YELLOW, books[i].title, books[i].quantity);
            printf("==> Enter the new quantity: %s", RESET);
            scanf("%d", &new_quantity);

            books[i].quantity = new_quantity;
            printf("%s==> The quantity of '%s' has been updated to %d.%s\n", GREEN, books[i].title, books[i].quantity, RESET);
            break;
        }
    }

    if (!found) {
        printf("%s==> The book '%s' is not available in stock.%s\n", RED, search, RESET);
    }

    printf("%s", RESET);
}

//Remove a book from stock
void removeBook() {
    char search[100];
    int found = 0;

    printf("%s==> Enter the title of the book you want to remove: ", YELLOW);
    scanf(" %[^\n]", search);

    for (int i = 0; i < book_table; i++) {
        if (strcasecmp(books[i].title, search) == 0) {
            found = 1;

            // message deletion
            printf("%s==> Book '%s' by %s has been found.%s\n", YELLOW, books[i].title, books[i].author, RESET);
            printf("%s==> Removing '%s' from the stock%s\n", RED, books[i].title, RESET);

            for (int j = i; j < book_table - 1; j++) {
                books[j] = books[j + 1];
            }

            book_table--;

            printf("%s==> The book '%s' has been successfully removed.%s\n", GREEN, search, RESET);
            break;
        }
    }

    if (!found) {
        printf("%s==> The book '%s' is not available in stock.%s\n", RED, search, RESET);
    }

    printf("%s", RESET);
}

//Show total number of books in stock
void totalBooks() {
    int total_quantity = 0;

    for (int i = 0; i < book_table; i++) {
        total_quantity += books[i].quantity;
    }

    printf("%s==> The total number of books in stock: %d%s\n",YELLOW ,total_quantity, RESET);
}

//Main fonction
void main() {
    int choice;

    interface();

    while (1) {
        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("|                                    - 1 - Add a book to stock                                                          |\n");
        printf("|                                    - 2 - Show all available books                                                     |\n");
        printf("|                                    - 3 - Search for a book by its title                                               |\n");
        printf("|                                    - 4 - Update the quantity of a book                                                |\n");
        printf("|                                    - 5 - Remove a book from stock                                                     |\n");
        printf("|                                    - 6 - Show total number of books in stock                                          |\n");
        printf("|                                    - 7 - Exit                                                                         |\n");
        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("%s==> Enter your choice: ", YELLOW);
        scanf("%d", &choice);
        printf("%s", RESET);
        
        switch (choice) {
            case 1:
                addToStock();
                break;
            case 2:
                availableBooks();
                break;
            case 3:
                searchForBooks();
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                removeBook();
                break;
            case 6:
                totalBooks();
                break;
            case 7: // Exit option
                printf("%sExiting the program.%s\n", GREEN, RESET);
                return; // Exit the program
            default:
                printf("%sPlease try again.%s\n", RED, RESET);
                break;
        }
    }
}