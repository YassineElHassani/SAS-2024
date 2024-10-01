#include <stdio.h>
#include <string.h>

struct Contact {
    char name[20];
    char number[20];
    char email[50];
};

struct Contact conTab[100];
int size = 0;

void addContact() {
    if(size < 100) {
        printf("==> Enter the name: ");
        scanf("%s", conTab[size].name);
        printf("==> Enter the phone number: ");
        scanf("%s", conTab[size].number);
        printf("==> Enter the email: ");
        scanf("%s", conTab[size].email);
        printf("Contact added successfully!\n");
        printf("------------------------------------------------------------------------------\n");
        printf("|           Name            |  %s\n", conTab[size].name);
        printf("------------------------------------------------------------------------------\n");
        printf("|        Phone number       |  %s\n", conTab[size].number);
        printf("------------------------------------------------------------------------------\n");
        printf("|           Email           |  %s\n", conTab[size].email);
        printf("------------------------------------------------------------------------------\n");
        printf("\n");
        size++;
    } else {
        printf("Storage full!!\n");
    }
}

void editContact() {
    char search[20], new_number[20], new_email[50];
    int found = 0;

    printf("==> Enter the contact name you want to edit: ");
    scanf(" %[^\n]", search);
    
    for(int i = 0; i < size; i++) {
        if(strcasecmp(conTab[i].name, search) == 0) {
            found = 1;
            
            printf("==> Enter the new number: ");
            scanf("%s", new_number);
            strcpy(conTab[i].number, new_number);

            printf("The number has been updated.\n");

            printf("==> Enter the new email: ");
            scanf("%s", new_email);
            strcpy(conTab[i].email, new_email);

            printf("The email has been updated.\n");
            break;
        }
    }
    if (!found) {
        printf("The contact is not available.\n");
    }
}

void deleteContact() {
    char search[20];
    int found = 0;

    printf("==> Enter the name of the contact you want to remove: ");
    scanf(" %[^\n]", search);

    for(int i = 0; i < size; i++) {
        if(strcasecmp(conTab[i].name, search) == 0) {
            found = 1;
            printf("The contact has been found: %s\n", conTab[i].name);
            for(int j = i; j < size - 1; j++) {
                conTab[j] = conTab[j + 1];
            }
            size--;
            printf("The contact has been removed.\n\n");
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}

void showContact() {
    if(size == 0) {
        printf("No contacts are available!\n\n");
        return;
    }
    printf("------------------------------------------------------------------------------\n");
    printf("|          Name           |      Phone number      |          Email          |\n");
    printf("------------------------------------------------------------------------------\n");
    for(int i = 0; i < size; i++) {
        printf("|   %-19s   |   %-18s   | %-5s |\n", conTab[i].name, conTab[i].number, conTab[i].email);
    }
    printf("------------------------------------------------------------------------------\n");
}

void searchContact() {
    char search[20];
    int found = 0;

    printf("==> Enter the name of the contact you're searching for: ");
    scanf(" %[^\n]", search);

    for(int i = 0; i < size; i++) {
        if(strcasecmp(conTab[i].name, search) == 0) {
            found = 1;
            printf("------------------------------------------------------------------------------\n");
            printf("|          Name           |      Phone number      |          Email          |\n");
            printf("------------------------------------------------------------------------------\n");
            printf("|   %-20s   |   %-15s   |   %-30s   |\n", conTab[i].name, conTab[i].number, conTab[i].email);
            printf("------------------------------------------------------------------------------\n");
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n\n");
    }
}

int main() {
    int choise;

    while (1) {
        printf("- 1 - Add a Contact\n");
        printf("- 2 - Edit a Contact\n");
        printf("- 3 - Delete a Contact\n");
        printf("- 4 - Show All Contacts\n");
        printf("- 5 - Search for a Contact\n");
        printf("- 6 - Exit\n\n");
        printf("==> Enter your choice: ");
        scanf("%d", &choise);

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
            printf("Exiting the program.\n\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n\n");
            break;
        }
    }
}
