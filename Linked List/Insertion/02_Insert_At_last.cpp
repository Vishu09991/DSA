#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
Node *arr_2_ll(vector<int> &arr)
{
    if(arr.empty()){
        return nullptr;
    }
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
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
Node *insert_at_end(Node *head, int value)
{
    Node *temp = head;
    Node *node_at_end = new Node(value);
    if (head == nullptr)
    {
        return node_at_end;
    }
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = node_at_end;
    return head;
}
int main()
{
    vector<int> arr = {};
    Node *head = arr_2_ll(arr);
    traverse(head);
    head = insert_at_end(head, 60);
    traverse(head);
    return 0;
}