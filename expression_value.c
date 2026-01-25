#include <stdio.h>

int main() {
    int a, b, c, x;

    printf("Enter values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    x = a - b / 3 + c * 2 - 1;

    printf("Value of x = %d", x);
    return 0;
}