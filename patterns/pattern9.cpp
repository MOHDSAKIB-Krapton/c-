/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the value : ";
    cin >> num;

    int rows = num - 1;
    int cols = 2 * num - 2;

    // Upper half
    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (j >= i && j <= cols - i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    // Lower half
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (j >= i && j <= cols - i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}