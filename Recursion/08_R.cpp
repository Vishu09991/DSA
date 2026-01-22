/*
Print N to 1 using backtrack
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printfnc(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    printfnc(i - 1, n);
}
int main()
{
    int n;
    cin >> n;
    printfnc(n, n);
    return 0;
}