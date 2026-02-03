/*
Second Largest Element in Array
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,84, 84, 84, 84};
    int n = arr.size();

    sort(arr.begin(), arr.end());
    int max = arr[n - 1];
    int secondLargest = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != max)
        {
            secondLargest = arr[i];
            break;
        }
    }
    if (secondLargest == -1)
    {
        cout << "No second Largest ";
    }
    else
    {
        cout << secondLargest;
    }
    return 0;
}