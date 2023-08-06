#include<iostream>
using namespace std;
int main()
{
    int i =0, num = 0, fact = 1;
    cout<<" Enter a number :";
    cin>> num;
    for(i = 1; i<= num; i++)
    {
        fact = fact *i;

    }
    cout <<"The factorial of the integer is : "<< fact;
    return 0;
}