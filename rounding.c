#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Enter a real number: ");
    scanf("%f", &num);

    printf("Smallest integer = %d\n", (int)floor(num));
    printf("Largest integer  = %d\n", (int)ceil(num));
    printf("Nearest integer  = %d\n", (int)round(num));

    return 0;
}