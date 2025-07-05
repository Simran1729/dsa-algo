#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++) // starting from i = 1, assuming arr before that "sorted"
    {
        int pivot = arr[i]; // store its value so that we can insert it when we get its actual place
        int j = i - 1;
        while (j >= 0 && arr[j] > pivot)
        {
            // shift elements to right
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = pivot;
    }
}

int main()
{
    vector<int> arr = {7, 3, 5, 2, 6, 0, -2, -10};
    insertionSort(arr);
    cout << "\nSorted array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
}