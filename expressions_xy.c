#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("(x + y)(x - y) = %d", (x + y) * (x - y));

    return 0;
}