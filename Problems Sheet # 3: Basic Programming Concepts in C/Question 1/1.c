#include <stdio.h>
#define MAX_OPERATIONS 4
#define TAX_RATE 0.08

int main() {
    float num1, num2, result=0;
    int choice;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);
  
    if(choice < 1 || choice > MAX_OPERATIONS) 
      return 0; // to exit the program as there is an error 

    scanf("%f %f", &num1, &num2);

    if(choice == 1) result = num1 + num2;
    if(choice == 2) result = num1 - num2;
    if(choice == 3) result = num1 * num2;
    if(choice == 4 && num2 != 0) result = num1 / num2;

    result += result * TAX_RATE;

    printf("Result: %f\n", result);
    return 0;
}
