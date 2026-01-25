#include <stdio.h>

int main() {
    float x, y;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    printf("Sum = %.2f\n", x+y);
    printf("Difference = %.2f\n", x-y);
    printf("Product = %.2f\n", x*y);
    printf("Division = %.2f\n", x/y);

    return 0;
}