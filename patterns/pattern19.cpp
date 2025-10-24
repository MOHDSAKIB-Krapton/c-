/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value: ";
    cin >> num;

    int rows = num - 1;
    int cols = (2 * num) - 1;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (j >= rows + 1 - i && j <= rows + i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (j >= i + 1 && j <= cols - i - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
