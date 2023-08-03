#include<iostream>
using namespace std;
int main()
{
    int len;
    cout << "Enter the lenght : ";
    cin>> len;
    int num1 = 0, num2 = 1, num3 =0; // declaration & initialization of num1,num2,num3
    cout <<"Fibonacci series is :";
    for (int i=0; i<len; i++) // looping throughout the lenght to print the series
    {
        cout<<num1<<" ";
        num3= num1+num2;
        num1 =num2;
        num2=num3;
    }
    return 0;
}
