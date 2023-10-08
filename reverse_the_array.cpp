#include<iostream>
using namespace std;
void display (int arr[], int num)
{
    int i;
    for (i=0; i< num; i ++)
    {
        cout <<"Enter the array: "<< arr[i]<< " ";

    }
}
int reverse (int arr[], int num)
{
    reverse (arr, arr+num);
}
int main()
{
    int arr[]= {52,78,32,75,96};
    int num = sizeof(arr)/sizeof (arr[0]);
    reverse (arr,num);
    display(arr,num);
    return 0;
}