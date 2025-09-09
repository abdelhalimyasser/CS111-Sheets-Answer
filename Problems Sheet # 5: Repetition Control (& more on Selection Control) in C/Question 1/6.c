#include <stdio.h>
int main() {
    int num, count = 0, sum = 0;
    float avg;
  
    do {
        printf("Enter positive numbers (enter a negative number to stop): ");
        scanf("%d", &num);
        if(num >= 0) {
            sum += num;
            count++;
        }
    } while(num >= 0);

    if(count > 0) {
        avg = (float)sum / count;
        printf("Average: %.1f\n", avg);
    } 
    else
        printf("No positive numbers entered.\n");
  
    return 0;
}
