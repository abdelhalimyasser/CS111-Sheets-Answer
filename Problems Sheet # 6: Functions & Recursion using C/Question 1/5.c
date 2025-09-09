#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    printf("%d is %s\n", 6, isEven(6) ? "even" : "odd");
    printf("%d is %s\n", 7, isEven(7) ? "even" : "odd");
    return 0;
}
