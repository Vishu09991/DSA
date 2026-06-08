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
Node *delete_k(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    Node *temp = head;
    Node *prev = nullptr;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
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
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = to_convert_arr_to_LL(arr);
    cout << "Before Removing Tail : ";
    traverse(head);
    head = delete_k(head, 2);
    cout << "\nAfter Removing Tail : ";
    traverse(head);
    return 0;
}