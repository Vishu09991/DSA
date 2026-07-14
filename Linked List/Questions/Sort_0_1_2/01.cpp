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
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    while (temp != nullptr)
    {
        if (temp->data == 0)
            cnt0++;
        if (temp->data == 1)
            cnt1++;
        if (temp->data == 2)
            cnt2++;
        temp = temp->next;
    }
    temp = head;
    while (temp != nullptr)
    {
        if (cnt0 > 0)
        {
            temp->data = 0;
            cnt0--;
        }
        else if (cnt1 > 0)
        {
            temp->data = 1;
            cnt1--;
        }
        else
        {
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr1 = {0, 1, 1, 2, 0, 2, 1, 0, 2, 0};

    Node *head = arr_2_ll(arr1);
    head = sort_0_1_2(head);
    traverse(head);

    return 0;
}