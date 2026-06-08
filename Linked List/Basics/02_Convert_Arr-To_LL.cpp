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
};

Node *convert2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next; // or mover = temp;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 45, 5};
    Node *head = convert2LL(arr);
    cout << head->data;
    return 0;
}