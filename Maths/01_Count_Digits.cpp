#include<iostream>
using namespace std;
void printDigits(int num){
    int n = num;
    int cnt = 0;
    while(n!=0){
        n /= 10;
        cnt++;
    }
    cout << cnt;
}
int main(){
    int num = 2199;
    printDigits(num);
    return 0;
}