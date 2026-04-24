/*
Moore Voting ALgorithm
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int majority(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    int el = 0;
    for (int i = 0; i < n; i++)
    {
        if(cnt == 0){
            el = arr[i];
            cnt = 1;
        }
        else if(el == arr[i]){
            cnt++;
        }else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == el)
            cnt1++;
    }
    if(cnt1>n/2){
        return el;
    }
    return -1;
}
int main()
{
    vector<int> arr = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 5, 5, 5, 5, 5};
    cout << majority(arr);
    return 0;
}