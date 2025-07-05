#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    // outer loop to iterate over the arr
    for (int i = 0; i < arr.size(); i++)
    {
        bool swapHappen = false;
        // compare adjacent elememts to swap
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapHappen = true;
            }
        }
        if (!swapHappen)
        {
            break;
            // no swap happened - means arary is sorted
        }

        // cout << " \n " << i << "th pass ";
        // for reference
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     cout << arr[i] << " ";
        // }
    }
}

int main()
{
    vector<int> arr = {7, 3, 5, 2, 6, 0, -2, -10};
    bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
}