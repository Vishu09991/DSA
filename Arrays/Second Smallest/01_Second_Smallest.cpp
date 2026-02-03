/*
Optimal Aarpoach
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {145, 45, 25, 37, 785, 60};
    int n = arr.size();
    int smallest = arr[0];
    int secondsmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest && arr[i] != smallest)
        {
            secondsmallest = arr[i];
        }
    }
    if (secondsmallest == INT_MAX)
    {
        cout << "No 2 Samllest";
    }
    else
    {
        cout << secondsmallest;
    }
    return 0;
}