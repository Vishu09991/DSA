/*
📌 What is Parameterised Recursion?

Parameterised recursion is a type of recursion where all required information is passed through function parameters, and the result is usually printed or updated during the recursive calls, instead of being returned.
👉 The function often has void return type.

🔍 General Structure:

void func(int param1, int param2) {
    if (base_condition) {
        // use parameters
        return;
    }
    func(modified_param1, modified_param2);
}

Basically in parameterised recursion we pass the final answere that is needed as arguements

🧠 Why It’s Important (DSA + Interviews)

Helps understand tail recursion

Used in backtracking

Makes recursion more efficient (less return work)

Easier to convert to iteration
Print sum of 1 n numbers
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void add(int i,int sum){
    if(i<1){
        cout << sum;
        return;
    }
    add(i - 1, sum + i);
}
int main(){
    int n;
    cin >> n;
    add(n, 0);
    return 0;
}