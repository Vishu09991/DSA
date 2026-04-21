#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missing_element(vector<int> &arr)
{
    int n = arr.size();
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ (i+1);
        xor2 = xor2 ^ arr[i];
    }
    return xor1 ^ xor2;
}
int main()
{
    vector<int> arr = {3, 1, 2, 0, 4, 6};
    cout << missing_element(arr);
    return 0;
}