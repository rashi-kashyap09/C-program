#include <stdio.h>

int main() {
    float num = 10.45678;

    printf("%.2e\n", num);
    printf("%.4e\n", num);
    printf("%.5e", num);

    return 0;
}