#include <stdio.h>

void main(){
    int number;
    int div1000,newNbr1,div100,newNbr2,div10,newNbr3;

    printf("Enter a 4-digit integer: ");
    scanf("%d", &number);

    if(number > 9999 || number < 1000){
        printf("Enter a number that consists of 4 digits: ");
    } else {
        div1000 = number / 1000;
        newNbr1 = number - (div1000);
        div100 = newNbr1 / 100;
        newNbr2 = newNbr1 - (div100);
        div10 = newNbr2 / 10;
        newNbr3 = newNbr2 % 10;
        printf("%d%d%d%d",newNbr3,div10,div100,div1000);
    }

}