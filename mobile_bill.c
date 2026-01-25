#include <stdio.h>

int main() {
    int calls;
    float bill = 250;

    printf("Enter number of calls made: ");
    scanf("%d", &calls);

    if (calls > 100) {
        bill = bill + (calls - 100) * 1.25;
    }

    printf("Total bill = Rs %.2f", bill);
    return 0;
}