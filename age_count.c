#include <stdio.h>

int main()
{
    int age, i;
    int boys = 0, girls = 0, men = 0, women = 0;

    for (i = 1; i <= 50; i++)
    {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if (age < 18)
        {
            if (i % 2 == 0)
                girls++;
            else
                boys++;
        }
        else
        {
            if (i % 2 == 0)
                women++;
            else
                men++;
        }
    }

    printf("Boys = %d\n", boys);
    printf("Girls = %d\n", girls);
    printf("Men = %d\n", men);
    printf("Women = %d", women);

    return 0;
}