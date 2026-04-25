#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sorting(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    for (int i = 0; i < n; i++)
    {
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
        }
        if(arr[mid] == 1){
            mid++;
        }
        if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 0, 0, 1, 1, 2, 1, 1, 2, 0, 0};
    sorting(arr);
    return 0;
}