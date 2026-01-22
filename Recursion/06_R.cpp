/*
Print from N to 1
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fnc(int i,int n){
    if(i>n){
        return;
    }
    cout << n << " ";
    fnc(i, n-1);
}
int main(){
    int n;
    cin >> n;
    fnc(1,n);
    return 0;
}