#include<iostream>
using namespace std;
int main()
{
    int m, i;
    cout<< "The multiplication table : ";
    cin>> m;
    for (i=1; i<=10; i++)
    {
        cout << m << "*" << i << "="<< m*i<< endl;
    }
    return 0;
}