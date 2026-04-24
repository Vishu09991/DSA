#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sorting(vector<int> &arr) 
{
    int n = arr.size();
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        if (arr[i] == 1)
            cnt1++;
        if (arr[i] == 2)
            cnt2++;
    }
    for (int i = 0; i < cnt0; i++)
        cout << "0" << " ";
        for (int i = 0; i < cnt1; i++)
        cout << "1" << " ";
        for (int i = 0; i < cnt2; i++)
        cout << "2" << " ";
}
int main()
{
    vector<int> arr = {1, 2, 0, 0, 1, 1, 2, 1, 1, 2, 0, 0};
    sorting(arr);
    return 0;
}