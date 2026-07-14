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
Node *delete_n(Node *head, int n)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    int target = cnt - n+1;
    int j = 0;
    temp = head;
    Node *prev = nullptr;
    if(target == 1){
        Node *newHead = head->next;
        delete head;
        return newHead;
    }
    while (temp != nullptr)
    {
        j++;
        if(j == target){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        }
    return head;
}
int main()
{
    vector<int> arr1 = {0, 1, 1, 2, 0, 2, 1, 0, 2, 0};

    Node *head = arr_2_ll(arr1);
    head = delete_n(head, 3);
    traverse(head);

    return 0;
}