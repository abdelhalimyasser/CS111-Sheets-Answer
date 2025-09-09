#include <stdio.h>

void add(int a, int b) {
    printf("Sum of %d and %d: %d\n", a, b, a + b);
}

int main() {
    add(5, 7);
    return 0;
}
