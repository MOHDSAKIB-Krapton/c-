/*

    A
   ABA
  ABCBA
 ABCDCBA

*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the value: ";
    cin >> num;

    int cols = (2 * num) - 2;
    int rows = num - 1;
    int counterOne = 1;
    int counterTwo = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (j >= rows - i && j < cols - rows)
            {
                cout << " " << static_cast<char>(counterOne + 64) << " ";
                counterOne++;
            }
            else if (j <= cols - rows + i && j >= cols - rows)
            {
                cout << " " << static_cast<char>(counterTwo + 64) << " ";
                counterTwo--;
            }
            else
            {
                cout << "   ";
            }
        }
        counterOne = 1;
        counterTwo = i + 2;
        cout << endl;
    }

    return 0;
}