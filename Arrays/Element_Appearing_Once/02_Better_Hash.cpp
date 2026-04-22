#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int element_appear_once(vector<int> &arr)
{
    int n = arr.size();
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int hash[maxi + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < maxi + 1; i++)
    {
        if(hash[i] == 1)
            return arr[i];
    }
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    cout << element_appear_once(arr);
    return 0;
}