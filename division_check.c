#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Division not possible");
    } else {
        result = a / b;
        printf("Result = %.2f", result);
    }

    return 0;
}