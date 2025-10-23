/*

A
AB
ABC
ABCD
ABCDE

*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the value : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // Uses this function static_chat with type conversion of char and passed the value of A=65
            cout << " " << static_cast<char>(j + 65) << " ";
        }
        cout << endl;
    }

    return 0;
}