#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate_array_right(vector<int> &arr, int d)
{
    int n = arr.size();
    n = n % d;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    rotate_array_right(arr, 2);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}