#include<iostream>
using namespace std;
int main()
{
    int a=10, b=6;
    cout<< "The value of a = 10";
    cout<< "\nThe value of a = 6";
    a= a+b;
    b=a-b;
    a=a-b;
    cout<< "\nAfter swapping The value of a = "<<a;
    cout<< "\nAfter swapping The value of a = "<<b;
    return 0;
}