#include <stdio.h>

int fibonacci(int n) {
    if (n==0) 
      return 0;
    if (n==1) 
      return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() 
{
    int terms = 7;
    printf("Fibonacci sequence (first %d terms): ", terms);
  
    for (int i=0; i<terms; i++)
        printf("%d ", fibonacci(i));
  
    return 0;
}
