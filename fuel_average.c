#include <stdio.h>

int main() {
    float distance, fuel, average;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Enter fuel consumed (litres): ");
    scanf("%f", &fuel);

    average = distance / fuel;

    printf("Average = %.2f km/l", average);
    return 0;
}