#include <stdio.h>

int main() {
    int total_marks = 450;
    int subjects = 5;
    float average;

    average = (float) total_marks / subjects;

    printf("Average marks = %.2f", average);
    return 0;
}