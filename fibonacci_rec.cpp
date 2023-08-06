#include<iostream>
using namespace std;
int fib (int input)
{
    if ( input == 0)
    return 0;
    if (input == 1)
    return 1;
    return fib (input-1) + fib (input-2);
}
int main()
{
    int num;
    cout<< "Enter the number: ";
    cin>> num;
    int fibonacci = fib (num);
    cout << "The number is :"<< fibonacci;
}