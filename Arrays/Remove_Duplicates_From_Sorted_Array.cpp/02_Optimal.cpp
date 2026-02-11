/*
Optimal Aaproach
2 Pointers
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5};
    int n = arr.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}