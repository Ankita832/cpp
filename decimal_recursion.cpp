#include <iostream>
using namespace std;
int decimal (int binary)
{
    if (decimal == 0)
    {
        return 0;
    }
    if (decimal == 1)
    {
        return 1;
    }
    else 
    return (decimal (binary/2)*10+ (binary%2))
}