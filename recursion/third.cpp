// Problem:- Reverse an array using recursion.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverseArray(int nums[], int size)
{

    if (size <= 0)
        return;

    cout << nums[size - 1] << endl;
    reverseArray(nums, size - 1);
}

void reverseInPlaceArray(int nums[], int start, int end)
{

    if (start >= end)
        return;

    swap(nums[start], nums[end]);
    reverseInPlaceArray(nums, start + 1, end - 1);
}

void printArray(int nums[], int size)
{
    if (size <= 0)
        return;

    printArray(nums, size - 1);
    cout << nums[size] << endl;
}

int main()
{

    int size;
    cout << "Enter the size of array :- ";
    cin >> size;

    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value " << i << ":-";
        cin >> nums[i];
    }

    // reverseArray(nums, size);
    reverseInPlaceArray(nums, 0, size);
    printArray(nums, size);

    return 0;
}