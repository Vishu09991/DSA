#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}