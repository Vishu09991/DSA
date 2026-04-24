#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 4, 2, 3};
    int n = arr.size();
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == 10){
                max_len = max(max_len, j - i + 1);
            }
        }
    }
    cout << max_len;
    return 0;
}