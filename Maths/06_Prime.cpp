#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    bool isPrime = true;
    if(num <=1){
        isPrime = false;
    }else{
        for (int i = 2; i*i <= num; i++)
        {
            if(num%i ==0){
                isPrime = false;
                break;
            }
        }
        
    }
    if (isPrime == true){
        cout << "Prime";
    }else{
        cout << "Not Prime";
    }
        return 0;
}