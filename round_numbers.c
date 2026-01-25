#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Enter four floating point numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    printf("Rounded values:\n");
    printf("%.0f %.0f %.0f %.0f", a, b, c, d);

    return 0;
}