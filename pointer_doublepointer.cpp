#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first = 10;
    cout << first << endl;
    int* firstPtr = &first;
    *firstPtr = 20;
    cout << first << endl;
    int** secondPtr = &firstPtr;
    **secondPtr = 30;
    cout << first;
    return 0;
}
