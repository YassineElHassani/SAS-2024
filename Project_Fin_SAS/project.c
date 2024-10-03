#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Info {
    struct Date date;
    char fName[15];
    char lName[15];
    char status[15];
    int number;
    int age;
    int uniqueRef;
};

struct Info info[100];
int size = 0;
int uniqueCounter = 0;

void addReservation() {
    if(size < 100) {
        printf("==> Enter First Name: ");
        getchar();
        fgets(info[size].fName, sizeof(info[size].fName), stdin);
        info[size].fName[strcspn(info[size].fName, "\n")] = '\0';

        printf("==> Enter Last Name: ");
        fgets(info[size].lName, sizeof(info[size].lName), stdin);
        info[size].lName[strcspn(info[size].lName, "\n")] = '\0';
        

        printf("==> Enter Phone Number: ");
        fflush(stdin);
        scanf("%d", &info[size].number);

        printf("==> Enter Age: ");
        fflush(stdin);
        scanf("%d", &info[size].age);

        printf("==> Enter Status(valid, postpon, cancel, process): ");
        getchar();
        fgets(info[size].status, sizeof(info[size].status), stdin);
        info[size].status[strcspn(info[size].status, "\n")] = '\0';

        printf("==> Enter reservation Date(DD MM YYYY): ");
        fflush(stdin);
        scanf("%d %d %d", &info[size].date.day, &info[size].date.month, &info[size].date.year);

        info[size].uniqueRef = uniqueCounter++;
        
        printf("\nReservation added successfully!\n\n");
        size++;
    } else {
        printf("Storage full cannot add more reservations.\n\n");
    }
}


void reservationSettings() {
    int searchReferance;
    int found = 0;

    printf("==> Enter the referance(ID) of the reservation you want to modify or delete: ");
    scanf("%d", &searchReferance);

    for (int i = 0; i < size; i++) {
        if (info[i].uniqueRef == searchReferance) {
            found = 1;
            int choice;

            printf("Reservation found. Choose an action:\n");
            printf("- 1 - Modify\n- 2 - Delete\n\n");
            printf("==> Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("==> Enter new Phone Number: ");
                scanf("%d", &info[i].number);
                printf("==> Enter new Age: ");
                scanf("%d", &info[i].age);
                printf("==> Enter new Status(valid, postpon, cancel, process): ");
                scanf("%s", info[i].status);
                printf("==> Enter new reservation Date(DD MM YYYY): ");
                scanf("%d %d %d", &info[i].date.day, &info[i].date.month, &info[i].date.year);
                printf("Reservation updated successfully!\n\n");
            } else if (choice == 2) {
                for (int j = i; j < size - 1; j++) {
                    info[j] = info[j + 1];
                }
                size--;
                printf("Reservation deleted successfully!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("No reservation found with that name.\n\n");
    }
}



void showReservation() {
    if (size == 0) {
        printf("No reservations available!\n");
        return;
    }

    printf("---------------------------------------------------------------------------------------------------\n");
    printf("|   ID   |   First Name    |    Last Name    |    Phone    | Age |    Status     |      Date      |\n");
    printf("---------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("|  %-5d | %-15s | %-15s | %-11d | %-3d | %-13s |   %02d/%02d/%04d   |\n",
               info[i].uniqueRef, info[i].fName, info[i].lName, info[i].number, info[i].age, 
               info[i].status, info[i].date.day, info[i].date.month, info[i].date.year);
    }

    printf("---------------------------------------------------------------------------------------------------\n\n");
}

void reservationTri() {
    int choice;
    printf("Choose type of sorting:\n");
    printf("- 1 - Sort by name\n- 2 - Sort by status\n\n");
    printf("==> Enter your choice: ");
    scanf("%d", choice);

    if(choice == 1) {
        printf("-----------------------------------------------------------\n");
        printf("|                    Sort reservations                    |\n");
        printf("-----------------------------------------------------------\n");
        printf("|         Last Name           |           Status          |\n");
        printf("-----------------------------------------------------------\n");

        for(int i = 0; i < size; i++) {
        char sort[15];
        for(int j = i + 1; j < size; j++) {
            if(strcmp(info[i].lName, info[j].lName) > 0) {
                strcpy(sort, info[i].lName);
                strcpy(info[i].lName, info[j].lName);
                strcpy(info[j].lName, sort);
            }
        }
        printf("|  %-23s |  %-10s |\n", info[i].lName, info[i].status);
        }

        printf("-----------------------------------------------------------\n");
    } else if(choice == 2) {
        printf("-----------------------------------------------------------\n");
        printf("|                    Sort reservations                    |\n");
        printf("-----------------------------------------------------------\n");
        printf("|          Status          |           Last Name          |\n");
        printf("-----------------------------------------------------------\n");

        for(int i = 0; i < size; i++) {
        char sort[15];
        for(int j = i + 1; j < size; j++) {
            if(strcmp(info[i].status, info[j].status) > 0) {
                strcpy(sort, info[i].status);
                strcpy(info[i].status, info[j].status);
                strcpy(info[j].status, sort);
            }
        }
        printf("|  %-23s |  %-23s |\n", info[i].status, info[i].lName);
        }

        printf("-----------------------------------------------------------\n");
    }
    printf("\n\n");
}




void searchReservation() {
    char searchName[15];
    int searchReferance;
    int found = 0, choice;

    printf("Choose type of search:\n");
    printf("- 1 - By last name\n- 2 - By referance(ID)\n\n");
    printf("==> Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("==> Enter the last name of the reservation you are searching for: ");
        scanf(" %[^\n]", searchName);

        for (int i = 0; i < size; i++) {
        if (strcasecmp(info[i].lName, searchName) == 0) {
            found = 1;
            printf("\nReservation found!\n\n");

            printf("First Name: %s\n", info[i].fName);
            printf("Last Name: %s\n", info[i].lName);
            printf("Phone Number: %d\n", info[i].number);
            printf("Age: %d\n", info[i].age);
            printf("Status: %s\n", info[i].status);
            printf("Reservation Date: %02d/%02d/%04d\n\n", info[i].date.day, info[i].date.month, info[i].date.year);
            break;
        }
    }
    } else if(choice == 2) {
        printf("==> Enter the ID of the reservation you are searching for: ");
        scanf("%d", &searchReferance);

        for(int i = 0; i < size; i++) {
            if(info[size].uniqueRef == searchReferance) {
                found = 1;
                printf("\nReservation found!\n\n");

                printf("First Name: %s\n", info[i].fName);
                printf("Last Name: %s\n", info[i].lName);
                printf("Phone Number: %d\n", info[i].number);
                printf("Age: %d\n", info[i].age);
                printf("Status: %s\n", info[i].status);
                printf("Reservation Date: %02d/%02d/%04d\n\n", info[i].date.day, info[i].date.month, info[i].date.year);
                break;
            }
        }
    }

    if (!found) {
        printf("\nNo reservation found with that name.\n\n");
    } 
}


void statistic() {
    int totalAge = 0, valid = 0, cancel = 0, postpon = 0, process = 0;

    for (int i = 0; i < size; i++) {
        totalAge += info[i].age;

        if(strcmp(info[i].status, "valid") == 0) {
            valid++;
        } else if(strcmp(info[i].status, "cancel") == 0) {
            cancel++;
        } else if(strcmp(info[i].status, "postpon") == 0) {
            postpon++;
        } else if(strcmp(info[i].status, "process") == 0) {
            process++;
        }
    }

    if (size > 0) {
    printf("\nAverage age: %.2f\n", (float)totalAge / size);
    }

    printf("Total validated: %d\n", valid);
    printf("Total canceled: %d\n", cancel);
    printf("Total postponed: %d\n", postpon);
    printf("Total processed: %d\n\n", process);
}


void main() {
    int choice;

    while(1) {
        printf("- 1 - Add a reservation\n");
        printf("- 2 - Modify or delete a reservation\n");
        printf("- 3 - View reservation details\n");
        printf("- 4 - Sorting reservations\n");
        printf("- 5 - Search for reservations\n");
        printf("- 6 - Statistics\n");
        printf("- 7 - Exit\n\n");

        printf("==> Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addReservation();
                break;
            case 2:
                reservationSettings();
                break;
            case 3:
                showReservation();
                break;
            case 4:
                reservationTri();
                break;
            case 5:
                searchReservation();
                break;
            case 6:
                statistic();
                break;
            case 7:
                printf("Exiting the program.\n\n");
                return;
            default:
                printf("Invalid choice! Please try again.\n\n");
                break;
        }
    }
}
