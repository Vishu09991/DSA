/*
vector<int> v(5,100)
This creates a vector of size 5, where each element is 100.
{100, 100, 100, 100, 100}

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5, 100);
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}