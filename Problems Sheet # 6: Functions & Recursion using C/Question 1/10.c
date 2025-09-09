#include <stdio.h>

void printPattern() {
    for(int i=0; i<5; i++) {
        for(int j=0; j<3; j++) 
          printf("* ");
        printf("\n");
    }
}

int main() {
    printPattern();
    return 0;
}
