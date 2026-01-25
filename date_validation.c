#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date");
    } else {
        printf("Valid date");
    }

    return 0;
}