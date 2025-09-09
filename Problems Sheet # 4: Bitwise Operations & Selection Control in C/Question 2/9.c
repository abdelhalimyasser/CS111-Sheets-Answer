#include <stdio.h>

int main() 
{
    int mark;
    scanf("%d", &mark);

    switch(mark / 10) {
        case 10:
        case 9:
        case 8: printf("Excellent\n"); break;
        case 7: printf("Very Good\n"); break;
        case 6: printf("Good\n"); break;
        case 5: printf("Pass\n"); break;
        default: printf("Fail\n");
    }
  
    return 0;
}
