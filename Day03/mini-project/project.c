#include <stdio.h>
#include <strings.h>

struct Contact {
    char name[20];
    char number[10];
    char email[50];
};

struct Contact conTab[100];
int size = 0;

void addContact() {
    if(size < 100) {
        printf("==> Enter the name: ");
        scanf("%s", conTab[size].name);
        printf("==> Enter the number phone: ");
        scanf("%s", conTab[size].number);
        printf("==> Enter the email: ");
        scanf("%s", conTab[size].email);
        printf("Contact added successfully!\n");
        printf("------------------------------------------------------------------------------\n");
        printf("|           Name            |  %s\n", conTab[size].name);
        printf("------------------------------------------------------------------------------\n");
        printf("|        Phone number       |  %s\n", conTab[size].number);
        printf("------------------------------------------------------------------------------\n");
        printf("|           Emai            |  %s\n", conTab[size].email);
        printf("------------------------------------------------------------------------------\n");
        printf("\n");
        size++;
    } else {
        printf("Stockage full!!\n");
    }
}

void editContact() {
    char search[20], new_number, new_email;
    int found = 0;

    printf("==> Enter the contact name you want to edit: ");
    scanf(" %[^\n\s+]", search);
    
    for(int i = 0; i < size; i++) {
        if(strcasecmp(conTab[i].name, search) == 0) {
            found = 1;
            printf("Current phone number of '%s': %d\n", conTab[i].name, conTab[i].number);
            printf("==> Enter the new number: ");
            scanf(" %[^\n\s+]", new_number);
            strcpy(conTab[i].number, new_number);
            printf("The number has been updated\n");
            
            printf("Current email of '%s': %s\n", conTab[i].name, conTab[i].email);
            printf("==> Enter the new email: ");
            scanf(" %[^\n\s+]", new_email);
            strcpy(conTab[i].email, new_email);
            printf("The email has been updated\n");
            break;
        }
    }
    if (!found) {
        printf("The contact is not available\n");
    }
}

void deleteContact() {
    char search[20];
    int found = 0;

    printf("==> Enter the name of the contact you want to remove: ");
    scanf(" %[^\n\s+]", search);

    for(int i = 0; i < size; i++) {
        if(strcasecmp(conTab[i].name, search) == 0) {
            found = 1;
            printf("The contact has been found %s\n", conTab[i].name);
            for(int j = i; j < size - 1; j++) {
                conTab[i] = conTab[i + 1];
            }
            size--;
            printf("The contact has been removed.\n");
            break;
        }
    }
}

void showContact() {
    if(size == 0) {
        printf("No contact are avaliable!\n");
        return;
    }
    printf("------------------------------------------------------------------------------\n");
    printf("|          Name           |      Phone number      |          Email          |\n");
    printf("------------------------------------------------------------------------------\n");
    for(int i = 0; i < size; i++) {
        printf("|   %s   |   %s   |   %s   |", conTab[i].name, conTab[i].number, conTab[i].email);
    }
    printf("------------------------------------------------------------------------------\n");
}

void searchContact() {
    char search[20];
    int found = 0;

    printf("Enter the name of contact you searching for: ");
    scanf(" %[^\n\s+]", search);

    for(int i = 0; i < size; i++) {
        if(strcasecmp(conTab[i].name, search) == 0) {
            found = 1;
            printf("------------------------------------------------------------------------------\n");
            printf("|          Name           |      Phone number      |          Email          |\n");
            printf("------------------------------------------------------------------------------\n");
            printf("|   %s   |   %s   |   %s   |", conTab[i].name, conTab[i].number, conTab[i].email);
            printf("------------------------------------------------------------------------------\n");
            break;
        }
    }
}

void main() {
    int choise;

    while (1) {
        printf("- 1 - Add a Contact\n");
        printf("- 2 - Edit a Contact\n");
        printf("- 3 - Delete a Contact\n");
        printf("- 4 - Show All conTab\n");
        printf("- 5 - Search for a Contact\n");
        printf("- 6 - Exite\n");
        printf("\n");
        printf("==> Enter your choise: ");
        scanf("%d", choise);

        switch (choise) {
        case 1:
            addContact();
            break;
        case 2:
            editContact();
            break;
        case 3:
            deleteContact();
            break;
        case 4:
            showContact();
            break;
        case 5:
            searchContact();
            break;
        case 6:
            printf("Exiting the program.\n");
            return;
            break;      
        default:
            printf("Please try again.\n");
            break;
        }
    }
}