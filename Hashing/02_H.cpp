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
        cout << "Array Index " << i << ": ";
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    cout << "Enter how many Numbers for which you have to check : ";
    int q;
    cin >> q;
    while(q--){
        int num;
        cout << "Number " << q <<" : ";
        cin >> num;

        cout << hash[num]<<endl;
    }

    return 0;
}