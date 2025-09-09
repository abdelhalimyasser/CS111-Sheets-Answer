#include <stdio.h>

int sumOfSquares(int a, int b) {
    return (a*a + b*b);
}

int main() {
    printf("Sum of squares of 3 and 4: %d\n", sumOfSquares(3,4));
    return 0;
}
