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
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    temp = head;
    int mid = cnt / 2 + 1;
    while (temp != nullptr)
    {
        mid--;
        if(mid == 0){
            break;
        }
        temp = temp->next;
    }
    return temp;

    // if (cnt % 2 == 0)
    // {
    //     for (int i = 0; i < cnt / 2; i++)
    //     {
    //         temp = temp->next;
    //     }
    //     return temp;
    // }
    // else
    // {
    //     for (int i = 0; i < cnt / 2; i++)
    //     {
    //         temp = temp->next;
    //     }
    //     Node *mid = temp;
    //     return mid;
    // }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 2, 10, 1, 1, 1, 2};

    Node *head = arr_2_ll(arr1);
    head = find_middle_ll(head);
    // traverse(head);
    cout << head->data;

    return 0;
}