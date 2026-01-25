#include <stdio.h>
#include <math.h>

int main() {
    float L, C, R, frequency;

    printf("Enter inductance (L): ");
    scanf("%f", &L);

    printf("Enter capacitance (C): ");
    scanf("%f", &C);

    printf("Enter resistance (R): ");
    scanf("%f", &R);

    frequency = sqrt((1 / (L * C)) - (R * R) / (4 * C * C));

    printf("Frequency = %.2f", frequency);
    return 0;
}