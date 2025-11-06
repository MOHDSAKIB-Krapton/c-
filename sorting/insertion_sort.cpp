#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        };
    }
}

int main()
{

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}