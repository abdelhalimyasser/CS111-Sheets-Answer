#include <stdio.h>

int main() {
    int choice;
    int num1, num2;
    
    while (1) {
        printf("\nCalculator Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n0. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result: %d\n", num1 + num2);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result: %d\n", num1 - num2);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result: %d\n", num1 * num2);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    continue;  // skip and go back to menu
                }
                printf("Result: %.2f\n", (float)num1 / num2);
                break;

            case 0:
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 0 and 4.\n");
                continue;
        }

        if (choice == 0)
            break;
    }

    return 0;
}
