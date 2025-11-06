#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (!didSwap)
            break;
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

    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}