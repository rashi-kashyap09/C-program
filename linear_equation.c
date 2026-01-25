#include <stdio.h>

int main()
{
    float a, b, c, d, m, n;
    float x1, x2, den;

    printf("Enter values of a b c d m n: ");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &m, &n);

    den = (a * d) - (c * b);

    if (den == 0)
        printf("No unique solution (ad - cb = 0)");
    else
    {
        x1 = (m * d - b * n) / den;
        x2 = (a * n - m * c) / den;

        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f", x2);
    }

    return 0;
}