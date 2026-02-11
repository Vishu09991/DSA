#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> two_sum(vector<int> &arr,int target){
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int more_needed = target - num;
        if(mpp.find(more_needed)!= mpp.end()){
            return {mpp[more_needed], i};
        }
        mpp[num] = i;
    }
    return {-1,-1};
}
int main(){
    vector<int> arr = {1, 2, 6, 4, 8, 15};
    int target = 14;
    vector<int> result = two_sum(arr, target);
    cout << result[0] << " " << result[1];

    return 0;
}