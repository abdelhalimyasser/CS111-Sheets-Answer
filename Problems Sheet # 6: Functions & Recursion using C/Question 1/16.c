#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    printf("GCD of 24 and 36 is: %d\n", gcd(24,36));
    return 0;
}
