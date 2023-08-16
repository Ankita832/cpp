#include<bits/stdc++.h>
using namespace std;
int deleteFromArray ( int arr [], int &current_size, int position)
{
if (position >= current_size)
cout << "Invalid input :";
for (int i = position; i < current_size - 1; i++)
{
    arr [i] = arr [i+1];
}
current_size--;
}
int main ()
{
    int arr [] = {67, 84, 97, 107, 233, 196};
    int current_size = sizeof(arr)/sizeof(arr[0]);
    int position ;
    cout << "Enter the position to delete the element :" ;
    cin >> position;
    deleteFromArray (arr, current_size, position);
    for (int i = 0; i < current_size; i++)
    {
        cout <<" " << arr [i];
    }
    return 0;
}
