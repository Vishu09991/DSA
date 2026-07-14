/*
Tortoise and Hare Problem
*/
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
Node *delete_middle_ll(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *slow = head;
    Node *fast = head;
    Node *prev = nullptr;
    while (fast != nullptr && fast->next != nullptr)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = prev->next->next;
    delete slow;
    return head;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6,7};

    Node *head = arr_2_ll(arr1);
    head = delete_middle_ll(head);
    traverse(head);

    return 0;
}