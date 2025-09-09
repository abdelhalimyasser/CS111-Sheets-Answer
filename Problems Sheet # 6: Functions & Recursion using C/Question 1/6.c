#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for(int i=0; i<exp; i++)
        result *= base;
    return result;
}

int main() {
    printf("2^3 = %d\n", power(2,3));
    return 0;
}
