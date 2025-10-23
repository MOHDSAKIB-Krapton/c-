/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the nume: ";
    cin >> num;

    int prevCol = 0;
    int prevValue = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                if (prevCol == 0)
                {
                    cout << " " << 1 << " ";
                    prevCol = 1;
                    prevValue = 1;
                }
                else
                {
                    cout << " " << 0 << " ";
                    prevCol = 0;
                    prevValue = 0;
                }
            }
            else if (prevValue == 0)
            {
                cout << " " << 1 << " ";
                prevValue = 1;
            }
            else
            {
                cout << " " << 0 << " ";
                prevValue = 0;
            }
        }
        cout << endl;
    }

    return 0;
}