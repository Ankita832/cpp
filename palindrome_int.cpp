#include<iostream>
using namespace std;
int main()
{
    int num, rem, pal=0, temp = 0;
    cout<< "Enter a number :";
    cin>> num;
    temp = num;
    while (num!=0)
    {
        rem = num % 10;
        pal = (pal * 10) + rem;
        num = num/10;
    }
    if (pal == temp)
    {
        cout << "The number is palindrome: ";
    }
    else
    {
        cout<< " the number is not palindrome: ";
    }
    return 0;
}