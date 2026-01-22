/*
Print Name n times using recursion
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printName(int i, int n){
    if(i>n){
        return;
    }
    cout << "Vishnu ";
    printName(i + 1, n);
}
int main(){
    int n;
    cin >> n;
    printName(1,n);
    return 0;
}