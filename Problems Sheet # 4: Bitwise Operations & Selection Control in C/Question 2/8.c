#include <stdio.h>

int main() 
{
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': 
            if(b != 0) printf("Result: %d\n", a / b);
            else printf("Division by zero not allowed\n");
            break;
        case '%':
            if(b != 0) printf("Result: %d\n", a % b);
            else printf("Modulo by zero not allowed\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
