#include<bits/stdc++.h>
using namespace std;
int main()
{
    string var = "BMW";
    string* varPtr = &var;
    cout << var<< endl; //printing the value of the var variable
    cout << &var << endl; //printing  the address of the var variable
    cout << varPtr<< endl; // printing the address of the var variable which is the value of the string pointer variable varPtr
    cout << *varPtr << endl; //printing the value of the var variable which is here pointing to the string pointer variable
    cout << *(&var)<< endl; // printing the value of the var variable which is basically nothing but pointing to the address of the var variable that is the value of the var variable itself.
    cout << &varPtr; // printing the address of the varPtr string pointer variable 
    return 0;
}

