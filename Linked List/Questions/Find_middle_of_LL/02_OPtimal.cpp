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
Node *find_middle_ll(Node *head)
{
    Node *temp = head;
    Node *fast = head;
    Node *slow = head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 2, 100, 1, 1, 1, 2};

    Node *head = arr_2_ll(arr1);
    head = find_middle_ll(head);
    // traverse(head);
    cout << head->data;

    return 0;
}