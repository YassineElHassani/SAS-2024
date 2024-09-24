#include <stdio.h>

int main() {
    float celsius;

    printf("Celsius Temperature: ");
    scanf("%f", &celsius);

    if (celsius < 0) {
        printf("This Temperature is Solid");
    } else if (0 <= celsius && celsius < 100) {
        printf("This Temperature is Liquide");
    } else if (celsius >= 100) {
        printf("This Temperature is Gas");
    }

    return 0;
}