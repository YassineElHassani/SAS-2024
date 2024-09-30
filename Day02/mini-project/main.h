#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

// Define struct
struct Book {
    char title[100];
    char author[100];
    float price;
    int quantity;
};

// Define table
extern struct Book books[100];
extern int book_table;

// Function prototypes
void interface();
void addToStock();
void searchForBooks();
void availableBooks();
void updateQuantity();
void removeBook();
void totalBooks();

// Define color codes
#define RESET   "\033[0m"       /* Default */
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#endif
