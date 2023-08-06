#include <iostream>
#define PI 3.14
using namespace std;
int main ()
{
    float radius, area;
    cout<< " Enter the redius of circle :";
    cin>> radius;
    area = PI * radius * radius;
    cout<< "Area pf circle :"<< area;
    return 0;
}