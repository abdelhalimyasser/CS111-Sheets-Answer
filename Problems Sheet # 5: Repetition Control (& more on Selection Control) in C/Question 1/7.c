#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    printf("Multiplication Table for %d:\n", n);
  
    for(int i = 1; i <= 10; i++) 
        printf("%d x %d = %d\n", n, i, n*i);
  
    return 0;
}
