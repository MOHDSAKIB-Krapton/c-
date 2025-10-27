// Vector is a dynamic array, part of STL, which automatically resizes when elements are added or removed.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;        // Empty vector of integer.
    vector<int> nums(5);     // Vector of size 5 initialized with 0.
    vector<int> nums(5, 10); // Vector of size 5 initialized with 10.
    vector<string>
        names = {"mohd", "sakib", "legend"};

    // nums.reserve(10); // Preallocate the memory if you know the size beforehand.

    // Operations on vector.
    nums.push_back(10); // Adds element at the end.
    nums.pop_back();    // Removes last element.
    nums[0];
    nums.at(0);                        // Access element in the array
    nums.size();                       // Returns number of elements.
    nums.empty();                      // Returns true if the array is empty.
    nums.clear();                      // Clear the entire array, removes all elements.
    nums.insert(nums.begin() + 2, 99); // Insert 99 at index 2.
    nums.erase(nums.begin() + 1);      // Remove element at index 1.

    nums.emplace_back(2); // it works same as push_back, just not in case of pairs, where it internally construct the pair meanwhile the push_back() creates -> copy -> insert less efficient.

    return 0;
}