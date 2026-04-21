#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> intersection_array(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j]){
                st.insert(arr1[i]);
            }
        }
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 6};
    vector<int> arr2 = {2, 3, 4, 5, 8, 9, 10, 11};
    vector<int> ans = intersection_array(arr1, arr2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}