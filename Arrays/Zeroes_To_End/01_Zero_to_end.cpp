#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void move_zeroes_to_end(vector<int> &arr)
{
    vector<int> temp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }
    int nonZero = temp.size();
    for (int i = nonZero; i < n; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 3, 0, 5, 0, 8, 6};
    int n = arr.size();
    cout << "Before Moving Zeroes to End \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nAfter Moving Zeroes to End \n";
    move_zeroes_to_end(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}