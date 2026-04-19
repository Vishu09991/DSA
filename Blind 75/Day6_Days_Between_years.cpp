/*
2 0 0 5 - 1 1 - 2 3
0 1 2 3 4 5 6 7 8 9
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int total_days_from_1971(string date)
{
    vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y = stoi(date.substr(0, 4));
    int m = stoi(date.substr(5, 2));
    int d = stoi(date.substr(8, 2));

    int days = 0;

    for (int year = 1971; year < y; year++)
    {
        days += isLeap(year) ? 366 : 365;
    }
    for (int month = 1; month < m; month++)
    {
        if (month == 2)
        {
            days += 29;
        }
        else
        {
            days += days_in_month[month - 1];
        }
    }
    days += d;
}
bool isLeap(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int calc_days_inbetween(string date1, string date2)
{
    return abs(total_days_from_1971(date1) - total_days_from_1971(date2));
}
int main()
{
    string date1 = "2025-11-24";
    string date2 = "2025-12-24";
    calc_days_inbetween(date1, date2);
    return 0;
}