#include <stdio.h>

int main() 
{
    int choice;
    float x, y;
  
    do {
        printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n0. Exit\n");
        scanf("%d", &choice);
      
        if(choice == 0) break;
        printf("Enter two numbers: ");
        scanf("%f %f", &x, &y);
      
        if(choice == 1) 
          printf("Result: %.2f\n", x+y);
        else if(choice == 2) 
          printf("Result: %.2f\n", x-y);
        else if(choice == 3) 
          printf("Result: %.2f\n", x*y);
        else if(choice == 4) {
            if(y != 0) 
              printf("Result: %.2f\n", x/y);
            else 
              printf("Division by zero not allowed\n");
        }
    } while(choice != 0);
  
    printf("Exiting the program. Goodbye!\n");
  
    return 0;
}
