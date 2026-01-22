/*
For loop to count the number of elements in an array
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count(int num,int arr[],int n){
    int cnt = 0;
    for (int i = 0; i < n;i++){
        if (arr[i] == num){
            cnt++;
        }
    }
    cout << cnt;
}
int main(){
    int arr[] = {1, 2, 5, 1, 2, 4, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    count(1, arr, n);
    return 0;
}