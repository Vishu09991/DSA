/*
Print Name n times using recursion
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void f(int n){
    if(cnt<n){
        cout << "Vishnu ";
        cnt++;
        f(n);
    }
    else{
        return;
    }
}
int main(){
    int n;
    cin >> n;
    f(n);
    return 0;
}