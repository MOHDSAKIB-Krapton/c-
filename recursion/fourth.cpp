// Problem :- Check if a string is palindrome or not using recursion.

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool checkPalindromeString(string name, int i = 0)
{

    int n = name.length();
    if (i > n / 2)
        return true;

    if (name[i] != name[n - i - 1])
        return false;

    return checkPalindromeString(name, i + 1);
}

int main()
{

    string name;
    cout << "Enter the string : ";
    cin >> name;

    cout << "The String Palindromic Result is : " << checkPalindromeString(name);

    return 0;
}