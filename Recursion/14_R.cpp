/*
Reverse an array using recursion
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int i = 0){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverse(arr, n, i + 1);
}
int main()
{
    cout << "Enter Number of elements in array: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Arr["<<i<<"]"<<": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Arr["<<i<<"]"<<": "<<arr[i]<<" ";
    }
    cout << "\nAfter Reversing Array" << endl;
    reverse(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Arr["<<i<<"]"<<": "<<arr[i]<<" ";
    }
    return 0;
}