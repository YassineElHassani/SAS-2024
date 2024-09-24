#include <stdio.h>

int main() {
    char fname[10];
    char lname[10];
    char gender[6];
    char email[20];
    int age;

    printf("Enter Your First Name: ");
    scanf("%s", &fname);
    printf("Enter Your Last Name: ");
    scanf("%s", &lname);
    printf("Enter Your Gender: ");
    scanf("%s", &gender);
    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf("Enter Your Email: ");

    Printf("Your First Name: %s\nYour Last Name: %s\nYour Age: %d\nYour Gender: %s\nYour Email: %s\n");
}