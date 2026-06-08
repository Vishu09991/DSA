#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

Node *convert_2_linked_list(vector<int> &arr)
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

int presence_of_element(Node *head, int value)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convert_2_linked_list(arr);
    cout << presence_of_element(head, 21);
    return 0;
}