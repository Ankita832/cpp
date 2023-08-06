#include<iostream>
using namespace std;
int main()
{
    int n=0, m=0, sum =0;
    cout << " Enter a number: ";
    cin>> n;
    while (n>0)
    {
        n = n/10;
        m = n%10; 
        sum = sum +m;
        

    }
    cout<< "The sum of digits are :"<< sum;
    return 0;
}