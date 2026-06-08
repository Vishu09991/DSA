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
        next = NULL;
    }
};
Node *convert_to_arr(vector<int> &arr)
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
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *delete_k(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->data == k)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (k == temp->data)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 4, 666, 78, 20, 6};
    Node *head = convert_to_arr(arr);
    cout << "Before Removing Value : ";
    traverse(head);
    head = delete_k(head, 666);
    cout << "\nAfter Removing Value : ";
    traverse(head);
    return 0;
}