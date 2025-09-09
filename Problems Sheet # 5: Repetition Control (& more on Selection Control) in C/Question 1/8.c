#include <stdio.h>

int main() 
{
    int i = 2, j, isPrime;
    printf("Prime numbers between 1 and 50:\n");
    
  while(i <= 50) {
        isPrime = 1;
    
        for(j = 2; j <= i/2; j++)
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
    
        if(isPrime) printf("%d ", i);
        i++;
    }
  
    return 0;
}
