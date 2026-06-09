#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *back;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};
Node *arr_2_dll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *insert_before_tail(Node *head, int value)
{
    if(head->next == nullptr){
        Node *newHNode = new Node(value, head, nullptr);
        head->back = newHNode;
        return newHNode;
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *new_Node = new Node(value, tail, prev);
    prev->next = new_Node;
    tail->back = new_Node;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 8};
    Node *head = arr_2_dll(arr);
    cout << "Before Adding : ";
    traverse(head);
    head = insert_before_tail(head, 7);
    cout << "\nAfter Adding : ";
    traverse(head);
    return 0;
}