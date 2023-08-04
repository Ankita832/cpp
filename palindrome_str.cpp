#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    cout << "Enter a input : "<< endl;
    getline (cin, input);
    bool ispalindrome = true;
    int len = input.length();
    for(int j=0;j<input.length();j++)
		input[j]=tolower(input[j]);
    for (int i = 0; i < len/2; i++)
    {
        if (input [i]!= input [len-i-1])
    
    {
        ispalindrome = false;
        break;
    }
    }
    if (ispalindrome)
    {
        cout << "The String is Palindrome: ";
    }
    else
    {
        cout << "The String is not palindrome:";
    }
    return 0;
}