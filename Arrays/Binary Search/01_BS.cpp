#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int find_index(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 0, 3, 0, 5, 0, 8, 6};
    cout<<find_index(arr, 5);

    return 0;
}