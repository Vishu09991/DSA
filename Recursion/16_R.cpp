/*
Fibonacci Sequence using multiple recursion calls
0 1 1 2 3 5 8 13...
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if (n <=1)
    {
        return n;
    }
    else
    {
        return func(n - 1) + func(n - 2);
    }
}
int main()
{
    cout << func(1);
    return 0;
}