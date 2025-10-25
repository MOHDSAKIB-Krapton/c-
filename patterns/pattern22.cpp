/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444


*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the value : ";
    cin >> num;

    int rows = (2 * num) - 1;
    int cols = (2 * num) - 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // find the distance of cell from top, bottom, left and right.
            int top = i;
            int bottom = rows - 1 - i;
            int left = j;
            int right = cols - 1 - j;

            int element = num - min(min(top, bottom), min(left, right));
            cout << " " << element << " ";
        }
        cout << endl;
    }

    return 0;
}