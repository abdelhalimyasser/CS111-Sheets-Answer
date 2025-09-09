#include <stdio.h>

void printPatternWithSize(int rows, int cols) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() 
{
    printf("Printing Pattern with Size 4 by 6:\n");
    printPatternWithSize(4,6);
    return 0;
}
