/*
Brute Force
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 3, 4};
    int n = arr.size();

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for (auto it : st)
    {
        arr[index] = it;
        index++;
    }
    for (int i = 0; i < index; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}