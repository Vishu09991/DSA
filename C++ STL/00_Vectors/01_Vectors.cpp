/*
A vector is a dynamic array provided by the C++ Standard Template Library (STL).
Unlike arrays, vectors can grow or shrink in size automatically.
*/
#include<iostream>
#include<bits/stdc++.h>
// #include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(3);
    v.emplace_back(6);
    cout << v[0];
    return 0;
}