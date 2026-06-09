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
Node *reverse_dll(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    Node *current = head;
    Node *last = nullptr;
    while (current != nullptr)
    {
        last = current->back;
        current->back = current->next;
        current->next = last;
        current = current->back;
    }
    return last->back;
}
int main()
{
    vector<int> arr = {148, 2, 483, 484, 5, 486};
    Node *head = arr_2_dll(arr);
    cout << "Before Reversing : \n";
    traverse(head);
    cout << "\nAfter Reversing : \n";
    head = reverse_dll(head);
    traverse(head);
    return 0;
}