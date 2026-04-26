#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_profit(vector<int> &arr)
{
    int n = arr.size();
    int best_buying_price = arr[0];
    int profit = 0;

    for (int i = 0; i < n; i++)
    {
        int profit_on_sell_that_day = arr[i] - best_buying_price;
        profit = max(profit, profit_on_sell_that_day);
        best_buying_price = min(best_buying_price, arr[i]);
    }
    return profit;
}
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << max_profit(arr);
    return 0;
}