#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missing_element(vector<int> &arr)
{
    int n = arr.size();
    vector<int> hash(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
}
int main()
{
    vector<int> arr = {3, 1, 0, 4, 5, 6};
    cout << missing_element(arr);
    return 0;
}