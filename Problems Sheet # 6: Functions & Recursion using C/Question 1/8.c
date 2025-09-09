#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Maximum of 8 and 5: %d\n", max(8,5));
    return 0;
}
