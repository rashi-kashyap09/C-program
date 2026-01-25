#include <stdio.h>

int main() {
    int days, years, weeks, rem;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    rem = days % 365;
    weeks = rem / 7;
    rem = rem % 7;

    printf("Years = %d\nWeeks = %d\nDays = %d", years, weeks, rem);
    return 0;
}