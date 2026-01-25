#include <stdio.h>
#include <math.h>

int main() {
    float x1=2, y1=2, x2=5, y2=6;
    float d, r, area;
    float pi = 3.14;

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    r = d / 2;
    area = pi * r * r;

    printf("Area of circle = %.2f\n", area);

    return 0;
}