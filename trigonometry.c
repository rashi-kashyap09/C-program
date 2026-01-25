#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    char T;

    printf("Enter angle in radians: ");
    scanf("%lf", &x);

    printf("Enter function (s/c/t): ");
    scanf(" %c", &T);

    if (T == 's' || T == 'S')
        printf("sin(x) = %.2lf", sin(x));
    else if (T == 'c' || T == 'C')
        printf("cos(x) = %.2lf", cos(x));
    else if (T == 't' || T == 'T')
        printf("tan(x) = %.2lf", tan(x));
    else
        printf("Invalid choice");

    return 0;
}