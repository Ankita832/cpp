#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout <<"Enter the number";
    cin>> num;
    for (i=0; i< num; i++ )
    {
        for (j = 0; j< num; j++)
        {
            cout<< "*";
        }
        cout << endl;
    }
    return 0;
}