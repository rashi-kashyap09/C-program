#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || b == c || a == c)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is not Isosceles");

    return 0;
}