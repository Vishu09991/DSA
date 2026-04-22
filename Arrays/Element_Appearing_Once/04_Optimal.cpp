#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int element_appear_once(vector<int> &arr)
{
    int n = arr.size();
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 ^= arr[i];
    }
    return xor1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    cout << element_appear_once(arr);
    return 0;
}