#include <stdio.h>

void multiply(float a, float b, float c) {
    printf("Product of %.1f, %.1f, and %.1f is: %.2f\n", a, b, c, a*b*c);
}

int main() {
    multiply(2.5, 3.0, 1.5);
    return 0;
}
