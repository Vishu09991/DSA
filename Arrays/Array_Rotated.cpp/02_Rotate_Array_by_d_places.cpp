/*
Brute Force Method for Rotating Array by D places
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate_D(vector<int> &arr, int n, int d)
{
    d = d % n;
    vector<int> temp_arr(d);

    for (int i = 0; i < d; i++)
    {
        temp_arr[i] = arr[i];
    }
    

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    int j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp_arr[j++];
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();

    rotate_D(arr, n, 3);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}