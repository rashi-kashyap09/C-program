#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a four digit number: ");
    scanf("%d", &num);

    sum = num % 10;
    num = num / 10;

    sum = sum + (num % 10);
    num = num / 10;

    sum = sum + (num % 10);
    num = num / 10;

    sum = sum + num;

    printf("Sum of digits = %d", sum);
    return 0;
}