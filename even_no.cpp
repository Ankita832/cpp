#include<iostream>
using namespace std;
int main()
{
    int n=0, i=2;
    cin>>n;
    if (n <2)
    {
        cout<<"No even no available";
    }
    else 
    {
        while (i<=n) //when i is less equal to n, it will print the value of i. after that it will increase upto 2 digit until it reaches the vale of n.
        {
            cout<< i <<" ";
            i= i+2;
        }
    }
    return 0;
}