#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int element_appear_once(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] == num){
                cnt++;
            }
        }
        if(cnt == 1){
            return num;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    cout << element_appear_once(arr);
    return 0;
}