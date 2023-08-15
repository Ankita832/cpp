#include <iostream>
using namespace std;
int largest_element ( int arr[], int n)
{
    int max_element = arr [0];
    for (int i = 1; i< n; i++)
    {
        if (arr [i]> max_element) max_element = arr[i];
        return max_element;
    }
}
int main ()
    {
        int arr [] = {10,12,20,0,9,12};
        int size = size[arr]/sizeof (arr[0]);
        cout << largest_element (arr, size);
    }
