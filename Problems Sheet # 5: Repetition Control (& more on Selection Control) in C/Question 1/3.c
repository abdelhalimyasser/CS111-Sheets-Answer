#include <stdio.h>

int main() 
{
    int i = 1, sum = 0;
    do {
        sum += i;
        i++;
    } while(i <= 50);
  
    printf("Sum: %d\n", sum);
  
    return 0;
}
