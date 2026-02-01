/*
Merge Sort
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
        temp.push_back(arr[left++]);

    while (right <= high)
        temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}
void Merge_Sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    Merge_Sort(arr, low, mid);
    Merge_Sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    vector<int> arr = {10, 6, 54, 45, 20};
    int n = arr.size();
    Merge_Sort(arr, 0, n - 1);
    for (int x : arr)
    {
        cout << x << " ";
    }
    
    return 0;
}