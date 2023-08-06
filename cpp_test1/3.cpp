#include <iostream>
using namespace std;
int main()
{
    int a = 12, b = 8;
    cout << "The value of a is 12";
    cout << " & The value of b is 8";
    a = a+ b;
    b = a - b;
    a = a - b;
    cout << "\n After swapping the value of a = " << a;
    cout << " & the value of b = " << b;
    return 0;
}