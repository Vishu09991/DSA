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
    Node *head = new Node(arr[0], nullptr, nullptr);
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
int main()
{
    vector<int> arr = {1, 2, 3, 4, 67, 36};
    Node *head = convert_arr_to_DLL(arr);
    traverse(head);
    return 0;
}