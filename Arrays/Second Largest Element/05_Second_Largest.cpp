/*
Optimal Aaproach
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 84, 84, 84};
    int n = arr.size();

    int largest = arr[0];
    int slargest = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }
    if (slargest == INT_MIN)
    {
        cout << "NO second largest";
    }
    else
    {
        cout << slargest;
    }
    return 0;
}