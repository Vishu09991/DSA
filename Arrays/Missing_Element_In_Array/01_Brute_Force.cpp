#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missing_element(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i <= n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
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