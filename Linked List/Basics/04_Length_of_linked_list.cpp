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
Node *convert_2_linked_list(vector<int> &arr)
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
int length(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convert_2_linked_list(arr);
    traverse(head);
    cout << "\nLength of Linked List "<<length(head);
    return 0;
}