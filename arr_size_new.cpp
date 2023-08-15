#include<bits/stdc++.h>
using namespace std;
int largest (int arr[], int size)
{
    int first, second, third;
    if( size < 3)
    {
        cout << "Tnvalid input";
    }
    first = second = third = INT_MIN;
    for(int i = 0; i < size ; i++)
    {
      if  ( arr [i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
    
        else if (arr [i] > second && arr [i] < first)
        {
            third = second;
            second = arr[i];
        }
    
        else if (arr [i] > third && arr [i] < second)
        {
            third = arr [i];
        }
    }
    if ( second == INT_MIN)
    {
        cout << "The distinct elements are not present ";
    }
    cout << "Three  largest elements are :" << first << " "<< second << " "<< third ;
    return 0;
}
int main()
{
    int arr []= {70, 182,716,4674,93754,298846,9653,36484};
    int n = sizeof (arr) / sizeof arr[0];
    largest(arr, n);
    return 0;
}