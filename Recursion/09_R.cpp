/*
Print sum of first N numbers 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sum(int n){
    if(n<1){
        return;
    }
    int a = n;
    a += n;
    sum(n - 1);
}
int main(){
    
    return 0;
}