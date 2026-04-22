#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int element_appear_once(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<long long, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {5, 5, 6, 6, 8, 3, 3};
    cout << element_appear_once(arr);

    return 0;
}