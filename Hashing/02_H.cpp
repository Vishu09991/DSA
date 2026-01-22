#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of Elements in Array ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index [" << i << "]";
        cin >> arr[i];
    }
    //Precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //Fetch
        cout << hash[number] << endl;
    }

    return 0;
}