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
Node *delete_head(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
    }
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 67, 36};
    Node *head = convert_arr_to_DLL(arr);
    cout << "Before Deleting Head : \n";
    traverse(head);
    cout << "\n";
    cout << "After Deleting Head : \n";
    head = delete_head(head);
    traverse(head);
    return 0;
}