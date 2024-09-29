#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

// Define proto type
void interface();
void addToStock();
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