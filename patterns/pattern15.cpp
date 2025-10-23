/*

ABCDE
ABCD
ABC
AB
A

*/

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter the value :";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << " " << static_cast<char>(j + 65) << " ";
        }
        cout << endl;
    }

    return 0;
}