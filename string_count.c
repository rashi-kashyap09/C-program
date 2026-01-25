#include <stdio.h>

int main()
{
    char str[50];
    int i, upper = 0, lower = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }

    printf("Capital letters = %d\n", upper);
    printf("Small letters = %d", lower);

    return 0;
}