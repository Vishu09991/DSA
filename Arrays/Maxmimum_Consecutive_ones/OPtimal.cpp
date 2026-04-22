#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maximum_occurence_of_one(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(cnt, maxi);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr = {1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    cout << maximum_occurence_of_one(arr);
    return 0;
}