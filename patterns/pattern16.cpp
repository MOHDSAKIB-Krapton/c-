/*

A
BB
CCC
DDDD
EEEEE

*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the value: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " " << static_cast<char>(i + 65) << " ";
        }
        cout << endl;
    }

    return 0;
}