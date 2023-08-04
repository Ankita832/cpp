#include<iostream>
using namespace std;
int main()
{
    int len, i, j;
    cout<< "Enter a number :";
    cin>> len;
    for (i=0; i<len; i++)
         {
            cout<<"*";
        }
        cout<< endl;
        for (i=0; i< len-2;i++)
        {
            cout<<"*";
        for (j=0; j< len - 2; j++)
        {
            cout<< " ";
            
        }
        cout<<"*";
        cout<<endl;
        }
        
        for (i=0; i<len; i++)
        cout<< "*";

    
    return 0;
}