#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    float num;

    printf("Square Root Table\n");

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            num = i + j / 10.0;
            printf("%.2f\t", sqrt(num));
        }
        printf("\n");
    }

    return 0;
}