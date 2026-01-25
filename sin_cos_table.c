#include <stdio.h>
#include <math.h>

int main() {
    int x;
    float rad;

    printf("x(degrees)\tSin(x)\t\tCos(x)\n");

    for (x = 0; x <= 180; x += 15) {
        rad = x * 3.14159 / 180;
        printf("%3d\t\t%.4f\t\t%.4f\n", x, sin(rad), cos(rad));
    }

    return 0;
}