#include <stdio.h>

int main() {
    float dollar, euro, inr;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollar);

    euro = dollar * 0.92;
    inr = dollar * 83.00;

    printf("Euro = %.2f\n", euro);
    printf("INR = %.2f", inr);

    return 0;
}