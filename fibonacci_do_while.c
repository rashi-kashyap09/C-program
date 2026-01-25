#include <stdio.h>

int main()
{
    int a = 1, b = 1, c, n, i = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    do
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    } while (i <= n);

    return 0;
}