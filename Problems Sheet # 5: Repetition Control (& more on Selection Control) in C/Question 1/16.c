#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int guess, num, attempts = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Welcome to the Guessing Game!\n");
  
    while(1) {
        attempts++;
      
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &guess);
      
        if(guess < num) 
          printf("Too low. Try again.\n");
        else if(guess > num) 
          printf("Too high. Try again.\n");
        else {
            printf("Congratulations! You guessed the correct number (%d) in %d attempts.\n", num, attempts);
            break;
        }
    }
  
    return 0;
}
