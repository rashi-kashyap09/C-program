#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("x\t e^(-x)\n");

    for (x = 0.0; x <= 10.0; x += 0.1)
    {
        printf("%.1f\t %.5f\n", x, exp(-x));
    }

    return 0;
}