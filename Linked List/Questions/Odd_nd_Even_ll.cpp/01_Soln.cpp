#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *arr_2_ll(vector<int> &arr)
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
Node *odd_even_sep(Node *head)
{
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    Node *temp = head;
    vector<int> arr = {};
    while (temp->next != nullptr && temp->next->next != nullptr)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp != nullptr)
    {
        arr.push_back(temp->data);
    }
    temp = head->next;
    while (temp->next != nullptr && temp->next->next != nullptr)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp)
    {
        arr.push_back(temp->data);
    }
    Node *head1 = arr_2_ll(arr);
    return head1;
}

int main()
{
    vector<int> arr1 = {2, 0, 2, 5, 6, 1, 3};

    Node *head = arr_2_ll(arr1);
    head = odd_even_sep(head);
    traverse(head);

    return 0;
}