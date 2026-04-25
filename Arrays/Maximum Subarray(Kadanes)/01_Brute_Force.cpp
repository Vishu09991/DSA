#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_subarray_sum(vector<int> &arr)
{
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << max_subarray_sum(arr);
    return 0;
}