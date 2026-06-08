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

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
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
    Node* prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 67, 36};
    Node *head = convert_arr_to_DLL(arr);
    cout << "Before Deleting Tail : \n";
    traverse(head);
    cout << "\n";
    cout << "After Deleting Tail : \n";
    head = delete_tail(head);
    traverse(head);
    return 0;
}