#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Normal Pair :- can only contain two values in a pair
    pair<int, int> p = {1, 2};
    // cout << p.first << p.second;

    // If want more than two values in pair use nested pair instead.
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    // cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    // Pair of array
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[1].second;

    return 0;
}