#include<iostream>
using namespace std;
void reverseDigit(int num){
    int lastDigit;
    while (num>0)
    {
        lastDigit = num % 10;
        num /= 10;
        cout << lastDigit;
    }}

int main(){
    int num = 1230;
    reverseDigit(num);
    return 0;
}