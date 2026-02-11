/*
Optimal used 2 pointers
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void remove_duplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 6};
    int n = arr.size();

    remove_duplicates(arr, n);
    return 0;
}