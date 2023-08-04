#include<iostream>
using namespace std;
int main()
{
    int x=0, y=0, z=1;
    cout << " Enter a number: ";
    cin>> x;
    while (x>0)
    {
        y = x%10;
        z = z * y;
        x = x/10;
        cout<< "digit= "<< y << "product "<< z;

    }
    cout<< "the product of all digits = "<< z;
    return 0;
}
