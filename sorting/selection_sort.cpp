#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i <= size - 2; i++)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{

    // Size of array
    int size;
    cin >> size;

    // Taking array in input.
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    selection_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}