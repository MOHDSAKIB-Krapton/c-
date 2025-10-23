/*

E
DE
CDE
BCDE
ABCDE

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
        for (int j = num - i; j <= num; j++)
        {
            cout << " " << static_cast<char>(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}