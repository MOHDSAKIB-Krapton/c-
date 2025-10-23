/*
1      1
12    21
123  321
12344321
*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the value : ";
    cin >> num;

    int cols = 2 * (num - 1);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= cols + 1; j++)
        {
            if (j <= i)
            {

                cout << " " << j + 1 << " ";
            }
            else if (j >= cols + 1 - i)
            {
                cout << " " << (cols + 1) - j + 1 << " ";
            }
            else
            {

                cout << " " << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}