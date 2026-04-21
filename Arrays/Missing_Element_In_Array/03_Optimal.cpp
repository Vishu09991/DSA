#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missing_element(vector<int> &arr)
{
    int n = arr.size();
    int total_sum = (n * (n + 1)) / 2;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
    }
    return total_sum - curr_sum;
}
int main()
{
    vector<int> arr = {3, 1, 2, 0, 4, 6};
    cout << missing_element(arr);
    return 0;
}