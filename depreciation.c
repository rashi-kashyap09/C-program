#include <stdio.h>

int main() {
    float purchase, salvage, years, depreciation;

    printf("Enter purchase price: ");
    scanf("%f", &purchase);

    printf("Enter salvage value: ");
    scanf("%f", &salvage);

    printf("Enter years of service: ");
    scanf("%f", &years);

    depreciation = (purchase - salvage) / years;

    printf("Yearly depreciation = %.2f", depreciation);
    return 0;
}