/*
Optimal Aaproach
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate_D(vector<int> &arr, int n, int d){
    d = d % n;
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin()+n);
    reverse(arr.begin(), arr.begin()+n);
}

    
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();

    rotate_D(arr, n, 9);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}