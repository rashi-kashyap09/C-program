#include <stdio.h>

int main()
{
    int type;
    float amount, discount = 0, net;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    printf("1. Mill cloth\n2. Handloom item\n");
    printf("Enter item type: ");
    scanf("%d", &type);

    if (type == 1)
    {
        if (amount >= 101 && amount <= 200) discount = 0.05;
        else if (amount <= 300) discount = 0.075;
        else if (amount > 300) discount = 0.10;
    }
    else if (type == 2)
    {
        if (amount <= 100) discount = 0.05;
        else if (amount <= 200) discount = 0.075;
        else if (amount <= 300) discount = 0.10;
        else discount = 0.15;
    }

    net = amount - (amount * discount);
    printf("Net amount = %.2f", net);

    return 0;
}