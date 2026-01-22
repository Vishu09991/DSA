#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> v;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            v.push_back(i);
            if(i != num/i){
                v.push_back(num / i);
            }
        }
    }
    sort(v.begin(), v.end());
    vector<int>::iterator it = v.begin();
    for(auto  it : v){
        cout << it << " ";
    }
    return 0;
}