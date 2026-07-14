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
Node *sort_0_1_2(Node *head)
{
    Node *temp = head;
    Node *dummyzero = new Node(-1);
    Node *dummyone = new Node(-1);
    Node *dummytwo = new Node(-1);

    Node *zero = dummyzero;
    Node *one = dummyone;
    Node *two = dummytwo;

    while (temp != nullptr)
    {
        if (temp->data == 0)
        {
            zero->next = temp;
            zero = temp;
        }
        else if (temp->data == 1)
        {
            one->next = temp;
            one = temp;
        }
        else
        {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    zero->next = (dummyone->next) ? dummyone->next : dummytwo->next;
    one->next = (dummytwo->next) ? dummytwo->next : nullptr;
    two->next = nullptr;
    return (dummyzero->next) ? dummyzero->next : (dummyone->next) ? dummyone->next : dummytwo->next;
}

int main()
{
    vector<int> arr1 = {0, 1, 1, 2, 0, 2, 1, 0, 2, 0};

    Node *head = arr_2_ll(arr1);
    head = sort_0_1_2(head);
    traverse(head);

    return 0;
}