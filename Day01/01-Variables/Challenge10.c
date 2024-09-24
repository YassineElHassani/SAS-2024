#include <stdio.h>
#include <math.h>



int main() {
    float r = 3.14159;
    int radius;

    printf("Enter sephre: ");
    scanf("%d", &radius);

    float volume = (4/3) * r * pow(radius, 3);
    printf("Volume of a sphere: %d", volume);
    
    return 0;
}