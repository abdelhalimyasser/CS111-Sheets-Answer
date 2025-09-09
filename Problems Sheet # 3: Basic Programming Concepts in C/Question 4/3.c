#include <stdio.h>

int main() 
{
    float length, width, area;
    scanf("%f %f", &length, &width);
  
    area = length * width;
    printf("Area: %.2f\n", area);
    
    return 0;
}
