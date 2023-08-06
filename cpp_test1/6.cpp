#include<iostream>
using namespace std;
int main()
{
    int num1 = 15, num2 = 27, num3 = 8, max;
    max = (num1> num2)? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    cout << "Largest number among :"<< num1 << " , "<< num2 << " and "<< num3 << " is "<< max;
    return 0;
}