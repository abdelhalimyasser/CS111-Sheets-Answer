#include <stdio.h>

int powerRecursive(int base, int exp) {
    if (exp == 0) return 1;
    return base * powerRecursive(base, exp-1);
}

int main() 
{
    printf("2^3 = %d\n", powerRecursive(2,3));
    return 0;
}
