#include<iostream>
using namespace std;
int main()
{
    int num, i,  prime = 0;
    cout << "Enter a number: ";
    cin>> num;
    if (num<=1)
    {
        cout <<"The number is not prime";
        
    }
    for (i=2; i<num; i++)
    {
        if (num%i == 0)
        {
                prime = 1;
        }
    }
    if (num ==2 || prime ==0 )
    cout<<"Is a prime number";
    else
    cout << "It is a non prime number";
    return 0;
}