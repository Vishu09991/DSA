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
Node *insert_bef_head(Node *head, int value)
{
    if(head == nullptr){
        return new Node(value);
    }
    Node *newHead = new Node(value, head, nullptr);
    head->back = newHead;
    return newHead;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = arr_2_dll(arr);
    cout << "Before Adding : ";
    traverse(head);
    head = insert_bef_head(head, 0);
    cout << "\nAfter Adding : ";
    traverse(head);
    return 0;
}