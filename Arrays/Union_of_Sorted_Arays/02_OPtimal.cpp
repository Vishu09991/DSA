#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> sorted_array(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> unionArr;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0  || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0  || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
        while(i < n1)
        {
            if (unionArr.size() == 0  || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        while(j < n2)
        {
            if (unionArr.size() == 0  || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
        
    
    return unionArr;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 6};
    vector<int> arr2 = {1, 2, 3, 4, 5, 8, 9, 10, 11};
    vector<int> ans = sorted_array(arr1, arr2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}