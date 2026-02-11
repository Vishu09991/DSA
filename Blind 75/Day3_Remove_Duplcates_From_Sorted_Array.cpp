/*
Brute Force
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void remove_duplicates(vector<int> &arr, int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it : st){
        arr[index++] = it;
    }
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 4, 4, 5, 5, 5};
    int n = arr.size();

    remove_duplicates(arr, n);
    return 0;
}