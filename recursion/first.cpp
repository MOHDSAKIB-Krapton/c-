// Problem :- Sum of first N numbers using recursion.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sumOfN(int n)
{
    if (n == 0)
        return 0;

    return n + sumOfN(n - 1);
}

int main()
{

    int num;
    cin >> num;
    cout << sumOfN(num);

    return 0;
}