//   *
//  ***
// *****

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value : ";
    cin >> n;

    int cols = (2 * n) - 1;
    int rows = n - 1;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (rows - i <= j && (cols - 1) - rows + i >= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}