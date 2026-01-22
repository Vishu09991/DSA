/*
What is std::stack?

stack is a LIFO data structure
👉 Last In, First Out
*/
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);//-->{30,20,10}

    cout<<st.size() <<endl;
    
    st.pop();
    cout<<st.size();
    return 0;
}