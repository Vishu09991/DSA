#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *back;

    Node(int value, Node *next1, Node *back1)
    {
        data = value;
        next = next1;
        back = back1;
    }
    Node(int value)
    {
        data = value;
        next = nullptr;
        back = nullptr;
    }
};
Node *convert_arr_to_DLL(vector<int> &arr)
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
Node *delete_head(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    temp->next = nullptr;
    head->back = nullptr;
    delete temp;
    return head;
}
Node *delete_tail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
Node *delete_k(Node *head, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        return head;
    }
    Node *front = temp->next;
    Node *prev = temp->back;
    if (front == nullptr && prev == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return (delete_head(head));
    }
    else if (front == nullptr)
    {
        return (delete_tail(head));
    }
    else
    {
        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        delete temp;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 67, 36};
    Node *head = convert_arr_to_DLL(arr);
    cout << "Before Deleting Kth Node : \n";
    traverse(head);
    cout << "\n";
    head = delete_k(head, 44);
    cout << "After Deleting Kth node : \n";
    traverse(head);
    return 0;
}