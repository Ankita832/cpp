#include<iostream>
using namespace std;
void move(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        cout<< arr[i]<< " ";
}
int main()
{
    int arr[] = { 6, -85,-95,-41,75,15,93,-5,-4,24};
    int n = sizeof(arr) / sizeof(arr[0]);
    move(arr, n);
    return 0;
}