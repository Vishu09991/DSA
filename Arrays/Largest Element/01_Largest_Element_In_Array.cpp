/*
Brute Force
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {56, 45, 73, 520, 0};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    cout << "Largest Element : " << arr[n - 1];
    return 0;
}