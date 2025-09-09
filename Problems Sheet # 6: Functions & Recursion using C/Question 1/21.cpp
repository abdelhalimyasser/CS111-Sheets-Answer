#include <iostream>
using namespace std;

void calculateSumAndAverage(int a, int b, int &sum, float &avg) {
    sum = a + b;
    avg = sum / 2.0;
}

int main() 
{
    int sum;
    float avg;
  
    calculateSumAndAverage(5, 8, sum, avg);
  
    cout << "The Sum of 5 and 8: " << sum << endl;
    cout << "The Average of 5 and 8: " << avg << endl;
  
    return 0;
}
