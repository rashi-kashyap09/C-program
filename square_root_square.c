#include <stdio.h>
#include <math.h>

int main() {
    int i;

    printf("Number\tSquare-root\tSquare\n");

    for (i = 0; i <= 100; i += 10) {
        printf("%d\t%.2f\t\t%d\n", i, sqrt(i), i * i);
    }

    return 0;
}