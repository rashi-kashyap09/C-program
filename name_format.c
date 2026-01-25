#include <stdio.h>

int main() {
    char first[20], middle[20], last[20];

    scanf("%s %s %s", first, middle, last);

    printf("%s %c. %s\n", first, middle[0], last);
    printf("%c.%c. %s\n", first[0], middle[0], last);
    printf("%s %c.%c.", last, first[0], middle[0]);

    return 0;
}