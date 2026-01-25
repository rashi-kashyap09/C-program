#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float P, r, V;

    for (P = 1000; P <= 10000; P += 1000)
    {
        for (r = 0.10; r <= 0.20; r += 0.01)
        {
            for (n = 1; n <= 10; n++)
            {
                V = P * pow((1 + r), n);
                printf("P=%.0f r=%.2f n=%d V=%.2f\n", P, r, n, V);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}