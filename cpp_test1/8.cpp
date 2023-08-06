#include<iostream>
using namespace std;
int main()
{
    int len;
    cout<< "Enter the length: ";
    cin>> len;
    int num1 = 0, num2 = 1, num3;
    cout << "Fibonacci series is :";
    for ( int i = 0; i<len; i++)
    {
        cout << num1 << " ";
        num3 = num1+num2;
        num1= num2;
        num2 = num3;
    }
    return 0;
}