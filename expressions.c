#include <stdio.h>

int main() {
    float a, b, c, d;
    float exp1, exp2, exp3;

    printf("Enter values of a, b, c and d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    exp1 = (a + b) * (c / d);
    exp2 = (a + b) * c / d;
    exp3 = a + (b * c) / d;

    printf("(a + b) * (c / d) = %.2f\n", exp1);
    printf("(a + b) * c / d   = %.2f\n", exp2);
    printf("a + (b * c) / d   = %.2f\n", exp3);

    return 0;
}