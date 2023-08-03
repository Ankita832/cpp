#include<iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0, num3= 0;
    cout << "Enter three numbers:\n ";
    cin >> num1>> num2>> num3;
    if (num1 >= num2)
    {
        if (num1>= num3)
        cout << "num1 is the Maximum among them\n"<< num1;
        else
        cout << "num3 is the Maximum among them\n"<< num3;
    }
    else if (num2>=num1)
    {
        if (num2>=num3)
        cout << "num2 is the Maximum among them\n"<< num2;
        else
        cout << "num3 is the Maximum among them\n"<< num3;
    }
     else
     cout<< "num3 is maximum among them\n"<< num3;
    return 0;
}