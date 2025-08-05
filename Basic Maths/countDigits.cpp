// Problem Statement: Given an integer N, return the number of digits in N

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter a number";
    cin >> n;

    // if n is negative
    if (n < 0)
    {
        n = -n;
    }

    if (n == 0)
    {
        cout << "number of digits are : 1 \n";
        return 0;
    }

    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    cout << "number of digits are : " << count;
    return 0;
}