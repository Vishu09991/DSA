/*
Print factorial of n numbers
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fnc(int i,int result){
    if(i==0){
        cout << result;
        return;
    }
    fnc(i - 1, i * result);
}
int main(){
    int n;
    cin >> n;
    fnc(n, 1);
    return 0;
}
