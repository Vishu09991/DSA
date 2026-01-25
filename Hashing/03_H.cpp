/*
Array size can be maximum of 10pow(6) inside main
and 10pow(7) outside main
Character size can be maximum of 10pow(7) inside main
and 10pow(8) outside main



*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello";
    char target = 'l';
    int cnt = 0;
    for(char c : s){
        cnt += (c == target);
    }
    cout << cnt;
    return 0;
}