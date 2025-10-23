/*

1
23
456
78910
1112131415

*/

#include <iostream>
#include <iomanip> // Input out manipulation :- functions like setw() and setfill() exists.
using namespace std;

int main()
{

    int num;
    cout << "Enter the value : ";
    cin >> num;

    int idx = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "  " << setw(2) << setfill('0') << idx << "  ";
            idx++;
        }
        cout << endl;
    }

    return 0;
}