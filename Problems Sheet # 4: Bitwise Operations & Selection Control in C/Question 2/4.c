#include <stdio.h>

int main() 
{
    int year;
    scanf("%d", &year);
  
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("Leap Year\n") : printf("Not Leap Year\n");
  
    return 0;
}
