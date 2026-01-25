#include <stdio.h>

int main() {
    float num;
    int intPart;

    printf("Enter a floating point number: ");
    scanf("%f", &num);

    intPart = (int)num;

    printf("Last two digits = %d", intPart % 100);
    return 0;
}