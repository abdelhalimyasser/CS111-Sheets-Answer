#include <stdio.h>

int main() 
{
    int a, b, temp;
    scanf("%d %d", &a, &b);
  
    temp = a;
    a = b;
    b = temp;
  
    printf("After Swap: a=%d b=%d\n", a, b);
  
    return 0;
}
