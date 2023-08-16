#include<bits/stdc++.h>
using namespace std;
int concat (int arr1 [], int arr2 [], int arr3[], int size)
{
    int j = 0;
    for (int i =0; i < size*2 ; i++)
    {
        if (i < size)
        {
            arr3 [i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[j];
            j++;
        }

    }
}
int main()
{
    int arr1[] = {75,29,964,24,98};
    int arr2[] = {46,73,12,935,44};
    const int size1 = sizeof (arr1)/ sizeof(arr1[0]);
    const int size2 = sizeof (arr2)/ sizeof(arr2[0]);
    const int size3 = size1 + size2;
    int arr3 [size3];
    concat ( arr1, arr2, arr3, size1, size3);
    for 
}