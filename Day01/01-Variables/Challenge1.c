#include <stdio.h>

int main() {
    int age;
    char fname[10], lname[10], gender[6], email[40];

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

    printf("=========================== \nYour First Name: %s \nYour Last Name: %s \nYour Age: %d \nYour Gender: %s \nYour Email: %s \n===========================\n", fname,lname,age,gender,email);

    return 0;
}