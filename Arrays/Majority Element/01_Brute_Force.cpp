#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int major_element(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 2, 1, 3, 3, 2, 2};
    cout << major_element(arr);
    return 0;
}