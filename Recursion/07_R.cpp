/*
BackTrack: Backtracking is an algorithmic technique used to solve problems by trying all possible choices step-by-step and undoing (backtracking) a choice as soon as it leads to an invalid or non-optimal solution.

Print 1to N using backtrack
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
    printfnc(i - 1, n);
    cout << i << " ";
}
int main()
{
    int n;
    cin >> n;
    printfnc(n, n);
    return 0;
}