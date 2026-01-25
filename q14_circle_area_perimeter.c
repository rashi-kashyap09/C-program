#include <stdio.h>

int main() {
    float r = 5, area, perimeter;
    float pi = 3.14;

    area = pi * r * r;
    perimeter = 2 * pi * r;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}