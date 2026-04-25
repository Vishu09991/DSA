#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int longest_subarray(vector<int> &arr, int target)
{
    int max_len = 0;
    int n = arr.size();
    map<int, int> mpp;
    int prefSum = 0;
    for (int i = 0; i < n; i++)
    {
        prefSum += arr[i];
        if (prefSum == target)
        {
            max_len = max(max_len, i + 1);
        }
        int req_in_map = prefSum - target;
        if (mpp.find(req_in_map) != mpp.end())
        {
            max_len = max(max_len, i - mpp[req_in_map]);
        }
        if (mpp.find(prefSum) == mpp.end())
        {
            mpp[prefSum] = i;
        }
    }
    return max_len;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 0, 1, 4, 2, 3};
    cout << longest_subarray(arr, 6);

    return 0;
}