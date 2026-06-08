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
Node *to_convert_arr_to_LL(vector<int> &arr)
{
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
Node *delete_head(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = to_convert_arr_to_LL(arr);
    cout << "Before Removing head : ";
    traverse(head);
    head = delete_head(head);
    cout << "\nAfter Removing head : ";
    traverse(head);
    return 0;
}