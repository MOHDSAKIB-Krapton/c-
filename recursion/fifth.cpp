// Problem :- Fibonacci Series using recursion.

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void fibonacci(int n, int first = 0, int second = 1)
{

    if (n == 0)
        return;

    cout << first << endl;
    fibonacci(n - 1, first + second, first);
}

int main()
{

    int num;
    cout << "Enter the iteration : ";
    cin >> num;

    fibonacci(num);

    return 0;
}