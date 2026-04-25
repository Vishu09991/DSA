#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_subarray_sum(vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(sum, maxi);
        if (sum < 0){
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    vector<int> arr2 = {-2, -3, -4, -1, -2, -1, -5, -3};
    cout << max_subarray_sum(arr2);
    return 0;
}