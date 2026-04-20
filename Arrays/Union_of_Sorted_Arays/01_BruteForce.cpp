/*
💡 Key Concept
vector<int> v(n) → creates size n
push_back() → adds extra elements at end

Using both together usually causes mistakes.

So basically if we are doing vector<int> v(5) then we are declaring vector of space 5 with all zeroes and when we are doing pushback we are adding the other elements next to 0s SO it will be [0,0,0,0,0,1,2,3,4,5,....]

cout << union_sorted_arrays(arr1, arr2);

The problem is not returning the vector.
The problem is printing the vector with cout.

cout knows how to print:

int
char
string
double

But it does not know how to print a whole vector<int> automatically.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> union_sorted_arrays(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }
    vector<int> union_1;
    for (auto it : st)
    {
        union_1.push_back(it);
    }
    return union_1;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 3, 4, 4, 5, 8};
    vector<int> arr2 = {1, 2, 3, 3, 3, 4, 4, 5, 6, 7};
    vector<int> ans = union_sorted_arrays(arr1, arr2);
    for(auto it : ans){
        cout << it << " ";
    }
    return 0;
}