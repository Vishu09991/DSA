#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> intersection_array(vector<int> &num1, vector<int> &num2)
{
    unordered_set<int> st(num1.begin(), num1.end());
    unordered_set<int> result;

    for (auto it : num2)
    {
        if(st.count(it)){
            result.insert(it);
        }
    }
    return vector <int>(result.begin(), result.end());
}
int main()
{
    vector<int> num1 = {1, 4, 7, 9, 10};
    vector<int> num2 = {1, 3, 4, 10, 11};
    vector<int> ans = intersection_array(num1, num2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}