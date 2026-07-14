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
    if(head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    int n = 0;
    while (temp != nullptr)
    {
        n++;
        temp = temp->next;
    }
    int bef_mid = n / 2;
    temp = head;
    while (temp != nullptr)
    {
        bef_mid--;
        if(bef_mid == 0){
            break;
        }
        temp = temp->next;
    }
    Node *mid_node = temp->next;
    temp->next = temp->next->next;
    delete mid_node;
    return head;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 2, 1, 1, 1, 2};

    Node *head = arr_2_ll(arr1);
    head = delete_middle_ll(head);
    traverse(head);
    

    return 0;
}