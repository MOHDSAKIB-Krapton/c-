// *******
//  *****
//   ***
//    *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;

    int rows = n - 1;
    int cols = (2 * n) - 2;

    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j <= cols; j++)
        {
            if ((j >= i) && (j <= cols - i))
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