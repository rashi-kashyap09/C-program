#include <stdio.h>
#include <math.h>

int main() {
    float demand, setup, holding, eoq;

    printf("Enter demand rate: ");
    scanf("%f", &demand);

    printf("Enter setup cost: ");
    scanf("%f", &setup);

    printf("Enter holding cost: ");
    scanf("%f", &holding);

    eoq = sqrt((2 * demand * setup) / holding);

    printf("Economic Order Quantity = %.2f", eoq);
    return 0;
}