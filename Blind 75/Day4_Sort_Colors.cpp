/*
Brute
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort_Colors(vector<int> &arr){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0)
            cnt0++;
        if(arr[i]==1)
            cnt1++;
        if(arr[i]==2)
            cnt2++;
    }
        for (int i = 0; i < cnt0; i++)
        {
            cout << "0" << " ";
        }
        for (int i = 0; i < cnt1; i++)
        {
            cout << "1" << " ";
        }
        for (int i = 0; i < cnt2; i++)
        {
            cout << "2" << " ";
        }
    
}
int main(){
    vector<int> arr = {0, 1, 2, 0, 0, 0, 1, 2, 1, 2};
    sort_Colors(arr);
    return 0;
}