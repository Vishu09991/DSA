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

Node *convert_2_LL(vector<int> &arr)
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
Node *insert_at_begin(Node *head,int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convert_2_LL(arr);
    cout << "Before Adding : ";
    traverse(head);
    head = insert_at_begin(head, 0);
    cout << "\nAfter Adding : ";
    traverse(head);

    return 0;
}