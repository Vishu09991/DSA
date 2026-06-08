#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> &arr)
{
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.emplace_back(arr[i]);
        }
        else
        {
            pos.emplace_back(arr[i]);
        }
    }
    int p = 0;
    int q = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans.push_back(pos[p++]);
        }
        else
        {
            ans.push_back(neg[q++]);
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4 , 8};
    vector<int> ans1 = rearrange(arr);
    for (auto it : ans1)
    {
        cout << it << " ";
    }
    return 0;
}