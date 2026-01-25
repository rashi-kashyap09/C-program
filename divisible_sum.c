#include <stdio.h>

int main()
{
    char name[20];
    int units;
    float bill = 0;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 200)
        bill = units * 0.80;
    else if (units <= 300)
        bill = 200 * 0.80 + (units - 200) * 0.90;
    else
        bill = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;

    bill = bill + 100;   // meter charge

    if (bill > 400)
        bill = bill + bill * 0.15;

    printf("User: %s\nBill amount: %.2f", name, bill);

    return 0;
}