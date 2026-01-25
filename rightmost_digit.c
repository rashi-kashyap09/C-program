#include <stdio.h>

int main() {
    float num;
    int intPart, digit;

    printf("Enter a floating point number: ");
    scanf("%f", &num);

    intPart = (int)num;
    digit = intPart % 10;

    printf("Right-most digit = %d", digit);
    return 0;
}