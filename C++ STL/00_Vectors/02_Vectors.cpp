#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    v.push_back({1, 2});
    v.emplace_back(4,8);
    cout << v[1].first;
    return 0;
}