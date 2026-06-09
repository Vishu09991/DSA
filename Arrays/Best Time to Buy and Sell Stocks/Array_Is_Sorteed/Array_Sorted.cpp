#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2,5, 3, 4, 4,5};
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i <=n-2; i++)
    {
        if(arr[i]>arr[i+1]){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << "Sorted";
    }else{
        cout << "Not Sorted";
    }
    return 0;
}