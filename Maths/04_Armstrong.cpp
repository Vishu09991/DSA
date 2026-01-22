#include<bits/stdc++.h>
using namespace std;
int checkArmstrong(int num){
    int n = num;
    int digits =0;
    while(n>0){
        digits++;
        n /= 10;
    }
    int ld;
    n = num;
    int sum = 0;
    while(n>0){
        ld = n % 10;
        sum += pow(ld, digits);
        n /= 10;
    }
    return sum;
}
int main(){
    int num;
    cin >> num;
    if(checkArmstrong(num) == num){
        cout << "Armstrong";
    }else{
        cout << "Not a armstrong";
    }
    return 0;
}