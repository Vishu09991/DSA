/*

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void two_sum(vector<int> &arr,int target){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            if(i == j)
                continue;
            if(arr[i]+arr[j] == target){
                cout << "True";
                return;
            }
        }
    }
    cout << "False";
}
int main(){
    vector<int> arr = {1, 2, 6, 4, 8, 15};
    int target = 14;
    two_sum(arr, target);
    return 0;
}