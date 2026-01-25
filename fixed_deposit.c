#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate = 8.75, amount;
    int time = 10;

    printf("Enter investment amount: ");
    scanf("%f", &principal);

    amount = principal * pow((1 + rate / 100), time);

    printf("Amount after 10 years = %.2f", amount);

    return 0;
}