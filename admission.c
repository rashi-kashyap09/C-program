#include <stdio.h>

int main()
{
    int m, p, c, total;

    printf("Enter marks in Maths, Physics, Chemistry: ");
    scanf("%d%d%d", &m, &p, &c);

    total = m + p + c;

    if ((m >= 60 && p >= 50 && c >= 40 && total >= 200) ||
        (m + p >= 150))
        printf("Eligible for admission");
    else
        printf("Not eligible");

    return 0;
}