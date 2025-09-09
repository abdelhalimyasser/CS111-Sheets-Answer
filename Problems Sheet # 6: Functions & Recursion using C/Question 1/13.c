#include <stdio.h>

void printTable(int n) {
    for (int i=1; i<=10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
}

int main() {
    printTable(5);
    return 0;
}
