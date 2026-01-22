/*
Functional recursion is a type of recursion where the function returns a value, and the final result is built while returning back up the recursive call stack.

👉 Unlike parameterised recursion, the result is NOT passed as a parameter — it is returned

🧠 Key Idea

Function has a return type

Recursive call returns a value

Current call uses that returned value to compute its own result

🔍 General Structure
return_type func(parameters) {
    if (base_condition) {
        return base_value;
    }
    return expression_using(func(modified_parameters));
}   
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int add(int i){ //-->>Type int adn returns an integer rather than printing in function itself.
    if(i==0)
        return 0;
    return i+add(i-1);
}
int main(){
    cout << add(10);
    return 0;
}