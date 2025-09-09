#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() 
{
    int a = 5, b = 8;
    cout << "Before swapping: x = " << a << ", y = " << b << endl;
    swap(a,b);
    cout << "After swapping: x = " << a << ", y = " << b << endl;
  
    return 0;
}
