#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int a = 20, b = 10;
    printf("20 + 10 = %d\n", add(a,b));
    printf("20 - 10 = %d\n", sub(a,b));
    return 0;
}