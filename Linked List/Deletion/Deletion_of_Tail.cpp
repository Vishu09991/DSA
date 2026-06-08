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
Node *delete_tail(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = to_convert_arr_to_LL(arr);
    cout << "Before Removing Tail : ";
    traverse(head);
    head = delete_tail(head);
    cout << "\nAfter Removing Tail : ";
    traverse(head);
    return 0;
}