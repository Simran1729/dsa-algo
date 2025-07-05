#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    // outer loop to iterate over the arr
    for (int i = 0; i < arr.size(); i++)
    {
        // inner loop to get the smallest element
        int smallest = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[smallest])
            {
                // if any smaller element is found, assign to smallest
                smallest = j;
            }
        }
        cout << "smallest is : " << arr[smallest];
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
        }
    }
}

int main()
{
    vector<int> arr = {7, 3, 5, 2, 6, 0, -2, -10};
    insertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
}