#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};
int main(){
    Node *node2 = new Node(10, nullptr);
    cout << node2->next;
    return 0;
}