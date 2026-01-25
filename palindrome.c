#include <stdio.h>

int main()
{
    int n, rev = 0, temp, digit;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if (rev == n)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}