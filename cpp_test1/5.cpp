#include<iostream>
using namespace std;
int main()
{
    int year = 0;
    cout<< "Enter the year: ";
    cin>> year;
    if (year % 400 == 0  )
    {
        cout<< "The year is a leap year: ";
    }
    
    else if (year % 4 == 0  && year % 100 != 0 )
    {
        cout<< "The year is  a leap year: ";
    }
    else
    {
        cout<< "The year is not a leap year: ";
    }
    return 0;
}