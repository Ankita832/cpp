#include<iostream>
using namespace std;
int main()
{
    int len, i, j;
    cout<< "Enter the length :";
    cin>> len;
    for (i=0; i< len; i++)
    {
        for (j= 0; j<len- i -1; j++)
        {
            cout << " ";
            
        }
        cout<< "*";
        for (j=0; j<i; j++)
        {
            cout << "^*";

        }
        cout <<endl;
    }
    return 0;
}