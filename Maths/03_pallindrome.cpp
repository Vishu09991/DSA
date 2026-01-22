#include<iostream>
using namespace std;
int checkPalindrome(int n){
    int revNum = 0;
    int ld;
    
    while(n>0){
        ld = n % 10;
        n /= 10;
        revNum = revNum * 10 + ld;
    }
    return revNum;
}
int main(){
    int num = 7;
    if(checkPalindrome(num) == num){
        cout << "Pallindorme";
    }else{
        cout << "no";
    }
    return 0;
}