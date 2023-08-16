#include<bits/stdc++.h>
using namespace std;
int copyanarray (int arr[], int num, int arr2[] )
{
    int j = 0;
    for (int i = num -1; i >= 0 ; i--)
    {
        arr2[j] = arr [i];
        j++;
    }
}
int main()
{
    int arr[]= {56,96,87,23,11};
    const int num = sizeof (arr)/sizeof(arr[0]);
    int arr2[num] = {};
    copyanarray (arr, num, arr2);
    for (int i = 0; i < num; i++)
    {
        cout <<" "<<arr[i];
    }
    cout << "\n";
    for (int i = 0; i < num; i++)
    {
        cout <<" "<<arr2[i];
    }
    return 0;
}