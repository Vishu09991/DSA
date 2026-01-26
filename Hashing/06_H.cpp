/*
Mapping
Map in C++
Output comes in ordered Way
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter Number of elements in an Array : ";
    cin >> n;
    int arr[n];
    cout<<"Enter elements in Array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    // it.first --> key
    // it.second -->value
    for(auto it : mpp){
        cout << it.first << "-->" << it.second<<endl;
    }

    int q;
    cout << "Enter how many Numbers for which you have to check : ";
    cin >> q;
    while(q--){
        int num;
        cout << "Number : ";
        cin >> num;

        cout << "Occurence "<<mpp[num]<<endl;
    }
    return 0;
}