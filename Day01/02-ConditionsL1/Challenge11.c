#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    int r;
    srand(time(NULL));  
    r = (rand()% 7 + 1);

    char *days[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    printf("**************************\n");
    printf("** random day of a week **\n");
    printf("******** %s ********\n", days[r - 1]);
    printf("**************************\n");

}