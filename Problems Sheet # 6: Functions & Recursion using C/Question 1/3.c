#include <stdio.h>
#define PI 3.1416

void calculateArea(float r) {
    printf("Area of the circle with radius %.2f is: %.2f\n", r, PI * r * r);
}

int main() {
    calculateArea(2.5);
    return 0;
}
