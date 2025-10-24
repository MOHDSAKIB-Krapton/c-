/*

*    *
**  **
******
**  **
*    *

*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the num : ";
    cin >> num;

    int rows = num - 1;
    int cols = (2 * num) - 1;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (j >= i + 1 && j <= cols - 1 - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    rows = num - 2;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (j >= rows + 1 - i && j <= cols - rows - 1 + i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}