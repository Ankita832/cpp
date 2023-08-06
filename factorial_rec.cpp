#include<iostream>
using namespace std;
int fact (int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * fact (num - 1);

}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin>> num;
    if (num< 0)
    {
        cout<< "Invalid. Please enter a non negative integer";
        
    }
    int factorial = fact (num);
    cout<< "Factorial: "<< factorial;
    
}