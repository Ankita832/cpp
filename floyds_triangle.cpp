#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, num = 1;
    cout << "Enter the rows of the triangle :";
    cin >> rows;
    for(i =1; i<=rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << num;
            cout << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}