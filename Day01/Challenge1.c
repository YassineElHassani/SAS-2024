#include <stdio.h>

int main() {
    int age;
    char fname[10];
    char lname[10];
    char gender[6];
    char email[20];

    printf("Enter Your First Name: ");
    scanf("%s", &fname);
    printf("Enter Your Last Name: ");
    scanf("%s", &lname);
    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf("Enter Your Gender: ");
    scanf("%s", &gender);
    printf("Enter Your Email: ");
    scanf("%s", &email);
    printf("\n");
    printf("Your First Name: %s \nYour Last Name: %s \nYour Age: %d \nYour Gender: %s \nYour Email: %s \n", fname,lname,age,gender,email);
}