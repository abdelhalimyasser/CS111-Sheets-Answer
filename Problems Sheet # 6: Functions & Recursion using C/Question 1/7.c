#include <stdio.h>

float average(float a, float b, float c) {
    return (a+b+c)/3;
}

int main() {
    printf("Average of 4.5, 3.0, and 6.5: %.2f\n", average(4.5, 3.0, 6.5));
    return 0;
}
