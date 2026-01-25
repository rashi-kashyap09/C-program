#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("First line  : %d\n", num / 1000);
    printf("Second line : %d\n", (num / 100) % 10);
    printf("Third line  : %d\n", (num / 10) % 10);
    printf("Last line   : %d\n", num % 10);

    return 0;
}