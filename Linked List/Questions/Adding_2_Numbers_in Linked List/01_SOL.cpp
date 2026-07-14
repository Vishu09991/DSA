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
Node *add_2_numbers(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *dummy_node = new Node(-1);
    Node *curr = dummy_node;
    int carry = 0;
    while (temp1 != nullptr || temp2 != nullptr)
    {
        int sum = carry;
        if (temp1)
        {
            sum = sum + temp1->data;
        }
        if (temp2)
        {
            sum = sum + temp2->data;
        }
        carry = sum / 10;
        Node *new_Node = new Node(sum % 10);
        curr->next = new_Node;
        curr = curr->next;
        if (temp1)
        {
            temp1 = temp1->next;
        }
        if (temp2)
        {
            temp2 = temp2->next;
        }
    }
    if (carry)
    {
        Node *endNode = new Node(1);
        curr->next = endNode;
    }
    return dummy_node->next;
}

int main()
{
    vector<int> arr1 = {2, 0, 2};
    vector<int> arr2 = {3, 1, 8};

    Node *head1 = arr_2_ll(arr1);
    Node *head2 = arr_2_ll(arr2);

    Node *result = add_2_numbers(head1, head2);

    traverse(result);

    return 0;
}