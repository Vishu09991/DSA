#include<iostream>
#include<math.h>
using namespace std;
int printDigits(int num){
    int cnt = (int)log10(num) + 1;
    return cnt;
}
int main(){
    int num = 48;
    cout<<printDigits(num);
    return 0;
}