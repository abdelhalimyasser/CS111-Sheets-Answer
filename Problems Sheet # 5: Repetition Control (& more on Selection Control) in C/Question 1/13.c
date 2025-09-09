#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
  
    while(a != b) {
        if(a > b) a = a - b;
        else b = b - a;
    }
  
    printf("The Greatest Common Divisor (GCD) is: %d\n", a);
  
    return 0;
}
